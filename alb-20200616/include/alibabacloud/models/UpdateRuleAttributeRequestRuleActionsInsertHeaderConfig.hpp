// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSINSERTHEADERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSINSERTHEADERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CoverEnabled, coverEnabled_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverEnabled, coverEnabled_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig(const UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig(UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig &&) = default ;
    UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& operator=(const UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& operator=(UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coverEnabled_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr && this->valueType_ != nullptr; };
    // coverEnabled Field Functions 
    bool hasCoverEnabled() const { return this->coverEnabled_ != nullptr;};
    void deleteCoverEnabled() { this->coverEnabled_ = nullptr;};
    inline bool coverEnabled() const { DARABONBA_PTR_GET_DEFAULT(coverEnabled_, false) };
    inline UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& setCoverEnabled(bool coverEnabled) { DARABONBA_PTR_SET_VALUE(coverEnabled_, coverEnabled) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline UpdateRuleAttributeRequestRuleActionsInsertHeaderConfig& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    // Specifies whether to overwrite the request header values. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> coverEnabled_ = nullptr;
    // The key of the header. The key must be 1 to 40 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The header keys specified by **InsertHeaderConfig** must be unique.
    // 
    // >  You cannot specify the following header keys: `slb-id`, `slb-ip`, `x-forwarded-for`, `x-forwarded-proto`, `x-forwarded-eip`, `x-forwarded-port`, `x-forwarded-client-srcport`, `x-forwarded-host`, `connection`, `upgrade`, `content-length`, `transfer-encoding`, `keep-alive`, `te`, `host`, `cookie`, `remoteip`, and `authority`. The header keys are case-insensitive.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the header.
    // 
    // *   If **ValueType** is set to **SystemDefined**, you can set the Value parameter to one of the following values:
    // 
    //     *   **ClientSrcPort**: the client port.
    //     *   **ClientSrcIp**: the IP address of the client.
    //     *   **Protocol**: the request protocol (HTTP or HTTPS).
    //     *   **SLBId**: the ID of the ALB instance.
    //     *   **SLBPort**: the listener port of the ALB instance.
    // 
    // *   If **ValueType** is set to **UserDefined**, a custom header value is supported. The header value must be 1 to 128 characters in length, and can contain printable characters whose ASCII values are `greater than or equal to 32 and lower than 127`. You can use asterisks (\\*) and question marks (?) as wildcard characters. Quotation marks (`"`) are not supported. The header value cannot start or end with a space character, or end with a backslash (`\\`).
    // 
    // *   If **ValueType** is set to **ReferenceHeader**, you can reference a value from request headers. The value must be 1 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> value_ = nullptr;
    // The type of the header. Valid values:
    // 
    // *   **UserDefined**: a custom header.
    // *   **ReferenceHeader**: a header that references one of the request headers.
    // *   **SystemDefined**: a system-defined header value.
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
