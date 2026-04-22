// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSESSIONTOKENUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSESSIONTOKENUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAgentSessionTokenUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSessionTokenUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSessionTokenUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    GetAgentSessionTokenUsageRequest() = default ;
    GetAgentSessionTokenUsageRequest(const GetAgentSessionTokenUsageRequest &) = default ;
    GetAgentSessionTokenUsageRequest(GetAgentSessionTokenUsageRequest &&) = default ;
    GetAgentSessionTokenUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSessionTokenUsageRequest() = default ;
    GetAgentSessionTokenUsageRequest& operator=(const GetAgentSessionTokenUsageRequest &) = default ;
    GetAgentSessionTokenUsageRequest& operator=(GetAgentSessionTokenUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
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
      virtual bool empty() const override { return this->sessionId_ == nullptr; };
      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Params& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAgentSessionTokenUsageRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline GetAgentSessionTokenUsageRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const GetAgentSessionTokenUsageRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, GetAgentSessionTokenUsageRequest::Params) };
    inline GetAgentSessionTokenUsageRequest::Params getParams() { DARABONBA_PTR_GET(params_, GetAgentSessionTokenUsageRequest::Params) };
    inline GetAgentSessionTokenUsageRequest& setParams(const GetAgentSessionTokenUsageRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetAgentSessionTokenUsageRequest& setParams(GetAgentSessionTokenUsageRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    shared_ptr<GetAgentSessionTokenUsageRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
