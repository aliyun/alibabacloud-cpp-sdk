// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSubscriptionInstanceAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSubscriptionInstanceAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_TO_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_TO_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_TO_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_TO_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSubscriptionInstanceAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_FROM_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_FROM_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
    };
    ConfigureSubscriptionInstanceAlertRequest() = default ;
    ConfigureSubscriptionInstanceAlertRequest(const ConfigureSubscriptionInstanceAlertRequest &) = default ;
    ConfigureSubscriptionInstanceAlertRequest(ConfigureSubscriptionInstanceAlertRequest &&) = default ;
    ConfigureSubscriptionInstanceAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSubscriptionInstanceAlertRequest() = default ;
    ConfigureSubscriptionInstanceAlertRequest& operator=(const ConfigureSubscriptionInstanceAlertRequest &) = default ;
    ConfigureSubscriptionInstanceAlertRequest& operator=(ConfigureSubscriptionInstanceAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->delayAlertPhone_ == nullptr && this->delayAlertStatus_ == nullptr && this->delayOverSeconds_ == nullptr && this->errorAlertPhone_ == nullptr && this->errorAlertStatus_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->subscriptionInstanceId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // delayAlertPhone Field Functions 
    bool hasDelayAlertPhone() const { return this->delayAlertPhone_ != nullptr;};
    void deleteDelayAlertPhone() { this->delayAlertPhone_ = nullptr;};
    inline string getDelayAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(delayAlertPhone_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setDelayAlertPhone(string delayAlertPhone) { DARABONBA_PTR_SET_VALUE(delayAlertPhone_, delayAlertPhone) };


    // delayAlertStatus Field Functions 
    bool hasDelayAlertStatus() const { return this->delayAlertStatus_ != nullptr;};
    void deleteDelayAlertStatus() { this->delayAlertStatus_ = nullptr;};
    inline string getDelayAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(delayAlertStatus_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setDelayAlertStatus(string delayAlertStatus) { DARABONBA_PTR_SET_VALUE(delayAlertStatus_, delayAlertStatus) };


    // delayOverSeconds Field Functions 
    bool hasDelayOverSeconds() const { return this->delayOverSeconds_ != nullptr;};
    void deleteDelayOverSeconds() { this->delayOverSeconds_ = nullptr;};
    inline string getDelayOverSeconds() const { DARABONBA_PTR_GET_DEFAULT(delayOverSeconds_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setDelayOverSeconds(string delayOverSeconds) { DARABONBA_PTR_SET_VALUE(delayOverSeconds_, delayOverSeconds) };


    // errorAlertPhone Field Functions 
    bool hasErrorAlertPhone() const { return this->errorAlertPhone_ != nullptr;};
    void deleteErrorAlertPhone() { this->errorAlertPhone_ = nullptr;};
    inline string getErrorAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(errorAlertPhone_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setErrorAlertPhone(string errorAlertPhone) { DARABONBA_PTR_SET_VALUE(errorAlertPhone_, errorAlertPhone) };


    // errorAlertStatus Field Functions 
    bool hasErrorAlertStatus() const { return this->errorAlertStatus_ != nullptr;};
    void deleteErrorAlertStatus() { this->errorAlertStatus_ = nullptr;};
    inline string getErrorAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(errorAlertStatus_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setErrorAlertStatus(string errorAlertStatus) { DARABONBA_PTR_SET_VALUE(errorAlertStatus_, errorAlertStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionInstanceId Field Functions 
    bool hasSubscriptionInstanceId() const { return this->subscriptionInstanceId_ != nullptr;};
    void deleteSubscriptionInstanceId() { this->subscriptionInstanceId_ = nullptr;};
    inline string getSubscriptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setSubscriptionInstanceId(string subscriptionInstanceId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceId_, subscriptionInstanceId) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because it will be deprecated.
    shared_ptr<string> accountId_ {};
    // The mobile phone numbers of contacts for latency alerts. Separate multiple mobile phone numbers with commas (,).
    // >- This parameter is supported only on the China site (aliyun.com). Only Chinese mainland mobile phone numbers are supported, and you can specify up to 10 mobile phone numbers.
    // - China site (Chinese mainland) does not support Chinese mainland mobile phone alerts. You can only [configure alert rules for DTS tasks in CloudMonitor](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> delayAlertPhone_ {};
    // Specifies whether to monitor the latency status. Valid values:
    // 
    // - **enable**: yes.
    // - **disable**: no.
    // 
    // > - Default value: **enable**.
    // - You must specify at least one of this parameter and the **ErrorAlertStatus** parameter.
    shared_ptr<string> delayAlertStatus_ {};
    // The threshold for triggering a latency alert. Unit: seconds. The value must be an integer. Set the threshold based on your business requirements. To avoid alert fluctuations caused by network issues or database loads, set the threshold to 10 seconds or more.
    // > This parameter is required when **DelayAlertStatus** is set to **enable**.
    shared_ptr<string> delayOverSeconds_ {};
    // The mobile phone numbers of contacts for exception alerts. Separate multiple mobile phone numbers with commas (,).
    // >- This parameter is supported only on the China site (aliyun.com). Only Chinese mainland mobile phone numbers are supported, and you can specify up to 10 mobile phone numbers.
    // - China site (Chinese mainland) does not support Chinese mainland mobile phone alerts. You can only [configure alert rules for DTS tasks in CloudMonitor](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> errorAlertPhone_ {};
    // Specifies whether to monitor the exception status. Valid values:
    // 
    // - **enable**: yes.
    // - **disable**: no.
    // 
    // > - Default value: **enable**.
    // - You must specify at least one of this parameter and the **DelayAlertStatus** parameter.
    // - After you enable exception status monitoring, an alert is triggered when an exception is detected.
    shared_ptr<string> errorAlertStatus_ {};
    shared_ptr<string> ownerId_ {};
    // The ID of the region where the change tracking instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the change tracking instance. You can call the DescribeSubscriptionInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
