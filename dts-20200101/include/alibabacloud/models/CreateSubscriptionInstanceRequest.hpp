// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateSubscriptionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscriptionInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscriptionInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    CreateSubscriptionInstanceRequest() = default ;
    CreateSubscriptionInstanceRequest(const CreateSubscriptionInstanceRequest &) = default ;
    CreateSubscriptionInstanceRequest(CreateSubscriptionInstanceRequest &&) = default ;
    CreateSubscriptionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscriptionInstanceRequest() = default ;
    CreateSubscriptionInstanceRequest& operator=(const CreateSubscriptionInstanceRequest &) = default ;
    CreateSubscriptionInstanceRequest& operator=(CreateSubscriptionInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      SourceEndpoint() = default ;
      SourceEndpoint(const SourceEndpoint &) = default ;
      SourceEndpoint(SourceEndpoint &&) = default ;
      SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceEndpoint() = default ;
      SourceEndpoint& operator=(const SourceEndpoint &) = default ;
      SourceEndpoint& operator=(SourceEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // 数据订阅的实例类型，取值为：**MySQL**、**PolarDB**、**DRDS**、**Oracle**。
      // > 默认取值为：**MySQL**。
      shared_ptr<string> instanceType_ {};
    };

    virtual bool empty() const override { return this->sourceEndpoint_ == nullptr
        && this->accountId_ == nullptr && this->clientToken_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr
        && this->region_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->usedTime_ == nullptr; };
    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const CreateSubscriptionInstanceRequest::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, CreateSubscriptionInstanceRequest::SourceEndpoint) };
    inline CreateSubscriptionInstanceRequest::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, CreateSubscriptionInstanceRequest::SourceEndpoint) };
    inline CreateSubscriptionInstanceRequest& setSourceEndpoint(const CreateSubscriptionInstanceRequest::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline CreateSubscriptionInstanceRequest& setSourceEndpoint(CreateSubscriptionInstanceRequest::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateSubscriptionInstanceRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSubscriptionInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateSubscriptionInstanceRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateSubscriptionInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateSubscriptionInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateSubscriptionInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSubscriptionInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSubscriptionInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateSubscriptionInstanceRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    shared_ptr<CreateSubscriptionInstanceRequest::SourceEndpoint> sourceEndpoint_ {};
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter. This parameter will be discontinued.
    shared_ptr<string> accountId_ {};
    // The client token that is used to ensure the idempotence of the request. Generate a value from your client to make sure that the value is unique among different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerId_ {};
    // The billing method.
    // 
    // - **Postpaid**: pay-as-you-go. This is the default value.
    // - **Prepaid**: subscription.
    shared_ptr<string> payType_ {};
    // The billing method of the subscription instance. Valid values:
    // 
    // - **Year**: annual subscription.
    // - **Month**: monthly subscription.
    // 
    // > This parameter is valid and required only when PayType is set to **Prepaid** (subscription).
    shared_ptr<string> period_ {};
    // The region ID. Set this parameter to the region where the subscription object resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The region to which the change tracking instance belongs. You do not need to specify this parameter. This parameter will be discontinued.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The purchase duration of the subscription instance.
    // 
    // - If the billing method is set to **Year** (annual subscription), the valid values are **1 to 5**.
    // - If the billing method is set to **Month** (monthly subscription), the valid values are **1 to 60**.
    // 
    // > This parameter is valid and required only when PayType is set to **Prepaid** (subscription).
    shared_ptr<int32_t> usedTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
