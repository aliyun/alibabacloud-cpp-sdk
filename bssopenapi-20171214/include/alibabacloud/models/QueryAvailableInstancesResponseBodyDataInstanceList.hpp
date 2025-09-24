// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESRESPONSEBODYDATAINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESRESPONSEBODYDATAINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAvailableInstancesResponseBodyDataInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvailableInstancesResponseBodyDataInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExpectedReleaseTime, expectedReleaseTime_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_TO_JSON(RenewalDuration, renewalDuration_);
      DARABONBA_PTR_TO_JSON(RenewalDurationUnit, renewalDurationUnit_);
      DARABONBA_PTR_TO_JSON(Seller, seller_);
      DARABONBA_PTR_TO_JSON(SellerId, sellerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvailableInstancesResponseBodyDataInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExpectedReleaseTime, expectedReleaseTime_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_FROM_JSON(RenewalDuration, renewalDuration_);
      DARABONBA_PTR_FROM_JSON(RenewalDurationUnit, renewalDurationUnit_);
      DARABONBA_PTR_FROM_JSON(Seller, seller_);
      DARABONBA_PTR_FROM_JSON(SellerId, sellerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    QueryAvailableInstancesResponseBodyDataInstanceList() = default ;
    QueryAvailableInstancesResponseBodyDataInstanceList(const QueryAvailableInstancesResponseBodyDataInstanceList &) = default ;
    QueryAvailableInstancesResponseBodyDataInstanceList(QueryAvailableInstancesResponseBodyDataInstanceList &&) = default ;
    QueryAvailableInstancesResponseBodyDataInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvailableInstancesResponseBodyDataInstanceList() = default ;
    QueryAvailableInstancesResponseBodyDataInstanceList& operator=(const QueryAvailableInstancesResponseBodyDataInstanceList &) = default ;
    QueryAvailableInstancesResponseBodyDataInstanceList& operator=(QueryAvailableInstancesResponseBodyDataInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->endTime_ != nullptr && this->expectedReleaseTime_ != nullptr && this->instanceID_ != nullptr && this->ownerId_ != nullptr && this->productCode_ != nullptr
        && this->productType_ != nullptr && this->region_ != nullptr && this->releaseTime_ != nullptr && this->renewStatus_ != nullptr && this->renewalDuration_ != nullptr
        && this->renewalDurationUnit_ != nullptr && this->seller_ != nullptr && this->sellerId_ != nullptr && this->status_ != nullptr && this->stopTime_ != nullptr
        && this->subStatus_ != nullptr && this->subscriptionType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // expectedReleaseTime Field Functions 
    bool hasExpectedReleaseTime() const { return this->expectedReleaseTime_ != nullptr;};
    void deleteExpectedReleaseTime() { this->expectedReleaseTime_ = nullptr;};
    inline string expectedReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(expectedReleaseTime_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setExpectedReleaseTime(string expectedReleaseTime) { DARABONBA_PTR_SET_VALUE(expectedReleaseTime_, expectedReleaseTime) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // renewStatus Field Functions 
    bool hasRenewStatus() const { return this->renewStatus_ != nullptr;};
    void deleteRenewStatus() { this->renewStatus_ = nullptr;};
    inline string renewStatus() const { DARABONBA_PTR_GET_DEFAULT(renewStatus_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setRenewStatus(string renewStatus) { DARABONBA_PTR_SET_VALUE(renewStatus_, renewStatus) };


    // renewalDuration Field Functions 
    bool hasRenewalDuration() const { return this->renewalDuration_ != nullptr;};
    void deleteRenewalDuration() { this->renewalDuration_ = nullptr;};
    inline int32_t renewalDuration() const { DARABONBA_PTR_GET_DEFAULT(renewalDuration_, 0) };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setRenewalDuration(int32_t renewalDuration) { DARABONBA_PTR_SET_VALUE(renewalDuration_, renewalDuration) };


    // renewalDurationUnit Field Functions 
    bool hasRenewalDurationUnit() const { return this->renewalDurationUnit_ != nullptr;};
    void deleteRenewalDurationUnit() { this->renewalDurationUnit_ = nullptr;};
    inline string renewalDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalDurationUnit_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setRenewalDurationUnit(string renewalDurationUnit) { DARABONBA_PTR_SET_VALUE(renewalDurationUnit_, renewalDurationUnit) };


    // seller Field Functions 
    bool hasSeller() const { return this->seller_ != nullptr;};
    void deleteSeller() { this->seller_ = nullptr;};
    inline string seller() const { DARABONBA_PTR_GET_DEFAULT(seller_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setSeller(string seller) { DARABONBA_PTR_SET_VALUE(seller_, seller) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline int64_t sellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryAvailableInstancesResponseBodyDataInstanceList& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The time when the specified instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the instance was expired.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the specified instance was expected to be released.
    std::shared_ptr<string> expectedReleaseTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The ID of the instance owner.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The time when the instance was released.
    std::shared_ptr<string> releaseTime_ = nullptr;
    // The renewal status of the specified instance. Valid values:
    // 
    // *   AutoRenewal: The instance is automatically renewed.
    // *   ManualRenewal: The instance is manually renewed.
    // *   NotRenewal: The instance is not renewed.
    std::shared_ptr<string> renewStatus_ = nullptr;
    // The number of auto-renewal cycles.
    std::shared_ptr<int32_t> renewalDuration_ = nullptr;
    // The unit of the auto-renewal cycle. Valid values:
    // 
    // *   M: month
    // *   Y: year
    std::shared_ptr<string> renewalDurationUnit_ = nullptr;
    // The seller.
    std::shared_ptr<string> seller_ = nullptr;
    // The ID of the seller.
    std::shared_ptr<int64_t> sellerId_ = nullptr;
    // The status of the instance.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the specified instance was suspended.
    std::shared_ptr<string> stopTime_ = nullptr;
    // The sub-status of the specified instance.
    std::shared_ptr<string> subStatus_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: subscription
    // *   PayAsYouGo: pay-as-you-go
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
