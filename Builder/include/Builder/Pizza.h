/*
 * (C) Copyright 2017 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef GOF_BUILDER_PIZZA_H
#define GOF_BUILDER_PIZZA_H

#include <string>
#include "Builder/Size.h"
#include "Builder/Topping.h"
#include "Builder/IOrderable.h"
#include "Builder/StuffedCrust.h"

namespace GoF {

    namespace Builder {

        class Pizza : public IOrderable
        {
        public:
            Pizza(const std::string &, const std::string &);

            float getCost();
            std::string getName() const;
            std::string getCode() const;

            void setSize(Size);
            void setTopping(Topping);
            void setStuffedCrust(StuffedCrust);

        private:
            Size size;
            float cost;
            Topping topping;
            StuffedCrust crust;
            const std::string name;
            const std::string code;

            void addCost(int);

        };

    }

}

#endif
