.PHONY: clean All

All:
	@echo "----------Building project:[ FranksCarpetCleaningService - Debug ]----------"
	@cd "FranksCarpetCleaningService" && "$(MAKE)" -f  "FranksCarpetCleaningService.mk"
clean:
	@echo "----------Cleaning project:[ FranksCarpetCleaningService - Debug ]----------"
	@cd "FranksCarpetCleaningService" && "$(MAKE)" -f  "FranksCarpetCleaningService.mk" clean
