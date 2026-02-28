// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceTrendingReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTrendingReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTrendingReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceTrendingReportResponseBody() = default ;
    GetInstanceTrendingReportResponseBody(const GetInstanceTrendingReportResponseBody &) = default ;
    GetInstanceTrendingReportResponseBody(GetInstanceTrendingReportResponseBody &&) = default ;
    GetInstanceTrendingReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTrendingReportResponseBody() = default ;
    GetInstanceTrendingReportResponseBody& operator=(const GetInstanceTrendingReportResponseBody &) = default ;
    GetInstanceTrendingReportResponseBody& operator=(GetInstanceTrendingReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Inbound, inbound_);
        DARABONBA_PTR_TO_JSON(Outbound, outbound_);
        DARABONBA_PTR_TO_JSON(Overall, overall_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
        DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
        DARABONBA_PTR_FROM_JSON(Overall, overall_);
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
      class Overall : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Overall& obj) { 
          DARABONBA_PTR_TO_JSON(MaxLoggedInAgents, maxLoggedInAgents_);
          DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
        };
        friend void from_json(const Darabonba::Json& j, Overall& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxLoggedInAgents, maxLoggedInAgents_);
          DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
        };
        Overall() = default ;
        Overall(const Overall &) = default ;
        Overall(Overall &&) = default ;
        Overall(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Overall() = default ;
        Overall& operator=(const Overall &) = default ;
        Overall& operator=(Overall &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxLoggedInAgents_ == nullptr
        && this->statsTime_ == nullptr; };
        // maxLoggedInAgents Field Functions 
        bool hasMaxLoggedInAgents() const { return this->maxLoggedInAgents_ != nullptr;};
        void deleteMaxLoggedInAgents() { this->maxLoggedInAgents_ = nullptr;};
        inline int64_t getMaxLoggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(maxLoggedInAgents_, 0L) };
        inline Overall& setMaxLoggedInAgents(int64_t maxLoggedInAgents) { DARABONBA_PTR_SET_VALUE(maxLoggedInAgents_, maxLoggedInAgents) };


        // statsTime Field Functions 
        bool hasStatsTime() const { return this->statsTime_ != nullptr;};
        void deleteStatsTime() { this->statsTime_ = nullptr;};
        inline int64_t getStatsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
        inline Overall& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


      protected:
        shared_ptr<int64_t> maxLoggedInAgents_ {};
        shared_ptr<int64_t> statsTime_ {};
      };

      class Outbound : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outbound& obj) { 
          DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
          DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
          DARABONBA_PTR_TO_JSON(TotalCalls, totalCalls_);
        };
        friend void from_json(const Darabonba::Json& j, Outbound& obj) { 
          DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
          DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
          DARABONBA_PTR_FROM_JSON(TotalCalls, totalCalls_);
        };
        Outbound() = default ;
        Outbound(const Outbound &) = default ;
        Outbound(Outbound &&) = default ;
        Outbound(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outbound() = default ;
        Outbound& operator=(const Outbound &) = default ;
        Outbound& operator=(Outbound &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callsAnswered_ == nullptr
        && this->statsTime_ == nullptr && this->totalCalls_ == nullptr; };
        // callsAnswered Field Functions 
        bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
        void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
        inline int64_t getCallsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
        inline Outbound& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


        // statsTime Field Functions 
        bool hasStatsTime() const { return this->statsTime_ != nullptr;};
        void deleteStatsTime() { this->statsTime_ = nullptr;};
        inline int64_t getStatsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
        inline Outbound& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


        // totalCalls Field Functions 
        bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
        void deleteTotalCalls() { this->totalCalls_ = nullptr;};
        inline int64_t getTotalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
        inline Outbound& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


      protected:
        shared_ptr<int64_t> callsAnswered_ {};
        shared_ptr<int64_t> statsTime_ {};
        shared_ptr<int64_t> totalCalls_ {};
      };

      class Inbound : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Inbound& obj) { 
          DARABONBA_PTR_TO_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
          DARABONBA_PTR_TO_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
          DARABONBA_PTR_TO_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
          DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
          DARABONBA_PTR_TO_JSON(CallsQueued, callsQueued_);
          DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
          DARABONBA_PTR_TO_JSON(TotalCalls, totalCalls_);
        };
        friend void from_json(const Darabonba::Json& j, Inbound& obj) { 
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
          DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
          DARABONBA_PTR_FROM_JSON(CallsQueued, callsQueued_);
          DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
          DARABONBA_PTR_FROM_JSON(TotalCalls, totalCalls_);
        };
        Inbound() = default ;
        Inbound(const Inbound &) = default ;
        Inbound(Inbound &&) = default ;
        Inbound(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Inbound() = default ;
        Inbound& operator=(const Inbound &) = default ;
        Inbound& operator=(Inbound &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callsAbandonedInIVR_ == nullptr
        && this->callsAbandonedInQueue_ == nullptr && this->callsAbandonedInRing_ == nullptr && this->callsHandled_ == nullptr && this->callsQueued_ == nullptr && this->statsTime_ == nullptr
        && this->totalCalls_ == nullptr; };
        // callsAbandonedInIVR Field Functions 
        bool hasCallsAbandonedInIVR() const { return this->callsAbandonedInIVR_ != nullptr;};
        void deleteCallsAbandonedInIVR() { this->callsAbandonedInIVR_ = nullptr;};
        inline int64_t getCallsAbandonedInIVR() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInIVR_, 0L) };
        inline Inbound& setCallsAbandonedInIVR(int64_t callsAbandonedInIVR) { DARABONBA_PTR_SET_VALUE(callsAbandonedInIVR_, callsAbandonedInIVR) };


        // callsAbandonedInQueue Field Functions 
        bool hasCallsAbandonedInQueue() const { return this->callsAbandonedInQueue_ != nullptr;};
        void deleteCallsAbandonedInQueue() { this->callsAbandonedInQueue_ = nullptr;};
        inline int64_t getCallsAbandonedInQueue() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInQueue_, 0L) };
        inline Inbound& setCallsAbandonedInQueue(int64_t callsAbandonedInQueue) { DARABONBA_PTR_SET_VALUE(callsAbandonedInQueue_, callsAbandonedInQueue) };


        // callsAbandonedInRing Field Functions 
        bool hasCallsAbandonedInRing() const { return this->callsAbandonedInRing_ != nullptr;};
        void deleteCallsAbandonedInRing() { this->callsAbandonedInRing_ = nullptr;};
        inline int64_t getCallsAbandonedInRing() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInRing_, 0L) };
        inline Inbound& setCallsAbandonedInRing(int64_t callsAbandonedInRing) { DARABONBA_PTR_SET_VALUE(callsAbandonedInRing_, callsAbandonedInRing) };


        // callsHandled Field Functions 
        bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
        void deleteCallsHandled() { this->callsHandled_ = nullptr;};
        inline int64_t getCallsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
        inline Inbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


        // callsQueued Field Functions 
        bool hasCallsQueued() const { return this->callsQueued_ != nullptr;};
        void deleteCallsQueued() { this->callsQueued_ = nullptr;};
        inline int64_t getCallsQueued() const { DARABONBA_PTR_GET_DEFAULT(callsQueued_, 0L) };
        inline Inbound& setCallsQueued(int64_t callsQueued) { DARABONBA_PTR_SET_VALUE(callsQueued_, callsQueued) };


        // statsTime Field Functions 
        bool hasStatsTime() const { return this->statsTime_ != nullptr;};
        void deleteStatsTime() { this->statsTime_ = nullptr;};
        inline int64_t getStatsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
        inline Inbound& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


        // totalCalls Field Functions 
        bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
        void deleteTotalCalls() { this->totalCalls_ = nullptr;};
        inline int64_t getTotalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
        inline Inbound& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


      protected:
        shared_ptr<int64_t> callsAbandonedInIVR_ {};
        shared_ptr<int64_t> callsAbandonedInQueue_ {};
        shared_ptr<int64_t> callsAbandonedInRing_ {};
        shared_ptr<int64_t> callsHandled_ {};
        shared_ptr<int64_t> callsQueued_ {};
        shared_ptr<int64_t> statsTime_ {};
        shared_ptr<int64_t> totalCalls_ {};
      };

      virtual bool empty() const override { return this->inbound_ == nullptr
        && this->outbound_ == nullptr && this->overall_ == nullptr; };
      // inbound Field Functions 
      bool hasInbound() const { return this->inbound_ != nullptr;};
      void deleteInbound() { this->inbound_ = nullptr;};
      inline const vector<Data::Inbound> & getInbound() const { DARABONBA_PTR_GET_CONST(inbound_, vector<Data::Inbound>) };
      inline vector<Data::Inbound> getInbound() { DARABONBA_PTR_GET(inbound_, vector<Data::Inbound>) };
      inline Data& setInbound(const vector<Data::Inbound> & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
      inline Data& setInbound(vector<Data::Inbound> && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


      // outbound Field Functions 
      bool hasOutbound() const { return this->outbound_ != nullptr;};
      void deleteOutbound() { this->outbound_ = nullptr;};
      inline const vector<Data::Outbound> & getOutbound() const { DARABONBA_PTR_GET_CONST(outbound_, vector<Data::Outbound>) };
      inline vector<Data::Outbound> getOutbound() { DARABONBA_PTR_GET(outbound_, vector<Data::Outbound>) };
      inline Data& setOutbound(const vector<Data::Outbound> & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
      inline Data& setOutbound(vector<Data::Outbound> && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


      // overall Field Functions 
      bool hasOverall() const { return this->overall_ != nullptr;};
      void deleteOverall() { this->overall_ = nullptr;};
      inline const vector<Data::Overall> & getOverall() const { DARABONBA_PTR_GET_CONST(overall_, vector<Data::Overall>) };
      inline vector<Data::Overall> getOverall() { DARABONBA_PTR_GET(overall_, vector<Data::Overall>) };
      inline Data& setOverall(const vector<Data::Overall> & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
      inline Data& setOverall(vector<Data::Overall> && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    protected:
      shared_ptr<vector<Data::Inbound>> inbound_ {};
      shared_ptr<vector<Data::Outbound>> outbound_ {};
      shared_ptr<vector<Data::Overall>> overall_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceTrendingReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceTrendingReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceTrendingReportResponseBody::Data) };
    inline GetInstanceTrendingReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceTrendingReportResponseBody::Data) };
    inline GetInstanceTrendingReportResponseBody& setData(const GetInstanceTrendingReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceTrendingReportResponseBody& setData(GetInstanceTrendingReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceTrendingReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceTrendingReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceTrendingReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetInstanceTrendingReportResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
