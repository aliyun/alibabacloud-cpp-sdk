// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLYAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLYAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ReplyAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplyAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, ReplyAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    ReplyAgentSessionRequest() = default ;
    ReplyAgentSessionRequest(const ReplyAgentSessionRequest &) = default ;
    ReplyAgentSessionRequest(ReplyAgentSessionRequest &&) = default ;
    ReplyAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplyAgentSessionRequest() = default ;
    ReplyAgentSessionRequest& operator=(const ReplyAgentSessionRequest &) = default ;
    ReplyAgentSessionRequest& operator=(ReplyAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Answers, answers_);
        DARABONBA_PTR_TO_JSON(Outcome, outcome_);
        DARABONBA_PTR_TO_JSON(PermissionRequestId, permissionRequestId_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Answers, answers_);
        DARABONBA_PTR_FROM_JSON(Outcome, outcome_);
        DARABONBA_PTR_FROM_JSON(PermissionRequestId, permissionRequestId_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Outcome : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outcome& obj) { 
          DARABONBA_PTR_TO_JSON(OptionId, optionId_);
          DARABONBA_PTR_TO_JSON(Outcome, outcome_);
        };
        friend void from_json(const Darabonba::Json& j, Outcome& obj) { 
          DARABONBA_PTR_FROM_JSON(OptionId, optionId_);
          DARABONBA_PTR_FROM_JSON(Outcome, outcome_);
        };
        Outcome() = default ;
        Outcome(const Outcome &) = default ;
        Outcome(Outcome &&) = default ;
        Outcome(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outcome() = default ;
        Outcome& operator=(const Outcome &) = default ;
        Outcome& operator=(Outcome &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->optionId_ == nullptr
        && this->outcome_ == nullptr; };
        // optionId Field Functions 
        bool hasOptionId() const { return this->optionId_ != nullptr;};
        void deleteOptionId() { this->optionId_ = nullptr;};
        inline string getOptionId() const { DARABONBA_PTR_GET_DEFAULT(optionId_, "") };
        inline Outcome& setOptionId(string optionId) { DARABONBA_PTR_SET_VALUE(optionId_, optionId) };


        // outcome Field Functions 
        bool hasOutcome() const { return this->outcome_ != nullptr;};
        void deleteOutcome() { this->outcome_ = nullptr;};
        inline string getOutcome() const { DARABONBA_PTR_GET_DEFAULT(outcome_, "") };
        inline Outcome& setOutcome(string outcome) { DARABONBA_PTR_SET_VALUE(outcome_, outcome) };


      protected:
        // Required and cannot be empty when Outcome is set to selected. Set this parameter to the optionId of an actual option in the event options. To submit an answer, select the option with kind=allow_once. Omit this parameter when Outcome is set to cancelled.
        shared_ptr<string> optionId_ {};
        // The outcome type. Valid values:
        // - selected: An option is selected.
        // - cancelled: The user explicitly cancels the interaction.
        // 
        // This parameter is required.
        shared_ptr<string> outcome_ {};
      };

      virtual bool empty() const override { return this->answers_ == nullptr
        && this->outcome_ == nullptr && this->permissionRequestId_ == nullptr && this->sessionId_ == nullptr; };
      // answers Field Functions 
      bool hasAnswers() const { return this->answers_ != nullptr;};
      void deleteAnswers() { this->answers_ = nullptr;};
      inline const map<string, string> & getAnswers() const { DARABONBA_PTR_GET_CONST(answers_, map<string, string>) };
      inline map<string, string> getAnswers() { DARABONBA_PTR_GET(answers_, map<string, string>) };
      inline Params& setAnswers(const map<string, string> & answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };
      inline Params& setAnswers(map<string, string> && answers) { DARABONBA_PTR_SET_RVALUE(answers_, answers) };


      // outcome Field Functions 
      bool hasOutcome() const { return this->outcome_ != nullptr;};
      void deleteOutcome() { this->outcome_ = nullptr;};
      inline const Params::Outcome & getOutcome() const { DARABONBA_PTR_GET_CONST(outcome_, Params::Outcome) };
      inline Params::Outcome getOutcome() { DARABONBA_PTR_GET(outcome_, Params::Outcome) };
      inline Params& setOutcome(const Params::Outcome & outcome) { DARABONBA_PTR_SET_VALUE(outcome_, outcome) };
      inline Params& setOutcome(Params::Outcome && outcome) { DARABONBA_PTR_SET_RVALUE(outcome_, outcome) };


      // permissionRequestId Field Functions 
      bool hasPermissionRequestId() const { return this->permissionRequestId_ != nullptr;};
      void deletePermissionRequestId() { this->permissionRequestId_ = nullptr;};
      inline string getPermissionRequestId() const { DARABONBA_PTR_GET_DEFAULT(permissionRequestId_, "") };
      inline Params& setPermissionRequestId(string permissionRequestId) { DARABONBA_PTR_SET_VALUE(permissionRequestId_, permissionRequestId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Params& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // The answers to ask_user_question. The key is a zero-based question index string, and the value is the answer text. Specify each answer for multiple questions. Omit this parameter for regular tool authorization or cancellation.
      shared_ptr<map<string, string>> answers_ {};
      // The outcome of the user interaction.
      // 
      // This parameter is required.
      shared_ptr<Params::Outcome> outcome_ {};
      // The ID of the current permission_request. Obtain this value from _qwen/notify.params.data.requestId in the original SSE. This is not a ToolCallId, HTTP RequestId, or the JSON-RPC Id of this request. The value cannot be . or ..
      // 
      // This parameter is required.
      shared_ptr<string> permissionRequestId_ {};
      // The LSP session ID. Use the SessionId returned by the create session operation, not the daemon internal session ID.
      // 
      // This parameter is required.
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ReplyAgentSessionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline ReplyAgentSessionRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const ReplyAgentSessionRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, ReplyAgentSessionRequest::Params) };
    inline ReplyAgentSessionRequest::Params getParams() { DARABONBA_PTR_GET(params_, ReplyAgentSessionRequest::Params) };
    inline ReplyAgentSessionRequest& setParams(const ReplyAgentSessionRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ReplyAgentSessionRequest& setParams(ReplyAgentSessionRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    // The JSON-RPC correlation ID for this reply request. The response returns this value as-is. This is different from PermissionRequestId.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The JSON-RPC protocol version. Fixed value: 2.0.
    shared_ptr<string> jsonrpc_ {};
    // The user interaction reply parameters.
    // 
    // This parameter is required.
    shared_ptr<ReplyAgentSessionRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
