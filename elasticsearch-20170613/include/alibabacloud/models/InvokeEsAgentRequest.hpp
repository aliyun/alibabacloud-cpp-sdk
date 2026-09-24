// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEESAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEESAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class InvokeEsAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeEsAgentRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeEsAgentRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    InvokeEsAgentRequest() = default ;
    InvokeEsAgentRequest(const InvokeEsAgentRequest &) = default ;
    InvokeEsAgentRequest(InvokeEsAgentRequest &&) = default ;
    InvokeEsAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeEsAgentRequest() = default ;
    InvokeEsAgentRequest& operator=(const InvokeEsAgentRequest &) = default ;
    InvokeEsAgentRequest& operator=(InvokeEsAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & getBody() const { DARABONBA_GET(body_) };
    Darabonba::Json & getBody() { DARABONBA_GET(body_) };
    inline InvokeEsAgentRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline InvokeEsAgentRequest& setBody(Darabonba::Json && body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    // The request body in JSON-RPC 2.0 format.
    // 
    // Common request parameters (all at the top level of the request body, not inside params):
    // - jsonrpc: String. Required. The JSON-RPC version. Fixed value: 2.0. Example: 2.0.
    // - method: String. Required. The method to call. For valid values, see the method list below. Example: session/prompt.
    // - id: String. Optional. The request ID specified by the caller. This value is passed through in the response. Example: 1774339902987004.
    // - params: Object. Optional. The parameters for the specified method. For examples, refer to the supplementary description.
    // - sessionCode: String. Optional. The session ID for exact match queries in session/list. Example: 49b82154-ac20-4f27-a6ec-eb5f4cfc5304.
    // - pageNum: Integer. Optional. The page number for session/list. Default value is handled by the server. Example: 1.
    // - pageSize: Integer. Optional. The number of entries per page for session/list. Default value is handled by the server. Example: 10.
    // 
    // Valid values of method:
    // - session/new: Creates a session. Returns JSON.
    // - session/list: Queries the session list or a specified session. Returns JSON.
    // - session/prompt: Sends a message. Returns SSE.
    // - session/load: Resumes from a breakpoint. Used only when _meta.isReload=true. Returns SSE.
    // - session/cancel: Cancels in-progress tasks in a session. Returns JSON.
    // - session/delete: Deletes a session. Returns JSON.
    // - session/hitlRespond: Submits a HITL user response. Returns JSON.
    // 
    // Response modes: session/prompt and session/load return an SSE event stream with Content-Type text/event-stream. Each event is in the format data: {JSON}. Other methods return a standard JSON response with Content-Type application/json.
    Darabonba::Json body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
