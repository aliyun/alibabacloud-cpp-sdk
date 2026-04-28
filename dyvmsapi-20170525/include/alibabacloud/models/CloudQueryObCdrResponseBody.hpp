// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYOBCDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYOBCDRRESPONSEBODY_HPP_
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
  class CloudQueryObCdrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryObCdrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryObCdrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudQueryObCdrResponseBody() = default ;
    CloudQueryObCdrResponseBody(const CloudQueryObCdrResponseBody &) = default ;
    CloudQueryObCdrResponseBody(CloudQueryObCdrResponseBody &&) = default ;
    CloudQueryObCdrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryObCdrResponseBody() = default ;
    CloudQueryObCdrResponseBody& operator=(const CloudQueryObCdrResponseBody &) = default ;
    CloudQueryObCdrResponseBody& operator=(CloudQueryObCdrResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentClid, agentClid_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(AgentNumber, agentNumber_);
          DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CalleeRingingTime, calleeRingingTime_);
          DARABONBA_PTR_TO_JSON(Clid, clid_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerAreaCode, customerAreaCode_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(DisplayNumber, displayNumber_);
          DARABONBA_PTR_TO_JSON(DownGrade, downGrade_);
          DARABONBA_PTR_TO_JSON(DownGradeCounts, downGradeCounts_);
          DARABONBA_PTR_TO_JSON(EndReason, endReason_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Gno, gno_);
          DARABONBA_PTR_TO_JSON(HangupReason, hangupReason_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsRealAnswer, isRealAnswer_);
          DARABONBA_PTR_TO_JSON(LeftDisplayNumber, leftDisplayNumber_);
          DARABONBA_PTR_TO_JSON(MainRingingTime, mainRingingTime_);
          DARABONBA_PTR_TO_JSON(RealAnswerTime, realAnswerTime_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(RequestUniqueId, requestUniqueId_);
          DARABONBA_PTR_TO_JSON(RtcTotalDuration, rtcTotalDuration_);
          DARABONBA_PTR_TO_JSON(SipCause, sipCause_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_TO_JSON(TsiFile, tsiFile_);
          DARABONBA_PTR_TO_JSON(TsiFileFormat, tsiFileFormat_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_ANY_TO_JSON(UserField, userField_);
          DARABONBA_PTR_TO_JSON(VadIn, vadIn_);
          DARABONBA_PTR_TO_JSON(VadOut, vadOut_);
          DARABONBA_PTR_TO_JSON(WaitDuration, waitDuration_);
          DARABONBA_PTR_TO_JSON(XNumber, XNumber_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentClid, agentClid_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(AgentNumber, agentNumber_);
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CalleeRingingTime, calleeRingingTime_);
          DARABONBA_PTR_FROM_JSON(Clid, clid_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerAreaCode, customerAreaCode_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(DisplayNumber, displayNumber_);
          DARABONBA_PTR_FROM_JSON(DownGrade, downGrade_);
          DARABONBA_PTR_FROM_JSON(DownGradeCounts, downGradeCounts_);
          DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Gno, gno_);
          DARABONBA_PTR_FROM_JSON(HangupReason, hangupReason_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsRealAnswer, isRealAnswer_);
          DARABONBA_PTR_FROM_JSON(LeftDisplayNumber, leftDisplayNumber_);
          DARABONBA_PTR_FROM_JSON(MainRingingTime, mainRingingTime_);
          DARABONBA_PTR_FROM_JSON(RealAnswerTime, realAnswerTime_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(RequestUniqueId, requestUniqueId_);
          DARABONBA_PTR_FROM_JSON(RtcTotalDuration, rtcTotalDuration_);
          DARABONBA_PTR_FROM_JSON(SipCause, sipCause_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(TrunkGroupKey, trunkGroupKey_);
          DARABONBA_PTR_FROM_JSON(TsiFile, tsiFile_);
          DARABONBA_PTR_FROM_JSON(TsiFileFormat, tsiFileFormat_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_ANY_FROM_JSON(UserField, userField_);
          DARABONBA_PTR_FROM_JSON(VadIn, vadIn_);
          DARABONBA_PTR_FROM_JSON(VadOut, vadOut_);
          DARABONBA_PTR_FROM_JSON(WaitDuration, waitDuration_);
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
        class RecordFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecordFile& obj) { 
            DARABONBA_PTR_TO_JSON(File, file_);
            DARABONBA_PTR_TO_JSON(Monitor_type, monitorType_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, RecordFile& obj) { 
            DARABONBA_PTR_FROM_JSON(File, file_);
            DARABONBA_PTR_FROM_JSON(Monitor_type, monitorType_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          RecordFile() = default ;
          RecordFile(const RecordFile &) = default ;
          RecordFile(RecordFile &&) = default ;
          RecordFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecordFile() = default ;
          RecordFile& operator=(const RecordFile &) = default ;
          RecordFile& operator=(RecordFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->file_ == nullptr
        && this->monitorType_ == nullptr && this->type_ == nullptr; };
          // file Field Functions 
          bool hasFile() const { return this->file_ != nullptr;};
          void deleteFile() { this->file_ = nullptr;};
          inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
          inline RecordFile& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


          // monitorType Field Functions 
          bool hasMonitorType() const { return this->monitorType_ != nullptr;};
          void deleteMonitorType() { this->monitorType_ = nullptr;};
          inline int64_t getMonitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, 0L) };
          inline RecordFile& setMonitorType(int64_t monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RecordFile& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // 录音文件名
          shared_ptr<string> file_ {};
          // 1. 混音 2. 分线录音（保留2个单声道WAV） 3.留言 5. 分线录音（保留1个双声道WAV）
          shared_ptr<int64_t> monitorType_ {};
          // 取值：record,voicemail 说明：record是录音， voicemail是留言
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->agentClid_ == nullptr
        && this->agentName_ == nullptr && this->agentNumber_ == nullptr && this->answerTime_ == nullptr && this->bridgeDuration_ == nullptr && this->bridgeTime_ == nullptr
        && this->callId_ == nullptr && this->callType_ == nullptr && this->calleeRingingTime_ == nullptr && this->clid_ == nullptr && this->cno_ == nullptr
        && this->customerAreaCode_ == nullptr && this->customerCity_ == nullptr && this->customerNumber_ == nullptr && this->customerProvince_ == nullptr && this->displayNumber_ == nullptr
        && this->downGrade_ == nullptr && this->downGradeCounts_ == nullptr && this->endReason_ == nullptr && this->endTime_ == nullptr && this->gno_ == nullptr
        && this->hangupReason_ == nullptr && this->id_ == nullptr && this->isRealAnswer_ == nullptr && this->leftDisplayNumber_ == nullptr && this->mainRingingTime_ == nullptr
        && this->realAnswerTime_ == nullptr && this->recordFile_ == nullptr && this->requestUniqueId_ == nullptr && this->rtcTotalDuration_ == nullptr && this->sipCause_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr && this->statusReason_ == nullptr && this->taskId_ == nullptr
        && this->totalDuration_ == nullptr && this->trunkGroupKey_ == nullptr && this->tsiFile_ == nullptr && this->tsiFileFormat_ == nullptr && this->uniqueId_ == nullptr
        && this->userField_ == nullptr && this->vadIn_ == nullptr && this->vadOut_ == nullptr && this->waitDuration_ == nullptr && this->XNumber_ == nullptr; };
        // agentClid Field Functions 
        bool hasAgentClid() const { return this->agentClid_ != nullptr;};
        void deleteAgentClid() { this->agentClid_ = nullptr;};
        inline string getAgentClid() const { DARABONBA_PTR_GET_DEFAULT(agentClid_, "") };
        inline List& setAgentClid(string agentClid) { DARABONBA_PTR_SET_VALUE(agentClid_, agentClid) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // agentNumber Field Functions 
        bool hasAgentNumber() const { return this->agentNumber_ != nullptr;};
        void deleteAgentNumber() { this->agentNumber_ = nullptr;};
        inline string getAgentNumber() const { DARABONBA_PTR_GET_DEFAULT(agentNumber_, "") };
        inline List& setAgentNumber(string agentNumber) { DARABONBA_PTR_SET_VALUE(agentNumber_, agentNumber) };


        // answerTime Field Functions 
        bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
        void deleteAnswerTime() { this->answerTime_ = nullptr;};
        inline string getAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, "") };
        inline List& setAnswerTime(string answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline string getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, "") };
        inline List& setBridgeDuration(string bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // bridgeTime Field Functions 
        bool hasBridgeTime() const { return this->bridgeTime_ != nullptr;};
        void deleteBridgeTime() { this->bridgeTime_ = nullptr;};
        inline string getBridgeTime() const { DARABONBA_PTR_GET_DEFAULT(bridgeTime_, "") };
        inline List& setBridgeTime(string bridgeTime) { DARABONBA_PTR_SET_VALUE(bridgeTime_, bridgeTime) };


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


        // calleeRingingTime Field Functions 
        bool hasCalleeRingingTime() const { return this->calleeRingingTime_ != nullptr;};
        void deleteCalleeRingingTime() { this->calleeRingingTime_ = nullptr;};
        inline string getCalleeRingingTime() const { DARABONBA_PTR_GET_DEFAULT(calleeRingingTime_, "") };
        inline List& setCalleeRingingTime(string calleeRingingTime) { DARABONBA_PTR_SET_VALUE(calleeRingingTime_, calleeRingingTime) };


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


        // customerAreaCode Field Functions 
        bool hasCustomerAreaCode() const { return this->customerAreaCode_ != nullptr;};
        void deleteCustomerAreaCode() { this->customerAreaCode_ = nullptr;};
        inline string getCustomerAreaCode() const { DARABONBA_PTR_GET_DEFAULT(customerAreaCode_, "") };
        inline List& setCustomerAreaCode(string customerAreaCode) { DARABONBA_PTR_SET_VALUE(customerAreaCode_, customerAreaCode) };


        // customerCity Field Functions 
        bool hasCustomerCity() const { return this->customerCity_ != nullptr;};
        void deleteCustomerCity() { this->customerCity_ = nullptr;};
        inline string getCustomerCity() const { DARABONBA_PTR_GET_DEFAULT(customerCity_, "") };
        inline List& setCustomerCity(string customerCity) { DARABONBA_PTR_SET_VALUE(customerCity_, customerCity) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline List& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // customerProvince Field Functions 
        bool hasCustomerProvince() const { return this->customerProvince_ != nullptr;};
        void deleteCustomerProvince() { this->customerProvince_ = nullptr;};
        inline string getCustomerProvince() const { DARABONBA_PTR_GET_DEFAULT(customerProvince_, "") };
        inline List& setCustomerProvince(string customerProvince) { DARABONBA_PTR_SET_VALUE(customerProvince_, customerProvince) };


        // displayNumber Field Functions 
        bool hasDisplayNumber() const { return this->displayNumber_ != nullptr;};
        void deleteDisplayNumber() { this->displayNumber_ = nullptr;};
        inline string getDisplayNumber() const { DARABONBA_PTR_GET_DEFAULT(displayNumber_, "") };
        inline List& setDisplayNumber(string displayNumber) { DARABONBA_PTR_SET_VALUE(displayNumber_, displayNumber) };


        // downGrade Field Functions 
        bool hasDownGrade() const { return this->downGrade_ != nullptr;};
        void deleteDownGrade() { this->downGrade_ = nullptr;};
        inline string getDownGrade() const { DARABONBA_PTR_GET_DEFAULT(downGrade_, "") };
        inline List& setDownGrade(string downGrade) { DARABONBA_PTR_SET_VALUE(downGrade_, downGrade) };


        // downGradeCounts Field Functions 
        bool hasDownGradeCounts() const { return this->downGradeCounts_ != nullptr;};
        void deleteDownGradeCounts() { this->downGradeCounts_ = nullptr;};
        inline string getDownGradeCounts() const { DARABONBA_PTR_GET_DEFAULT(downGradeCounts_, "") };
        inline List& setDownGradeCounts(string downGradeCounts) { DARABONBA_PTR_SET_VALUE(downGradeCounts_, downGradeCounts) };


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


        // hangupReason Field Functions 
        bool hasHangupReason() const { return this->hangupReason_ != nullptr;};
        void deleteHangupReason() { this->hangupReason_ = nullptr;};
        inline string getHangupReason() const { DARABONBA_PTR_GET_DEFAULT(hangupReason_, "") };
        inline List& setHangupReason(string hangupReason) { DARABONBA_PTR_SET_VALUE(hangupReason_, hangupReason) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isRealAnswer Field Functions 
        bool hasIsRealAnswer() const { return this->isRealAnswer_ != nullptr;};
        void deleteIsRealAnswer() { this->isRealAnswer_ = nullptr;};
        inline string getIsRealAnswer() const { DARABONBA_PTR_GET_DEFAULT(isRealAnswer_, "") };
        inline List& setIsRealAnswer(string isRealAnswer) { DARABONBA_PTR_SET_VALUE(isRealAnswer_, isRealAnswer) };


        // leftDisplayNumber Field Functions 
        bool hasLeftDisplayNumber() const { return this->leftDisplayNumber_ != nullptr;};
        void deleteLeftDisplayNumber() { this->leftDisplayNumber_ = nullptr;};
        inline string getLeftDisplayNumber() const { DARABONBA_PTR_GET_DEFAULT(leftDisplayNumber_, "") };
        inline List& setLeftDisplayNumber(string leftDisplayNumber) { DARABONBA_PTR_SET_VALUE(leftDisplayNumber_, leftDisplayNumber) };


        // mainRingingTime Field Functions 
        bool hasMainRingingTime() const { return this->mainRingingTime_ != nullptr;};
        void deleteMainRingingTime() { this->mainRingingTime_ = nullptr;};
        inline string getMainRingingTime() const { DARABONBA_PTR_GET_DEFAULT(mainRingingTime_, "") };
        inline List& setMainRingingTime(string mainRingingTime) { DARABONBA_PTR_SET_VALUE(mainRingingTime_, mainRingingTime) };


        // realAnswerTime Field Functions 
        bool hasRealAnswerTime() const { return this->realAnswerTime_ != nullptr;};
        void deleteRealAnswerTime() { this->realAnswerTime_ = nullptr;};
        inline string getRealAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(realAnswerTime_, "") };
        inline List& setRealAnswerTime(string realAnswerTime) { DARABONBA_PTR_SET_VALUE(realAnswerTime_, realAnswerTime) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline const vector<List::RecordFile> & getRecordFile() const { DARABONBA_PTR_GET_CONST(recordFile_, vector<List::RecordFile>) };
        inline vector<List::RecordFile> getRecordFile() { DARABONBA_PTR_GET(recordFile_, vector<List::RecordFile>) };
        inline List& setRecordFile(const vector<List::RecordFile> & recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };
        inline List& setRecordFile(vector<List::RecordFile> && recordFile) { DARABONBA_PTR_SET_RVALUE(recordFile_, recordFile) };


        // requestUniqueId Field Functions 
        bool hasRequestUniqueId() const { return this->requestUniqueId_ != nullptr;};
        void deleteRequestUniqueId() { this->requestUniqueId_ = nullptr;};
        inline string getRequestUniqueId() const { DARABONBA_PTR_GET_DEFAULT(requestUniqueId_, "") };
        inline List& setRequestUniqueId(string requestUniqueId) { DARABONBA_PTR_SET_VALUE(requestUniqueId_, requestUniqueId) };


        // rtcTotalDuration Field Functions 
        bool hasRtcTotalDuration() const { return this->rtcTotalDuration_ != nullptr;};
        void deleteRtcTotalDuration() { this->rtcTotalDuration_ = nullptr;};
        inline string getRtcTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(rtcTotalDuration_, "") };
        inline List& setRtcTotalDuration(string rtcTotalDuration) { DARABONBA_PTR_SET_VALUE(rtcTotalDuration_, rtcTotalDuration) };


        // sipCause Field Functions 
        bool hasSipCause() const { return this->sipCause_ != nullptr;};
        void deleteSipCause() { this->sipCause_ = nullptr;};
        inline string getSipCause() const { DARABONBA_PTR_GET_DEFAULT(sipCause_, "") };
        inline List& setSipCause(string sipCause) { DARABONBA_PTR_SET_VALUE(sipCause_, sipCause) };


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


        // statusReason Field Functions 
        bool hasStatusReason() const { return this->statusReason_ != nullptr;};
        void deleteStatusReason() { this->statusReason_ = nullptr;};
        inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
        inline List& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


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


        // tsiFileFormat Field Functions 
        bool hasTsiFileFormat() const { return this->tsiFileFormat_ != nullptr;};
        void deleteTsiFileFormat() { this->tsiFileFormat_ = nullptr;};
        inline string getTsiFileFormat() const { DARABONBA_PTR_GET_DEFAULT(tsiFileFormat_, "") };
        inline List& setTsiFileFormat(string tsiFileFormat) { DARABONBA_PTR_SET_VALUE(tsiFileFormat_, tsiFileFormat) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline List& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        // userField Field Functions 
        bool hasUserField() const { return this->userField_ != nullptr;};
        void deleteUserField() { this->userField_ = nullptr;};
        inline         const Darabonba::Json & getUserField() const { DARABONBA_GET(userField_) };
        Darabonba::Json & getUserField() { DARABONBA_GET(userField_) };
        inline List& setUserField(const Darabonba::Json & userField) { DARABONBA_SET_VALUE(userField_, userField) };
        inline List& setUserField(Darabonba::Json && userField) { DARABONBA_SET_RVALUE(userField_, userField) };


        // vadIn Field Functions 
        bool hasVadIn() const { return this->vadIn_ != nullptr;};
        void deleteVadIn() { this->vadIn_ = nullptr;};
        inline string getVadIn() const { DARABONBA_PTR_GET_DEFAULT(vadIn_, "") };
        inline List& setVadIn(string vadIn) { DARABONBA_PTR_SET_VALUE(vadIn_, vadIn) };


        // vadOut Field Functions 
        bool hasVadOut() const { return this->vadOut_ != nullptr;};
        void deleteVadOut() { this->vadOut_ = nullptr;};
        inline string getVadOut() const { DARABONBA_PTR_GET_DEFAULT(vadOut_, "") };
        inline List& setVadOut(string vadOut) { DARABONBA_PTR_SET_VALUE(vadOut_, vadOut) };


        // waitDuration Field Functions 
        bool hasWaitDuration() const { return this->waitDuration_ != nullptr;};
        void deleteWaitDuration() { this->waitDuration_ = nullptr;};
        inline string getWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(waitDuration_, "") };
        inline List& setWaitDuration(string waitDuration) { DARABONBA_PTR_SET_VALUE(waitDuration_, waitDuration) };


        // XNumber Field Functions 
        bool hasXNumber() const { return this->XNumber_ != nullptr;};
        void deleteXNumber() { this->XNumber_ = nullptr;};
        inline string getXNumber() const { DARABONBA_PTR_GET_DEFAULT(XNumber_, "") };
        inline List& setXNumber(string XNumber) { DARABONBA_PTR_SET_VALUE(XNumber_, XNumber) };


      protected:
        // 座席侧外显号码
        shared_ptr<string> agentClid_ {};
        // 座席名称
        shared_ptr<string> agentName_ {};
        // 座席电话 区号 +7或8位的固话号码，区号与固话号码之间无\\"-\\"；或11位长度的手机号码。0104100596
        shared_ptr<string> agentNumber_ {};
        // 座席接听时间，时间戳，精确到s，如1480904471
        shared_ptr<string> answerTime_ {};
        // 服务处理时长秒数，单位是s
        shared_ptr<string> bridgeDuration_ {};
        // 双方接听时间，时间戳，精确到s，如1480904471
        shared_ptr<string> bridgeTime_ {};
        // 通话唯一标识
        shared_ptr<string> callId_ {};
        // 呼叫类型：4、预览外呼; 6、主叫外呼
        shared_ptr<string> callType_ {};
        // 客户侧响铃时间，时间戳，精确到s，如1480904471
        shared_ptr<string> calleeRingingTime_ {};
        // 客户侧外显号码，当使用虚拟号进行AXB外呼且开关打开时，实际返回的客户侧外显号码是虚拟号
        shared_ptr<string> clid_ {};
        // 座席工号，如2000
        shared_ptr<string> cno_ {};
        // 客户号码区号
        shared_ptr<string> customerAreaCode_ {};
        // 客户号码归属城市,北京
        shared_ptr<string> customerCity_ {};
        // 客户号码 国内固话或手机，区号 + 7或8位的固话号码，区号与固话号码之间无\\"-\\"；或11位长度的手机号码。如 01041005968或18701051984 或虚拟号-分机号场景格式，如 18701051984-7538
        shared_ptr<string> customerNumber_ {};
        // 客户号码归属省份，如 北京
        shared_ptr<string> customerProvince_ {};
        // 座席侧真实外显号码，当使用AXB场景进行外呼时，座席侧真实外显号码为虚拟号
        shared_ptr<string> displayNumber_ {};
        // 是否呼叫降级, 0-否, 1-是
        shared_ptr<string> downGrade_ {};
        // 降级次数
        shared_ptr<string> downGradeCounts_ {};
        // 结束原因,接听之后的挂机原因 1000:主通道挂机 1001:非主通道挂机 1002:被强拆
        shared_ptr<string> endReason_ {};
        // 电话结束时间，时间戳，精确到s，如1480904471
        shared_ptr<string> endTime_ {};
        shared_ptr<string> gno_ {};
        shared_ptr<string> hangupReason_ {};
        // Id
        shared_ptr<string> id_ {};
        // 是否真人接听：1 - 是、0 - 否、空值
        shared_ptr<string> isRealAnswer_ {};
        // 客户侧真实外显号码，当使用AXB场景进行外呼时，客户侧真实外显号码为虚拟号
        shared_ptr<string> leftDisplayNumber_ {};
        // 分机外呼，话机响铃时间
        shared_ptr<string> mainRingingTime_ {};
        // 真人接听时间，时间戳，精确到s，如1480904471
        shared_ptr<string> realAnswerTime_ {};
        // 通话记录录音数组，json格式
        shared_ptr<vector<List::RecordFile>> recordFile_ {};
        // 请求唯一id
        shared_ptr<string> requestUniqueId_ {};
        // RTC总通话时长秒数，单位是s，在呼叫类型为主叫外呼(RTC)时有效，计算规则：endTime-startTime
        shared_ptr<string> rtcTotalDuration_ {};
        // SIP响应码：200 ~ 699 详见 注：主叫外呼RTC座席侧没有SIP协商的概念，并未发起呼叫，因此该值默认为0
        shared_ptr<string> sipCause_ {};
        // 座席开始外呼时间，时间戳，精确到s，如1480904471
        shared_ptr<string> startTime_ {};
        // 外呼结果：30 座席未接听; 31 座席接听,未呼叫客户; 32 座席接听,客户未接听; 33 双方接听; 50 主叫外呼接听; 51 主叫外呼,客户未接听; 52 主叫外呼,双方接听。
        shared_ptr<string> status_ {};
        shared_ptr<string> statusCode_ {};
        // 通话状态原因（主叫外呼）描述：1 - 企业黑名单; 2 - 风控系统拦截; 20001 - 呼叫限制；20002 - 黑名单或非白名单；20003 - 禁拨时间段； 3 - 无效的外显号码; 4 - 错误的语音导航; 5 - 企业停机; 6 - 无权限外呼; 7 - 超出呼叫次数限制; 8 - 错误号码; 9 - 其他错误；
        shared_ptr<string> statusReason_ {};
        // 座席自动外呼任务id
        shared_ptr<string> taskId_ {};
        // 总通话时长秒数，单位是s
        shared_ptr<string> totalDuration_ {};
        // 中继群组代号
        shared_ptr<string> trunkGroupKey_ {};
        // 彩铃文件名称
        shared_ptr<string> tsiFile_ {};
        // 彩铃文件类型
        shared_ptr<string> tsiFileFormat_ {};
        // 电话唯一标识
        shared_ptr<string> uniqueId_ {};
        // 通话记录自定义字段，json格式
        Darabonba::Json userField_ {};
        // 通话质量百分比,数据是0-100之间，in方向说话占用的百分比
        shared_ptr<string> vadIn_ {};
        // 通话质量百分比,数据是0-100之间，out方向说话占用的百分比
        shared_ptr<string> vadOut_ {};
        // 客户等待时长秒数，单位是s
        shared_ptr<string> waitDuration_ {};
        // 虚拟号码
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
      // 座席外呼通话记录数组
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudQueryObCdrResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudQueryObCdrResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudQueryObCdrResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudQueryObCdrResponseBody::Data) };
    inline CloudQueryObCdrResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudQueryObCdrResponseBody::Data) };
    inline CloudQueryObCdrResponseBody& setData(const CloudQueryObCdrResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudQueryObCdrResponseBody& setData(CloudQueryObCdrResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudQueryObCdrResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudQueryObCdrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudQueryObCdrResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
