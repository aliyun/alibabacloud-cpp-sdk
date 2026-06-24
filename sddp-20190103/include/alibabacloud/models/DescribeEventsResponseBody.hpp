// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody(DescribeEventsResponseBody &&) = default ;
    DescribeEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody& operator=(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody& operator=(DescribeEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_TO_JSON(Backed, backed_);
        DARABONBA_PTR_TO_JSON(DealDisplayName, dealDisplayName_);
        DARABONBA_PTR_TO_JSON(DealLoginName, dealLoginName_);
        DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
        DARABONBA_PTR_TO_JSON(DealUserId, dealUserId_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LoginName, loginName_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusName, statusName_);
        DARABONBA_PTR_TO_JSON(SubTypeCode, subTypeCode_);
        DARABONBA_PTR_TO_JSON(SubTypeName, subTypeName_);
        DARABONBA_PTR_TO_JSON(TargetProductCode, targetProductCode_);
        DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_FROM_JSON(Backed, backed_);
        DARABONBA_PTR_FROM_JSON(DealDisplayName, dealDisplayName_);
        DARABONBA_PTR_FROM_JSON(DealLoginName, dealLoginName_);
        DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
        DARABONBA_PTR_FROM_JSON(DealUserId, dealUserId_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
        DARABONBA_PTR_FROM_JSON(SubTypeCode, subTypeCode_);
        DARABONBA_PTR_FROM_JSON(SubTypeName, subTypeName_);
        DARABONBA_PTR_FROM_JSON(TargetProductCode, targetProductCode_);
        DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertTime_ == nullptr
        && this->backed_ == nullptr && this->dealDisplayName_ == nullptr && this->dealLoginName_ == nullptr && this->dealTime_ == nullptr && this->dealUserId_ == nullptr
        && this->displayName_ == nullptr && this->eventTime_ == nullptr && this->id_ == nullptr && this->loginName_ == nullptr && this->productCode_ == nullptr
        && this->status_ == nullptr && this->statusName_ == nullptr && this->subTypeCode_ == nullptr && this->subTypeName_ == nullptr && this->targetProductCode_ == nullptr
        && this->typeCode_ == nullptr && this->typeName_ == nullptr && this->userId_ == nullptr && this->warnLevel_ == nullptr; };
      // alertTime Field Functions 
      bool hasAlertTime() const { return this->alertTime_ != nullptr;};
      void deleteAlertTime() { this->alertTime_ = nullptr;};
      inline int64_t getAlertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
      inline Items& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


      // backed Field Functions 
      bool hasBacked() const { return this->backed_ != nullptr;};
      void deleteBacked() { this->backed_ = nullptr;};
      inline bool getBacked() const { DARABONBA_PTR_GET_DEFAULT(backed_, false) };
      inline Items& setBacked(bool backed) { DARABONBA_PTR_SET_VALUE(backed_, backed) };


      // dealDisplayName Field Functions 
      bool hasDealDisplayName() const { return this->dealDisplayName_ != nullptr;};
      void deleteDealDisplayName() { this->dealDisplayName_ = nullptr;};
      inline string getDealDisplayName() const { DARABONBA_PTR_GET_DEFAULT(dealDisplayName_, "") };
      inline Items& setDealDisplayName(string dealDisplayName) { DARABONBA_PTR_SET_VALUE(dealDisplayName_, dealDisplayName) };


      // dealLoginName Field Functions 
      bool hasDealLoginName() const { return this->dealLoginName_ != nullptr;};
      void deleteDealLoginName() { this->dealLoginName_ = nullptr;};
      inline string getDealLoginName() const { DARABONBA_PTR_GET_DEFAULT(dealLoginName_, "") };
      inline Items& setDealLoginName(string dealLoginName) { DARABONBA_PTR_SET_VALUE(dealLoginName_, dealLoginName) };


      // dealTime Field Functions 
      bool hasDealTime() const { return this->dealTime_ != nullptr;};
      void deleteDealTime() { this->dealTime_ = nullptr;};
      inline int64_t getDealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
      inline Items& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


      // dealUserId Field Functions 
      bool hasDealUserId() const { return this->dealUserId_ != nullptr;};
      void deleteDealUserId() { this->dealUserId_ = nullptr;};
      inline int64_t getDealUserId() const { DARABONBA_PTR_GET_DEFAULT(dealUserId_, 0L) };
      inline Items& setDealUserId(int64_t dealUserId) { DARABONBA_PTR_SET_VALUE(dealUserId_, dealUserId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
      inline Items& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // loginName Field Functions 
      bool hasLoginName() const { return this->loginName_ != nullptr;};
      void deleteLoginName() { this->loginName_ = nullptr;};
      inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
      inline Items& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusName Field Functions 
      bool hasStatusName() const { return this->statusName_ != nullptr;};
      void deleteStatusName() { this->statusName_ = nullptr;};
      inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
      inline Items& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


      // subTypeCode Field Functions 
      bool hasSubTypeCode() const { return this->subTypeCode_ != nullptr;};
      void deleteSubTypeCode() { this->subTypeCode_ = nullptr;};
      inline string getSubTypeCode() const { DARABONBA_PTR_GET_DEFAULT(subTypeCode_, "") };
      inline Items& setSubTypeCode(string subTypeCode) { DARABONBA_PTR_SET_VALUE(subTypeCode_, subTypeCode) };


      // subTypeName Field Functions 
      bool hasSubTypeName() const { return this->subTypeName_ != nullptr;};
      void deleteSubTypeName() { this->subTypeName_ = nullptr;};
      inline string getSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(subTypeName_, "") };
      inline Items& setSubTypeName(string subTypeName) { DARABONBA_PTR_SET_VALUE(subTypeName_, subTypeName) };


      // targetProductCode Field Functions 
      bool hasTargetProductCode() const { return this->targetProductCode_ != nullptr;};
      void deleteTargetProductCode() { this->targetProductCode_ = nullptr;};
      inline string getTargetProductCode() const { DARABONBA_PTR_GET_DEFAULT(targetProductCode_, "") };
      inline Items& setTargetProductCode(string targetProductCode) { DARABONBA_PTR_SET_VALUE(targetProductCode_, targetProductCode) };


      // typeCode Field Functions 
      bool hasTypeCode() const { return this->typeCode_ != nullptr;};
      void deleteTypeCode() { this->typeCode_ = nullptr;};
      inline string getTypeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
      inline Items& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline Items& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Items& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // warnLevel Field Functions 
      bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
      void deleteWarnLevel() { this->warnLevel_ = nullptr;};
      inline int32_t getWarnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, 0) };
      inline Items& setWarnLevel(int32_t warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


    protected:
      // The time when an alert was generated for the anomalous activity. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> alertTime_ {};
      // Indicates whether enhanced detection is enabled for the anomalous activity. Enhanced detection improves detection accuracy and the alert reporting rate.
      // 
      // - true: Enhanced detection is enabled.
      // 
      // - false: Enhanced detection is disabled.
      shared_ptr<bool> backed_ {};
      // The display name of the account that handled the anomalous activity.
      shared_ptr<string> dealDisplayName_ {};
      // The logon name of the account that handled the anomalous activity.
      shared_ptr<string> dealLoginName_ {};
      // The time when the anomalous activity was handled. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> dealTime_ {};
      // The ID of the account that handled the anomalous activity.
      shared_ptr<int64_t> dealUserId_ {};
      // The display name of the account that performed the operation.
      shared_ptr<string> displayName_ {};
      // The time when the anomalous activity occurred. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> eventTime_ {};
      // The unique ID of the anomalous activity that is recorded in Data Security Center (DSC).
      shared_ptr<int64_t> id_ {};
      // The logon name of the account that performed the operation.
      shared_ptr<string> loginName_ {};
      // The service to which the anomalous activity belongs.
      shared_ptr<string> productCode_ {};
      // The processing status of the anomalous activity.
      // 
      // - 0: Unhandled.
      // 
      // - 1: Confirmed.
      // 
      // - 2: Dismissed.
      shared_ptr<int32_t> status_ {};
      // The name of the processing status.
      shared_ptr<string> statusName_ {};
      // The code of the child type of the anomalous activity.
      shared_ptr<string> subTypeCode_ {};
      // The name of the child type of the anomalous activity.
      shared_ptr<string> subTypeName_ {};
      // The destination service for the anomalous data flow event.
      shared_ptr<string> targetProductCode_ {};
      // The code of the parent type of the anomalous activity.
      shared_ptr<string> typeCode_ {};
      // The name of the parent type of the anomalous activity.
      shared_ptr<string> typeName_ {};
      // The ID of the account that performed the operation.
      shared_ptr<int64_t> userId_ {};
      // The risk level of the anomalous activity.
      // 
      // - **1**: Low.
      // 
      // - **2**: Medium.
      // 
      // - **3**: High.
      shared_ptr<int32_t> warnLevel_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEventsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeEventsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeEventsResponseBody::Items>) };
    inline vector<DescribeEventsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeEventsResponseBody::Items>) };
    inline DescribeEventsResponseBody& setItems(const vector<DescribeEventsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeEventsResponseBody& setItems(vector<DescribeEventsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // A list of anomalous activities.
    shared_ptr<vector<DescribeEventsResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
