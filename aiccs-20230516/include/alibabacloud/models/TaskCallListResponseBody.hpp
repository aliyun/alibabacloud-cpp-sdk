// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKCALLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TASKCALLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class TaskCallListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskCallListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, TaskCallListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    TaskCallListResponseBody() = default ;
    TaskCallListResponseBody(const TaskCallListResponseBody &) = default ;
    TaskCallListResponseBody(TaskCallListResponseBody &&) = default ;
    TaskCallListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskCallListResponseBody() = default ;
    TaskCallListResponseBody& operator=(const TaskCallListResponseBody &) = default ;
    TaskCallListResponseBody& operator=(TaskCallListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AddWx, addWx_);
          DARABONBA_PTR_TO_JSON(AddWxStatus, addWxStatus_);
          DARABONBA_PTR_TO_JSON(AgentExtension, agentExtension_);
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentSpeakingDuration, agentSpeakingDuration_);
          DARABONBA_PTR_TO_JSON(AgentSpeakingTime, agentSpeakingTime_);
          DARABONBA_PTR_TO_JSON(AgentTag, agentTag_);
          DARABONBA_PTR_TO_JSON(AnswerRecall, answerRecall_);
          DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_TO_JSON(BatchId, batchId_);
          DARABONBA_PTR_TO_JSON(CallBeginTime, callBeginTime_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallTimes, callTimes_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(ChatRecord, chatRecord_);
          DARABONBA_PTR_TO_JSON(Gateway, gateway_);
          DARABONBA_PTR_TO_JSON(HangupTime, hangupTime_);
          DARABONBA_PTR_TO_JSON(HangupType, hangupType_);
          DARABONBA_PTR_TO_JSON(ImportTime, importTime_);
          DARABONBA_PTR_TO_JSON(IndividualTag, individualTag_);
          DARABONBA_PTR_TO_JSON(IntentDescription, intentDescription_);
          DARABONBA_PTR_TO_JSON(IntentTag, intentTag_);
          DARABONBA_PTR_TO_JSON(InterceptReason, interceptReason_);
          DARABONBA_PTR_TO_JSON(Keywords, keywords_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(NumberMD5, numberMD5_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(RingTime, ringTime_);
          DARABONBA_PTR_TO_JSON(Sms, sms_);
          DARABONBA_PTR_TO_JSON(SpeakingDuration, speakingDuration_);
          DARABONBA_PTR_TO_JSON(SpeakingTime, speakingTime_);
          DARABONBA_PTR_TO_JSON(SpeakingTurns, speakingTurns_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TransferStatus, transferStatus_);
          DARABONBA_PTR_TO_JSON(TransferStatusCode, transferStatusCode_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AddWx, addWx_);
          DARABONBA_PTR_FROM_JSON(AddWxStatus, addWxStatus_);
          DARABONBA_PTR_FROM_JSON(AgentExtension, agentExtension_);
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentSpeakingDuration, agentSpeakingDuration_);
          DARABONBA_PTR_FROM_JSON(AgentSpeakingTime, agentSpeakingTime_);
          DARABONBA_PTR_FROM_JSON(AgentTag, agentTag_);
          DARABONBA_PTR_FROM_JSON(AnswerRecall, answerRecall_);
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
          DARABONBA_PTR_FROM_JSON(CallBeginTime, callBeginTime_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallTimes, callTimes_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(ChatRecord, chatRecord_);
          DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
          DARABONBA_PTR_FROM_JSON(HangupTime, hangupTime_);
          DARABONBA_PTR_FROM_JSON(HangupType, hangupType_);
          DARABONBA_PTR_FROM_JSON(ImportTime, importTime_);
          DARABONBA_PTR_FROM_JSON(IndividualTag, individualTag_);
          DARABONBA_PTR_FROM_JSON(IntentDescription, intentDescription_);
          DARABONBA_PTR_FROM_JSON(IntentTag, intentTag_);
          DARABONBA_PTR_FROM_JSON(InterceptReason, interceptReason_);
          DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(NumberMD5, numberMD5_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(RingTime, ringTime_);
          DARABONBA_PTR_FROM_JSON(Sms, sms_);
          DARABONBA_PTR_FROM_JSON(SpeakingDuration, speakingDuration_);
          DARABONBA_PTR_FROM_JSON(SpeakingTime, speakingTime_);
          DARABONBA_PTR_FROM_JSON(SpeakingTurns, speakingTurns_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TransferStatus, transferStatus_);
          DARABONBA_PTR_FROM_JSON(TransferStatusCode, transferStatusCode_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addWx_ == nullptr
        && this->addWxStatus_ == nullptr && this->agentExtension_ == nullptr && this->agentId_ == nullptr && this->agentSpeakingDuration_ == nullptr && this->agentSpeakingTime_ == nullptr
        && this->agentTag_ == nullptr && this->answerRecall_ == nullptr && this->answerTime_ == nullptr && this->batchId_ == nullptr && this->callBeginTime_ == nullptr
        && this->callId_ == nullptr && this->callTimes_ == nullptr && this->callType_ == nullptr && this->chatRecord_ == nullptr && this->gateway_ == nullptr
        && this->hangupTime_ == nullptr && this->hangupType_ == nullptr && this->importTime_ == nullptr && this->individualTag_ == nullptr && this->intentDescription_ == nullptr
        && this->intentTag_ == nullptr && this->interceptReason_ == nullptr && this->keywords_ == nullptr && this->number_ == nullptr && this->numberMD5_ == nullptr
        && this->properties_ == nullptr && this->remark_ == nullptr && this->ringTime_ == nullptr && this->sms_ == nullptr && this->speakingDuration_ == nullptr
        && this->speakingTime_ == nullptr && this->speakingTurns_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr && this->statusDescription_ == nullptr
        && this->tag_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr && this->transferStatus_ == nullptr && this->transferStatusCode_ == nullptr; };
        // addWx Field Functions 
        bool hasAddWx() const { return this->addWx_ != nullptr;};
        void deleteAddWx() { this->addWx_ = nullptr;};
        inline int64_t getAddWx() const { DARABONBA_PTR_GET_DEFAULT(addWx_, 0L) };
        inline List& setAddWx(int64_t addWx) { DARABONBA_PTR_SET_VALUE(addWx_, addWx) };


        // addWxStatus Field Functions 
        bool hasAddWxStatus() const { return this->addWxStatus_ != nullptr;};
        void deleteAddWxStatus() { this->addWxStatus_ = nullptr;};
        inline string getAddWxStatus() const { DARABONBA_PTR_GET_DEFAULT(addWxStatus_, "") };
        inline List& setAddWxStatus(string addWxStatus) { DARABONBA_PTR_SET_VALUE(addWxStatus_, addWxStatus) };


        // agentExtension Field Functions 
        bool hasAgentExtension() const { return this->agentExtension_ != nullptr;};
        void deleteAgentExtension() { this->agentExtension_ = nullptr;};
        inline string getAgentExtension() const { DARABONBA_PTR_GET_DEFAULT(agentExtension_, "") };
        inline List& setAgentExtension(string agentExtension) { DARABONBA_PTR_SET_VALUE(agentExtension_, agentExtension) };


        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
        inline List& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentSpeakingDuration Field Functions 
        bool hasAgentSpeakingDuration() const { return this->agentSpeakingDuration_ != nullptr;};
        void deleteAgentSpeakingDuration() { this->agentSpeakingDuration_ = nullptr;};
        inline int64_t getAgentSpeakingDuration() const { DARABONBA_PTR_GET_DEFAULT(agentSpeakingDuration_, 0L) };
        inline List& setAgentSpeakingDuration(int64_t agentSpeakingDuration) { DARABONBA_PTR_SET_VALUE(agentSpeakingDuration_, agentSpeakingDuration) };


        // agentSpeakingTime Field Functions 
        bool hasAgentSpeakingTime() const { return this->agentSpeakingTime_ != nullptr;};
        void deleteAgentSpeakingTime() { this->agentSpeakingTime_ = nullptr;};
        inline string getAgentSpeakingTime() const { DARABONBA_PTR_GET_DEFAULT(agentSpeakingTime_, "") };
        inline List& setAgentSpeakingTime(string agentSpeakingTime) { DARABONBA_PTR_SET_VALUE(agentSpeakingTime_, agentSpeakingTime) };


        // agentTag Field Functions 
        bool hasAgentTag() const { return this->agentTag_ != nullptr;};
        void deleteAgentTag() { this->agentTag_ = nullptr;};
        inline string getAgentTag() const { DARABONBA_PTR_GET_DEFAULT(agentTag_, "") };
        inline List& setAgentTag(string agentTag) { DARABONBA_PTR_SET_VALUE(agentTag_, agentTag) };


        // answerRecall Field Functions 
        bool hasAnswerRecall() const { return this->answerRecall_ != nullptr;};
        void deleteAnswerRecall() { this->answerRecall_ = nullptr;};
        inline int64_t getAnswerRecall() const { DARABONBA_PTR_GET_DEFAULT(answerRecall_, 0L) };
        inline List& setAnswerRecall(int64_t answerRecall) { DARABONBA_PTR_SET_VALUE(answerRecall_, answerRecall) };


        // answerTime Field Functions 
        bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
        void deleteAnswerTime() { this->answerTime_ = nullptr;};
        inline string getAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, "") };
        inline List& setAnswerTime(string answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


        // batchId Field Functions 
        bool hasBatchId() const { return this->batchId_ != nullptr;};
        void deleteBatchId() { this->batchId_ = nullptr;};
        inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
        inline List& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


        // callBeginTime Field Functions 
        bool hasCallBeginTime() const { return this->callBeginTime_ != nullptr;};
        void deleteCallBeginTime() { this->callBeginTime_ = nullptr;};
        inline string getCallBeginTime() const { DARABONBA_PTR_GET_DEFAULT(callBeginTime_, "") };
        inline List& setCallBeginTime(string callBeginTime) { DARABONBA_PTR_SET_VALUE(callBeginTime_, callBeginTime) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline List& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callTimes Field Functions 
        bool hasCallTimes() const { return this->callTimes_ != nullptr;};
        void deleteCallTimes() { this->callTimes_ = nullptr;};
        inline string getCallTimes() const { DARABONBA_PTR_GET_DEFAULT(callTimes_, "") };
        inline List& setCallTimes(string callTimes) { DARABONBA_PTR_SET_VALUE(callTimes_, callTimes) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
        inline List& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // chatRecord Field Functions 
        bool hasChatRecord() const { return this->chatRecord_ != nullptr;};
        void deleteChatRecord() { this->chatRecord_ = nullptr;};
        inline string getChatRecord() const { DARABONBA_PTR_GET_DEFAULT(chatRecord_, "") };
        inline List& setChatRecord(string chatRecord) { DARABONBA_PTR_SET_VALUE(chatRecord_, chatRecord) };


        // gateway Field Functions 
        bool hasGateway() const { return this->gateway_ != nullptr;};
        void deleteGateway() { this->gateway_ = nullptr;};
        inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
        inline List& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


        // hangupTime Field Functions 
        bool hasHangupTime() const { return this->hangupTime_ != nullptr;};
        void deleteHangupTime() { this->hangupTime_ = nullptr;};
        inline string getHangupTime() const { DARABONBA_PTR_GET_DEFAULT(hangupTime_, "") };
        inline List& setHangupTime(string hangupTime) { DARABONBA_PTR_SET_VALUE(hangupTime_, hangupTime) };


        // hangupType Field Functions 
        bool hasHangupType() const { return this->hangupType_ != nullptr;};
        void deleteHangupType() { this->hangupType_ = nullptr;};
        inline int64_t getHangupType() const { DARABONBA_PTR_GET_DEFAULT(hangupType_, 0L) };
        inline List& setHangupType(int64_t hangupType) { DARABONBA_PTR_SET_VALUE(hangupType_, hangupType) };


        // importTime Field Functions 
        bool hasImportTime() const { return this->importTime_ != nullptr;};
        void deleteImportTime() { this->importTime_ = nullptr;};
        inline string getImportTime() const { DARABONBA_PTR_GET_DEFAULT(importTime_, "") };
        inline List& setImportTime(string importTime) { DARABONBA_PTR_SET_VALUE(importTime_, importTime) };


        // individualTag Field Functions 
        bool hasIndividualTag() const { return this->individualTag_ != nullptr;};
        void deleteIndividualTag() { this->individualTag_ = nullptr;};
        inline string getIndividualTag() const { DARABONBA_PTR_GET_DEFAULT(individualTag_, "") };
        inline List& setIndividualTag(string individualTag) { DARABONBA_PTR_SET_VALUE(individualTag_, individualTag) };


        // intentDescription Field Functions 
        bool hasIntentDescription() const { return this->intentDescription_ != nullptr;};
        void deleteIntentDescription() { this->intentDescription_ = nullptr;};
        inline string getIntentDescription() const { DARABONBA_PTR_GET_DEFAULT(intentDescription_, "") };
        inline List& setIntentDescription(string intentDescription) { DARABONBA_PTR_SET_VALUE(intentDescription_, intentDescription) };


        // intentTag Field Functions 
        bool hasIntentTag() const { return this->intentTag_ != nullptr;};
        void deleteIntentTag() { this->intentTag_ = nullptr;};
        inline string getIntentTag() const { DARABONBA_PTR_GET_DEFAULT(intentTag_, "") };
        inline List& setIntentTag(string intentTag) { DARABONBA_PTR_SET_VALUE(intentTag_, intentTag) };


        // interceptReason Field Functions 
        bool hasInterceptReason() const { return this->interceptReason_ != nullptr;};
        void deleteInterceptReason() { this->interceptReason_ = nullptr;};
        inline string getInterceptReason() const { DARABONBA_PTR_GET_DEFAULT(interceptReason_, "") };
        inline List& setInterceptReason(string interceptReason) { DARABONBA_PTR_SET_VALUE(interceptReason_, interceptReason) };


        // keywords Field Functions 
        bool hasKeywords() const { return this->keywords_ != nullptr;};
        void deleteKeywords() { this->keywords_ = nullptr;};
        inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
        inline List& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline List& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // numberMD5 Field Functions 
        bool hasNumberMD5() const { return this->numberMD5_ != nullptr;};
        void deleteNumberMD5() { this->numberMD5_ = nullptr;};
        inline string getNumberMD5() const { DARABONBA_PTR_GET_DEFAULT(numberMD5_, "") };
        inline List& setNumberMD5(string numberMD5) { DARABONBA_PTR_SET_VALUE(numberMD5_, numberMD5) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
        inline List& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline List& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // ringTime Field Functions 
        bool hasRingTime() const { return this->ringTime_ != nullptr;};
        void deleteRingTime() { this->ringTime_ = nullptr;};
        inline int64_t getRingTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
        inline List& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


        // sms Field Functions 
        bool hasSms() const { return this->sms_ != nullptr;};
        void deleteSms() { this->sms_ = nullptr;};
        inline string getSms() const { DARABONBA_PTR_GET_DEFAULT(sms_, "") };
        inline List& setSms(string sms) { DARABONBA_PTR_SET_VALUE(sms_, sms) };


        // speakingDuration Field Functions 
        bool hasSpeakingDuration() const { return this->speakingDuration_ != nullptr;};
        void deleteSpeakingDuration() { this->speakingDuration_ = nullptr;};
        inline int64_t getSpeakingDuration() const { DARABONBA_PTR_GET_DEFAULT(speakingDuration_, 0L) };
        inline List& setSpeakingDuration(int64_t speakingDuration) { DARABONBA_PTR_SET_VALUE(speakingDuration_, speakingDuration) };


        // speakingTime Field Functions 
        bool hasSpeakingTime() const { return this->speakingTime_ != nullptr;};
        void deleteSpeakingTime() { this->speakingTime_ = nullptr;};
        inline string getSpeakingTime() const { DARABONBA_PTR_GET_DEFAULT(speakingTime_, "") };
        inline List& setSpeakingTime(string speakingTime) { DARABONBA_PTR_SET_VALUE(speakingTime_, speakingTime) };


        // speakingTurns Field Functions 
        bool hasSpeakingTurns() const { return this->speakingTurns_ != nullptr;};
        void deleteSpeakingTurns() { this->speakingTurns_ = nullptr;};
        inline string getSpeakingTurns() const { DARABONBA_PTR_GET_DEFAULT(speakingTurns_, "") };
        inline List& setSpeakingTurns(string speakingTurns) { DARABONBA_PTR_SET_VALUE(speakingTurns_, speakingTurns) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline int64_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0L) };
        inline List& setStatusCode(int64_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // statusDescription Field Functions 
        bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
        void deleteStatusDescription() { this->statusDescription_ = nullptr;};
        inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
        inline List& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline List& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline List& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline List& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // transferStatus Field Functions 
        bool hasTransferStatus() const { return this->transferStatus_ != nullptr;};
        void deleteTransferStatus() { this->transferStatus_ = nullptr;};
        inline string getTransferStatus() const { DARABONBA_PTR_GET_DEFAULT(transferStatus_, "") };
        inline List& setTransferStatus(string transferStatus) { DARABONBA_PTR_SET_VALUE(transferStatus_, transferStatus) };


        // transferStatusCode Field Functions 
        bool hasTransferStatusCode() const { return this->transferStatusCode_ != nullptr;};
        void deleteTransferStatusCode() { this->transferStatusCode_ = nullptr;};
        inline int64_t getTransferStatusCode() const { DARABONBA_PTR_GET_DEFAULT(transferStatusCode_, 0L) };
        inline List& setTransferStatusCode(int64_t transferStatusCode) { DARABONBA_PTR_SET_VALUE(transferStatusCode_, transferStatusCode) };


      protected:
        // 加微
        shared_ptr<int64_t> addWx_ {};
        // 加微进度
        shared_ptr<string> addWxStatus_ {};
        // 坐席分机
        shared_ptr<string> agentExtension_ {};
        // 坐席ID
        shared_ptr<int64_t> agentId_ {};
        // 人工通话时长
        shared_ptr<int64_t> agentSpeakingDuration_ {};
        // 人工通话时长
        shared_ptr<string> agentSpeakingTime_ {};
        // 坐席标签
        shared_ptr<string> agentTag_ {};
        // 是否接通重呼
        shared_ptr<int64_t> answerRecall_ {};
        // 接通时间
        shared_ptr<string> answerTime_ {};
        // 批次ID
        shared_ptr<string> batchId_ {};
        // 开始通话时间
        shared_ptr<string> callBeginTime_ {};
        // 外呼ID
        shared_ptr<string> callId_ {};
        // 呼叫次数
        shared_ptr<string> callTimes_ {};
        // 外呼类型
        shared_ptr<int64_t> callType_ {};
        // 对话录音
        shared_ptr<string> chatRecord_ {};
        // 外呼网关
        shared_ptr<string> gateway_ {};
        // 挂断时间
        shared_ptr<string> hangupTime_ {};
        // 挂机方式
        shared_ptr<int64_t> hangupType_ {};
        // 导入时间
        shared_ptr<string> importTime_ {};
        // 个性标签
        shared_ptr<string> individualTag_ {};
        // 意向说明
        shared_ptr<string> intentDescription_ {};
        // 意向标签
        shared_ptr<string> intentTag_ {};
        // 拦截原因
        shared_ptr<string> interceptReason_ {};
        // 回复关键词
        shared_ptr<string> keywords_ {};
        // 外呼号码
        shared_ptr<string> number_ {};
        // 外呼号码MD5
        shared_ptr<string> numberMD5_ {};
        // 参数
        shared_ptr<string> properties_ {};
        // 备注
        shared_ptr<string> remark_ {};
        // 振铃时长
        shared_ptr<int64_t> ringTime_ {};
        // 挂机短信
        shared_ptr<string> sms_ {};
        // AI通话时长
        shared_ptr<int64_t> speakingDuration_ {};
        // AI通话时长
        shared_ptr<string> speakingTime_ {};
        // 对话轮次
        shared_ptr<string> speakingTurns_ {};
        // 外呼状态
        shared_ptr<string> status_ {};
        // 外呼状态编码
        shared_ptr<int64_t> statusCode_ {};
        // 外呼状态描述
        shared_ptr<string> statusDescription_ {};
        // 用户自定义标签
        shared_ptr<string> tag_ {};
        // 外呼任务ID
        shared_ptr<int64_t> taskId_ {};
        // AI话术ID
        shared_ptr<int64_t> templateId_ {};
        // 转人工状态
        shared_ptr<string> transferStatus_ {};
        // 转人工状态编码
        shared_ptr<int64_t> transferStatusCode_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Model::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Model::List>) };
      inline vector<Model::List> getList() { DARABONBA_PTR_GET(list_, vector<Model::List>) };
      inline Model& setList(const vector<Model::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Model& setList(vector<Model::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Model& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Model& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Model& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline Model& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      shared_ptr<vector<Model::List>> list_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline TaskCallListResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TaskCallListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const TaskCallListResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, TaskCallListResponseBody::Model) };
    inline TaskCallListResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, TaskCallListResponseBody::Model) };
    inline TaskCallListResponseBody& setModel(const TaskCallListResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline TaskCallListResponseBody& setModel(TaskCallListResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TaskCallListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline TaskCallListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline TaskCallListResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TaskCallListResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
