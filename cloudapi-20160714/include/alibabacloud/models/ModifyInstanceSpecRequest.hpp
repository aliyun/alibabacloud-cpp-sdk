// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(ModifyAction, modifyAction_);
      DARABONBA_PTR_TO_JSON(SkipWaitSwitch, skipWaitSwitch_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(ModifyAction, modifyAction_);
      DARABONBA_PTR_FROM_JSON(SkipWaitSwitch, skipWaitSwitch_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest(ModifyInstanceSpecRequest &&) = default ;
    ModifyInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest& operator=(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest& operator=(ModifyInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceSpec_ == nullptr && return this->modifyAction_ == nullptr && return this->skipWaitSwitch_ == nullptr && return this->token_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyInstanceSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline ModifyInstanceSpecRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // modifyAction Field Functions 
    bool hasModifyAction() const { return this->modifyAction_ != nullptr;};
    void deleteModifyAction() { this->modifyAction_ = nullptr;};
    inline string modifyAction() const { DARABONBA_PTR_GET_DEFAULT(modifyAction_, "") };
    inline ModifyInstanceSpecRequest& setModifyAction(string modifyAction) { DARABONBA_PTR_SET_VALUE(modifyAction_, modifyAction) };


    // skipWaitSwitch Field Functions 
    bool hasSkipWaitSwitch() const { return this->skipWaitSwitch_ != nullptr;};
    void deleteSkipWaitSwitch() { this->skipWaitSwitch_ = nullptr;};
    inline bool skipWaitSwitch() const { DARABONBA_PTR_GET_DEFAULT(skipWaitSwitch_, false) };
    inline ModifyInstanceSpecRequest& setSkipWaitSwitch(bool skipWaitSwitch) { DARABONBA_PTR_SET_VALUE(skipWaitSwitch_, skipWaitSwitch) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ModifyInstanceSpecRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // Specifies whether payment is automatically made during renewal. Valid values:
    // 
    // *   **True**: Automatic payment is enabled. Make sure that your Alibaba Cloud account has adequate balance.
    // *   **False**: Automatic payment is disabled. You have to manually pay in the console. Log on to the console. In the upper-right corner, choose **Expenses > User Center**. In the left-side navigation pane, click **Orders**. On the page that appears, find your order and complete the payment.
    // 
    // Default value: **False**.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The specifications of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // Specifies whether to upgrade or downgrade the instance. Valid values:
    // 
    // *   **UPGRADE**
    // *   **DOWNGRADE**
    // 
    // Default value: **UPGRADE**.
    std::shared_ptr<string> modifyAction_ = nullptr;
    // Specifies whether to skip the Waiting for Traffic Switchover state. During the upgrade or downgrade, a new outbound IP address may be added to the API Gateway instance. The Waiting for Traffic Switchover state is used to remind users of adding the new outbound IP address to the whitelist. If you set the SkipWaitSwitch parameter to true, the instance does not enter the Waiting for Traffic Switchover state when a new outbound IP address is available. Instead, the system sends internal messages to the user.
    std::shared_ptr<bool> skipWaitSwitch_ = nullptr;
    // The password.
    // 
    // This parameter is required.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
