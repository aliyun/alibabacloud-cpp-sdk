// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCDROBDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKCDROBDETAILSRESPONSEBODY_HPP_
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
  class ClinkCdrObDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCdrObDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCdrObDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkCdrObDetailsResponseBody() = default ;
    ClinkCdrObDetailsResponseBody(const ClinkCdrObDetailsResponseBody &) = default ;
    ClinkCdrObDetailsResponseBody(ClinkCdrObDetailsResponseBody &&) = default ;
    ClinkCdrObDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCdrObDetailsResponseBody() = default ;
    ClinkCdrObDetailsResponseBody& operator=(const ClinkCdrObDetailsResponseBody &) = default ;
    ClinkCdrObDetailsResponseBody& operator=(ClinkCdrObDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrObDetails, cdrObDetails_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrObDetails, cdrObDetails_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
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
      class CdrObDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrObDetails& obj) { 
          DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_TO_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CallTypeDesc, callTypeDesc_);
          DARABONBA_PTR_TO_JSON(CalleeRingingTime, calleeRingingTime_);
          DARABONBA_PTR_TO_JSON(ClientName, clientName_);
          DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(DetailCallType, detailCallType_);
          DARABONBA_PTR_TO_JSON(DetailCallTypeDesc, detailCallTypeDesc_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(ObSipCause, obSipCause_);
          DARABONBA_PTR_TO_JSON(ObSipCauseRaw, obSipCauseRaw_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(SipCause, sipCause_);
          DARABONBA_PTR_TO_JSON(SipCauseDesc, sipCauseDesc_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TsiFile, tsiFile_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_TO_JSON(WebrtcCallId, webrtcCallId_);
        };
        friend void from_json(const Darabonba::Json& j, CdrObDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(BridgeDuration, bridgeDuration_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CallTypeDesc, callTypeDesc_);
          DARABONBA_PTR_FROM_JSON(CalleeRingingTime, calleeRingingTime_);
          DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
          DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(DetailCallType, detailCallType_);
          DARABONBA_PTR_FROM_JSON(DetailCallTypeDesc, detailCallTypeDesc_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(ObSipCause, obSipCause_);
          DARABONBA_PTR_FROM_JSON(ObSipCauseRaw, obSipCauseRaw_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(SipCause, sipCause_);
          DARABONBA_PTR_FROM_JSON(SipCauseDesc, sipCauseDesc_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TsiFile, tsiFile_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_FROM_JSON(WebrtcCallId, webrtcCallId_);
        };
        CdrObDetails() = default ;
        CdrObDetails(const CdrObDetails &) = default ;
        CdrObDetails(CdrObDetails &&) = default ;
        CdrObDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrObDetails() = default ;
        CdrObDetails& operator=(const CdrObDetails &) = default ;
        CdrObDetails& operator=(CdrObDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answerTime_ == nullptr
        && this->bridgeDuration_ == nullptr && this->callId_ == nullptr && this->callType_ == nullptr && this->callTypeDesc_ == nullptr && this->calleeRingingTime_ == nullptr
        && this->clientName_ == nullptr && this->clientNumber_ == nullptr && this->cno_ == nullptr && this->detailCallType_ == nullptr && this->detailCallTypeDesc_ == nullptr
        && this->endTime_ == nullptr && this->mainUniqueId_ == nullptr && this->obSipCause_ == nullptr && this->obSipCauseRaw_ == nullptr && this->recordFile_ == nullptr
        && this->sipCause_ == nullptr && this->sipCauseDesc_ == nullptr && this->startTime_ == nullptr && this->tsiFile_ == nullptr && this->uniqueId_ == nullptr
        && this->webrtcCallId_ == nullptr; };
        // answerTime Field Functions 
        bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
        void deleteAnswerTime() { this->answerTime_ = nullptr;};
        inline int64_t getAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, 0L) };
        inline CdrObDetails& setAnswerTime(int64_t answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


        // bridgeDuration Field Functions 
        bool hasBridgeDuration() const { return this->bridgeDuration_ != nullptr;};
        void deleteBridgeDuration() { this->bridgeDuration_ = nullptr;};
        inline int64_t getBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(bridgeDuration_, 0L) };
        inline CdrObDetails& setBridgeDuration(int64_t bridgeDuration) { DARABONBA_PTR_SET_VALUE(bridgeDuration_, bridgeDuration) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline CdrObDetails& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
        inline CdrObDetails& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // callTypeDesc Field Functions 
        bool hasCallTypeDesc() const { return this->callTypeDesc_ != nullptr;};
        void deleteCallTypeDesc() { this->callTypeDesc_ = nullptr;};
        inline string getCallTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(callTypeDesc_, "") };
        inline CdrObDetails& setCallTypeDesc(string callTypeDesc) { DARABONBA_PTR_SET_VALUE(callTypeDesc_, callTypeDesc) };


        // calleeRingingTime Field Functions 
        bool hasCalleeRingingTime() const { return this->calleeRingingTime_ != nullptr;};
        void deleteCalleeRingingTime() { this->calleeRingingTime_ = nullptr;};
        inline int64_t getCalleeRingingTime() const { DARABONBA_PTR_GET_DEFAULT(calleeRingingTime_, 0L) };
        inline CdrObDetails& setCalleeRingingTime(int64_t calleeRingingTime) { DARABONBA_PTR_SET_VALUE(calleeRingingTime_, calleeRingingTime) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline CdrObDetails& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // clientNumber Field Functions 
        bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
        void deleteClientNumber() { this->clientNumber_ = nullptr;};
        inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
        inline CdrObDetails& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline CdrObDetails& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // detailCallType Field Functions 
        bool hasDetailCallType() const { return this->detailCallType_ != nullptr;};
        void deleteDetailCallType() { this->detailCallType_ = nullptr;};
        inline int64_t getDetailCallType() const { DARABONBA_PTR_GET_DEFAULT(detailCallType_, 0L) };
        inline CdrObDetails& setDetailCallType(int64_t detailCallType) { DARABONBA_PTR_SET_VALUE(detailCallType_, detailCallType) };


        // detailCallTypeDesc Field Functions 
        bool hasDetailCallTypeDesc() const { return this->detailCallTypeDesc_ != nullptr;};
        void deleteDetailCallTypeDesc() { this->detailCallTypeDesc_ = nullptr;};
        inline string getDetailCallTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(detailCallTypeDesc_, "") };
        inline CdrObDetails& setDetailCallTypeDesc(string detailCallTypeDesc) { DARABONBA_PTR_SET_VALUE(detailCallTypeDesc_, detailCallTypeDesc) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrObDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline CdrObDetails& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // obSipCause Field Functions 
        bool hasObSipCause() const { return this->obSipCause_ != nullptr;};
        void deleteObSipCause() { this->obSipCause_ = nullptr;};
        inline string getObSipCause() const { DARABONBA_PTR_GET_DEFAULT(obSipCause_, "") };
        inline CdrObDetails& setObSipCause(string obSipCause) { DARABONBA_PTR_SET_VALUE(obSipCause_, obSipCause) };


        // obSipCauseRaw Field Functions 
        bool hasObSipCauseRaw() const { return this->obSipCauseRaw_ != nullptr;};
        void deleteObSipCauseRaw() { this->obSipCauseRaw_ = nullptr;};
        inline string getObSipCauseRaw() const { DARABONBA_PTR_GET_DEFAULT(obSipCauseRaw_, "") };
        inline CdrObDetails& setObSipCauseRaw(string obSipCauseRaw) { DARABONBA_PTR_SET_VALUE(obSipCauseRaw_, obSipCauseRaw) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrObDetails& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // sipCause Field Functions 
        bool hasSipCause() const { return this->sipCause_ != nullptr;};
        void deleteSipCause() { this->sipCause_ = nullptr;};
        inline int64_t getSipCause() const { DARABONBA_PTR_GET_DEFAULT(sipCause_, 0L) };
        inline CdrObDetails& setSipCause(int64_t sipCause) { DARABONBA_PTR_SET_VALUE(sipCause_, sipCause) };


        // sipCauseDesc Field Functions 
        bool hasSipCauseDesc() const { return this->sipCauseDesc_ != nullptr;};
        void deleteSipCauseDesc() { this->sipCauseDesc_ = nullptr;};
        inline string getSipCauseDesc() const { DARABONBA_PTR_GET_DEFAULT(sipCauseDesc_, "") };
        inline CdrObDetails& setSipCauseDesc(string sipCauseDesc) { DARABONBA_PTR_SET_VALUE(sipCauseDesc_, sipCauseDesc) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrObDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // tsiFile Field Functions 
        bool hasTsiFile() const { return this->tsiFile_ != nullptr;};
        void deleteTsiFile() { this->tsiFile_ = nullptr;};
        inline string getTsiFile() const { DARABONBA_PTR_GET_DEFAULT(tsiFile_, "") };
        inline CdrObDetails& setTsiFile(string tsiFile) { DARABONBA_PTR_SET_VALUE(tsiFile_, tsiFile) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline CdrObDetails& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        // webrtcCallId Field Functions 
        bool hasWebrtcCallId() const { return this->webrtcCallId_ != nullptr;};
        void deleteWebrtcCallId() { this->webrtcCallId_ = nullptr;};
        inline string getWebrtcCallId() const { DARABONBA_PTR_GET_DEFAULT(webrtcCallId_, "") };
        inline CdrObDetails& setWebrtcCallId(string webrtcCallId) { DARABONBA_PTR_SET_VALUE(webrtcCallId_, webrtcCallId) };


      protected:
        // 客户接听时间
        shared_ptr<int64_t> answerTime_ {};
        // 通话时长
        shared_ptr<int64_t> bridgeDuration_ {};
        // CallID
        shared_ptr<string> callId_ {};
        // 通话类型，说明参考 通用字段 #通用字段
        shared_ptr<int64_t> callType_ {};
        // 通话类型描述
        shared_ptr<string> callTypeDesc_ {};
        // 客户响铃时间
        shared_ptr<int64_t> calleeRingingTime_ {};
        // 座席名称
        shared_ptr<string> clientName_ {};
        // 座席电话
        shared_ptr<string> clientNumber_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 呼叫类型，说明参考 通用字段 #通用字段
        shared_ptr<int64_t> detailCallType_ {};
        // 呼叫类型描述
        shared_ptr<string> detailCallTypeDesc_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 通话ID
        shared_ptr<string> mainUniqueId_ {};
        // 呼叫结果
        shared_ptr<string> obSipCause_ {};
        // 被叫状态
        shared_ptr<string> obSipCauseRaw_ {};
        // 录音
        shared_ptr<string> recordFile_ {};
        // 呼叫情况
        shared_ptr<int64_t> sipCause_ {};
        // 呼叫情况描述
        shared_ptr<string> sipCauseDesc_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 客户彩铃录音
        shared_ptr<string> tsiFile_ {};
        // 通话唯一ID
        shared_ptr<string> uniqueId_ {};
        // WebRTCCallID
        shared_ptr<string> webrtcCallId_ {};
      };

      virtual bool empty() const override { return this->cdrObDetails_ == nullptr
        && this->clinkRequestId_ == nullptr; };
      // cdrObDetails Field Functions 
      bool hasCdrObDetails() const { return this->cdrObDetails_ != nullptr;};
      void deleteCdrObDetails() { this->cdrObDetails_ = nullptr;};
      inline const vector<Data::CdrObDetails> & getCdrObDetails() const { DARABONBA_PTR_GET_CONST(cdrObDetails_, vector<Data::CdrObDetails>) };
      inline vector<Data::CdrObDetails> getCdrObDetails() { DARABONBA_PTR_GET(cdrObDetails_, vector<Data::CdrObDetails>) };
      inline Data& setCdrObDetails(const vector<Data::CdrObDetails> & cdrObDetails) { DARABONBA_PTR_SET_VALUE(cdrObDetails_, cdrObDetails) };
      inline Data& setCdrObDetails(vector<Data::CdrObDetails> && cdrObDetails) { DARABONBA_PTR_SET_RVALUE(cdrObDetails_, cdrObDetails) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


    protected:
      // [外呼详情] #外呼详情
      shared_ptr<vector<Data::CdrObDetails>> cdrObDetails_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkCdrObDetailsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkCdrObDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkCdrObDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkCdrObDetailsResponseBody::Data) };
    inline ClinkCdrObDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkCdrObDetailsResponseBody::Data) };
    inline ClinkCdrObDetailsResponseBody& setData(const ClinkCdrObDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkCdrObDetailsResponseBody& setData(ClinkCdrObDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkCdrObDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkCdrObDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkCdrObDetailsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
