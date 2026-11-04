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
    // Unified request parameters (all located at the top level of the request body, not inside params):
    // - jsonrpc: String, required. The JSON-RPC version, fixed to 2.0. Example: 2.0.
    // - method: String, required. The method to call. For valid values, see the method list below. Example: session/prompt.
    // - id: String, optional. The request ID of the caller, which is passed through in the response. Example: 1774339902987004.
    // - params: Object, optional. The parameters corresponding to the method. For examples, see the supplementary instructions.
    // - sessionCode: String, optional. The exact query by session ID for session/list. Example: 49b82154-ac20-4f27-a6ec-eb5f4cfc5304.
    // - pageNum: Integer, optional. The page number for session/list. The default value is processed by the server. Example: 1.
    // - pageSize: Integer, optional. The number of entries per page for session/list. The default value is processed by the server. Example: 10.
    // 
    // Valid values for method:
    // - session/new: Creates a session and returns JSON.
    // - session/list: Queries the session list or a specific session and returns JSON.
    // - session/prompt: Sends a message and returns SSE.
    // - session/load: Resumes a connection from a breakpoint. Used only when _meta.isReload=true. Returns SSE.
    // - session/cancel: Cancels a running task under the session and returns JSON.
    // - session/delete: Deletes a session and returns JSON.
    // - session/hitlRespond: Submits a HITL user response and returns JSON.
    // 
    // Response modes: session/prompt and session/load return an SSE event stream with the Content-Type of text/event-stream. The format of each event is data: {JSON}. Other methods return a standard JSON response with the Content-Type of application/json.
    Darabonba::Json body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
