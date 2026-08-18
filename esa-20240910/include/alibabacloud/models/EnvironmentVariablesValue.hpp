// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTVARIABLESVALUE_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTVARIABLESVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class EnvironmentVariablesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentVariablesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentVariablesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    EnvironmentVariablesValue() = default ;
    EnvironmentVariablesValue(const EnvironmentVariablesValue &) = default ;
    EnvironmentVariablesValue(EnvironmentVariablesValue &&) = default ;
    EnvironmentVariablesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentVariablesValue() = default ;
    EnvironmentVariablesValue& operator=(const EnvironmentVariablesValue &) = default ;
    EnvironmentVariablesValue& operator=(EnvironmentVariablesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline EnvironmentVariablesValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline EnvironmentVariablesValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The environment variable type.
    // 
    // Valid values:
    // - `plain_text`: plain text
    // - `secret_text`: encrypted text
    shared_ptr<string> type_ {};
    // The environment variable value.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
