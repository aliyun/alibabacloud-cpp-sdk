// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZATIONSERVERMETADATA_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZATIONSERVERMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AuthorizationRequest.hpp>
#include <alibabacloud/models/PKCE.hpp>
#include <alibabacloud/models/TokenReqeust.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class AuthorizationServerMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizationServerMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRequest, authorizationRequest_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(PKCE, PKCE_);
      DARABONBA_PTR_TO_JSON(TokenRequest, tokenRequest_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizationServerMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRequest, authorizationRequest_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(PKCE, PKCE_);
      DARABONBA_PTR_FROM_JSON(TokenRequest, tokenRequest_);
    };
    AuthorizationServerMetadata() = default ;
    AuthorizationServerMetadata(const AuthorizationServerMetadata &) = default ;
    AuthorizationServerMetadata(AuthorizationServerMetadata &&) = default ;
    AuthorizationServerMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizationServerMetadata() = default ;
    AuthorizationServerMetadata& operator=(const AuthorizationServerMetadata &) = default ;
    AuthorizationServerMetadata& operator=(AuthorizationServerMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRequest_ == nullptr
        && return this->issuer_ == nullptr && return this->PKCE_ == nullptr && return this->tokenRequest_ == nullptr; };
    // authorizationRequest Field Functions 
    bool hasAuthorizationRequest() const { return this->authorizationRequest_ != nullptr;};
    void deleteAuthorizationRequest() { this->authorizationRequest_ = nullptr;};
    inline const AuthorizationRequest & authorizationRequest() const { DARABONBA_PTR_GET_CONST(authorizationRequest_, AuthorizationRequest) };
    inline AuthorizationRequest authorizationRequest() { DARABONBA_PTR_GET(authorizationRequest_, AuthorizationRequest) };
    inline AuthorizationServerMetadata& setAuthorizationRequest(const AuthorizationRequest & authorizationRequest) { DARABONBA_PTR_SET_VALUE(authorizationRequest_, authorizationRequest) };
    inline AuthorizationServerMetadata& setAuthorizationRequest(AuthorizationRequest && authorizationRequest) { DARABONBA_PTR_SET_RVALUE(authorizationRequest_, authorizationRequest) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline AuthorizationServerMetadata& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // PKCE Field Functions 
    bool hasPKCE() const { return this->PKCE_ != nullptr;};
    void deletePKCE() { this->PKCE_ = nullptr;};
    inline const PKCE & PKCE() const { DARABONBA_PTR_GET_CONST(PKCE_, PKCE) };
    inline PKCE PKCE() { DARABONBA_PTR_GET(PKCE_, PKCE) };
    inline AuthorizationServerMetadata& setPKCE(const PKCE & PKCE) { DARABONBA_PTR_SET_VALUE(PKCE_, PKCE) };
    inline AuthorizationServerMetadata& setPKCE(PKCE && PKCE) { DARABONBA_PTR_SET_RVALUE(PKCE_, PKCE) };


    // tokenRequest Field Functions 
    bool hasTokenRequest() const { return this->tokenRequest_ != nullptr;};
    void deleteTokenRequest() { this->tokenRequest_ = nullptr;};
    inline const TokenReqeust & tokenRequest() const { DARABONBA_PTR_GET_CONST(tokenRequest_, TokenReqeust) };
    inline TokenReqeust tokenRequest() { DARABONBA_PTR_GET(tokenRequest_, TokenReqeust) };
    inline AuthorizationServerMetadata& setTokenRequest(const TokenReqeust & tokenRequest) { DARABONBA_PTR_SET_VALUE(tokenRequest_, tokenRequest) };
    inline AuthorizationServerMetadata& setTokenRequest(TokenReqeust && tokenRequest) { DARABONBA_PTR_SET_RVALUE(tokenRequest_, tokenRequest) };


  protected:
    std::shared_ptr<AuthorizationRequest> authorizationRequest_ = nullptr;
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<PKCE> PKCE_ = nullptr;
    std::shared_ptr<TokenReqeust> tokenRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
