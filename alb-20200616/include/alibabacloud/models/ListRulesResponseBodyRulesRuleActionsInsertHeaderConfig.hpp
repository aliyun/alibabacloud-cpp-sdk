// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSINSERTHEADERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSINSERTHEADERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig(const ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig(ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig &&) = default ;
    ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig& operator=(const ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig& operator=(ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr && this->valueType_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline ListRulesResponseBodyRulesRuleActionsInsertHeaderConfig& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    // The key of the header. The header key must be 1 to 40 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The header key specified in `InsertHeader` must be unique.
    // 
    // >  **Cookie** and **Host** are not supported.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the header to be inserted.
    // 
    // *   If **ValueType** is set to **SystemDefined**, you can set the Value parameter to one of the following values:
    // 
    //     *   **ClientSrcPort**: the client port.
    //     *   **ClientSrcIp**: the IP address of the client.
    //     *   **Protocol**: the request protocol (HTTP or HTTPS).
    //     *   **SLBId**: the ID of the ALB instance.
    //     *   **SLBPort**: the listener port.
    // 
    // *   If **ValueType** is set to **UserDefined**, you can specify a custom header value. The header value must be 1 to 128 characters in length, and can contain wildcard characters, such as asterisks (\\*) and question marks (?), and printable characters whose ASCII values are `larger than or equal to 32 and smaller than 127`. The header value cannot start or end with a space character.
    // 
    // *   If **ValueType** is set to **ReferenceHeader**, you can reference a value from a request header. The header value must be 1 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> value_ = nullptr;
    // The type of the header value. Valid values:
    // 
    // *   **UserDefined**: a user-defined header value.
    // *   **ReferenceHeader**: a header value that is referenced from a request header.
    // *   **SystemDefined:** a system-defined header value.
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
