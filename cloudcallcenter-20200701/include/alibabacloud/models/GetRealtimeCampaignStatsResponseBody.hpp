// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMECAMPAIGNSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMECAMPAIGNSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class GetRealtimeCampaignStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeCampaignStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeCampaignStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRealtimeCampaignStatsResponseBody() = default ;
    GetRealtimeCampaignStatsResponseBody(const GetRealtimeCampaignStatsResponseBody &) = default ;
    GetRealtimeCampaignStatsResponseBody(GetRealtimeCampaignStatsResponseBody &&) = default ;
    GetRealtimeCampaignStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeCampaignStatsResponseBody() = default ;
    GetRealtimeCampaignStatsResponseBody& operator=(const GetRealtimeCampaignStatsResponseBody &) = default ;
    GetRealtimeCampaignStatsResponseBody& operator=(GetRealtimeCampaignStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
        DARABONBA_PTR_TO_JSON(Caps, caps_);
        DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
        DARABONBA_PTR_TO_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
        DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
        DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
        DARABONBA_PTR_TO_JSON(TotalAgents, totalAgents_);
        DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
        DARABONBA_PTR_FROM_JSON(Caps, caps_);
        DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioBreakingAgents, outboundScenarioBreakingAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioTalkingAgents, outboundScenarioTalkingAgents_);
        DARABONBA_PTR_FROM_JSON(OutboundScenarioWorkingAgents, outboundScenarioWorkingAgents_);
        DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
        DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
        DARABONBA_PTR_FROM_JSON(TotalAgents, totalAgents_);
        DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
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
      virtual bool empty() const override { return this->breakingAgents_ == nullptr
        && this->caps_ == nullptr && this->loggedInAgents_ == nullptr && this->outboundScenarioBreakingAgents_ == nullptr && this->outboundScenarioReadyAgents_ == nullptr && this->outboundScenarioTalkingAgents_ == nullptr
        && this->outboundScenarioWorkingAgents_ == nullptr && this->readyAgents_ == nullptr && this->talkingAgents_ == nullptr && this->totalAgents_ == nullptr && this->workingAgents_ == nullptr; };
      // breakingAgents Field Functions 
      bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
      void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
      inline int64_t getBreakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
      inline Data& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


      // caps Field Functions 
      bool hasCaps() const { return this->caps_ != nullptr;};
      void deleteCaps() { this->caps_ = nullptr;};
      inline int64_t getCaps() const { DARABONBA_PTR_GET_DEFAULT(caps_, 0L) };
      inline Data& setCaps(int64_t caps) { DARABONBA_PTR_SET_VALUE(caps_, caps) };


      // loggedInAgents Field Functions 
      bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
      void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
      inline int64_t getLoggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
      inline Data& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


      // outboundScenarioBreakingAgents Field Functions 
      bool hasOutboundScenarioBreakingAgents() const { return this->outboundScenarioBreakingAgents_ != nullptr;};
      void deleteOutboundScenarioBreakingAgents() { this->outboundScenarioBreakingAgents_ = nullptr;};
      inline int64_t getOutboundScenarioBreakingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioBreakingAgents_, 0L) };
      inline Data& setOutboundScenarioBreakingAgents(int64_t outboundScenarioBreakingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioBreakingAgents_, outboundScenarioBreakingAgents) };


      // outboundScenarioReadyAgents Field Functions 
      bool hasOutboundScenarioReadyAgents() const { return this->outboundScenarioReadyAgents_ != nullptr;};
      void deleteOutboundScenarioReadyAgents() { this->outboundScenarioReadyAgents_ = nullptr;};
      inline int64_t getOutboundScenarioReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioReadyAgents_, 0L) };
      inline Data& setOutboundScenarioReadyAgents(int64_t outboundScenarioReadyAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioReadyAgents_, outboundScenarioReadyAgents) };


      // outboundScenarioTalkingAgents Field Functions 
      bool hasOutboundScenarioTalkingAgents() const { return this->outboundScenarioTalkingAgents_ != nullptr;};
      void deleteOutboundScenarioTalkingAgents() { this->outboundScenarioTalkingAgents_ = nullptr;};
      inline int64_t getOutboundScenarioTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioTalkingAgents_, 0L) };
      inline Data& setOutboundScenarioTalkingAgents(int64_t outboundScenarioTalkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioTalkingAgents_, outboundScenarioTalkingAgents) };


      // outboundScenarioWorkingAgents Field Functions 
      bool hasOutboundScenarioWorkingAgents() const { return this->outboundScenarioWorkingAgents_ != nullptr;};
      void deleteOutboundScenarioWorkingAgents() { this->outboundScenarioWorkingAgents_ = nullptr;};
      inline int64_t getOutboundScenarioWorkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioWorkingAgents_, 0L) };
      inline Data& setOutboundScenarioWorkingAgents(int64_t outboundScenarioWorkingAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioWorkingAgents_, outboundScenarioWorkingAgents) };


      // readyAgents Field Functions 
      bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
      void deleteReadyAgents() { this->readyAgents_ = nullptr;};
      inline int64_t getReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
      inline Data& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


      // talkingAgents Field Functions 
      bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
      void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
      inline int64_t getTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
      inline Data& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


      // totalAgents Field Functions 
      bool hasTotalAgents() const { return this->totalAgents_ != nullptr;};
      void deleteTotalAgents() { this->totalAgents_ = nullptr;};
      inline int64_t getTotalAgents() const { DARABONBA_PTR_GET_DEFAULT(totalAgents_, 0L) };
      inline Data& setTotalAgents(int64_t totalAgents) { DARABONBA_PTR_SET_VALUE(totalAgents_, totalAgents) };


      // workingAgents Field Functions 
      bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
      void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
      inline int64_t getWorkingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
      inline Data& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


    protected:
      shared_ptr<int64_t> breakingAgents_ {};
      shared_ptr<int64_t> caps_ {};
      shared_ptr<int64_t> loggedInAgents_ {};
      shared_ptr<int64_t> outboundScenarioBreakingAgents_ {};
      shared_ptr<int64_t> outboundScenarioReadyAgents_ {};
      shared_ptr<int64_t> outboundScenarioTalkingAgents_ {};
      shared_ptr<int64_t> outboundScenarioWorkingAgents_ {};
      shared_ptr<int64_t> readyAgents_ {};
      shared_ptr<int64_t> talkingAgents_ {};
      shared_ptr<int64_t> totalAgents_ {};
      shared_ptr<int64_t> workingAgents_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRealtimeCampaignStatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRealtimeCampaignStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRealtimeCampaignStatsResponseBody::Data) };
    inline GetRealtimeCampaignStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRealtimeCampaignStatsResponseBody::Data) };
    inline GetRealtimeCampaignStatsResponseBody& setData(const GetRealtimeCampaignStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRealtimeCampaignStatsResponseBody& setData(GetRealtimeCampaignStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRealtimeCampaignStatsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRealtimeCampaignStatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRealtimeCampaignStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetRealtimeCampaignStatsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
