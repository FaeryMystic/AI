#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc < 2) {
	        printf("Usage : InputFile \n");
	        return 1;
    }
    else {

    FILE *myFile;
    myFile = fopen( argv[1], "r");

    //read file into array
    int i,j;
    int row, column,total, tC;

	fscanf(myFile,"%d", &row);
	fscanf(myFile,"%d", &column);

	printf("No. Rows: %d\n\n", row);
	printf("No. Columns: %d\n\n", column);

	tC = column *2;

	total = column*2 * row;

	int numberArray[row][tC];

    for (i = 0; i < row; i++){
		for(j=0; j< tC; j++){
    	    fscanf(myFile, "%d", &numberArray[i][j]);
		}
    }

   for(j = 1; j <= tC; j++){
   	for (i = 0; i < row; i++){
 	   	 printf("%d ", numberArray[i][j]);
    }
    j++;
   	 printf("\n");
}
}

}
