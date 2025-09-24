// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAvailableInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvailableInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_TO_JSON(EndTimeStart, endTimeStart_);
      DARABONBA_PTR_TO_JSON(InstanceIDs, instanceIDs_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvailableInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_FROM_JSON(EndTimeStart, endTimeStart_);
      DARABONBA_PTR_FROM_JSON(InstanceIDs, instanceIDs_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    QueryAvailableInstancesRequest() = default ;
    QueryAvailableInstancesRequest(const QueryAvailableInstancesRequest &) = default ;
    QueryAvailableInstancesRequest(QueryAvailableInstancesRequest &&) = default ;
    QueryAvailableInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvailableInstancesRequest() = default ;
    QueryAvailableInstancesRequest& operator=(const QueryAvailableInstancesRequest &) = default ;
    QueryAvailableInstancesRequest& operator=(QueryAvailableInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimeEnd_ != nullptr
        && this->createTimeStart_ != nullptr && this->endTimeEnd_ != nullptr && this->endTimeStart_ != nullptr && this->instanceIDs_ != nullptr && this->ownerId_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->region_ != nullptr
        && this->renewStatus_ != nullptr && this->subscriptionType_ != nullptr; };
    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline QueryAvailableInstancesRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string createTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline QueryAvailableInstancesRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline string endTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, "") };
    inline QueryAvailableInstancesRequest& setEndTimeEnd(string endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // endTimeStart Field Functions 
    bool hasEndTimeStart() const { return this->endTimeStart_ != nullptr;};
    void deleteEndTimeStart() { this->endTimeStart_ = nullptr;};
    inline string endTimeStart() const { DARABONBA_PTR_GET_DEFAULT(endTimeStart_, "") };
    inline QueryAvailableInstancesRequest& setEndTimeStart(string endTimeStart) { DARABONBA_PTR_SET_VALUE(endTimeStart_, endTimeStart) };


    // instanceIDs Field Functions 
    bool hasInstanceIDs() const { return this->instanceIDs_ != nullptr;};
    void deleteInstanceIDs() { this->instanceIDs_ = nullptr;};
    inline string instanceIDs() const { DARABONBA_PTR_GET_DEFAULT(instanceIDs_, "") };
    inline QueryAvailableInstancesRequest& setInstanceIDs(string instanceIDs) { DARABONBA_PTR_SET_VALUE(instanceIDs_, instanceIDs) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryAvailableInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAvailableInstancesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAvailableInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryAvailableInstancesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryAvailableInstancesRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryAvailableInstancesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // renewStatus Field Functions 
    bool hasRenewStatus() const { return this->renewStatus_ != nullptr;};
    void deleteRenewStatus() { this->renewStatus_ = nullptr;};
    inline string renewStatus() const { DARABONBA_PTR_GET_DEFAULT(renewStatus_, "") };
    inline QueryAvailableInstancesRequest& setRenewStatus(string renewStatus) { DARABONBA_PTR_SET_VALUE(renewStatus_, renewStatus) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryAvailableInstancesRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The end time when the specified instance is created. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> createTimeEnd_ = nullptr;
    // The start time when the specified instance is created. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> createTimeStart_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2016-05-23T12:00:00Z.
    std::shared_ptr<string> endTimeEnd_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2016-05-23T12:00:00Z.
    std::shared_ptr<string> endTimeStart_ = nullptr;
    // The ID of the instance. Separate multiple IDs with commas (,). You can specify a maximum of 100 IDs.
    std::shared_ptr<string> instanceIDs_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The code of the service. You can query the service code by calling the **QueryProductList** operation or viewing **Codes of Alibaba Cloud services**.
    // 
    // >This parameter cannot be left empty if the region is specified.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The renewal status of the specified instance. Valid values:
    // 
    // *   AutoRenewal: The instance is automatically renewed.
    // *   ManualRenewal: The instance is manually renewed.
    // *   NotRenewal: The instance is not renewed.
    std::shared_ptr<string> renewStatus_ = nullptr;
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
