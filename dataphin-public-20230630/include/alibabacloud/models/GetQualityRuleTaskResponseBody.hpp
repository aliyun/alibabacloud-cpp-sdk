// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityRuleTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTaskInfo, ruleTaskInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTaskInfo, ruleTaskInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityRuleTaskResponseBody() = default ;
    GetQualityRuleTaskResponseBody(const GetQualityRuleTaskResponseBody &) = default ;
    GetQualityRuleTaskResponseBody(GetQualityRuleTaskResponseBody &&) = default ;
    GetQualityRuleTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleTaskResponseBody() = default ;
    GetQualityRuleTaskResponseBody& operator=(const GetQualityRuleTaskResponseBody &) = default ;
    GetQualityRuleTaskResponseBody& operator=(GetQualityRuleTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleTaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleTaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(BizDateFormat, bizDateFormat_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(ValidateObjectName, validateObjectName_);
        DARABONBA_PTR_TO_JSON(ValidateObjectType, validateObjectType_);
        DARABONBA_PTR_TO_JSON(ValidatePartition, validatePartition_);
        DARABONBA_PTR_TO_JSON(ValidateSuccess, validateSuccess_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
        DARABONBA_PTR_TO_JSON(WatchTaskId, watchTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, RuleTaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(BizDateFormat, bizDateFormat_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(ValidateObjectName, validateObjectName_);
        DARABONBA_PTR_FROM_JSON(ValidateObjectType, validateObjectType_);
        DARABONBA_PTR_FROM_JSON(ValidatePartition, validatePartition_);
        DARABONBA_PTR_FROM_JSON(ValidateSuccess, validateSuccess_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
        DARABONBA_PTR_FROM_JSON(WatchTaskId, watchTaskId_);
      };
      RuleTaskInfo() = default ;
      RuleTaskInfo(const RuleTaskInfo &) = default ;
      RuleTaskInfo(RuleTaskInfo &&) = default ;
      RuleTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleTaskInfo() = default ;
      RuleTaskInfo& operator=(const RuleTaskInfo &) = default ;
      RuleTaskInfo& operator=(RuleTaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->bizDateFormat_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr
        && this->modifier_ == nullptr && this->modifyTime_ == nullptr && this->ruleId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->templateId_ == nullptr && this->validateObjectName_ == nullptr && this->validateObjectType_ == nullptr && this->validatePartition_ == nullptr && this->validateSuccess_ == nullptr
        && this->watchId_ == nullptr && this->watchTaskId_ == nullptr; };
      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline RuleTaskInfo& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // bizDateFormat Field Functions 
      bool hasBizDateFormat() const { return this->bizDateFormat_ != nullptr;};
      void deleteBizDateFormat() { this->bizDateFormat_ = nullptr;};
      inline string getBizDateFormat() const { DARABONBA_PTR_GET_DEFAULT(bizDateFormat_, "") };
      inline RuleTaskInfo& setBizDateFormat(string bizDateFormat) { DARABONBA_PTR_SET_VALUE(bizDateFormat_, bizDateFormat) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RuleTaskInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline RuleTaskInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline RuleTaskInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RuleTaskInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline RuleTaskInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline RuleTaskInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline RuleTaskInfo& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RuleTaskInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RuleTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline RuleTaskInfo& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // validateObjectName Field Functions 
      bool hasValidateObjectName() const { return this->validateObjectName_ != nullptr;};
      void deleteValidateObjectName() { this->validateObjectName_ = nullptr;};
      inline string getValidateObjectName() const { DARABONBA_PTR_GET_DEFAULT(validateObjectName_, "") };
      inline RuleTaskInfo& setValidateObjectName(string validateObjectName) { DARABONBA_PTR_SET_VALUE(validateObjectName_, validateObjectName) };


      // validateObjectType Field Functions 
      bool hasValidateObjectType() const { return this->validateObjectType_ != nullptr;};
      void deleteValidateObjectType() { this->validateObjectType_ = nullptr;};
      inline string getValidateObjectType() const { DARABONBA_PTR_GET_DEFAULT(validateObjectType_, "") };
      inline RuleTaskInfo& setValidateObjectType(string validateObjectType) { DARABONBA_PTR_SET_VALUE(validateObjectType_, validateObjectType) };


      // validatePartition Field Functions 
      bool hasValidatePartition() const { return this->validatePartition_ != nullptr;};
      void deleteValidatePartition() { this->validatePartition_ = nullptr;};
      inline string getValidatePartition() const { DARABONBA_PTR_GET_DEFAULT(validatePartition_, "") };
      inline RuleTaskInfo& setValidatePartition(string validatePartition) { DARABONBA_PTR_SET_VALUE(validatePartition_, validatePartition) };


      // validateSuccess Field Functions 
      bool hasValidateSuccess() const { return this->validateSuccess_ != nullptr;};
      void deleteValidateSuccess() { this->validateSuccess_ = nullptr;};
      inline bool getValidateSuccess() const { DARABONBA_PTR_GET_DEFAULT(validateSuccess_, false) };
      inline RuleTaskInfo& setValidateSuccess(bool validateSuccess) { DARABONBA_PTR_SET_VALUE(validateSuccess_, validateSuccess) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline RuleTaskInfo& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


      // watchTaskId Field Functions 
      bool hasWatchTaskId() const { return this->watchTaskId_ != nullptr;};
      void deleteWatchTaskId() { this->watchTaskId_ = nullptr;};
      inline int64_t getWatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(watchTaskId_, 0L) };
      inline RuleTaskInfo& setWatchTaskId(int64_t watchTaskId) { DARABONBA_PTR_SET_VALUE(watchTaskId_, watchTaskId) };


    protected:
      shared_ptr<string> bizDate_ {};
      shared_ptr<string> bizDateFormat_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> templateId_ {};
      shared_ptr<string> validateObjectName_ {};
      shared_ptr<string> validateObjectType_ {};
      shared_ptr<string> validatePartition_ {};
      shared_ptr<bool> validateSuccess_ {};
      shared_ptr<int64_t> watchId_ {};
      shared_ptr<int64_t> watchTaskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->ruleTaskInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityRuleTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityRuleTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityRuleTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityRuleTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTaskInfo Field Functions 
    bool hasRuleTaskInfo() const { return this->ruleTaskInfo_ != nullptr;};
    void deleteRuleTaskInfo() { this->ruleTaskInfo_ = nullptr;};
    inline const GetQualityRuleTaskResponseBody::RuleTaskInfo & getRuleTaskInfo() const { DARABONBA_PTR_GET_CONST(ruleTaskInfo_, GetQualityRuleTaskResponseBody::RuleTaskInfo) };
    inline GetQualityRuleTaskResponseBody::RuleTaskInfo getRuleTaskInfo() { DARABONBA_PTR_GET(ruleTaskInfo_, GetQualityRuleTaskResponseBody::RuleTaskInfo) };
    inline GetQualityRuleTaskResponseBody& setRuleTaskInfo(const GetQualityRuleTaskResponseBody::RuleTaskInfo & ruleTaskInfo) { DARABONBA_PTR_SET_VALUE(ruleTaskInfo_, ruleTaskInfo) };
    inline GetQualityRuleTaskResponseBody& setRuleTaskInfo(GetQualityRuleTaskResponseBody::RuleTaskInfo && ruleTaskInfo) { DARABONBA_PTR_SET_RVALUE(ruleTaskInfo_, ruleTaskInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityRuleTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetQualityRuleTaskResponseBody::RuleTaskInfo> ruleTaskInfo_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
