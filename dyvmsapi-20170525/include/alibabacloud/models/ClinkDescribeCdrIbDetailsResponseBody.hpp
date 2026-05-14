// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKDESCRIBECDRIBDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKDESCRIBECDRIBDETAILSRESPONSEBODY_HPP_
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
  class ClinkDescribeCdrIbDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkDescribeCdrIbDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkDescribeCdrIbDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkDescribeCdrIbDetailsResponseBody() = default ;
    ClinkDescribeCdrIbDetailsResponseBody(const ClinkDescribeCdrIbDetailsResponseBody &) = default ;
    ClinkDescribeCdrIbDetailsResponseBody(ClinkDescribeCdrIbDetailsResponseBody &&) = default ;
    ClinkDescribeCdrIbDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkDescribeCdrIbDetailsResponseBody() = default ;
    ClinkDescribeCdrIbDetailsResponseBody& operator=(const ClinkDescribeCdrIbDetailsResponseBody &) = default ;
    ClinkDescribeCdrIbDetailsResponseBody& operator=(ClinkDescribeCdrIbDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdrIbDetails, cdrIbDetails_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdrIbDetails, cdrIbDetails_);
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
      class CdrIbDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdrIbDetails& obj) { 
          DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(ClientName, clientName_);
          DARABONBA_PTR_TO_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_TO_JSON(ClientRingingTime, clientRingingTime_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(Remember, remember_);
          DARABONBA_PTR_TO_JSON(SipCause, sipCause_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
        };
        friend void from_json(const Darabonba::Json& j, CdrIbDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
          DARABONBA_PTR_FROM_JSON(ClientNumber, clientNumber_);
          DARABONBA_PTR_FROM_JSON(ClientRingingTime, clientRingingTime_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(Remember, remember_);
          DARABONBA_PTR_FROM_JSON(SipCause, sipCause_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
        };
        CdrIbDetails() = default ;
        CdrIbDetails(const CdrIbDetails &) = default ;
        CdrIbDetails(CdrIbDetails &&) = default ;
        CdrIbDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdrIbDetails() = default ;
        CdrIbDetails& operator=(const CdrIbDetails &) = default ;
        CdrIbDetails& operator=(CdrIbDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answerTime_ == nullptr
        && this->callType_ == nullptr && this->clientName_ == nullptr && this->clientNumber_ == nullptr && this->clientRingingTime_ == nullptr && this->cno_ == nullptr
        && this->endTime_ == nullptr && this->mainUniqueId_ == nullptr && this->qno_ == nullptr && this->recordFile_ == nullptr && this->remember_ == nullptr
        && this->sipCause_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->totalDuration_ == nullptr && this->uniqueId_ == nullptr; };
        // answerTime Field Functions 
        bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
        void deleteAnswerTime() { this->answerTime_ = nullptr;};
        inline int64_t getAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, 0L) };
        inline CdrIbDetails& setAnswerTime(int64_t answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline CdrIbDetails& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline CdrIbDetails& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // clientNumber Field Functions 
        bool hasClientNumber() const { return this->clientNumber_ != nullptr;};
        void deleteClientNumber() { this->clientNumber_ = nullptr;};
        inline string getClientNumber() const { DARABONBA_PTR_GET_DEFAULT(clientNumber_, "") };
        inline CdrIbDetails& setClientNumber(string clientNumber) { DARABONBA_PTR_SET_VALUE(clientNumber_, clientNumber) };


        // clientRingingTime Field Functions 
        bool hasClientRingingTime() const { return this->clientRingingTime_ != nullptr;};
        void deleteClientRingingTime() { this->clientRingingTime_ = nullptr;};
        inline int64_t getClientRingingTime() const { DARABONBA_PTR_GET_DEFAULT(clientRingingTime_, 0L) };
        inline CdrIbDetails& setClientRingingTime(int64_t clientRingingTime) { DARABONBA_PTR_SET_VALUE(clientRingingTime_, clientRingingTime) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline CdrIbDetails& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CdrIbDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline CdrIbDetails& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline CdrIbDetails& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline CdrIbDetails& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // remember Field Functions 
        bool hasRemember() const { return this->remember_ != nullptr;};
        void deleteRemember() { this->remember_ = nullptr;};
        inline string getRemember() const { DARABONBA_PTR_GET_DEFAULT(remember_, "") };
        inline CdrIbDetails& setRemember(string remember) { DARABONBA_PTR_SET_VALUE(remember_, remember) };


        // sipCause Field Functions 
        bool hasSipCause() const { return this->sipCause_ != nullptr;};
        void deleteSipCause() { this->sipCause_ = nullptr;};
        inline string getSipCause() const { DARABONBA_PTR_GET_DEFAULT(sipCause_, "") };
        inline CdrIbDetails& setSipCause(string sipCause) { DARABONBA_PTR_SET_VALUE(sipCause_, sipCause) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CdrIbDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CdrIbDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline CdrIbDetails& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline CdrIbDetails& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


      protected:
        // 接听时间
        shared_ptr<int64_t> answerTime_ {};
        // 呼叫类型
        shared_ptr<string> callType_ {};
        // 座席名称
        shared_ptr<string> clientName_ {};
        // 座席电话
        shared_ptr<string> clientNumber_ {};
        // 座席响铃时间
        shared_ptr<int64_t> clientRingingTime_ {};
        // 座席号
        shared_ptr<string> cno_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 通话记录主通道唯一标识
        shared_ptr<string> mainUniqueId_ {};
        // 队列号
        shared_ptr<string> qno_ {};
        // 录音文件
        shared_ptr<string> recordFile_ {};
        // 是否开启主叫记忆
        shared_ptr<string> remember_ {};
        // 呼叫情况
        shared_ptr<string> sipCause_ {};
        // 接起时间
        shared_ptr<int64_t> startTime_ {};
        // 呼叫结果
        shared_ptr<string> status_ {};
        // 通话时长
        shared_ptr<int64_t> totalDuration_ {};
        // 通话记录详情唯一标识
        shared_ptr<string> uniqueId_ {};
      };

      virtual bool empty() const override { return this->cdrIbDetails_ == nullptr
        && this->clinkRequestId_ == nullptr; };
      // cdrIbDetails Field Functions 
      bool hasCdrIbDetails() const { return this->cdrIbDetails_ != nullptr;};
      void deleteCdrIbDetails() { this->cdrIbDetails_ = nullptr;};
      inline const vector<Data::CdrIbDetails> & getCdrIbDetails() const { DARABONBA_PTR_GET_CONST(cdrIbDetails_, vector<Data::CdrIbDetails>) };
      inline vector<Data::CdrIbDetails> getCdrIbDetails() { DARABONBA_PTR_GET(cdrIbDetails_, vector<Data::CdrIbDetails>) };
      inline Data& setCdrIbDetails(const vector<Data::CdrIbDetails> & cdrIbDetails) { DARABONBA_PTR_SET_VALUE(cdrIbDetails_, cdrIbDetails) };
      inline Data& setCdrIbDetails(vector<Data::CdrIbDetails> && cdrIbDetails) { DARABONBA_PTR_SET_RVALUE(cdrIbDetails_, cdrIbDetails) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


    protected:
      // [呼入通话记录明细] #呼入通话记录明细
      shared_ptr<vector<Data::CdrIbDetails>> cdrIbDetails_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkDescribeCdrIbDetailsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkDescribeCdrIbDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkDescribeCdrIbDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkDescribeCdrIbDetailsResponseBody::Data) };
    inline ClinkDescribeCdrIbDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkDescribeCdrIbDetailsResponseBody::Data) };
    inline ClinkDescribeCdrIbDetailsResponseBody& setData(const ClinkDescribeCdrIbDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkDescribeCdrIbDetailsResponseBody& setData(ClinkDescribeCdrIbDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkDescribeCdrIbDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkDescribeCdrIbDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkDescribeCdrIbDetailsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
