// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYSCHEDULESBYWATCHIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYSCHEDULESBYWATCHIDRESPONSEBODY_HPP_
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
  class GetQualitySchedulesByWatchIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualitySchedulesByWatchIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QualityScheduleList, qualityScheduleList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualitySchedulesByWatchIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QualityScheduleList, qualityScheduleList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualitySchedulesByWatchIdResponseBody() = default ;
    GetQualitySchedulesByWatchIdResponseBody(const GetQualitySchedulesByWatchIdResponseBody &) = default ;
    GetQualitySchedulesByWatchIdResponseBody(GetQualitySchedulesByWatchIdResponseBody &&) = default ;
    GetQualitySchedulesByWatchIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualitySchedulesByWatchIdResponseBody() = default ;
    GetQualitySchedulesByWatchIdResponseBody& operator=(const GetQualitySchedulesByWatchIdResponseBody &) = default ;
    GetQualitySchedulesByWatchIdResponseBody& operator=(GetQualitySchedulesByWatchIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QualityScheduleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QualityScheduleList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, QualityScheduleList& obj) { 
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
      QualityScheduleList() = default ;
      QualityScheduleList(const QualityScheduleList &) = default ;
      QualityScheduleList(QualityScheduleList &&) = default ;
      QualityScheduleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QualityScheduleList() = default ;
      QualityScheduleList& operator=(const QualityScheduleList &) = default ;
      QualityScheduleList& operator=(QualityScheduleList &&) = default ;
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
      inline QualityScheduleList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline QualityScheduleList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline QualityScheduleList& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline QualityScheduleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isRefByRule Field Functions 
      bool hasIsRefByRule() const { return this->isRefByRule_ != nullptr;};
      void deleteIsRefByRule() { this->isRefByRule_ = nullptr;};
      inline bool getIsRefByRule() const { DARABONBA_PTR_GET_DEFAULT(isRefByRule_, false) };
      inline QualityScheduleList& setIsRefByRule(bool isRefByRule) { DARABONBA_PTR_SET_VALUE(isRefByRule_, isRefByRule) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline QualityScheduleList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline QualityScheduleList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QualityScheduleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // partitionExpression Field Functions 
      bool hasPartitionExpression() const { return this->partitionExpression_ != nullptr;};
      void deletePartitionExpression() { this->partitionExpression_ = nullptr;};
      inline string getPartitionExpression() const { DARABONBA_PTR_GET_DEFAULT(partitionExpression_, "") };
      inline QualityScheduleList& setPartitionExpression(string partitionExpression) { DARABONBA_PTR_SET_VALUE(partitionExpression_, partitionExpression) };


      // partitionType Field Functions 
      bool hasPartitionType() const { return this->partitionType_ != nullptr;};
      void deletePartitionType() { this->partitionType_ = nullptr;};
      inline string getPartitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
      inline QualityScheduleList& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


      // periodScheduleIntervalType Field Functions 
      bool hasPeriodScheduleIntervalType() const { return this->periodScheduleIntervalType_ != nullptr;};
      void deletePeriodScheduleIntervalType() { this->periodScheduleIntervalType_ = nullptr;};
      inline string getPeriodScheduleIntervalType() const { DARABONBA_PTR_GET_DEFAULT(periodScheduleIntervalType_, "") };
      inline QualityScheduleList& setPeriodScheduleIntervalType(string periodScheduleIntervalType) { DARABONBA_PTR_SET_VALUE(periodScheduleIntervalType_, periodScheduleIntervalType) };


      // periodScheduleParamList Field Functions 
      bool hasPeriodScheduleParamList() const { return this->periodScheduleParamList_ != nullptr;};
      void deletePeriodScheduleParamList() { this->periodScheduleParamList_ = nullptr;};
      inline const vector<string> & getPeriodScheduleParamList() const { DARABONBA_PTR_GET_CONST(periodScheduleParamList_, vector<string>) };
      inline vector<string> getPeriodScheduleParamList() { DARABONBA_PTR_GET(periodScheduleParamList_, vector<string>) };
      inline QualityScheduleList& setPeriodScheduleParamList(const vector<string> & periodScheduleParamList) { DARABONBA_PTR_SET_VALUE(periodScheduleParamList_, periodScheduleParamList) };
      inline QualityScheduleList& setPeriodScheduleParamList(vector<string> && periodScheduleParamList) { DARABONBA_PTR_SET_RVALUE(periodScheduleParamList_, periodScheduleParamList) };


      // staticTaskTriggerType Field Functions 
      bool hasStaticTaskTriggerType() const { return this->staticTaskTriggerType_ != nullptr;};
      void deleteStaticTaskTriggerType() { this->staticTaskTriggerType_ = nullptr;};
      inline string getStaticTaskTriggerType() const { DARABONBA_PTR_GET_DEFAULT(staticTaskTriggerType_, "") };
      inline QualityScheduleList& setStaticTaskTriggerType(string staticTaskTriggerType) { DARABONBA_PTR_SET_VALUE(staticTaskTriggerType_, staticTaskTriggerType) };


      // triggerNodeList Field Functions 
      bool hasTriggerNodeList() const { return this->triggerNodeList_ != nullptr;};
      void deleteTriggerNodeList() { this->triggerNodeList_ = nullptr;};
      inline const vector<string> & getTriggerNodeList() const { DARABONBA_PTR_GET_CONST(triggerNodeList_, vector<string>) };
      inline vector<string> getTriggerNodeList() { DARABONBA_PTR_GET(triggerNodeList_, vector<string>) };
      inline QualityScheduleList& setTriggerNodeList(const vector<string> & triggerNodeList) { DARABONBA_PTR_SET_VALUE(triggerNodeList_, triggerNodeList) };
      inline QualityScheduleList& setTriggerNodeList(vector<string> && triggerNodeList) { DARABONBA_PTR_SET_RVALUE(triggerNodeList_, triggerNodeList) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline QualityScheduleList& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QualityScheduleList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // validatePartitionType Field Functions 
      bool hasValidatePartitionType() const { return this->validatePartitionType_ != nullptr;};
      void deleteValidatePartitionType() { this->validatePartitionType_ = nullptr;};
      inline string getValidatePartitionType() const { DARABONBA_PTR_GET_DEFAULT(validatePartitionType_, "") };
      inline QualityScheduleList& setValidatePartitionType(string validatePartitionType) { DARABONBA_PTR_SET_VALUE(validatePartitionType_, validatePartitionType) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline QualityScheduleList& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


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
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->qualityScheduleList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualitySchedulesByWatchIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualitySchedulesByWatchIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualitySchedulesByWatchIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // qualityScheduleList Field Functions 
    bool hasQualityScheduleList() const { return this->qualityScheduleList_ != nullptr;};
    void deleteQualityScheduleList() { this->qualityScheduleList_ = nullptr;};
    inline const vector<GetQualitySchedulesByWatchIdResponseBody::QualityScheduleList> & getQualityScheduleList() const { DARABONBA_PTR_GET_CONST(qualityScheduleList_, vector<GetQualitySchedulesByWatchIdResponseBody::QualityScheduleList>) };
    inline vector<GetQualitySchedulesByWatchIdResponseBody::QualityScheduleList> getQualityScheduleList() { DARABONBA_PTR_GET(qualityScheduleList_, vector<GetQualitySchedulesByWatchIdResponseBody::QualityScheduleList>) };
    inline GetQualitySchedulesByWatchIdResponseBody& setQualityScheduleList(const vector<GetQualitySchedulesByWatchIdResponseBody::QualityScheduleList> & qualityScheduleList) { DARABONBA_PTR_SET_VALUE(qualityScheduleList_, qualityScheduleList) };
    inline GetQualitySchedulesByWatchIdResponseBody& setQualityScheduleList(vector<GetQualitySchedulesByWatchIdResponseBody::QualityScheduleList> && qualityScheduleList) { DARABONBA_PTR_SET_RVALUE(qualityScheduleList_, qualityScheduleList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualitySchedulesByWatchIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualitySchedulesByWatchIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<GetQualitySchedulesByWatchIdResponseBody::QualityScheduleList>> qualityScheduleList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
