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
        && return this->name_ == nullptr && return this->value_ == nullptr && return this->valueType_ == nullptr; };
    // itemsType Field Functions 
    bool hasItemsType() const { return this->itemsType_ != nullptr;};
    void deleteItemsType() { this->itemsType_ = nullptr;};
    inline string itemsType() const { DARABONBA_PTR_GET_DEFAULT(itemsType_, "") };
    inline Property& setItemsType(string itemsType) { DARABONBA_PTR_SET_VALUE(itemsType_, itemsType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Property& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline Property& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline Property& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<string> itemsType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
