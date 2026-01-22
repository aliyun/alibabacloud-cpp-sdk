// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ITEMVALUES_HPP_
#define ALIBABACLOUD_MODELS_ITEMVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ItemValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ItemValues& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, ItemValues& obj) { 
    };
    ItemValues() = default ;
    ItemValues(const ItemValues &) = default ;
    ItemValues(ItemValues &&) = default ;
    ItemValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ItemValues() = default ;
    ItemValues& operator=(const ItemValues &) = default ;
    ItemValues& operator=(ItemValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
