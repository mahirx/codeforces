		for (j = 0; j < n; j++)
		{
			if (a[j] == 1)
			{
				a[j]=2;
				for (int j1 = j+1; j1 < n; j1++)
				{
					if (a[j1] == 0)
					{
						a[j1]=2;
						for (int j2= j1+1; j2 < n; j2++)
						{
							if (a[j2] == 1)
							{
								a[j2]=2;
								
							}
						}
					
					}
				}
			}
		}
