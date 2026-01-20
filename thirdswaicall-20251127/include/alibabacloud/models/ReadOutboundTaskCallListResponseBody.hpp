// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READOUTBOUNDTASKCALLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READOUTBOUNDTASKCALLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{
namespace Models
{
  class ReadOutboundTaskCallListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadOutboundTaskCallListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReadOutboundTaskCallListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ReadOutboundTaskCallListResponseBody() = default ;
    ReadOutboundTaskCallListResponseBody(const ReadOutboundTaskCallListResponseBody &) = default ;
    ReadOutboundTaskCallListResponseBody(ReadOutboundTaskCallListResponseBody &&) = default ;
    ReadOutboundTaskCallListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadOutboundTaskCallListResponseBody() = default ;
    ReadOutboundTaskCallListResponseBody& operator=(const ReadOutboundTaskCallListResponseBody &) = default ;
    ReadOutboundTaskCallListResponseBody& operator=(ReadOutboundTaskCallListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(CallEndTime, callEndTime_);
        DARABONBA_PTR_TO_JSON(CallId, callId_);
        DARABONBA_PTR_TO_JSON(CallStartTime, callStartTime_);
        DARABONBA_PTR_TO_JSON(CallSummary, callSummary_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
        DARABONBA_PTR_TO_JSON(CustomerPhone, customerPhone_);
        DARABONBA_PTR_TO_JSON(DialogueList, dialogueList_);
        DARABONBA_PTR_TO_JSON(DisplayStatus, displayStatus_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(DurationText, durationText_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LabelTags, labelTags_);
        DARABONBA_PTR_TO_JSON(RecordDetailReady, recordDetailReady_);
        DARABONBA_PTR_TO_JSON(RecordUrl, recordUrl_);
        DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(TtsVoiceCode, ttsVoiceCode_);
        DARABONBA_PTR_TO_JSON(TtsVoiceDesc, ttsVoiceDesc_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(CallEndTime, callEndTime_);
        DARABONBA_PTR_FROM_JSON(CallId, callId_);
        DARABONBA_PTR_FROM_JSON(CallStartTime, callStartTime_);
        DARABONBA_PTR_FROM_JSON(CallSummary, callSummary_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
        DARABONBA_PTR_FROM_JSON(CustomerPhone, customerPhone_);
        DARABONBA_PTR_FROM_JSON(DialogueList, dialogueList_);
        DARABONBA_PTR_FROM_JSON(DisplayStatus, displayStatus_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(DurationText, durationText_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LabelTags, labelTags_);
        DARABONBA_PTR_FROM_JSON(RecordDetailReady, recordDetailReady_);
        DARABONBA_PTR_FROM_JSON(RecordUrl, recordUrl_);
        DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(TtsVoiceCode, ttsVoiceCode_);
        DARABONBA_PTR_FROM_JSON(TtsVoiceDesc, ttsVoiceDesc_);
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
      class DialogueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        DialogueList() = default ;
        DialogueList(const DialogueList &) = default ;
        DialogueList(DialogueList &&) = default ;
        DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DialogueList() = default ;
        DialogueList& operator=(const DialogueList &) = default ;
        DialogueList& operator=(DialogueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->role_ == nullptr && this->text_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int32_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
        inline DialogueList& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
        inline DialogueList& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline DialogueList& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<int32_t> beginTime_ {};
        shared_ptr<int32_t> endTime_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->callEndTime_ == nullptr
        && this->callId_ == nullptr && this->callStartTime_ == nullptr && this->callSummary_ == nullptr && this->channel_ == nullptr && this->customerName_ == nullptr
        && this->customerPhone_ == nullptr && this->dialogueList_ == nullptr && this->displayStatus_ == nullptr && this->duration_ == nullptr && this->durationText_ == nullptr
        && this->extInfo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->labelTags_ == nullptr && this->recordDetailReady_ == nullptr && this->recordUrl_ == nullptr && this->retryCount_ == nullptr && this->sceneId_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->tenantId_ == nullptr && this->ttsVoiceCode_ == nullptr && this->ttsVoiceDesc_ == nullptr
        && this->userId_ == nullptr; };
      // callEndTime Field Functions 
      bool hasCallEndTime() const { return this->callEndTime_ != nullptr;};
      void deleteCallEndTime() { this->callEndTime_ = nullptr;};
      inline string getCallEndTime() const { DARABONBA_PTR_GET_DEFAULT(callEndTime_, "") };
      inline Records& setCallEndTime(string callEndTime) { DARABONBA_PTR_SET_VALUE(callEndTime_, callEndTime) };


      // callId Field Functions 
      bool hasCallId() const { return this->callId_ != nullptr;};
      void deleteCallId() { this->callId_ = nullptr;};
      inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
      inline Records& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


      // callStartTime Field Functions 
      bool hasCallStartTime() const { return this->callStartTime_ != nullptr;};
      void deleteCallStartTime() { this->callStartTime_ = nullptr;};
      inline string getCallStartTime() const { DARABONBA_PTR_GET_DEFAULT(callStartTime_, "") };
      inline Records& setCallStartTime(string callStartTime) { DARABONBA_PTR_SET_VALUE(callStartTime_, callStartTime) };


      // callSummary Field Functions 
      bool hasCallSummary() const { return this->callSummary_ != nullptr;};
      void deleteCallSummary() { this->callSummary_ = nullptr;};
      inline string getCallSummary() const { DARABONBA_PTR_GET_DEFAULT(callSummary_, "") };
      inline Records& setCallSummary(string callSummary) { DARABONBA_PTR_SET_VALUE(callSummary_, callSummary) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Records& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // customerName Field Functions 
      bool hasCustomerName() const { return this->customerName_ != nullptr;};
      void deleteCustomerName() { this->customerName_ = nullptr;};
      inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
      inline Records& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


      // customerPhone Field Functions 
      bool hasCustomerPhone() const { return this->customerPhone_ != nullptr;};
      void deleteCustomerPhone() { this->customerPhone_ = nullptr;};
      inline string getCustomerPhone() const { DARABONBA_PTR_GET_DEFAULT(customerPhone_, "") };
      inline Records& setCustomerPhone(string customerPhone) { DARABONBA_PTR_SET_VALUE(customerPhone_, customerPhone) };


      // dialogueList Field Functions 
      bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
      void deleteDialogueList() { this->dialogueList_ = nullptr;};
      inline const vector<Records::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<Records::DialogueList>) };
      inline vector<Records::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<Records::DialogueList>) };
      inline Records& setDialogueList(const vector<Records::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
      inline Records& setDialogueList(vector<Records::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


      // displayStatus Field Functions 
      bool hasDisplayStatus() const { return this->displayStatus_ != nullptr;};
      void deleteDisplayStatus() { this->displayStatus_ = nullptr;};
      inline string getDisplayStatus() const { DARABONBA_PTR_GET_DEFAULT(displayStatus_, "") };
      inline Records& setDisplayStatus(string displayStatus) { DARABONBA_PTR_SET_VALUE(displayStatus_, displayStatus) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Records& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // durationText Field Functions 
      bool hasDurationText() const { return this->durationText_ != nullptr;};
      void deleteDurationText() { this->durationText_ = nullptr;};
      inline string getDurationText() const { DARABONBA_PTR_GET_DEFAULT(durationText_, "") };
      inline Records& setDurationText(string durationText) { DARABONBA_PTR_SET_VALUE(durationText_, durationText) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline Records& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Records& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Records& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Records& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Records& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // labelTags Field Functions 
      bool hasLabelTags() const { return this->labelTags_ != nullptr;};
      void deleteLabelTags() { this->labelTags_ = nullptr;};
      inline const vector<string> & getLabelTags() const { DARABONBA_PTR_GET_CONST(labelTags_, vector<string>) };
      inline vector<string> getLabelTags() { DARABONBA_PTR_GET(labelTags_, vector<string>) };
      inline Records& setLabelTags(const vector<string> & labelTags) { DARABONBA_PTR_SET_VALUE(labelTags_, labelTags) };
      inline Records& setLabelTags(vector<string> && labelTags) { DARABONBA_PTR_SET_RVALUE(labelTags_, labelTags) };


      // recordDetailReady Field Functions 
      bool hasRecordDetailReady() const { return this->recordDetailReady_ != nullptr;};
      void deleteRecordDetailReady() { this->recordDetailReady_ = nullptr;};
      inline bool getRecordDetailReady() const { DARABONBA_PTR_GET_DEFAULT(recordDetailReady_, false) };
      inline Records& setRecordDetailReady(bool recordDetailReady) { DARABONBA_PTR_SET_VALUE(recordDetailReady_, recordDetailReady) };


      // recordUrl Field Functions 
      bool hasRecordUrl() const { return this->recordUrl_ != nullptr;};
      void deleteRecordUrl() { this->recordUrl_ = nullptr;};
      inline string getRecordUrl() const { DARABONBA_PTR_GET_DEFAULT(recordUrl_, "") };
      inline Records& setRecordUrl(string recordUrl) { DARABONBA_PTR_SET_VALUE(recordUrl_, recordUrl) };


      // retryCount Field Functions 
      bool hasRetryCount() const { return this->retryCount_ != nullptr;};
      void deleteRetryCount() { this->retryCount_ = nullptr;};
      inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
      inline Records& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline Records& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Records& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Records& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Records& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // ttsVoiceCode Field Functions 
      bool hasTtsVoiceCode() const { return this->ttsVoiceCode_ != nullptr;};
      void deleteTtsVoiceCode() { this->ttsVoiceCode_ = nullptr;};
      inline string getTtsVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceCode_, "") };
      inline Records& setTtsVoiceCode(string ttsVoiceCode) { DARABONBA_PTR_SET_VALUE(ttsVoiceCode_, ttsVoiceCode) };


      // ttsVoiceDesc Field Functions 
      bool hasTtsVoiceDesc() const { return this->ttsVoiceDesc_ != nullptr;};
      void deleteTtsVoiceDesc() { this->ttsVoiceDesc_ = nullptr;};
      inline string getTtsVoiceDesc() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceDesc_, "") };
      inline Records& setTtsVoiceDesc(string ttsVoiceDesc) { DARABONBA_PTR_SET_VALUE(ttsVoiceDesc_, ttsVoiceDesc) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Records& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> callEndTime_ {};
      shared_ptr<string> callId_ {};
      shared_ptr<string> callStartTime_ {};
      shared_ptr<string> callSummary_ {};
      shared_ptr<string> channel_ {};
      shared_ptr<string> customerName_ {};
      shared_ptr<string> customerPhone_ {};
      shared_ptr<vector<Records::DialogueList>> dialogueList_ {};
      shared_ptr<string> displayStatus_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> durationText_ {};
      shared_ptr<string> extInfo_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<string>> labelTags_ {};
      shared_ptr<bool> recordDetailReady_ {};
      shared_ptr<string> recordUrl_ {};
      shared_ptr<int32_t> retryCount_ {};
      shared_ptr<string> sceneId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> tenantId_ {};
      shared_ptr<string> ttsVoiceCode_ {};
      shared_ptr<string> ttsVoiceDesc_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->current_ == nullptr && this->message_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr && this->size_ == nullptr
        && this->success_ == nullptr && this->timestamp_ == nullptr && this->total_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadOutboundTaskCallListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ReadOutboundTaskCallListResponseBody& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadOutboundTaskCallListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ReadOutboundTaskCallListResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ReadOutboundTaskCallListResponseBody::Records>) };
    inline vector<ReadOutboundTaskCallListResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ReadOutboundTaskCallListResponseBody::Records>) };
    inline ReadOutboundTaskCallListResponseBody& setRecords(const vector<ReadOutboundTaskCallListResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ReadOutboundTaskCallListResponseBody& setRecords(vector<ReadOutboundTaskCallListResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadOutboundTaskCallListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ReadOutboundTaskCallListResponseBody& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadOutboundTaskCallListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ReadOutboundTaskCallListResponseBody& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ReadOutboundTaskCallListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ReadOutboundTaskCallListResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<ReadOutboundTaskCallListResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> timestamp_ {};
    shared_ptr<int64_t> total_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127
#endif
