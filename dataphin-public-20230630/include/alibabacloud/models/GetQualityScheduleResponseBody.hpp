// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QualityScheduleInfo, qualityScheduleInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QualityScheduleInfo, qualityScheduleInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityScheduleResponseBody() = default ;
    GetQualityScheduleResponseBody(const GetQualityScheduleResponseBody &) = default ;
    GetQualityScheduleResponseBody(GetQualityScheduleResponseBody &&) = default ;
    GetQualityScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityScheduleResponseBody() = default ;
    GetQualityScheduleResponseBody& operator=(const GetQualityScheduleResponseBody &) = default ;
    GetQualityScheduleResponseBody& operator=(GetQualityScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QualityScheduleInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QualityScheduleInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsRefByRule, isRefByRule_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
        DARABONBA_PTR_TO_JSON(PeriodScheduleIntervalType, periodScheduleIntervalType_);
        DARABONBA_PTR_TO_JSON(PeriodScheduleParamList, periodScheduleParamList_);
        DARABONBA_PTR_TO_JSON(StaticTaskTriggerType, staticTaskTriggerType_);
        DARABONBA_PTR_TO_JSON(TriggerNodeList, triggerNodeList_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(ValidatePartitionType, validatePartitionType_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, QualityScheduleInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsRefByRule, isRefByRule_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
        DARABONBA_PTR_FROM_JSON(PeriodScheduleIntervalType, periodScheduleIntervalType_);
        DARABONBA_PTR_FROM_JSON(PeriodScheduleParamList, periodScheduleParamList_);
        DARABONBA_PTR_FROM_JSON(StaticTaskTriggerType, staticTaskTriggerType_);
        DARABONBA_PTR_FROM_JSON(TriggerNodeList, triggerNodeList_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(ValidatePartitionType, validatePartitionType_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      QualityScheduleInfo() = default ;
      QualityScheduleInfo(const QualityScheduleInfo &) = default ;
      QualityScheduleInfo(QualityScheduleInfo &&) = default ;
      QualityScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QualityScheduleInfo() = default ;
      QualityScheduleInfo& operator=(const QualityScheduleInfo &) = default ;
      QualityScheduleInfo& operator=(QualityScheduleInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->cronExpression_ == nullptr && this->id_ == nullptr && this->isRefByRule_ == nullptr && this->modifier_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->partitionExpression_ == nullptr && this->partitionType_ == nullptr && this->periodScheduleIntervalType_ == nullptr
        && this->periodScheduleParamList_ == nullptr && this->staticTaskTriggerType_ == nullptr && this->triggerNodeList_ == nullptr && this->triggerType_ == nullptr && this->type_ == nullptr
        && this->validatePartitionType_ == nullptr && this->watchId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline QualityScheduleInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline QualityScheduleInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline QualityScheduleInfo& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline QualityScheduleInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isRefByRule Field Functions 
      bool hasIsRefByRule() const { return this->isRefByRule_ != nullptr;};
      void deleteIsRefByRule() { this->isRefByRule_ = nullptr;};
      inline bool getIsRefByRule() const { DARABONBA_PTR_GET_DEFAULT(isRefByRule_, false) };
      inline QualityScheduleInfo& setIsRefByRule(bool isRefByRule) { DARABONBA_PTR_SET_VALUE(isRefByRule_, isRefByRule) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline QualityScheduleInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline QualityScheduleInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QualityScheduleInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // partitionExpression Field Functions 
      bool hasPartitionExpression() const { return this->partitionExpression_ != nullptr;};
      void deletePartitionExpression() { this->partitionExpression_ = nullptr;};
      inline string getPartitionExpression() const { DARABONBA_PTR_GET_DEFAULT(partitionExpression_, "") };
      inline QualityScheduleInfo& setPartitionExpression(string partitionExpression) { DARABONBA_PTR_SET_VALUE(partitionExpression_, partitionExpression) };


      // partitionType Field Functions 
      bool hasPartitionType() const { return this->partitionType_ != nullptr;};
      void deletePartitionType() { this->partitionType_ = nullptr;};
      inline string getPartitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
      inline QualityScheduleInfo& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


      // periodScheduleIntervalType Field Functions 
      bool hasPeriodScheduleIntervalType() const { return this->periodScheduleIntervalType_ != nullptr;};
      void deletePeriodScheduleIntervalType() { this->periodScheduleIntervalType_ = nullptr;};
      inline string getPeriodScheduleIntervalType() const { DARABONBA_PTR_GET_DEFAULT(periodScheduleIntervalType_, "") };
      inline QualityScheduleInfo& setPeriodScheduleIntervalType(string periodScheduleIntervalType) { DARABONBA_PTR_SET_VALUE(periodScheduleIntervalType_, periodScheduleIntervalType) };


      // periodScheduleParamList Field Functions 
      bool hasPeriodScheduleParamList() const { return this->periodScheduleParamList_ != nullptr;};
      void deletePeriodScheduleParamList() { this->periodScheduleParamList_ = nullptr;};
      inline const vector<string> & getPeriodScheduleParamList() const { DARABONBA_PTR_GET_CONST(periodScheduleParamList_, vector<string>) };
      inline vector<string> getPeriodScheduleParamList() { DARABONBA_PTR_GET(periodScheduleParamList_, vector<string>) };
      inline QualityScheduleInfo& setPeriodScheduleParamList(const vector<string> & periodScheduleParamList) { DARABONBA_PTR_SET_VALUE(periodScheduleParamList_, periodScheduleParamList) };
      inline QualityScheduleInfo& setPeriodScheduleParamList(vector<string> && periodScheduleParamList) { DARABONBA_PTR_SET_RVALUE(periodScheduleParamList_, periodScheduleParamList) };


      // staticTaskTriggerType Field Functions 
      bool hasStaticTaskTriggerType() const { return this->staticTaskTriggerType_ != nullptr;};
      void deleteStaticTaskTriggerType() { this->staticTaskTriggerType_ = nullptr;};
      inline string getStaticTaskTriggerType() const { DARABONBA_PTR_GET_DEFAULT(staticTaskTriggerType_, "") };
      inline QualityScheduleInfo& setStaticTaskTriggerType(string staticTaskTriggerType) { DARABONBA_PTR_SET_VALUE(staticTaskTriggerType_, staticTaskTriggerType) };


      // triggerNodeList Field Functions 
      bool hasTriggerNodeList() const { return this->triggerNodeList_ != nullptr;};
      void deleteTriggerNodeList() { this->triggerNodeList_ = nullptr;};
      inline const vector<string> & getTriggerNodeList() const { DARABONBA_PTR_GET_CONST(triggerNodeList_, vector<string>) };
      inline vector<string> getTriggerNodeList() { DARABONBA_PTR_GET(triggerNodeList_, vector<string>) };
      inline QualityScheduleInfo& setTriggerNodeList(const vector<string> & triggerNodeList) { DARABONBA_PTR_SET_VALUE(triggerNodeList_, triggerNodeList) };
      inline QualityScheduleInfo& setTriggerNodeList(vector<string> && triggerNodeList) { DARABONBA_PTR_SET_RVALUE(triggerNodeList_, triggerNodeList) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline QualityScheduleInfo& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QualityScheduleInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // validatePartitionType Field Functions 
      bool hasValidatePartitionType() const { return this->validatePartitionType_ != nullptr;};
      void deleteValidatePartitionType() { this->validatePartitionType_ = nullptr;};
      inline string getValidatePartitionType() const { DARABONBA_PTR_GET_DEFAULT(validatePartitionType_, "") };
      inline QualityScheduleInfo& setValidatePartitionType(string validatePartitionType) { DARABONBA_PTR_SET_VALUE(validatePartitionType_, validatePartitionType) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline QualityScheduleInfo& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> cronExpression_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<bool> isRefByRule_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> partitionExpression_ {};
      shared_ptr<string> partitionType_ {};
      shared_ptr<string> periodScheduleIntervalType_ {};
      shared_ptr<vector<string>> periodScheduleParamList_ {};
      shared_ptr<string> staticTaskTriggerType_ {};
      shared_ptr<vector<string>> triggerNodeList_ {};
      shared_ptr<string> triggerType_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> validatePartitionType_ {};
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->qualityScheduleInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityScheduleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityScheduleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityScheduleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // qualityScheduleInfo Field Functions 
    bool hasQualityScheduleInfo() const { return this->qualityScheduleInfo_ != nullptr;};
    void deleteQualityScheduleInfo() { this->qualityScheduleInfo_ = nullptr;};
    inline const GetQualityScheduleResponseBody::QualityScheduleInfo & getQualityScheduleInfo() const { DARABONBA_PTR_GET_CONST(qualityScheduleInfo_, GetQualityScheduleResponseBody::QualityScheduleInfo) };
    inline GetQualityScheduleResponseBody::QualityScheduleInfo getQualityScheduleInfo() { DARABONBA_PTR_GET(qualityScheduleInfo_, GetQualityScheduleResponseBody::QualityScheduleInfo) };
    inline GetQualityScheduleResponseBody& setQualityScheduleInfo(const GetQualityScheduleResponseBody::QualityScheduleInfo & qualityScheduleInfo) { DARABONBA_PTR_SET_VALUE(qualityScheduleInfo_, qualityScheduleInfo) };
    inline GetQualityScheduleResponseBody& setQualityScheduleInfo(GetQualityScheduleResponseBody::QualityScheduleInfo && qualityScheduleInfo) { DARABONBA_PTR_SET_RVALUE(qualityScheduleInfo_, qualityScheduleInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityScheduleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetQualityScheduleResponseBody::QualityScheduleInfo> qualityScheduleInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
