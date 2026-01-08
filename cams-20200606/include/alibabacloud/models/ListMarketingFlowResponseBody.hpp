// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMARKETINGFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMARKETINGFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListMarketingFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMarketingFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMarketingFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMarketingFlowResponseBody() = default ;
    ListMarketingFlowResponseBody(const ListMarketingFlowResponseBody &) = default ;
    ListMarketingFlowResponseBody(ListMarketingFlowResponseBody &&) = default ;
    ListMarketingFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMarketingFlowResponseBody() = default ;
    ListMarketingFlowResponseBody& operator=(const ListMarketingFlowResponseBody &) = default ;
    ListMarketingFlowResponseBody& operator=(ListMarketingFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
        DARABONBA_PTR_TO_JSON(ActivityDesc, activityDesc_);
        DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
        DARABONBA_PTR_TO_JSON(ActivityStatus, activityStatus_);
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_ANY_TO_JSON(BizExtend, bizExtend_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(ExecutionType, executionType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModifier, gmtModifier_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ParamFlag, paramFlag_);
        DARABONBA_ANY_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(RelatedFlowCode, relatedFlowCode_);
        DARABONBA_PTR_TO_JSON(RelatedFlowName, relatedFlowName_);
        DARABONBA_PTR_TO_JSON(RelatedGroupId, relatedGroupId_);
        DARABONBA_PTR_TO_JSON(RelatedGroupName, relatedGroupName_);
        DARABONBA_PTR_TO_JSON(SpecificTime, specificTime_);
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        DARABONBA_PTR_TO_JSON(TenantCode, tenantCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
        DARABONBA_PTR_FROM_JSON(ActivityDesc, activityDesc_);
        DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
        DARABONBA_PTR_FROM_JSON(ActivityStatus, activityStatus_);
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_ANY_FROM_JSON(BizExtend, bizExtend_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(ExecutionType, executionType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModifier, gmtModifier_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ParamFlag, paramFlag_);
        DARABONBA_ANY_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(RelatedFlowCode, relatedFlowCode_);
        DARABONBA_PTR_FROM_JSON(RelatedFlowName, relatedFlowName_);
        DARABONBA_PTR_FROM_JSON(RelatedGroupId, relatedGroupId_);
        DARABONBA_PTR_FROM_JSON(RelatedGroupName, relatedGroupName_);
        DARABONBA_PTR_FROM_JSON(SpecificTime, specificTime_);
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        DARABONBA_PTR_FROM_JSON(TenantCode, tenantCode_);
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
      virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->activityDesc_ == nullptr && this->activityName_ == nullptr && this->activityStatus_ == nullptr && this->bizCode_ == nullptr && this->bizExtend_ == nullptr
        && this->cronExpression_ == nullptr && this->endDate_ == nullptr && this->executionType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModifier_ == nullptr
        && this->id_ == nullptr && this->paramFlag_ == nullptr && this->params_ == nullptr && this->relatedFlowCode_ == nullptr && this->relatedFlowName_ == nullptr
        && this->relatedGroupId_ == nullptr && this->relatedGroupName_ == nullptr && this->specificTime_ == nullptr && this->startDate_ == nullptr && this->tenantCode_ == nullptr; };
      // activityCode Field Functions 
      bool hasActivityCode() const { return this->activityCode_ != nullptr;};
      void deleteActivityCode() { this->activityCode_ = nullptr;};
      inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
      inline Data& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


      // activityDesc Field Functions 
      bool hasActivityDesc() const { return this->activityDesc_ != nullptr;};
      void deleteActivityDesc() { this->activityDesc_ = nullptr;};
      inline string getActivityDesc() const { DARABONBA_PTR_GET_DEFAULT(activityDesc_, "") };
      inline Data& setActivityDesc(string activityDesc) { DARABONBA_PTR_SET_VALUE(activityDesc_, activityDesc) };


      // activityName Field Functions 
      bool hasActivityName() const { return this->activityName_ != nullptr;};
      void deleteActivityName() { this->activityName_ = nullptr;};
      inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
      inline Data& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


      // activityStatus Field Functions 
      bool hasActivityStatus() const { return this->activityStatus_ != nullptr;};
      void deleteActivityStatus() { this->activityStatus_ = nullptr;};
      inline string getActivityStatus() const { DARABONBA_PTR_GET_DEFAULT(activityStatus_, "") };
      inline Data& setActivityStatus(string activityStatus) { DARABONBA_PTR_SET_VALUE(activityStatus_, activityStatus) };


      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline Data& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // bizExtend Field Functions 
      bool hasBizExtend() const { return this->bizExtend_ != nullptr;};
      void deleteBizExtend() { this->bizExtend_ = nullptr;};
      inline       const Darabonba::Json & getBizExtend() const { DARABONBA_GET(bizExtend_) };
      Darabonba::Json & getBizExtend() { DARABONBA_GET(bizExtend_) };
      inline Data& setBizExtend(const Darabonba::Json & bizExtend) { DARABONBA_SET_VALUE(bizExtend_, bizExtend) };
      inline Data& setBizExtend(Darabonba::Json && bizExtend) { DARABONBA_SET_RVALUE(bizExtend_, bizExtend) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Data& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // executionType Field Functions 
      bool hasExecutionType() const { return this->executionType_ != nullptr;};
      void deleteExecutionType() { this->executionType_ = nullptr;};
      inline string getExecutionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
      inline Data& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModifier Field Functions 
      bool hasGmtModifier() const { return this->gmtModifier_ != nullptr;};
      void deleteGmtModifier() { this->gmtModifier_ = nullptr;};
      inline string getGmtModifier() const { DARABONBA_PTR_GET_DEFAULT(gmtModifier_, "") };
      inline Data& setGmtModifier(string gmtModifier) { DARABONBA_PTR_SET_VALUE(gmtModifier_, gmtModifier) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // paramFlag Field Functions 
      bool hasParamFlag() const { return this->paramFlag_ != nullptr;};
      void deleteParamFlag() { this->paramFlag_ = nullptr;};
      inline string getParamFlag() const { DARABONBA_PTR_GET_DEFAULT(paramFlag_, "") };
      inline Data& setParamFlag(string paramFlag) { DARABONBA_PTR_SET_VALUE(paramFlag_, paramFlag) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline       const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
      Darabonba::Json & getParams() { DARABONBA_GET(params_) };
      inline Data& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
      inline Data& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


      // relatedFlowCode Field Functions 
      bool hasRelatedFlowCode() const { return this->relatedFlowCode_ != nullptr;};
      void deleteRelatedFlowCode() { this->relatedFlowCode_ = nullptr;};
      inline string getRelatedFlowCode() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowCode_, "") };
      inline Data& setRelatedFlowCode(string relatedFlowCode) { DARABONBA_PTR_SET_VALUE(relatedFlowCode_, relatedFlowCode) };


      // relatedFlowName Field Functions 
      bool hasRelatedFlowName() const { return this->relatedFlowName_ != nullptr;};
      void deleteRelatedFlowName() { this->relatedFlowName_ = nullptr;};
      inline string getRelatedFlowName() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowName_, "") };
      inline Data& setRelatedFlowName(string relatedFlowName) { DARABONBA_PTR_SET_VALUE(relatedFlowName_, relatedFlowName) };


      // relatedGroupId Field Functions 
      bool hasRelatedGroupId() const { return this->relatedGroupId_ != nullptr;};
      void deleteRelatedGroupId() { this->relatedGroupId_ = nullptr;};
      inline string getRelatedGroupId() const { DARABONBA_PTR_GET_DEFAULT(relatedGroupId_, "") };
      inline Data& setRelatedGroupId(string relatedGroupId) { DARABONBA_PTR_SET_VALUE(relatedGroupId_, relatedGroupId) };


      // relatedGroupName Field Functions 
      bool hasRelatedGroupName() const { return this->relatedGroupName_ != nullptr;};
      void deleteRelatedGroupName() { this->relatedGroupName_ = nullptr;};
      inline string getRelatedGroupName() const { DARABONBA_PTR_GET_DEFAULT(relatedGroupName_, "") };
      inline Data& setRelatedGroupName(string relatedGroupName) { DARABONBA_PTR_SET_VALUE(relatedGroupName_, relatedGroupName) };


      // specificTime Field Functions 
      bool hasSpecificTime() const { return this->specificTime_ != nullptr;};
      void deleteSpecificTime() { this->specificTime_ = nullptr;};
      inline string getSpecificTime() const { DARABONBA_PTR_GET_DEFAULT(specificTime_, "") };
      inline Data& setSpecificTime(string specificTime) { DARABONBA_PTR_SET_VALUE(specificTime_, specificTime) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Data& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // tenantCode Field Functions 
      bool hasTenantCode() const { return this->tenantCode_ != nullptr;};
      void deleteTenantCode() { this->tenantCode_ = nullptr;};
      inline string getTenantCode() const { DARABONBA_PTR_GET_DEFAULT(tenantCode_, "") };
      inline Data& setTenantCode(string tenantCode) { DARABONBA_PTR_SET_VALUE(tenantCode_, tenantCode) };


    protected:
      shared_ptr<string> activityCode_ {};
      shared_ptr<string> activityDesc_ {};
      shared_ptr<string> activityName_ {};
      shared_ptr<string> activityStatus_ {};
      shared_ptr<string> bizCode_ {};
      Darabonba::Json bizExtend_ {};
      shared_ptr<string> cronExpression_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<string> executionType_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModifier_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> paramFlag_ {};
      Darabonba::Json params_ {};
      shared_ptr<string> relatedFlowCode_ {};
      shared_ptr<string> relatedFlowName_ {};
      shared_ptr<string> relatedGroupId_ {};
      shared_ptr<string> relatedGroupName_ {};
      shared_ptr<string> specificTime_ {};
      shared_ptr<string> startDate_ {};
      shared_ptr<string> tenantCode_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListMarketingFlowResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMarketingFlowResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMarketingFlowResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMarketingFlowResponseBody::Data>) };
    inline vector<ListMarketingFlowResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMarketingFlowResponseBody::Data>) };
    inline ListMarketingFlowResponseBody& setData(const vector<ListMarketingFlowResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMarketingFlowResponseBody& setData(vector<ListMarketingFlowResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMarketingFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMarketingFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMarketingFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMarketingFlowResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListMarketingFlowResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
