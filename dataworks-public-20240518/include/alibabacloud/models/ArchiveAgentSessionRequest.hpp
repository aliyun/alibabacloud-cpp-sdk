// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARCHIVEAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ARCHIVEAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ArchiveAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArchiveAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, ArchiveAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    ArchiveAgentSessionRequest() = default ;
    ArchiveAgentSessionRequest(const ArchiveAgentSessionRequest &) = default ;
    ArchiveAgentSessionRequest(ArchiveAgentSessionRequest &&) = default ;
    ArchiveAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArchiveAgentSessionRequest() = default ;
    ArchiveAgentSessionRequest& operator=(const ArchiveAgentSessionRequest &) = default ;
    ArchiveAgentSessionRequest& operator=(ArchiveAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Archived, archived_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Archived, archived_);
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
      virtual bool empty() const override { return this->archived_ == nullptr
        && this->sessionId_ == nullptr; };
      // archived Field Functions 
      bool hasArchived() const { return this->archived_ != nullptr;};
      void deleteArchived() { this->archived_ = nullptr;};
      inline bool getArchived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
      inline Params& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Params& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // Specifies whether to archive the session. Valid values:
      // - true: Archive the session.
      // - false: Unarchive the session.
      // Default value: true.
      shared_ptr<bool> archived_ {};
      // The ID of the target session. Use the SessionId returned by CreateAgentSession or obtained from ListAgentSessions.
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
    inline ArchiveAgentSessionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline ArchiveAgentSessionRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const ArchiveAgentSessionRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, ArchiveAgentSessionRequest::Params) };
    inline ArchiveAgentSessionRequest::Params getParams() { DARABONBA_PTR_GET(params_, ArchiveAgentSessionRequest::Params) };
    inline ArchiveAgentSessionRequest& setParams(const ArchiveAgentSessionRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ArchiveAgentSessionRequest& setParams(ArchiveAgentSessionRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    // The correlation identifier of the JSON-RPC request generated by the caller. The identifier is returned as-is in the response. This field is not an idempotency token.
    shared_ptr<string> id_ {};
    // The JSON-RPC protocol version. Set this parameter to 2.0 when you call the operation.
    shared_ptr<string> jsonrpc_ {};
    // The session operation parameters. The parameters are serialized as a JSON object and submitted as a form field. The parameters must include SessionId.
    // 
    // This parameter is required.
    shared_ptr<ArchiveAgentSessionRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
