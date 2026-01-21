// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCETWOFACTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCETWOFACTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyInstanceTwoFactorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceTwoFactorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTwoFactor, enableTwoFactor_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkipTwoFactorTime, skipTwoFactorTime_);
      DARABONBA_PTR_TO_JSON(TwoFactorMethods, twoFactorMethods_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceTwoFactorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTwoFactor, enableTwoFactor_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkipTwoFactorTime, skipTwoFactorTime_);
      DARABONBA_PTR_FROM_JSON(TwoFactorMethods, twoFactorMethods_);
    };
    ModifyInstanceTwoFactorRequest() = default ;
    ModifyInstanceTwoFactorRequest(const ModifyInstanceTwoFactorRequest &) = default ;
    ModifyInstanceTwoFactorRequest(ModifyInstanceTwoFactorRequest &&) = default ;
    ModifyInstanceTwoFactorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceTwoFactorRequest() = default ;
    ModifyInstanceTwoFactorRequest& operator=(const ModifyInstanceTwoFactorRequest &) = default ;
    ModifyInstanceTwoFactorRequest& operator=(ModifyInstanceTwoFactorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTwoFactor_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->skipTwoFactorTime_ == nullptr && this->twoFactorMethods_ == nullptr; };
    // enableTwoFactor Field Functions 
    bool hasEnableTwoFactor() const { return this->enableTwoFactor_ != nullptr;};
    void deleteEnableTwoFactor() { this->enableTwoFactor_ = nullptr;};
    inline string getEnableTwoFactor() const { DARABONBA_PTR_GET_DEFAULT(enableTwoFactor_, "") };
    inline ModifyInstanceTwoFactorRequest& setEnableTwoFactor(string enableTwoFactor) { DARABONBA_PTR_SET_VALUE(enableTwoFactor_, enableTwoFactor) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceTwoFactorRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceTwoFactorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skipTwoFactorTime Field Functions 
    bool hasSkipTwoFactorTime() const { return this->skipTwoFactorTime_ != nullptr;};
    void deleteSkipTwoFactorTime() { this->skipTwoFactorTime_ = nullptr;};
    inline string getSkipTwoFactorTime() const { DARABONBA_PTR_GET_DEFAULT(skipTwoFactorTime_, "") };
    inline ModifyInstanceTwoFactorRequest& setSkipTwoFactorTime(string skipTwoFactorTime) { DARABONBA_PTR_SET_VALUE(skipTwoFactorTime_, skipTwoFactorTime) };


    // twoFactorMethods Field Functions 
    bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
    void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
    inline string getTwoFactorMethods() const { DARABONBA_PTR_GET_DEFAULT(twoFactorMethods_, "") };
    inline ModifyInstanceTwoFactorRequest& setTwoFactorMethods(string twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };


  protected:
    // Specifies whether to enable two-factor authentication. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<string> enableTwoFactor_ {};
    // The ID of the bastion host.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The duration within which two-factor authentication is not required after a user passes two-factor authentication. Valid values: 0 to 168. Unit: hours. If you set this parameter to 0, the user must pass two-factor authentication every time the user logs on to the bastion host.
    shared_ptr<string> skipTwoFactorTime_ {};
    // The method used to send a verification code for two-factor authentication. If EnableTwoFactor is set to true, you must specify at least one method. Valid values:
    // 
    // *   **sms:** text message.
    // *   **email**: email.
    // *   **dingtalk**: notice in DingTalk.
    // *   **totp**: one-time password (OTP) token.
    // *   **gmusbkey**: SM-based USB key.
    shared_ptr<string> twoFactorMethods_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
