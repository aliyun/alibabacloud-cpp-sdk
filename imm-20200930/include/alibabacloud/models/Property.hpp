// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROPERTY_HPP_
#define ALIBABACLOUD_MODELS_PROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Property : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Property& obj) { 
      DARABONBA_PTR_TO_JSON(ItemsType, itemsType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, Property& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemsType, itemsType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    Property() = default ;
    Property(const Property &) = default ;
    Property(Property &&) = default ;
    Property(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Property() = default ;
    Property& operator=(const Property &) = default ;
    Property& operator=(Property &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemsType_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr && this->valueType_ == nullptr; };
    // itemsType Field Functions 
    bool hasItemsType() const { return this->itemsType_ != nullptr;};
    void deleteItemsType() { this->itemsType_ = nullptr;};
    inline string getItemsType() const { DARABONBA_PTR_GET_DEFAULT(itemsType_, "") };
    inline Property& setItemsType(string itemsType) { DARABONBA_PTR_SET_VALUE(itemsType_, itemsType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Property& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline Property& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline Property& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    // If you set the ValueType field to array, you must specify the type of the elements within the array. The enumerated values include float, integer, and string.
    shared_ptr<string> itemsType_ {};
    // The property name.
    shared_ptr<string> name_ {};
    // The value.
    shared_ptr<string> value_ {};
    // The type of the property. Supported enumerated values: float, integer, string, and array.
    shared_ptr<string> valueType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
