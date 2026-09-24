// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEESAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVOKEESAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class InvokeEsAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeEsAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeEsAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    InvokeEsAgentResponseBody() = default ;
    InvokeEsAgentResponseBody(const InvokeEsAgentResponseBody &) = default ;
    InvokeEsAgentResponseBody(InvokeEsAgentResponseBody &&) = default ;
    InvokeEsAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeEsAgentResponseBody() = default ;
    InvokeEsAgentResponseBody& operator=(const InvokeEsAgentResponseBody &) = default ;
    InvokeEsAgentResponseBody& operator=(InvokeEsAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InvokeEsAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const map<string, string> & getData() const { DARABONBA_PTR_GET_CONST(data_, map<string, string>) };
    inline map<string, string> getData() { DARABONBA_PTR_GET(data_, map<string, string>) };
    inline InvokeEsAgentResponseBody& setData(const map<string, string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InvokeEsAgentResponseBody& setData(map<string, string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InvokeEsAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InvokeEsAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. A value of 200 indicates a successful call. For non-200 values, the message field contains the error description.
    shared_ptr<string> code_ {};
    // The JSON-RPC 2.0 response body. data.result contains the actual return content of the called ACP method. data.id is the id passed in the request. data.jsonrpc is fixed to 2.0. data.timestamp is the UNIX timestamp in milliseconds when the response was generated.
    shared_ptr<map<string, string>> data_ {};
    // The error description. The value is null when the call is successful. A specific error message is returned when the call fails.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
