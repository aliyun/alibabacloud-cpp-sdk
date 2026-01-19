// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCAMPAIGNTRENDINGREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCAMPAIGNTRENDINGREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ListCampaignTrendingReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCampaignTrendingReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCampaignTrendingReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCampaignTrendingReportResponseBody() = default ;
    ListCampaignTrendingReportResponseBody(const ListCampaignTrendingReportResponseBody &) = default ;
    ListCampaignTrendingReportResponseBody(ListCampaignTrendingReportResponseBody &&) = default ;
    ListCampaignTrendingReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCampaignTrendingReportResponseBody() = default ;
    ListCampaignTrendingReportResponseBody& operator=(const ListCampaignTrendingReportResponseBody &) = default ;
    ListCampaignTrendingReportResponseBody& operator=(ListCampaignTrendingReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BreakAgents, breakAgents_);
        DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_TO_JSON(Datetime, datetime_);
        DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
        DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
        DARABONBA_PTR_TO_JSON(TalkAgents, talkAgents_);
        DARABONBA_PTR_TO_JSON(WorkAgents, workAgents_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BreakAgents, breakAgents_);
        DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_FROM_JSON(Datetime, datetime_);
        DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
        DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
        DARABONBA_PTR_FROM_JSON(TalkAgents, talkAgents_);
        DARABONBA_PTR_FROM_JSON(WorkAgents, workAgents_);
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
      virtual bool empty() const override { return this->breakAgents_ == nullptr
        && this->concurrency_ == nullptr && this->datetime_ == nullptr && this->loggedInAgents_ == nullptr && this->outboundScenarioBreakingAgents_ == nullptr && this->outboundScenarioReadyAgents_ == nullptr
        && this->outboundScenarioTalkingAgents_ == nullptr && this->outboundScenarioWorkingAgents_ == nullptr && this->readyAgents_ == nullptr && this->talkAgents_ == nullptr && this->workAgents_ == nullptr; };
      // breakAgents Field Functions 
      bool hasBreakAgents() const { return this->breakAgents_ != nullptr;};
      void deleteBreakAgents() { this->breakAgents_ = nullptr;};
      inline int64_t getBreakAgents() const { DARABONBA_PTR_GET_DEFAULT(breakAgents_, 0L) };
      inline Data& setBreakAgents(int64_t breakAgents) { DARABONBA_PTR_SET_VALUE(breakAgents_, breakAgents) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
      inline Data& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


      // datetime Field Functions 
      bool hasDatetime() const { return this->datetime_ != nullptr;};
      void deleteDatetime() { this->datetime_ = nullptr;};
      inline int64_t getDatetime() const { DARABONBA_PTR_GET_DEFAULT(datetime_, 0L) };
      inline Data& setDatetime(int64_t datetime) { DARABONBA_PTR_SET_VALUE(datetime_, datetime) };


      // loggedInAgents Field Functions 
      bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
      void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
      inline int64_t getLoggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
      inline Data& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


      // outboundScenarioBreakingAgents Field Functions 
      bool hasOutboundScenarioBreakingAgents() const { return this->outboundScenarioBreakingAgents_ != nullptr;};
      void deleteOutboundScenarioBreakingAgents() { this->outboundScenarioBreakingAgents_ = nullptr;};
      inline string getOutboundScenarioBreakingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioBreakingAgents_, "") };
      inline Data& setOutboundScenarioBreakingAgents(string outboundScenarioBreakingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioBreakingAgents_, outboundScenarioBreakingAgents) };


      // outboundScenarioReadyAgents Field Functions 
      bool hasOutboundScenarioReadyAgents() const { return this->outboundScenarioReadyAgents_ != nullptr;};
      void deleteOutboundScenarioReadyAgents() { this->outboundScenarioReadyAgents_ = nullptr;};
      inline string getOutboundScenarioReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioReadyAgents_, "") };
      inline Data& setOutboundScenarioReadyAgents(string outboundScenarioReadyAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioReadyAgents_, outboundScenarioReadyAgents) };


      // outboundScenarioTalkingAgents Field Functions 
      bool hasOutboundScenarioTalkingAgents() const { return this->outboundScenarioTalkingAgents_ != nullptr;};
      void deleteOutboundScenarioTalkingAgents() { this->outboundScenarioTalkingAgents_ = nullptr;};
      inline string getOutboundScenarioTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioTalkingAgents_, "") };
      inline Data& setOutboundScenarioTalkingAgents(string outboundScenarioTalkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioTalkingAgents_, outboundScenarioTalkingAgents) };


      // outboundScenarioWorkingAgents Field Functions 
      bool hasOutboundScenarioWorkingAgents() const { return this->outboundScenarioWorkingAgents_ != nullptr;};
      void deleteOutboundScenarioWorkingAgents() { this->outboundScenarioWorkingAgents_ = nullptr;};
      inline string getOutboundScenarioWorkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioWorkingAgents_, "") };
      inline Data& setOutboundScenarioWorkingAgents(string outboundScenarioWorkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioWorkingAgents_, outboundScenarioWorkingAgents) };


      // readyAgents Field Functions 
      bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
      void deleteReadyAgents() { this->readyAgents_ = nullptr;};
      inline int64_t getReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
      inline Data& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


      // talkAgents Field Functions 
      bool hasTalkAgents() const { return this->talkAgents_ != nullptr;};
      void deleteTalkAgents() { this->talkAgents_ = nullptr;};
      inline int64_t getTalkAgents() const { DARABONBA_PTR_GET_DEFAULT(talkAgents_, 0L) };
      inline Data& setTalkAgents(int64_t talkAgents) { DARABONBA_PTR_SET_VALUE(talkAgents_, talkAgents) };


      // workAgents Field Functions 
      bool hasWorkAgents() const { return this->workAgents_ != nullptr;};
      void deleteWorkAgents() { this->workAgents_ = nullptr;};
      inline int64_t getWorkAgents() const { DARABONBA_PTR_GET_DEFAULT(workAgents_, 0L) };
      inline Data& setWorkAgents(int64_t workAgents) { DARABONBA_PTR_SET_VALUE(workAgents_, workAgents) };


    protected:
      shared_ptr<int64_t> breakAgents_ {};
      shared_ptr<int64_t> concurrency_ {};
      shared_ptr<int64_t> datetime_ {};
      shared_ptr<int64_t> loggedInAgents_ {};
      shared_ptr<string> outboundScenarioBreakingAgents_ {};
      shared_ptr<string> outboundScenarioReadyAgents_ {};
      shared_ptr<string> outboundScenarioTalkingAgents_ {};
      shared_ptr<string> outboundScenarioWorkingAgents_ {};
      shared_ptr<int64_t> readyAgents_ {};
      shared_ptr<int64_t> talkAgents_ {};
      shared_ptr<int64_t> workAgents_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCampaignTrendingReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCampaignTrendingReportResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCampaignTrendingReportResponseBody::Data>) };
    inline vector<ListCampaignTrendingReportResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCampaignTrendingReportResponseBody::Data>) };
    inline ListCampaignTrendingReportResponseBody& setData(const vector<ListCampaignTrendingReportResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCampaignTrendingReportResponseBody& setData(vector<ListCampaignTrendingReportResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCampaignTrendingReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCampaignTrendingReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCampaignTrendingReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListCampaignTrendingReportResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
