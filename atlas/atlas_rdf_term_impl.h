/*
 *  atlas_rdf_term_impl.h
 *  atlas
 *
 *  Created by Tobias Kräntzer on 13.04.10.
 *  Copyright 2010 Fraunhofer Institut für Software- und Systemtechnik ISST.
 *
 *  This file is part of atlas.
 *	
 *  atlas is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *	
 *  atlas is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with atlas.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ATLAS_RDF_TERM_IMPL_H_
#define _ATLAS_RDF_TERM_IMPL_H_

#include <atlas/rdf/term.h>

#pragma mark -
#pragma mark Operation

/*! Compare the value of an IRI typed term and a given value.
 *
 *  This function returns 0 if the term and the value are not equal
 *  or the term is not of type IRI, else != 0.
 */
int
atlas_rdf_term_cmp_iri_value(atlas_rdf_term_t term,
							 const char * value);

#endif // _ATLAS_RDF_TERM_IMPL_H_
