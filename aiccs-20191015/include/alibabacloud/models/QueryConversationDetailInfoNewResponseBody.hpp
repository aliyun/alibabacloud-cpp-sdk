// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFONEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFONEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryConversationDetailInfoNewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConversationDetailInfoNewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConversationDetailInfoNewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryConversationDetailInfoNewResponseBody() = default ;
    QueryConversationDetailInfoNewResponseBody(const QueryConversationDetailInfoNewResponseBody &) = default ;
    QueryConversationDetailInfoNewResponseBody(QueryConversationDetailInfoNewResponseBody &&) = default ;
    QueryConversationDetailInfoNewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConversationDetailInfoNewResponseBody() = default ;
    QueryConversationDetailInfoNewResponseBody& operator=(const QueryConversationDetailInfoNewResponseBody &) = default ;
    QueryConversationDetailInfoNewResponseBody& operator=(QueryConversationDetailInfoNewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(CallId, callId_);
        DARABONBA_PTR_TO_JSON(CallResult, callResult_);
        DARABONBA_PTR_TO_JSON(CalledPhone, calledPhone_);
        DARABONBA_PTR_TO_JSON(CallerPhone, callerPhone_);
        DARABONBA_PTR_TO_JSON(ConversationRecord, conversationRecord_);
        DARABONBA_PTR_TO_JSON(ConversationTurnCount, conversationTurnCount_);
        DARABONBA_PTR_TO_JSON(DetailId, detailId_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
        DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_TO_JSON(HangupDirection, hangupDirection_);
        DARABONBA_PTR_TO_JSON(ImportedTime, importedTime_);
        DARABONBA_PTR_TO_JSON(MajorIntent, majorIntent_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(OutId, outId_);
        DARABONBA_PTR_TO_JSON(OutputTags, outputTags_);
        DARABONBA_PTR_TO_JSON(PickUpTime, pickUpTime_);
        DARABONBA_PTR_TO_JSON(RecordingFileDownloadUrl, recordingFileDownloadUrl_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(StartCallTime, startCallTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(CallId, callId_);
        DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
        DARABONBA_PTR_FROM_JSON(CalledPhone, calledPhone_);
        DARABONBA_PTR_FROM_JSON(CallerPhone, callerPhone_);
        DARABONBA_PTR_FROM_JSON(ConversationRecord, conversationRecord_);
        DARABONBA_PTR_FROM_JSON(ConversationTurnCount, conversationTurnCount_);
        DARABONBA_PTR_FROM_JSON(DetailId, detailId_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
        DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
        DARABONBA_PTR_FROM_JSON(HangupDirection, hangupDirection_);
        DARABONBA_PTR_FROM_JSON(ImportedTime, importedTime_);
        DARABONBA_PTR_FROM_JSON(MajorIntent, majorIntent_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(OutId, outId_);
        DARABONBA_PTR_FROM_JSON(OutputTags, outputTags_);
        DARABONBA_PTR_FROM_JSON(PickUpTime, pickUpTime_);
        DARABONBA_PTR_FROM_JSON(RecordingFileDownloadUrl, recordingFileDownloadUrl_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(StartCallTime, startCallTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Variables, variables_);
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
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Required, required_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Required, required_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->key_ == nullptr && this->name_ == nullptr && this->required_ == nullptr && this->source_ == nullptr && this->value_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Variables& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Variables& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline Variables& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Variables& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> key_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> required_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> value_ {};
      };

      class OutputTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputTags& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OutputTagDescription, outputTagDescription_);
          DARABONBA_PTR_TO_JSON(OutputTagName, outputTagName_);
          DARABONBA_PTR_TO_JSON(OutputTagValue, outputTagValue_);
        };
        friend void from_json(const Darabonba::Json& j, OutputTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OutputTagDescription, outputTagDescription_);
          DARABONBA_PTR_FROM_JSON(OutputTagName, outputTagName_);
          DARABONBA_PTR_FROM_JSON(OutputTagValue, outputTagValue_);
        };
        OutputTags() = default ;
        OutputTags(const OutputTags &) = default ;
        OutputTags(OutputTags &&) = default ;
        OutputTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputTags() = default ;
        OutputTags& operator=(const OutputTags &) = default ;
        OutputTags& operator=(OutputTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->outputTagDescription_ == nullptr && this->outputTagName_ == nullptr && this->outputTagValue_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline OutputTags& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // outputTagDescription Field Functions 
        bool hasOutputTagDescription() const { return this->outputTagDescription_ != nullptr;};
        void deleteOutputTagDescription() { this->outputTagDescription_ = nullptr;};
        inline string getOutputTagDescription() const { DARABONBA_PTR_GET_DEFAULT(outputTagDescription_, "") };
        inline OutputTags& setOutputTagDescription(string outputTagDescription) { DARABONBA_PTR_SET_VALUE(outputTagDescription_, outputTagDescription) };


        // outputTagName Field Functions 
        bool hasOutputTagName() const { return this->outputTagName_ != nullptr;};
        void deleteOutputTagName() { this->outputTagName_ = nullptr;};
        inline string getOutputTagName() const { DARABONBA_PTR_GET_DEFAULT(outputTagName_, "") };
        inline OutputTags& setOutputTagName(string outputTagName) { DARABONBA_PTR_SET_VALUE(outputTagName_, outputTagName) };


        // outputTagValue Field Functions 
        bool hasOutputTagValue() const { return this->outputTagValue_ != nullptr;};
        void deleteOutputTagValue() { this->outputTagValue_ = nullptr;};
        inline string getOutputTagValue() const { DARABONBA_PTR_GET_DEFAULT(outputTagValue_, "") };
        inline OutputTags& setOutputTagValue(string outputTagValue) { DARABONBA_PTR_SET_VALUE(outputTagValue_, outputTagValue) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> outputTagDescription_ {};
        shared_ptr<string> outputTagName_ {};
        shared_ptr<string> outputTagValue_ {};
      };

      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->callId_ == nullptr && this->callResult_ == nullptr && this->calledPhone_ == nullptr && this->callerPhone_ == nullptr && this->conversationRecord_ == nullptr
        && this->conversationTurnCount_ == nullptr && this->detailId_ == nullptr && this->duration_ == nullptr && this->encryptionType_ == nullptr && this->failedReason_ == nullptr
        && this->hangupDirection_ == nullptr && this->importedTime_ == nullptr && this->majorIntent_ == nullptr && this->options_ == nullptr && this->outId_ == nullptr
        && this->outputTags_ == nullptr && this->pickUpTime_ == nullptr && this->recordingFileDownloadUrl_ == nullptr && this->releaseTime_ == nullptr && this->startCallTime_ == nullptr
        && this->status_ == nullptr && this->statusCode_ == nullptr && this->statusMsg_ == nullptr && this->taskId_ == nullptr && this->variables_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline Data& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // callId Field Functions 
      bool hasCallId() const { return this->callId_ != nullptr;};
      void deleteCallId() { this->callId_ = nullptr;};
      inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
      inline Data& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


      // callResult Field Functions 
      bool hasCallResult() const { return this->callResult_ != nullptr;};
      void deleteCallResult() { this->callResult_ = nullptr;};
      inline string getCallResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
      inline Data& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


      // calledPhone Field Functions 
      bool hasCalledPhone() const { return this->calledPhone_ != nullptr;};
      void deleteCalledPhone() { this->calledPhone_ = nullptr;};
      inline string getCalledPhone() const { DARABONBA_PTR_GET_DEFAULT(calledPhone_, "") };
      inline Data& setCalledPhone(string calledPhone) { DARABONBA_PTR_SET_VALUE(calledPhone_, calledPhone) };


      // callerPhone Field Functions 
      bool hasCallerPhone() const { return this->callerPhone_ != nullptr;};
      void deleteCallerPhone() { this->callerPhone_ = nullptr;};
      inline string getCallerPhone() const { DARABONBA_PTR_GET_DEFAULT(callerPhone_, "") };
      inline Data& setCallerPhone(string callerPhone) { DARABONBA_PTR_SET_VALUE(callerPhone_, callerPhone) };


      // conversationRecord Field Functions 
      bool hasConversationRecord() const { return this->conversationRecord_ != nullptr;};
      void deleteConversationRecord() { this->conversationRecord_ = nullptr;};
      inline string getConversationRecord() const { DARABONBA_PTR_GET_DEFAULT(conversationRecord_, "") };
      inline Data& setConversationRecord(string conversationRecord) { DARABONBA_PTR_SET_VALUE(conversationRecord_, conversationRecord) };


      // conversationTurnCount Field Functions 
      bool hasConversationTurnCount() const { return this->conversationTurnCount_ != nullptr;};
      void deleteConversationTurnCount() { this->conversationTurnCount_ = nullptr;};
      inline int64_t getConversationTurnCount() const { DARABONBA_PTR_GET_DEFAULT(conversationTurnCount_, 0L) };
      inline Data& setConversationTurnCount(int64_t conversationTurnCount) { DARABONBA_PTR_SET_VALUE(conversationTurnCount_, conversationTurnCount) };


      // detailId Field Functions 
      bool hasDetailId() const { return this->detailId_ != nullptr;};
      void deleteDetailId() { this->detailId_ = nullptr;};
      inline string getDetailId() const { DARABONBA_PTR_GET_DEFAULT(detailId_, "") };
      inline Data& setDetailId(string detailId) { DARABONBA_PTR_SET_VALUE(detailId_, detailId) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Data& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // encryptionType Field Functions 
      bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
      void deleteEncryptionType() { this->encryptionType_ = nullptr;};
      inline int64_t getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, 0L) };
      inline Data& setEncryptionType(int64_t encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


      // failedReason Field Functions 
      bool hasFailedReason() const { return this->failedReason_ != nullptr;};
      void deleteFailedReason() { this->failedReason_ = nullptr;};
      inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
      inline Data& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


      // hangupDirection Field Functions 
      bool hasHangupDirection() const { return this->hangupDirection_ != nullptr;};
      void deleteHangupDirection() { this->hangupDirection_ = nullptr;};
      inline string getHangupDirection() const { DARABONBA_PTR_GET_DEFAULT(hangupDirection_, "") };
      inline Data& setHangupDirection(string hangupDirection) { DARABONBA_PTR_SET_VALUE(hangupDirection_, hangupDirection) };


      // importedTime Field Functions 
      bool hasImportedTime() const { return this->importedTime_ != nullptr;};
      void deleteImportedTime() { this->importedTime_ = nullptr;};
      inline int64_t getImportedTime() const { DARABONBA_PTR_GET_DEFAULT(importedTime_, 0L) };
      inline Data& setImportedTime(int64_t importedTime) { DARABONBA_PTR_SET_VALUE(importedTime_, importedTime) };


      // majorIntent Field Functions 
      bool hasMajorIntent() const { return this->majorIntent_ != nullptr;};
      void deleteMajorIntent() { this->majorIntent_ = nullptr;};
      inline string getMajorIntent() const { DARABONBA_PTR_GET_DEFAULT(majorIntent_, "") };
      inline Data& setMajorIntent(string majorIntent) { DARABONBA_PTR_SET_VALUE(majorIntent_, majorIntent) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
      inline Data& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


      // outId Field Functions 
      bool hasOutId() const { return this->outId_ != nullptr;};
      void deleteOutId() { this->outId_ = nullptr;};
      inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
      inline Data& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


      // outputTags Field Functions 
      bool hasOutputTags() const { return this->outputTags_ != nullptr;};
      void deleteOutputTags() { this->outputTags_ = nullptr;};
      inline const vector<Data::OutputTags> & getOutputTags() const { DARABONBA_PTR_GET_CONST(outputTags_, vector<Data::OutputTags>) };
      inline vector<Data::OutputTags> getOutputTags() { DARABONBA_PTR_GET(outputTags_, vector<Data::OutputTags>) };
      inline Data& setOutputTags(const vector<Data::OutputTags> & outputTags) { DARABONBA_PTR_SET_VALUE(outputTags_, outputTags) };
      inline Data& setOutputTags(vector<Data::OutputTags> && outputTags) { DARABONBA_PTR_SET_RVALUE(outputTags_, outputTags) };


      // pickUpTime Field Functions 
      bool hasPickUpTime() const { return this->pickUpTime_ != nullptr;};
      void deletePickUpTime() { this->pickUpTime_ = nullptr;};
      inline int64_t getPickUpTime() const { DARABONBA_PTR_GET_DEFAULT(pickUpTime_, 0L) };
      inline Data& setPickUpTime(int64_t pickUpTime) { DARABONBA_PTR_SET_VALUE(pickUpTime_, pickUpTime) };


      // recordingFileDownloadUrl Field Functions 
      bool hasRecordingFileDownloadUrl() const { return this->recordingFileDownloadUrl_ != nullptr;};
      void deleteRecordingFileDownloadUrl() { this->recordingFileDownloadUrl_ = nullptr;};
      inline string getRecordingFileDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(recordingFileDownloadUrl_, "") };
      inline Data& setRecordingFileDownloadUrl(string recordingFileDownloadUrl) { DARABONBA_PTR_SET_VALUE(recordingFileDownloadUrl_, recordingFileDownloadUrl) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
      inline Data& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // startCallTime Field Functions 
      bool hasStartCallTime() const { return this->startCallTime_ != nullptr;};
      void deleteStartCallTime() { this->startCallTime_ = nullptr;};
      inline int64_t getStartCallTime() const { DARABONBA_PTR_GET_DEFAULT(startCallTime_, 0L) };
      inline Data& setStartCallTime(int64_t startCallTime) { DARABONBA_PTR_SET_VALUE(startCallTime_, startCallTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Data& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline Data& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // statusMsg Field Functions 
      bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
      void deleteStatusMsg() { this->statusMsg_ = nullptr;};
      inline string getStatusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
      inline Data& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<Data::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Data::Variables>) };
      inline vector<Data::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Data::Variables>) };
      inline Data& setVariables(const vector<Data::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline Data& setVariables(vector<Data::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      shared_ptr<string> batchId_ {};
      shared_ptr<string> callId_ {};
      shared_ptr<string> callResult_ {};
      shared_ptr<string> calledPhone_ {};
      shared_ptr<string> callerPhone_ {};
      shared_ptr<string> conversationRecord_ {};
      shared_ptr<int64_t> conversationTurnCount_ {};
      shared_ptr<string> detailId_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> encryptionType_ {};
      shared_ptr<string> failedReason_ {};
      shared_ptr<string> hangupDirection_ {};
      shared_ptr<int64_t> importedTime_ {};
      shared_ptr<string> majorIntent_ {};
      shared_ptr<string> options_ {};
      shared_ptr<string> outId_ {};
      shared_ptr<vector<Data::OutputTags>> outputTags_ {};
      shared_ptr<int64_t> pickUpTime_ {};
      shared_ptr<string> recordingFileDownloadUrl_ {};
      shared_ptr<int64_t> releaseTime_ {};
      shared_ptr<int64_t> startCallTime_ {};
      shared_ptr<int64_t> status_ {};
      shared_ptr<string> statusCode_ {};
      shared_ptr<string> statusMsg_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<vector<Data::Variables>> variables_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryConversationDetailInfoNewResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryConversationDetailInfoNewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryConversationDetailInfoNewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryConversationDetailInfoNewResponseBody::Data) };
    inline QueryConversationDetailInfoNewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryConversationDetailInfoNewResponseBody::Data) };
    inline QueryConversationDetailInfoNewResponseBody& setData(const QueryConversationDetailInfoNewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryConversationDetailInfoNewResponseBody& setData(QueryConversationDetailInfoNewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryConversationDetailInfoNewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConversationDetailInfoNewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryConversationDetailInfoNewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<QueryConversationDetailInfoNewResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
