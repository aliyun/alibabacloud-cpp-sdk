// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSQUERYSTRINGCONFIGVALUES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSQUERYSTRINGCONFIGVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues() = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues(const UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues &) = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues(UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues &&) = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues() = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues& operator=(const UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues &) = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues& operator=(UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the query string. The key must be 1 to 100 characters in length, and can contain printable characters such as lowercase letters, asterisks (\\*), and question marks (?). The key cannot contain uppercase letters, space characters, or the following special characters: `# [ ] { } \\ | < > & "`.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the query string. The value must be 1 to 128 characters in length, and can contain printable characters such as lowercase letters, asterisks (\\*), and question marks (?). The value cannot contain uppercase letters, space characters, or the following special characters: `# [ ] { } \\ | < > & "`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
