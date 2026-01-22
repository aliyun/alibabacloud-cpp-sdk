// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDOPTION_HPP_
#define ALIBABACLOUD_MODELS_FIELDOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class FieldOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldOption& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionCode, functionCode_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, FieldOption& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionCode, functionCode_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    FieldOption() = default ;
    FieldOption(const FieldOption &) = default ;
    FieldOption(FieldOption &&) = default ;
    FieldOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldOption() = default ;
    FieldOption& operator=(const FieldOption &) = default ;
    FieldOption& operator=(FieldOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionCode_ == nullptr
        && this->isDefault_ == nullptr && this->name_ == nullptr && this->value_ == nullptr; };
    // functionCode Field Functions 
    bool hasFunctionCode() const { return this->functionCode_ != nullptr;};
    void deleteFunctionCode() { this->functionCode_ = nullptr;};
    inline string getFunctionCode() const { DARABONBA_PTR_GET_DEFAULT(functionCode_, "") };
    inline FieldOption& setFunctionCode(string functionCode) { DARABONBA_PTR_SET_VALUE(functionCode_, functionCode) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline FieldOption& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FieldOption& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline FieldOption& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> functionCode_ {};
    shared_ptr<bool> isDefault_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
