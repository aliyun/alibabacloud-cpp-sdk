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
        && return this->delayAlertPhone_ == nullptr && return this->delayAlertStatus_ == nullptr && return this->delayOverSeconds_ == nullptr && return this->errorAlertPhone_ == nullptr && return this->errorAlertStatus_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->subscriptionInstanceId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // delayAlertPhone Field Functions 
    bool hasDelayAlertPhone() const { return this->delayAlertPhone_ != nullptr;};
    void deleteDelayAlertPhone() { this->delayAlertPhone_ = nullptr;};
    inline string delayAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(delayAlertPhone_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setDelayAlertPhone(string delayAlertPhone) { DARABONBA_PTR_SET_VALUE(delayAlertPhone_, delayAlertPhone) };


    // delayAlertStatus Field Functions 
    bool hasDelayAlertStatus() const { return this->delayAlertStatus_ != nullptr;};
    void deleteDelayAlertStatus() { this->delayAlertStatus_ = nullptr;};
    inline string delayAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(delayAlertStatus_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setDelayAlertStatus(string delayAlertStatus) { DARABONBA_PTR_SET_VALUE(delayAlertStatus_, delayAlertStatus) };


    // delayOverSeconds Field Functions 
    bool hasDelayOverSeconds() const { return this->delayOverSeconds_ != nullptr;};
    void deleteDelayOverSeconds() { this->delayOverSeconds_ = nullptr;};
    inline string delayOverSeconds() const { DARABONBA_PTR_GET_DEFAULT(delayOverSeconds_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setDelayOverSeconds(string delayOverSeconds) { DARABONBA_PTR_SET_VALUE(delayOverSeconds_, delayOverSeconds) };


    // errorAlertPhone Field Functions 
    bool hasErrorAlertPhone() const { return this->errorAlertPhone_ != nullptr;};
    void deleteErrorAlertPhone() { this->errorAlertPhone_ = nullptr;};
    inline string errorAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(errorAlertPhone_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setErrorAlertPhone(string errorAlertPhone) { DARABONBA_PTR_SET_VALUE(errorAlertPhone_, errorAlertPhone) };


    // errorAlertStatus Field Functions 
    bool hasErrorAlertStatus() const { return this->errorAlertStatus_ != nullptr;};
    void deleteErrorAlertStatus() { this->errorAlertStatus_ = nullptr;};
    inline string errorAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(errorAlertStatus_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setErrorAlertStatus(string errorAlertStatus) { DARABONBA_PTR_SET_VALUE(errorAlertStatus_, errorAlertStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionInstanceId Field Functions 
    bool hasSubscriptionInstanceId() const { return this->subscriptionInstanceId_ != nullptr;};
    void deleteSubscriptionInstanceId() { this->subscriptionInstanceId_ = nullptr;};
    inline string subscriptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceId_, "") };
    inline ConfigureSubscriptionInstanceAlertRequest& setSubscriptionInstanceId(string subscriptionInstanceId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceId_, subscriptionInstanceId) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> accountId_ = nullptr;
    // The mobile phone numbers that receive latency-related alerts. Separate mobile phone numbers with commas (,).
    // 
    // > 
    // *   This parameter is available only for China site (aliyun.com) users. Only mobile phone numbers in the Chinese mainland are supported. Up to 10 mobile phone numbers can be specified.
    // *   International site (alibabacloud.com) users cannot receive alerts by using mobile phones, but can [set alert rules for DTS tasks in the Cloud Monitor console](https://help.aliyun.com/document_detail/175876.html).
    std::shared_ptr<string> delayAlertPhone_ = nullptr;
    // Specifies whether to monitor task latency. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    // 
    // > 
    // *   The default value is **enable**.
    // *   You must specify at least one of the DelayAlertStatus and **ErrorAlertStatus** parameters.
    std::shared_ptr<string> delayAlertStatus_ = nullptr;
    // The threshold for triggering latency alerts. The unit is seconds and the value must be an integer. You can set the threshold based on your business needs. To avoid delay fluctuations caused by network and database loads, we recommend that you set the threshold to more than 10 seconds.
    // 
    // >  If the **DelayAlertStatus** parameter is set to **enable**, this parameter must be specified.
    std::shared_ptr<string> delayOverSeconds_ = nullptr;
    // The mobile phone numbers that receive status-related alerts. Separate mobile phone numbers with commas (,).
    // 
    // > 
    // *   This parameter is available only for China site (aliyun.com) users. Only mobile phone numbers in the Chinese mainland are supported. Up to 10 mobile phone numbers can be specified.
    // *   International site (alibabacloud.com) users cannot receive alerts by using mobile phones, but can [set alert rules for DTS tasks in the Cloud Monitor console](https://help.aliyun.com/document_detail/175876.html).
    std::shared_ptr<string> errorAlertPhone_ = nullptr;
    // Specifies whether to monitor task status. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    // 
    // > 
    // *   The default value is **enable**.
    // *   You must specify at least one of the **DelayAlertStatus** and ErrorAlertStatus parameters.
    // *   If the task that you monitor enters an abnormal state, an alert is triggered.
    std::shared_ptr<string> errorAlertStatus_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the region where the change tracking instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the change tracking instance. You can call the DescribeSubscriptionInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
