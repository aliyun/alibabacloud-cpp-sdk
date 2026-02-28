// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSTATELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSTATELOGSRESPONSEBODY_HPP_
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
  class ListAgentStateLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentStateLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentStateLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentStateLogsResponseBody() = default ;
    ListAgentStateLogsResponseBody(const ListAgentStateLogsResponseBody &) = default ;
    ListAgentStateLogsResponseBody(ListAgentStateLogsResponseBody &&) = default ;
    ListAgentStateLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentStateLogsResponseBody() = default ;
    ListAgentStateLogsResponseBody& operator=(const ListAgentStateLogsResponseBody &) = default ;
    ListAgentStateLogsResponseBody& operator=(ListAgentStateLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(StateCode, stateCode_);
        DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(StateCode, stateCode_);
        DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
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
      virtual bool empty() const override { return this->breakCode_ == nullptr
        && this->duration_ == nullptr && this->outboundScenario_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->stateCode_ == nullptr
        && this->workMode_ == nullptr; };
      // breakCode Field Functions 
      bool hasBreakCode() const { return this->breakCode_ != nullptr;};
      void deleteBreakCode() { this->breakCode_ = nullptr;};
      inline string getBreakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
      inline Data& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Data& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // outboundScenario Field Functions 
      bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
      void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
      inline bool getOutboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
      inline Data& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateCode Field Functions 
      bool hasStateCode() const { return this->stateCode_ != nullptr;};
      void deleteStateCode() { this->stateCode_ = nullptr;};
      inline string getStateCode() const { DARABONBA_PTR_GET_DEFAULT(stateCode_, "") };
      inline Data& setStateCode(string stateCode) { DARABONBA_PTR_SET_VALUE(stateCode_, stateCode) };


      // workMode Field Functions 
      bool hasWorkMode() const { return this->workMode_ != nullptr;};
      void deleteWorkMode() { this->workMode_ = nullptr;};
      inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
      inline Data& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


    protected:
      shared_ptr<string> breakCode_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<bool> outboundScenario_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> stateCode_ {};
      shared_ptr<string> workMode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAgentStateLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgentStateLogsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgentStateLogsResponseBody::Data>) };
    inline vector<ListAgentStateLogsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgentStateLogsResponseBody::Data>) };
    inline ListAgentStateLogsResponseBody& setData(const vector<ListAgentStateLogsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentStateLogsResponseBody& setData(vector<ListAgentStateLogsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAgentStateLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAgentStateLogsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentStateLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAgentStateLogsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
