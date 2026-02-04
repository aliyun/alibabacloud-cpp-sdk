// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONSUMPTIONTIMESTAMPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONSUMPTIONTIMESTAMPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyConsumptionTimestampRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyConsumptionTimestampRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ConsumptionTimestamp, consumptionTimestamp_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyConsumptionTimestampRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ConsumptionTimestamp, consumptionTimestamp_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
    };
    ModifyConsumptionTimestampRequest() = default ;
    ModifyConsumptionTimestampRequest(const ModifyConsumptionTimestampRequest &) = default ;
    ModifyConsumptionTimestampRequest(ModifyConsumptionTimestampRequest &&) = default ;
    ModifyConsumptionTimestampRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyConsumptionTimestampRequest() = default ;
    ModifyConsumptionTimestampRequest& operator=(const ModifyConsumptionTimestampRequest &) = default ;
    ModifyConsumptionTimestampRequest& operator=(ModifyConsumptionTimestampRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->consumptionTimestamp_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->subscriptionInstanceId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ModifyConsumptionTimestampRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // consumptionTimestamp Field Functions 
    bool hasConsumptionTimestamp() const { return this->consumptionTimestamp_ != nullptr;};
    void deleteConsumptionTimestamp() { this->consumptionTimestamp_ = nullptr;};
    inline string getConsumptionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(consumptionTimestamp_, "") };
    inline ModifyConsumptionTimestampRequest& setConsumptionTimestamp(string consumptionTimestamp) { DARABONBA_PTR_SET_VALUE(consumptionTimestamp_, consumptionTimestamp) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyConsumptionTimestampRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyConsumptionTimestampRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyConsumptionTimestampRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionInstanceId Field Functions 
    bool hasSubscriptionInstanceId() const { return this->subscriptionInstanceId_ != nullptr;};
    void deleteSubscriptionInstanceId() { this->subscriptionInstanceId_ = nullptr;};
    inline string getSubscriptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceId_, "") };
    inline ModifyConsumptionTimestampRequest& setSubscriptionInstanceId(string subscriptionInstanceId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceId_, subscriptionInstanceId) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    shared_ptr<string> accountId_ {};
    // The consumption checkpoint. The format is *yyyy-MM-dd*T*HH:mm:ss*Z. The time is displayed in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> consumptionTimestamp_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // Resource group ID.
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
