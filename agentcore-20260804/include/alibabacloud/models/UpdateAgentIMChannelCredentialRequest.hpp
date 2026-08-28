// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTIMCHANNELCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTIMCHANNELCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateAgentIMChannelCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentIMChannelCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentIMChannelCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateAgentIMChannelCredentialRequest() = default ;
    UpdateAgentIMChannelCredentialRequest(const UpdateAgentIMChannelCredentialRequest &) = default ;
    UpdateAgentIMChannelCredentialRequest(UpdateAgentIMChannelCredentialRequest &&) = default ;
    UpdateAgentIMChannelCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentIMChannelCredentialRequest() = default ;
    UpdateAgentIMChannelCredentialRequest& operator=(const UpdateAgentIMChannelCredentialRequest &) = default ;
    UpdateAgentIMChannelCredentialRequest& operator=(UpdateAgentIMChannelCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(credential, credential_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(credential, credential_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->credential_ == nullptr; };
      // credential Field Functions 
      bool hasCredential() const { return this->credential_ != nullptr;};
      void deleteCredential() { this->credential_ = nullptr;};
      inline const map<string, string> & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, map<string, string>) };
      inline map<string, string> getCredential() { DARABONBA_PTR_GET(credential_, map<string, string>) };
      inline Body& setCredential(const map<string, string> & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
      inline Body& setCredential(map<string, string> && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    protected:
      // The channel credential. All fields must be provided and field values must be non-empty strings. DingTalk uses clientID and clientSecret. Lark uses appId and appSecret. WeCom uses botId and secret.
      // 
      // This parameter is required.
      shared_ptr<map<string, string>> credential_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateAgentIMChannelCredentialRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateAgentIMChannelCredentialRequest::Body) };
    inline UpdateAgentIMChannelCredentialRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateAgentIMChannelCredentialRequest::Body) };
    inline UpdateAgentIMChannelCredentialRequest& setBody(const UpdateAgentIMChannelCredentialRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateAgentIMChannelCredentialRequest& setBody(UpdateAgentIMChannelCredentialRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAgentIMChannelCredentialRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body.
    shared_ptr<UpdateAgentIMChannelCredentialRequest::Body> body_ {};
    // A reserved idempotency token. The backend does not provide persistent idempotence guarantee in the current version.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
