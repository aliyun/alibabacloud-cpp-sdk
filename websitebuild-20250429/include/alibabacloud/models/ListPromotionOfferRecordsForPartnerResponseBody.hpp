// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMOTIONOFFERRECORDSFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMOTIONOFFERRECORDSFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListPromotionOfferRecordsForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromotionOfferRecordsForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromotionOfferRecordsForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    ListPromotionOfferRecordsForPartnerResponseBody() = default ;
    ListPromotionOfferRecordsForPartnerResponseBody(const ListPromotionOfferRecordsForPartnerResponseBody &) = default ;
    ListPromotionOfferRecordsForPartnerResponseBody(ListPromotionOfferRecordsForPartnerResponseBody &&) = default ;
    ListPromotionOfferRecordsForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromotionOfferRecordsForPartnerResponseBody() = default ;
    ListPromotionOfferRecordsForPartnerResponseBody& operator=(const ListPromotionOfferRecordsForPartnerResponseBody &) = default ;
    ListPromotionOfferRecordsForPartnerResponseBody& operator=(ListPromotionOfferRecordsForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
          DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
          DARABONBA_PTR_TO_JSON(EmployeeCode, employeeCode_);
          DARABONBA_PTR_TO_JSON(FailReason, failReason_);
          DARABONBA_PTR_TO_JSON(IssuanceTime, issuanceTime_);
          DARABONBA_PTR_TO_JSON(OfferSnapshot, offerSnapshot_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
          DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
          DARABONBA_PTR_FROM_JSON(EmployeeCode, employeeCode_);
          DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
          DARABONBA_PTR_FROM_JSON(IssuanceTime, issuanceTime_);
          DARABONBA_PTR_FROM_JSON(OfferSnapshot, offerSnapshot_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->activityName_ == nullptr && this->employeeCode_ == nullptr && this->failReason_ == nullptr && this->issuanceTime_ == nullptr && this->offerSnapshot_ == nullptr
        && this->recordId_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
        // activityCode Field Functions 
        bool hasActivityCode() const { return this->activityCode_ != nullptr;};
        void deleteActivityCode() { this->activityCode_ = nullptr;};
        inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
        inline Records& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


        // activityName Field Functions 
        bool hasActivityName() const { return this->activityName_ != nullptr;};
        void deleteActivityName() { this->activityName_ = nullptr;};
        inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
        inline Records& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


        // employeeCode Field Functions 
        bool hasEmployeeCode() const { return this->employeeCode_ != nullptr;};
        void deleteEmployeeCode() { this->employeeCode_ = nullptr;};
        inline string getEmployeeCode() const { DARABONBA_PTR_GET_DEFAULT(employeeCode_, "") };
        inline Records& setEmployeeCode(string employeeCode) { DARABONBA_PTR_SET_VALUE(employeeCode_, employeeCode) };


        // failReason Field Functions 
        bool hasFailReason() const { return this->failReason_ != nullptr;};
        void deleteFailReason() { this->failReason_ = nullptr;};
        inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
        inline Records& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


        // issuanceTime Field Functions 
        bool hasIssuanceTime() const { return this->issuanceTime_ != nullptr;};
        void deleteIssuanceTime() { this->issuanceTime_ = nullptr;};
        inline string getIssuanceTime() const { DARABONBA_PTR_GET_DEFAULT(issuanceTime_, "") };
        inline Records& setIssuanceTime(string issuanceTime) { DARABONBA_PTR_SET_VALUE(issuanceTime_, issuanceTime) };


        // offerSnapshot Field Functions 
        bool hasOfferSnapshot() const { return this->offerSnapshot_ != nullptr;};
        void deleteOfferSnapshot() { this->offerSnapshot_ = nullptr;};
        inline string getOfferSnapshot() const { DARABONBA_PTR_GET_DEFAULT(offerSnapshot_, "") };
        inline Records& setOfferSnapshot(string offerSnapshot) { DARABONBA_PTR_SET_VALUE(offerSnapshot_, offerSnapshot) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
        inline Records& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Records& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Records& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Records& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The activity code.
        shared_ptr<string> activityCode_ {};
        // The activity name.
        shared_ptr<string> activityName_ {};
        // The employee code.
        shared_ptr<string> employeeCode_ {};
        // The failure reason.
        shared_ptr<string> failReason_ {};
        // The issuance time.
        shared_ptr<string> issuanceTime_ {};
        // The benefit snapshot in JSON format.
        shared_ptr<string> offerSnapshot_ {};
        // The record ID.
        shared_ptr<string> recordId_ {};
        // The operation remark.
        shared_ptr<string> remark_ {};
        // The issuance status.
        shared_ptr<string> status_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->totalCount_ == nullptr; };
      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Module& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Module::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Module::Records>) };
      inline vector<Module::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Module::Records>) };
      inline Module& setRecords(const vector<Module::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Module& setRecords(vector<Module::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Module& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The list of issuance records.
      shared_ptr<vector<Module::Records>> records_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListPromotionOfferRecordsForPartnerResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListPromotionOfferRecordsForPartnerResponseBody::Module) };
    inline ListPromotionOfferRecordsForPartnerResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListPromotionOfferRecordsForPartnerResponseBody::Module) };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setModule(const ListPromotionOfferRecordsForPartnerResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setModule(ListPromotionOfferRecordsForPartnerResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListPromotionOfferRecordsForPartnerResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The detailed reason why access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether a retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name. The application with this name is queried.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message, which is used to replace the %s variable in the ErrMessage response parameter.
    shared_ptr<string> dynamicMessage_ {};
    // The error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The response data.
    shared_ptr<ListPromotionOfferRecordsForPartnerResponseBody::Module> module_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The error message.
    shared_ptr<string> rootErrorMsg_ {};
    // The reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
