import xlrd


loc = "/Users/shash/OneDrive/Desktop/pc shit/Sample_Names_and_IDs.xlsx"

wb= xlrd.open_workbook(loc)
sheet = wb.sheet_by_index(0)

x = sheet.cell_value(0,0)
print(x)
print("5")