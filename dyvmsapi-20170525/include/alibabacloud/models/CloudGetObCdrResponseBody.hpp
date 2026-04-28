// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETOBCDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETOBCDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetObCdrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetObCdrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetObCdrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudGetObCdrResponseBody() = default ;
    CloudGetObCdrResponseBody(const CloudGetObCdrResponseBody &) = default ;
    CloudGetObCdrResponseBody(CloudGetObCdrResponseBody &&) = default ;
    CloudGetObCdrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetObCdrResponseBody() = default ;
    CloudGetObCdrResponseBody& operator=(const CloudGetObCdrResponseBody &) = default ;
    CloudGetObCdrResponseBody& operator=(CloudGetObCdrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CallTypeCode, callTypeCode_);
          DARABONBA_PTR_TO_JSON(CalleeAreaCode, calleeAreaCode_);
          DARABONBA_PTR_TO_JSON(CalleeNumber, calleeNumber_);
          DARABONBA_PTR_TO_JSON(Clid, clid_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(DisplayNumber, displayNumber_);
          DARABONBA_PTR_TO_JSON(EndReason, endReason_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Gno, gno_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JoinQueueTime, joinQueueTime_);
          DARABONBA_PTR_TO_JSON(MainCallType, mainCallType_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(RingingTime, ringingTime_);
          DARABONBA_PTR_TO_JSON(SipCause, sipCause_);
          DARABONBA_PTR_TO_JSON(SipCauseStr, sipCauseStr_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_TO_JSON(TsiFile, tsiFile_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_TO_JSON(XNumber, XNumber_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CallTypeCode, callTypeCode_);
          DARABONBA_PTR_FROM_JSON(CalleeAreaCode, calleeAreaCode_);
          DARABONBA_PTR_FROM_JSON(CalleeNumber, calleeNumber_);
          DARABONBA_PTR_FROM_JSON(Clid, clid_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(DisplayNumber, displayNumber_);
          DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Gno, gno_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JoinQueueTime, joinQueueTime_);
          DARABONBA_PTR_FROM_JSON(MainCallType, mainCallType_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(RingingTime, ringingTime_);
          DARABONBA_PTR_FROM_JSON(SipCause, sipCause_);
          DARABONBA_PTR_FROM_JSON(SipCauseStr, sipCauseStr_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_FROM_JSON(TsiFile, tsiFile_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_FROM_JSON(XNumber, XNumber_);
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
        virtual bool empty() const override { return this->agentName_ == nullptr
        && this->answerTime_ == nullptr && this->callId_ == nullptr && this->callType_ == nullptr && this->callTypeCode_ == nullptr && this->calleeAreaCode_ == nullptr
        && this->calleeNumber_ == nullptr && this->clid_ == nullptr && this->cno_ == nullptr && this->displayNumber_ == nullptr && this->endReason_ == nullptr
        && this->endTime_ == nullptr && this->gno_ == nullptr && this->id_ == nullptr && this->joinQueueTime_ == nullptr && this->mainCallType_ == nullptr
        && this->mainUniqueId_ == nullptr && this->qno_ == nullptr && this->queueName_ == nullptr && this->recordFile_ == nullptr && this->ringingTime_ == nullptr
        && this->sipCause_ == nullptr && this->sipCauseStr_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr
        && this->taskName_ == nullptr && this->totalDuration_ == nullptr && this->trunkGroupKey_ == nullptr && this->tsiFile_ == nullptr && this->uniqueId_ == nullptr
        && this->XNumber_ == nullptr; };
        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // answerTime Field Functions 
        bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
        void deleteAnswerTime() { this->answerTime_ = nullptr;};
        inline string getAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, "") };
        inline List& setAnswerTime(string answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline List& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline List& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // callTypeCode Field Functions 
        bool hasCallTypeCode() const { return this->callTypeCode_ != nullptr;};
        void deleteCallTypeCode() { this->callTypeCode_ = nullptr;};
        inline string getCallTypeCode() const { DARABONBA_PTR_GET_DEFAULT(callTypeCode_, "") };
        inline List& setCallTypeCode(string callTypeCode) { DARABONBA_PTR_SET_VALUE(callTypeCode_, callTypeCode) };


        // calleeAreaCode Field Functions 
        bool hasCalleeAreaCode() const { return this->calleeAreaCode_ != nullptr;};
        void deleteCalleeAreaCode() { this->calleeAreaCode_ = nullptr;};
        inline string getCalleeAreaCode() const { DARABONBA_PTR_GET_DEFAULT(calleeAreaCode_, "") };
        inline List& setCalleeAreaCode(string calleeAreaCode) { DARABONBA_PTR_SET_VALUE(calleeAreaCode_, calleeAreaCode) };


        // calleeNumber Field Functions 
        bool hasCalleeNumber() const { return this->calleeNumber_ != nullptr;};
        void deleteCalleeNumber() { this->calleeNumber_ = nullptr;};
        inline string getCalleeNumber() const { DARABONBA_PTR_GET_DEFAULT(calleeNumber_, "") };
        inline List& setCalleeNumber(string calleeNumber) { DARABONBA_PTR_SET_VALUE(calleeNumber_, calleeNumber) };


        // clid Field Functions 
        bool hasClid() const { return this->clid_ != nullptr;};
        void deleteClid() { this->clid_ = nullptr;};
        inline string getClid() const { DARABONBA_PTR_GET_DEFAULT(clid_, "") };
        inline List& setClid(string clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline List& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // displayNumber Field Functions 
        bool hasDisplayNumber() const { return this->displayNumber_ != nullptr;};
        void deleteDisplayNumber() { this->displayNumber_ = nullptr;};
        inline string getDisplayNumber() const { DARABONBA_PTR_GET_DEFAULT(displayNumber_, "") };
        inline List& setDisplayNumber(string displayNumber) { DARABONBA_PTR_SET_VALUE(displayNumber_, displayNumber) };


        // endReason Field Functions 
        bool hasEndReason() const { return this->endReason_ != nullptr;};
        void deleteEndReason() { this->endReason_ = nullptr;};
        inline string getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, "") };
        inline List& setEndReason(string endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline List& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // gno Field Functions 
        bool hasGno() const { return this->gno_ != nullptr;};
        void deleteGno() { this->gno_ = nullptr;};
        inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
        inline List& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // joinQueueTime Field Functions 
        bool hasJoinQueueTime() const { return this->joinQueueTime_ != nullptr;};
        void deleteJoinQueueTime() { this->joinQueueTime_ = nullptr;};
        inline string getJoinQueueTime() const { DARABONBA_PTR_GET_DEFAULT(joinQueueTime_, "") };
        inline List& setJoinQueueTime(string joinQueueTime) { DARABONBA_PTR_SET_VALUE(joinQueueTime_, joinQueueTime) };


        // mainCallType Field Functions 
        bool hasMainCallType() const { return this->mainCallType_ != nullptr;};
        void deleteMainCallType() { this->mainCallType_ = nullptr;};
        inline string getMainCallType() const { DARABONBA_PTR_GET_DEFAULT(mainCallType_, "") };
        inline List& setMainCallType(string mainCallType) { DARABONBA_PTR_SET_VALUE(mainCallType_, mainCallType) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline List& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline List& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline List& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline const vector<string> & getRecordFile() const { DARABONBA_PTR_GET_CONST(recordFile_, vector<string>) };
        inline vector<string> getRecordFile() { DARABONBA_PTR_GET(recordFile_, vector<string>) };
        inline List& setRecordFile(const vector<string> & recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };
        inline List& setRecordFile(vector<string> && recordFile) { DARABONBA_PTR_SET_RVALUE(recordFile_, recordFile) };


        // ringingTime Field Functions 
        bool hasRingingTime() const { return this->ringingTime_ != nullptr;};
        void deleteRingingTime() { this->ringingTime_ = nullptr;};
        inline string getRingingTime() const { DARABONBA_PTR_GET_DEFAULT(ringingTime_, "") };
        inline List& setRingingTime(string ringingTime) { DARABONBA_PTR_SET_VALUE(ringingTime_, ringingTime) };


        // sipCause Field Functions 
        bool hasSipCause() const { return this->sipCause_ != nullptr;};
        void deleteSipCause() { this->sipCause_ = nullptr;};
        inline string getSipCause() const { DARABONBA_PTR_GET_DEFAULT(sipCause_, "") };
        inline List& setSipCause(string sipCause) { DARABONBA_PTR_SET_VALUE(sipCause_, sipCause) };


        // sipCauseStr Field Functions 
        bool hasSipCauseStr() const { return this->sipCauseStr_ != nullptr;};
        void deleteSipCauseStr() { this->sipCauseStr_ = nullptr;};
        inline string getSipCauseStr() const { DARABONBA_PTR_GET_DEFAULT(sipCauseStr_, "") };
        inline List& setSipCauseStr(string sipCauseStr) { DARABONBA_PTR_SET_VALUE(sipCauseStr_, sipCauseStr) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline List& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline List& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline List& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline string getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, "") };
        inline List& setTotalDuration(string totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // trunkGroupKey Field Functions 
        bool hasTrunkGroupKey() const { return this->trunkGroupKey_ != nullptr;};
        void deleteTrunkGroupKey() { this->trunkGroupKey_ = nullptr;};
        inline string getTrunkGroupKey() const { DARABONBA_PTR_GET_DEFAULT(trunkGroupKey_, "") };
        inline List& setTrunkGroupKey(string trunkGroupKey) { DARABONBA_PTR_SET_VALUE(trunkGroupKey_, trunkGroupKey) };


        // tsiFile Field Functions 
        bool hasTsiFile() const { return this->tsiFile_ != nullptr;};
        void deleteTsiFile() { this->tsiFile_ = nullptr;};
        inline string getTsiFile() const { DARABONBA_PTR_GET_DEFAULT(tsiFile_, "") };
        inline List& setTsiFile(string tsiFile) { DARABONBA_PTR_SET_VALUE(tsiFile_, tsiFile) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline List& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        // XNumber Field Functions 
        bool hasXNumber() const { return this->XNumber_ != nullptr;};
        void deleteXNumber() { this->XNumber_ = nullptr;};
        inline string getXNumber() const { DARABONBA_PTR_GET_DEFAULT(XNumber_, "") };
        inline List& setXNumber(string XNumber) { DARABONBA_PTR_SET_VALUE(XNumber_, XNumber) };


      protected:
        shared_ptr<string> agentName_ {};
        // 客户接听时间，时间戳，精确到s，如1480904471
        shared_ptr<string> answerTime_ {};
        // 通话唯一标识
        shared_ptr<string> callId_ {};
        // 呼叫类型 转移
        shared_ptr<string> callType_ {};
        // 呼叫类型编码，如102
        shared_ptr<string> callTypeCode_ {};
        // 被叫号码区号
        shared_ptr<string> calleeAreaCode_ {};
        // 呼叫的号码，可能是座席也可能是普通电话
        shared_ptr<string> calleeNumber_ {};
        // 外显号码
        shared_ptr<string> clid_ {};
        // 座席工号，如2000
        shared_ptr<string> cno_ {};
        // 客户侧真实外显号码，当使用AXB场景进行外呼时，客户侧真实外显号码为虚拟号
        shared_ptr<string> displayNumber_ {};
        // 结束原因,接听之后的挂机原因 1000:主通道挂机 1001:非主通道挂机 1002:被强拆
        shared_ptr<string> endReason_ {};
        // 电话结束时间，时间戳，精确到s，如1480904471
        shared_ptr<string> endTime_ {};
        shared_ptr<string> gno_ {};
        // Id
        shared_ptr<string> id_ {};
        // 入队列时间，时间戳，精确到s，如1480904471
        shared_ptr<string> joinQueueTime_ {};
        // 主通话记录来电类型 主叫外呼
        shared_ptr<string> mainCallType_ {};
        // 主外呼通话记录唯一标识
        shared_ptr<string> mainUniqueId_ {};
        // 队列号
        shared_ptr<string> qno_ {};
        // 进入队列时间
        shared_ptr<string> queueName_ {};
        shared_ptr<vector<string>> recordFile_ {};
        // 响铃时间，时间戳，精确到s，如1480904471
        shared_ptr<string> ringingTime_ {};
        // SIP响应码：200 ~ 699
        shared_ptr<string> sipCause_ {};
        // 呼叫结果
        shared_ptr<string> sipCauseStr_ {};
        // 呼叫客户时间，时间戳，精确到s，如1480904471
        shared_ptr<string> startTime_ {};
        // 外呼结果，如接听
        shared_ptr<string> status_ {};
        shared_ptr<string> statusCode_ {};
        shared_ptr<string> taskName_ {};
        // 总通话时长秒数，单位是s
        shared_ptr<string> totalDuration_ {};
        // 中继群组代号
        shared_ptr<string> trunkGroupKey_ {};
        // 号码状态识别录音文件名
        shared_ptr<string> tsiFile_ {};
        // 从通道唯一标识
        shared_ptr<string> uniqueId_ {};
        shared_ptr<string> XNumber_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      // 座席外呼通话记录详情
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudGetObCdrResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudGetObCdrResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudGetObCdrResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudGetObCdrResponseBody::Data) };
    inline CloudGetObCdrResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudGetObCdrResponseBody::Data) };
    inline CloudGetObCdrResponseBody& setData(const CloudGetObCdrResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudGetObCdrResponseBody& setData(CloudGetObCdrResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudGetObCdrResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudGetObCdrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudGetObCdrResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
