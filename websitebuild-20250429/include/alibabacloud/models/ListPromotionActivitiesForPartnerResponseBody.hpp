// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMOTIONACTIVITIESFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMOTIONACTIVITIESFORPARTNERRESPONSEBODY_HPP_
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
  class ListPromotionActivitiesForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromotionActivitiesForPartnerResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListPromotionActivitiesForPartnerResponseBody& obj) { 
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
    ListPromotionActivitiesForPartnerResponseBody() = default ;
    ListPromotionActivitiesForPartnerResponseBody(const ListPromotionActivitiesForPartnerResponseBody &) = default ;
    ListPromotionActivitiesForPartnerResponseBody(ListPromotionActivitiesForPartnerResponseBody &&) = default ;
    ListPromotionActivitiesForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromotionActivitiesForPartnerResponseBody() = default ;
    ListPromotionActivitiesForPartnerResponseBody& operator=(const ListPromotionActivitiesForPartnerResponseBody &) = default ;
    ListPromotionActivitiesForPartnerResponseBody& operator=(ListPromotionActivitiesForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Activities, activities_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Activities, activities_);
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
      class Activities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Activities& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
          DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
          DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
          DARABONBA_PTR_TO_JSON(ConsumedQuota, consumedQuota_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
          DARABONBA_PTR_TO_JSON(EligibilityConfig, eligibilityConfig_);
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(OfferConfig, offerConfig_);
          DARABONBA_PTR_TO_JSON(OfferConfigSummary, offerConfigSummary_);
          DARABONBA_PTR_TO_JSON(RemainingQuota, remainingQuota_);
          DARABONBA_PTR_TO_JSON(StartDate, startDate_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
          DARABONBA_PTR_TO_JSON(TouchpointConfig, touchpointConfig_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
          DARABONBA_PTR_TO_JSON(WarningThreshold, warningThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, Activities& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
          DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
          DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
          DARABONBA_PTR_FROM_JSON(ConsumedQuota, consumedQuota_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
          DARABONBA_PTR_FROM_JSON(EligibilityConfig, eligibilityConfig_);
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(OfferConfig, offerConfig_);
          DARABONBA_PTR_FROM_JSON(OfferConfigSummary, offerConfigSummary_);
          DARABONBA_PTR_FROM_JSON(RemainingQuota, remainingQuota_);
          DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
          DARABONBA_PTR_FROM_JSON(TouchpointConfig, touchpointConfig_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
          DARABONBA_PTR_FROM_JSON(WarningThreshold, warningThreshold_);
        };
        Activities() = default ;
        Activities(const Activities &) = default ;
        Activities(Activities &&) = default ;
        Activities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Activities() = default ;
        Activities& operator=(const Activities &) = default ;
        Activities& operator=(Activities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->activityName_ == nullptr && this->activityType_ == nullptr && this->consumedQuota_ == nullptr && this->createTime_ == nullptr && this->createdBy_ == nullptr
        && this->eligibilityConfig_ == nullptr && this->endDate_ == nullptr && this->offerConfig_ == nullptr && this->offerConfigSummary_ == nullptr && this->remainingQuota_ == nullptr
        && this->startDate_ == nullptr && this->status_ == nullptr && this->totalQuota_ == nullptr && this->touchpointConfig_ == nullptr && this->updateTime_ == nullptr
        && this->updatedBy_ == nullptr && this->warningThreshold_ == nullptr; };
        // activityCode Field Functions 
        bool hasActivityCode() const { return this->activityCode_ != nullptr;};
        void deleteActivityCode() { this->activityCode_ = nullptr;};
        inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
        inline Activities& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


        // activityName Field Functions 
        bool hasActivityName() const { return this->activityName_ != nullptr;};
        void deleteActivityName() { this->activityName_ = nullptr;};
        inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
        inline Activities& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


        // activityType Field Functions 
        bool hasActivityType() const { return this->activityType_ != nullptr;};
        void deleteActivityType() { this->activityType_ = nullptr;};
        inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
        inline Activities& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


        // consumedQuota Field Functions 
        bool hasConsumedQuota() const { return this->consumedQuota_ != nullptr;};
        void deleteConsumedQuota() { this->consumedQuota_ = nullptr;};
        inline int64_t getConsumedQuota() const { DARABONBA_PTR_GET_DEFAULT(consumedQuota_, 0L) };
        inline Activities& setConsumedQuota(int64_t consumedQuota) { DARABONBA_PTR_SET_VALUE(consumedQuota_, consumedQuota) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Activities& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdBy Field Functions 
        bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
        void deleteCreatedBy() { this->createdBy_ = nullptr;};
        inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
        inline Activities& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


        // eligibilityConfig Field Functions 
        bool hasEligibilityConfig() const { return this->eligibilityConfig_ != nullptr;};
        void deleteEligibilityConfig() { this->eligibilityConfig_ = nullptr;};
        inline string getEligibilityConfig() const { DARABONBA_PTR_GET_DEFAULT(eligibilityConfig_, "") };
        inline Activities& setEligibilityConfig(string eligibilityConfig) { DARABONBA_PTR_SET_VALUE(eligibilityConfig_, eligibilityConfig) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline Activities& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // offerConfig Field Functions 
        bool hasOfferConfig() const { return this->offerConfig_ != nullptr;};
        void deleteOfferConfig() { this->offerConfig_ = nullptr;};
        inline string getOfferConfig() const { DARABONBA_PTR_GET_DEFAULT(offerConfig_, "") };
        inline Activities& setOfferConfig(string offerConfig) { DARABONBA_PTR_SET_VALUE(offerConfig_, offerConfig) };


        // offerConfigSummary Field Functions 
        bool hasOfferConfigSummary() const { return this->offerConfigSummary_ != nullptr;};
        void deleteOfferConfigSummary() { this->offerConfigSummary_ = nullptr;};
        inline string getOfferConfigSummary() const { DARABONBA_PTR_GET_DEFAULT(offerConfigSummary_, "") };
        inline Activities& setOfferConfigSummary(string offerConfigSummary) { DARABONBA_PTR_SET_VALUE(offerConfigSummary_, offerConfigSummary) };


        // remainingQuota Field Functions 
        bool hasRemainingQuota() const { return this->remainingQuota_ != nullptr;};
        void deleteRemainingQuota() { this->remainingQuota_ = nullptr;};
        inline int64_t getRemainingQuota() const { DARABONBA_PTR_GET_DEFAULT(remainingQuota_, 0L) };
        inline Activities& setRemainingQuota(int64_t remainingQuota) { DARABONBA_PTR_SET_VALUE(remainingQuota_, remainingQuota) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
        inline Activities& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Activities& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalQuota Field Functions 
        bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
        void deleteTotalQuota() { this->totalQuota_ = nullptr;};
        inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
        inline Activities& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


        // touchpointConfig Field Functions 
        bool hasTouchpointConfig() const { return this->touchpointConfig_ != nullptr;};
        void deleteTouchpointConfig() { this->touchpointConfig_ = nullptr;};
        inline string getTouchpointConfig() const { DARABONBA_PTR_GET_DEFAULT(touchpointConfig_, "") };
        inline Activities& setTouchpointConfig(string touchpointConfig) { DARABONBA_PTR_SET_VALUE(touchpointConfig_, touchpointConfig) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Activities& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updatedBy Field Functions 
        bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
        void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
        inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
        inline Activities& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


        // warningThreshold Field Functions 
        bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
        void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
        inline int32_t getWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, 0) };
        inline Activities& setWarningThreshold(int32_t warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


      protected:
        // The activity code.
        shared_ptr<string> activityCode_ {};
        // The activity name.
        shared_ptr<string> activityName_ {};
        // The activity type.
        shared_ptr<string> activityType_ {};
        // The consumed quota.
        shared_ptr<int64_t> consumedQuota_ {};
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The creator.
        shared_ptr<string> createdBy_ {};
        // The eligibility configuration (JSON).
        shared_ptr<string> eligibilityConfig_ {};
        // The end date.
        shared_ptr<string> endDate_ {};
        // The offer configuration (JSON).
        shared_ptr<string> offerConfig_ {};
        // The offer configuration summary.
        shared_ptr<string> offerConfigSummary_ {};
        // The remaining quota.
        shared_ptr<int64_t> remainingQuota_ {};
        // The start date.
        shared_ptr<string> startDate_ {};
        // The activity status.
        shared_ptr<string> status_ {};
        // The total quota.
        shared_ptr<int64_t> totalQuota_ {};
        // The touchpoint configuration (JSON).
        shared_ptr<string> touchpointConfig_ {};
        // The update time.
        shared_ptr<string> updateTime_ {};
        // The user who last updated the activity.
        shared_ptr<string> updatedBy_ {};
        // The warning threshold.
        shared_ptr<int32_t> warningThreshold_ {};
      };

      virtual bool empty() const override { return this->activities_ == nullptr
        && this->totalCount_ == nullptr; };
      // activities Field Functions 
      bool hasActivities() const { return this->activities_ != nullptr;};
      void deleteActivities() { this->activities_ = nullptr;};
      inline const vector<Module::Activities> & getActivities() const { DARABONBA_PTR_GET_CONST(activities_, vector<Module::Activities>) };
      inline vector<Module::Activities> getActivities() { DARABONBA_PTR_GET(activities_, vector<Module::Activities>) };
      inline Module& setActivities(const vector<Module::Activities> & activities) { DARABONBA_PTR_SET_VALUE(activities_, activities) };
      inline Module& setActivities(vector<Module::Activities> && activities) { DARABONBA_PTR_SET_RVALUE(activities_, activities) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Module& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of promotional activities.
      shared_ptr<vector<Module::Activities>> activities_ {};
      // The total count.
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
    inline ListPromotionActivitiesForPartnerResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListPromotionActivitiesForPartnerResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListPromotionActivitiesForPartnerResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListPromotionActivitiesForPartnerResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListPromotionActivitiesForPartnerResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListPromotionActivitiesForPartnerResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListPromotionActivitiesForPartnerResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPromotionActivitiesForPartnerResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListPromotionActivitiesForPartnerResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListPromotionActivitiesForPartnerResponseBody::Module) };
    inline ListPromotionActivitiesForPartnerResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListPromotionActivitiesForPartnerResponseBody::Module) };
    inline ListPromotionActivitiesForPartnerResponseBody& setModule(const ListPromotionActivitiesForPartnerResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListPromotionActivitiesForPartnerResponseBody& setModule(ListPromotionActivitiesForPartnerResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPromotionActivitiesForPartnerResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPromotionActivitiesForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListPromotionActivitiesForPartnerResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListPromotionActivitiesForPartnerResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListPromotionActivitiesForPartnerResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The access denied detail.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic message.
    shared_ptr<string> dynamicMessage_ {};
    // The error arguments.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The response data.
    shared_ptr<ListPromotionActivitiesForPartnerResponseBody::Module> module_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The root error message.
    shared_ptr<string> rootErrorMsg_ {};
    // Indicates whether the request is processed synchronously.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
