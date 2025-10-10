// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSINSERTHEADERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSINSERTHEADERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRuleRequestRuleActionsInsertHeaderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    CreateRuleRequestRuleActionsInsertHeaderConfig() = default ;
    CreateRuleRequestRuleActionsInsertHeaderConfig(const CreateRuleRequestRuleActionsInsertHeaderConfig &) = default ;
    CreateRuleRequestRuleActionsInsertHeaderConfig(CreateRuleRequestRuleActionsInsertHeaderConfig &&) = default ;
    CreateRuleRequestRuleActionsInsertHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleActionsInsertHeaderConfig() = default ;
    CreateRuleRequestRuleActionsInsertHeaderConfig& operator=(const CreateRuleRequestRuleActionsInsertHeaderConfig &) = default ;
    CreateRuleRequestRuleActionsInsertHeaderConfig& operator=(CreateRuleRequestRuleActionsInsertHeaderConfig &&) = default ;
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
    inline CreateRuleRequestRuleActionsInsertHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateRuleRequestRuleActionsInsertHeaderConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline CreateRuleRequestRuleActionsInsertHeaderConfig& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    // The key of the header. The header key must be 1 to 40 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The header keys specified by **InsertHeaderConfig** must be unique.
    // 
    // >  You cannot specify the following header keys: `slb-id`, `slb-ip`, `x-forwarded-for`, `x-forwarded-proto`, `x-forwarded-eip`, `x-forwarded-port`, `x-forwarded-client-srcport`, `connection`, `upgrade`, `content-length`, `transfer-encoding`, `keep-alive`, `te`, `host`, `cookie`, `remoteip`, `authority`, and `x-forwarded-host`. The header keys are case-insensitive.
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
    // *   If **ValueType** is set to **UserDefined**, a custom header value is supported. The header value must be 1 to 128 characters in length, and can contain printable characters whose ASCII values are `greater than or equal to 32 and lower than 127`. You can use asterisks (\\*) and question marks (?) as wildcard characters. `Quotation marks (")` are not supported. The header value cannot start or end with a space character, or end with a backslash (`\\`).
    // 
    // *   If **ValueType** is set to **ReferenceHeader**, you can reference a value from request headers. The value must be 1 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> value_ = nullptr;
    // The type of the header. Valid values:
    // 
    // *   **UserDefined**: a custom header value.
    // *   **ReferenceHeader**: a header value that is referenced from one of the request headers.
    // *   **SystemDefined**: a header predefined by the system.
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
