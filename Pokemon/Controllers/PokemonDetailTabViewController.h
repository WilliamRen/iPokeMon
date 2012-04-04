//
//  PokemonDetailTabViewController.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/5/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import "CustomTabViewController.h"

@class Pokemon;

@interface PokemonDetailTabViewController : CustomTabViewController
{
  Pokemon * pokemonDataDict_;
}

@property (nonatomic, retain) Pokemon * pokemonDataDict;

- (id)initWithPokemonID:(NSInteger)pokemonID withTopbar:(BOOL)withTopbar;

@end
