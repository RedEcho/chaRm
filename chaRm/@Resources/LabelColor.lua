function Initialize()
	Measure = SKIN:GetMeasure(SELF:GetOption('Source', ''))
	Measure2 = SKIN:GetMeasure(SELF:GetOption('Source2', ''))
	LowValueColor = nil
	HighValueColor = nil
	Treshold = tonumber(SELF:GetOption('Treshold', '90')) / 100
	CustomMax = tonumber(SELF:GetOption('CustomMax', '0')) 
	print ('Choosing color for measure '..SELF:GetOption('Source', ''))
end

function Update()
	CurValue = Measure:GetValue()
	
	if CustomMax == 0 then
		MaxValue = Measure:GetMaxValue()
	else
		MaxValue = CustomMax
	end
	
	if Measure2 ~= nil then	
		CurValue2 = Measure2:GetValue()
		MaxValue2 = Measure2:GetMaxValue()
	end
	
	LowValueColor = SELF:GetOption('LowValueColor', '')
	HighValueColor = SELF:GetOption('HighValueColor', '')
	
	if Measure2 ~= nil then
		if CurValue >= (MaxValue * Treshold) or CurValue2 >= (MaxValue2 * Treshold) then
			return HighValueColor
		else
			return LowValueColor
		end	
	else
		if CurValue >= (MaxValue * Treshold) then
			return HighValueColor
		else
			return LowValueColor
		end
	end
end