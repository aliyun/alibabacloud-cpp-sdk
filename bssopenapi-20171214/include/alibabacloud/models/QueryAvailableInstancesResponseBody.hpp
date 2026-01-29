// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAvailableInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvailableInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvailableInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAvailableInstancesResponseBody() = default ;
    QueryAvailableInstancesResponseBody(const QueryAvailableInstancesResponseBody &) = default ;
    QueryAvailableInstancesResponseBody(QueryAvailableInstancesResponseBody &&) = default ;
    QueryAvailableInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvailableInstancesResponseBody() = default ;
    QueryAvailableInstancesResponseBody& operator=(const QueryAvailableInstancesResponseBody &) = default ;
    QueryAvailableInstancesResponseBody& operator=(QueryAvailableInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
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
        InstanceList() = default ;
        InstanceList(const InstanceList &) = default ;
        InstanceList(InstanceList &&) = default ;
        InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceList() = default ;
        InstanceList& operator=(const InstanceList &) = default ;
        InstanceList& operator=(InstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->endTime_ == nullptr && this->expectedReleaseTime_ == nullptr && this->instanceID_ == nullptr && this->ownerId_ == nullptr && this->productCode_ == nullptr
        && this->productType_ == nullptr && this->region_ == nullptr && this->releaseTime_ == nullptr && this->renewStatus_ == nullptr && this->renewalDuration_ == nullptr
        && this->renewalDurationUnit_ == nullptr && this->seller_ == nullptr && this->sellerId_ == nullptr && this->status_ == nullptr && this->stopTime_ == nullptr
        && this->subStatus_ == nullptr && this->subscriptionType_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline InstanceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline InstanceList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // expectedReleaseTime Field Functions 
        bool hasExpectedReleaseTime() const { return this->expectedReleaseTime_ != nullptr;};
        void deleteExpectedReleaseTime() { this->expectedReleaseTime_ = nullptr;};
        inline string getExpectedReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(expectedReleaseTime_, "") };
        inline InstanceList& setExpectedReleaseTime(string expectedReleaseTime) { DARABONBA_PTR_SET_VALUE(expectedReleaseTime_, expectedReleaseTime) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline InstanceList& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline InstanceList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline InstanceList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline InstanceList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline InstanceList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
        inline InstanceList& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // renewStatus Field Functions 
        bool hasRenewStatus() const { return this->renewStatus_ != nullptr;};
        void deleteRenewStatus() { this->renewStatus_ = nullptr;};
        inline string getRenewStatus() const { DARABONBA_PTR_GET_DEFAULT(renewStatus_, "") };
        inline InstanceList& setRenewStatus(string renewStatus) { DARABONBA_PTR_SET_VALUE(renewStatus_, renewStatus) };


        // renewalDuration Field Functions 
        bool hasRenewalDuration() const { return this->renewalDuration_ != nullptr;};
        void deleteRenewalDuration() { this->renewalDuration_ = nullptr;};
        inline int32_t getRenewalDuration() const { DARABONBA_PTR_GET_DEFAULT(renewalDuration_, 0) };
        inline InstanceList& setRenewalDuration(int32_t renewalDuration) { DARABONBA_PTR_SET_VALUE(renewalDuration_, renewalDuration) };


        // renewalDurationUnit Field Functions 
        bool hasRenewalDurationUnit() const { return this->renewalDurationUnit_ != nullptr;};
        void deleteRenewalDurationUnit() { this->renewalDurationUnit_ = nullptr;};
        inline string getRenewalDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalDurationUnit_, "") };
        inline InstanceList& setRenewalDurationUnit(string renewalDurationUnit) { DARABONBA_PTR_SET_VALUE(renewalDurationUnit_, renewalDurationUnit) };


        // seller Field Functions 
        bool hasSeller() const { return this->seller_ != nullptr;};
        void deleteSeller() { this->seller_ = nullptr;};
        inline string getSeller() const { DARABONBA_PTR_GET_DEFAULT(seller_, "") };
        inline InstanceList& setSeller(string seller) { DARABONBA_PTR_SET_VALUE(seller_, seller) };


        // sellerId Field Functions 
        bool hasSellerId() const { return this->sellerId_ != nullptr;};
        void deleteSellerId() { this->sellerId_ = nullptr;};
        inline int64_t getSellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
        inline InstanceList& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stopTime Field Functions 
        bool hasStopTime() const { return this->stopTime_ != nullptr;};
        void deleteStopTime() { this->stopTime_ = nullptr;};
        inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
        inline InstanceList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


        // subStatus Field Functions 
        bool hasSubStatus() const { return this->subStatus_ != nullptr;};
        void deleteSubStatus() { this->subStatus_ = nullptr;};
        inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
        inline InstanceList& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


        // subscriptionType Field Functions 
        bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
        void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
        inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
        inline InstanceList& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


      protected:
        // The time when the specified instance was created.
        shared_ptr<string> createTime_ {};
        // The time when the instance was expired.
        shared_ptr<string> endTime_ {};
        // The time when the specified instance was expected to be released.
        shared_ptr<string> expectedReleaseTime_ {};
        // The ID of the instance.
        shared_ptr<string> instanceID_ {};
        // The ID of the instance owner.
        shared_ptr<int64_t> ownerId_ {};
        // The code of the service.
        shared_ptr<string> productCode_ {};
        // The type of the service.
        shared_ptr<string> productType_ {};
        // The ID of the region in which the instance resides.
        shared_ptr<string> region_ {};
        // The time when the instance was released.
        shared_ptr<string> releaseTime_ {};
        // The renewal status of the specified instance. Valid values:
        // 
        // *   AutoRenewal: The instance is automatically renewed.
        // *   ManualRenewal: The instance is manually renewed.
        // *   NotRenewal: The instance is not renewed.
        shared_ptr<string> renewStatus_ {};
        // The number of auto-renewal cycles.
        shared_ptr<int32_t> renewalDuration_ {};
        // The unit of the auto-renewal cycle. Valid values:
        // 
        // *   M: month
        // *   Y: year
        shared_ptr<string> renewalDurationUnit_ {};
        // The seller.
        shared_ptr<string> seller_ {};
        // The ID of the seller.
        shared_ptr<int64_t> sellerId_ {};
        // The status of the instance.
        shared_ptr<string> status_ {};
        // The time when the specified instance was suspended.
        shared_ptr<string> stopTime_ {};
        // The sub-status of the specified instance.
        shared_ptr<string> subStatus_ {};
        // The billing method. Valid values:
        // 
        // *   Subscription: subscription
        // *   PayAsYouGo: pay-as-you-go
        shared_ptr<string> subscriptionType_ {};
      };

      virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // instanceList Field Functions 
      bool hasInstanceList() const { return this->instanceList_ != nullptr;};
      void deleteInstanceList() { this->instanceList_ = nullptr;};
      inline const vector<Data::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<Data::InstanceList>) };
      inline vector<Data::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<Data::InstanceList>) };
      inline Data& setInstanceList(const vector<Data::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
      inline Data& setInstanceList(vector<Data::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The instances returned.
      shared_ptr<vector<Data::InstanceList>> instanceList_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAvailableInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAvailableInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAvailableInstancesResponseBody::Data) };
    inline QueryAvailableInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAvailableInstancesResponseBody::Data) };
    inline QueryAvailableInstancesResponseBody& setData(const QueryAvailableInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAvailableInstancesResponseBody& setData(QueryAvailableInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAvailableInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAvailableInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAvailableInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryAvailableInstancesResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
