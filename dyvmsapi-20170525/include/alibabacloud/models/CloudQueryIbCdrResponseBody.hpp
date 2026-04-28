// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYIBCDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYIBCDRRESPONSEBODY_HPP_
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
  class CloudQueryIbCdrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryIbCdrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryIbCdrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudQueryIbCdrResponseBody() = default ;
    CloudQueryIbCdrResponseBody(const CloudQueryIbCdrResponseBody &) = default ;
    CloudQueryIbCdrResponseBody(CloudQueryIbCdrResponseBody &&) = default ;
    CloudQueryIbCdrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryIbCdrResponseBody() = default ;
    CloudQueryIbCdrResponseBody& operator=(const CloudQueryIbCdrResponseBody &) = default ;
    CloudQueryIbCdrResponseBody& operator=(CloudQueryIbCdrResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CalleeNumber, calleeNumber_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerAreaCode, customerAreaCode_);
          DARABONBA_PTR_TO_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_TO_JSON(EndReason, endReason_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Hotline, hotline_);
          DARABONBA_PTR_TO_JSON(IvrName, ivrName_);
          DARABONBA_PTR_TO_JSON(LeaveQueueCode, leaveQueueCode_);
          DARABONBA_PTR_TO_JSON(NumberTrunk, numberTrunk_);
          DARABONBA_PTR_TO_JSON(NumberTrunkAreaCode, numberTrunkAreaCode_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_ANY_TO_JSON(UserField, userField_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(BridgeTime, bridgeTime_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CalleeNumber, calleeNumber_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerAreaCode, customerAreaCode_);
          DARABONBA_PTR_FROM_JSON(CustomerCity, customerCity_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(CustomerProvince, customerProvince_);
          DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
          DARABONBA_PTR_FROM_JSON(IvrName, ivrName_);
          DARABONBA_PTR_FROM_JSON(LeaveQueueCode, leaveQueueCode_);
          DARABONBA_PTR_FROM_JSON(NumberTrunk, numberTrunk_);
          DARABONBA_PTR_FROM_JSON(NumberTrunkAreaCode, numberTrunkAreaCode_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_ANY_FROM_JSON(UserField, userField_);
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

        virtual bool empty() const override { return this->agentName_ == nullptr
        && this->answerTime_ == nullptr && this->bridgeDuration_ == nullptr && this->bridgeTime_ == nullptr && this->callType_ == nullptr && this->calleeNumber_ == nullptr
        && this->cno_ == nullptr && this->customerAreaCode_ == nullptr && this->customerCity_ == nullptr && this->customerNumber_ == nullptr && this->customerProvince_ == nullptr
        && this->endReason_ == nullptr && this->endTime_ == nullptr && this->hotline_ == nullptr && this->ivrName_ == nullptr && this->leaveQueueCode_ == nullptr
        && this->numberTrunk_ == nullptr && this->numberTrunkAreaCode_ == nullptr && this->qno_ == nullptr && this->recordFile_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->statusCode_ == nullptr && this->totalDuration_ == nullptr && this->uniqueId_ == nullptr && this->userField_ == nullptr; };
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


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline List& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // calleeNumber Field Functions 
        bool hasCalleeNumber() const { return this->calleeNumber_ != nullptr;};
        void deleteCalleeNumber() { this->calleeNumber_ = nullptr;};
        inline string getCalleeNumber() const { DARABONBA_PTR_GET_DEFAULT(calleeNumber_, "") };
        inline List& setCalleeNumber(string calleeNumber) { DARABONBA_PTR_SET_VALUE(calleeNumber_, calleeNumber) };


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


        // hotline Field Functions 
        bool hasHotline() const { return this->hotline_ != nullptr;};
        void deleteHotline() { this->hotline_ = nullptr;};
        inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
        inline List& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


        // ivrName Field Functions 
        bool hasIvrName() const { return this->ivrName_ != nullptr;};
        void deleteIvrName() { this->ivrName_ = nullptr;};
        inline string getIvrName() const { DARABONBA_PTR_GET_DEFAULT(ivrName_, "") };
        inline List& setIvrName(string ivrName) { DARABONBA_PTR_SET_VALUE(ivrName_, ivrName) };


        // leaveQueueCode Field Functions 
        bool hasLeaveQueueCode() const { return this->leaveQueueCode_ != nullptr;};
        void deleteLeaveQueueCode() { this->leaveQueueCode_ = nullptr;};
        inline int64_t getLeaveQueueCode() const { DARABONBA_PTR_GET_DEFAULT(leaveQueueCode_, 0L) };
        inline List& setLeaveQueueCode(int64_t leaveQueueCode) { DARABONBA_PTR_SET_VALUE(leaveQueueCode_, leaveQueueCode) };


        // numberTrunk Field Functions 
        bool hasNumberTrunk() const { return this->numberTrunk_ != nullptr;};
        void deleteNumberTrunk() { this->numberTrunk_ = nullptr;};
        inline string getNumberTrunk() const { DARABONBA_PTR_GET_DEFAULT(numberTrunk_, "") };
        inline List& setNumberTrunk(string numberTrunk) { DARABONBA_PTR_SET_VALUE(numberTrunk_, numberTrunk) };


        // numberTrunkAreaCode Field Functions 
        bool hasNumberTrunkAreaCode() const { return this->numberTrunkAreaCode_ != nullptr;};
        void deleteNumberTrunkAreaCode() { this->numberTrunkAreaCode_ = nullptr;};
        inline string getNumberTrunkAreaCode() const { DARABONBA_PTR_GET_DEFAULT(numberTrunkAreaCode_, "") };
        inline List& setNumberTrunkAreaCode(string numberTrunkAreaCode) { DARABONBA_PTR_SET_VALUE(numberTrunkAreaCode_, numberTrunkAreaCode) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline List& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline const vector<List::RecordFile> & getRecordFile() const { DARABONBA_PTR_GET_CONST(recordFile_, vector<List::RecordFile>) };
        inline vector<List::RecordFile> getRecordFile() { DARABONBA_PTR_GET(recordFile_, vector<List::RecordFile>) };
        inline List& setRecordFile(const vector<List::RecordFile> & recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };
        inline List& setRecordFile(vector<List::RecordFile> && recordFile) { DARABONBA_PTR_SET_RVALUE(recordFile_, recordFile) };


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


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline string getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, "") };
        inline List& setTotalDuration(string totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


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


      protected:
        // 座席名称
        shared_ptr<string> agentName_ {};
        // 系统接听时间，时间戳，精确到s，如1480904471
        shared_ptr<string> answerTime_ {};
        // 服务处理时长秒数，单位是s
        shared_ptr<string> bridgeDuration_ {};
        // 座席接听时间，时间戳，精确到s，如1480904471
        shared_ptr<string> bridgeTime_ {};
        // 呼叫类型 呼入
        shared_ptr<string> callType_ {};
        // 座席电话 区号 +7或8位的固话号码，区号与固话号码之间无\\"-\\"；或11位长度的手机号码。0104100596
        shared_ptr<string> calleeNumber_ {};
        // 座席工号，如2000
        shared_ptr<string> cno_ {};
        // 客户号码区号
        shared_ptr<string> customerAreaCode_ {};
        // 客户号码归属城市,北京
        shared_ptr<string> customerCity_ {};
        // 客户号码 国内固话或手机，区号 + 7或8位的固话号码，区号与固话号码之间无\\"-\\"；或11位长度的手机号码。如 01041005968或18701051984
        shared_ptr<string> customerNumber_ {};
        // 客户号码归属省份，如 北京
        shared_ptr<string> customerProvince_ {};
        // 结束原因,接听之后的挂机原因 1000:主通道挂机 1001:非主通道挂机 1002:被强拆
        shared_ptr<string> endReason_ {};
        // 电话结束时间，时间戳，精确到s，如1480904471
        shared_ptr<string> endTime_ {};
        // 热线号码
        shared_ptr<string> hotline_ {};
        // IVR名称，默认自定义
        shared_ptr<string> ivrName_ {};
        // 离开队列原因 参数说明：-1:该字段没值, 1:呼转座席接听 , 2: 队列中放弃 , 3: 队列中超时溢出 , 4: 队列中无座席溢出
        shared_ptr<int64_t> leaveQueueCode_ {};
        // 中继号码
        shared_ptr<string> numberTrunk_ {};
        // 中继号码区号
        shared_ptr<string> numberTrunkAreaCode_ {};
        // 队列号，如1000
        shared_ptr<string> qno_ {};
        // 通话记录录音数组，json格式
        shared_ptr<vector<List::RecordFile>> recordFile_ {};
        // 电话进入系统时间，时间戳，精确到s，如1480904471
        shared_ptr<string> startTime_ {};
        // 外呼结果， 如人工接听
        shared_ptr<string> status_ {};
        // status对应的状态码
        shared_ptr<string> statusCode_ {};
        // 总通话时长秒数，单位是s
        shared_ptr<string> totalDuration_ {};
        // 电话唯一标识
        shared_ptr<string> uniqueId_ {};
        // 通话记录自定义字段，json格式
        Darabonba::Json userField_ {};
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
      // 来电通话记录数组
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudQueryIbCdrResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudQueryIbCdrResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudQueryIbCdrResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudQueryIbCdrResponseBody::Data) };
    inline CloudQueryIbCdrResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudQueryIbCdrResponseBody::Data) };
    inline CloudQueryIbCdrResponseBody& setData(const CloudQueryIbCdrResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudQueryIbCdrResponseBody& setData(CloudQueryIbCdrResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudQueryIbCdrResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudQueryIbCdrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudQueryIbCdrResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
