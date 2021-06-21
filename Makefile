.PHONY: clean All

All:
	@echo "----------Building project:[ FavouriteNumber - Debug ]----------"
	@cd "FavouriteNumber" && "$(MAKE)" -f  "FavouriteNumber.mk"
clean:
	@echo "----------Cleaning project:[ FavouriteNumber - Debug ]----------"
	@cd "FavouriteNumber" && "$(MAKE)" -f  "FavouriteNumber.mk" clean
