// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECIDENTITYPROVIDERMETADATAURLRESOLUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECIDENTITYPROVIDERMETADATAURLRESOLUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ExecIdentityProviderMetadataUrlResolutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecIdentityProviderMetadataUrlResolutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderMetadata, identityProviderMetadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecIdentityProviderMetadataUrlResolutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderMetadata, identityProviderMetadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExecIdentityProviderMetadataUrlResolutionResponseBody() = default ;
    ExecIdentityProviderMetadataUrlResolutionResponseBody(const ExecIdentityProviderMetadataUrlResolutionResponseBody &) = default ;
    ExecIdentityProviderMetadataUrlResolutionResponseBody(ExecIdentityProviderMetadataUrlResolutionResponseBody &&) = default ;
    ExecIdentityProviderMetadataUrlResolutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecIdentityProviderMetadataUrlResolutionResponseBody() = default ;
    ExecIdentityProviderMetadataUrlResolutionResponseBody& operator=(const ExecIdentityProviderMetadataUrlResolutionResponseBody &) = default ;
    ExecIdentityProviderMetadataUrlResolutionResponseBody& operator=(ExecIdentityProviderMetadataUrlResolutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityProviderMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityProviderMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(OidcOpenIdConfiguration, oidcOpenIdConfiguration_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityProviderMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(OidcOpenIdConfiguration, oidcOpenIdConfiguration_);
      };
      IdentityProviderMetadata() = default ;
      IdentityProviderMetadata(const IdentityProviderMetadata &) = default ;
      IdentityProviderMetadata(IdentityProviderMetadata &&) = default ;
      IdentityProviderMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityProviderMetadata() = default ;
      IdentityProviderMetadata& operator=(const IdentityProviderMetadata &) = default ;
      IdentityProviderMetadata& operator=(IdentityProviderMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OidcOpenIdConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OidcOpenIdConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_TO_JSON(UserinfoEndpoint, userinfoEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, OidcOpenIdConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_FROM_JSON(UserinfoEndpoint, userinfoEndpoint_);
        };
        OidcOpenIdConfiguration() = default ;
        OidcOpenIdConfiguration(const OidcOpenIdConfiguration &) = default ;
        OidcOpenIdConfiguration(OidcOpenIdConfiguration &&) = default ;
        OidcOpenIdConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OidcOpenIdConfiguration() = default ;
        OidcOpenIdConfiguration& operator=(const OidcOpenIdConfiguration &) = default ;
        OidcOpenIdConfiguration& operator=(OidcOpenIdConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->issuer_ == nullptr && this->jwksUri_ == nullptr && this->tokenEndpoint_ == nullptr && this->userinfoEndpoint_ == nullptr; };
        // authorizationEndpoint Field Functions 
        bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
        void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
        inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
        inline OidcOpenIdConfiguration& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline OidcOpenIdConfiguration& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // jwksUri Field Functions 
        bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
        void deleteJwksUri() { this->jwksUri_ = nullptr;};
        inline string getJwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
        inline OidcOpenIdConfiguration& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


        // tokenEndpoint Field Functions 
        bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
        void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
        inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
        inline OidcOpenIdConfiguration& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


        // userinfoEndpoint Field Functions 
        bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
        void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
        inline string getUserinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
        inline OidcOpenIdConfiguration& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


      protected:
        // oAuth2 授权端点。
        shared_ptr<string> authorizationEndpoint_ {};
        // OIDC issuer信息。
        shared_ptr<string> issuer_ {};
        // OIDC jwks地址。
        shared_ptr<string> jwksUri_ {};
        // oAuth2 Token端点。
        shared_ptr<string> tokenEndpoint_ {};
        // OIDC 用户信息端点。
        shared_ptr<string> userinfoEndpoint_ {};
      };

      virtual bool empty() const override { return this->oidcOpenIdConfiguration_ == nullptr; };
      // oidcOpenIdConfiguration Field Functions 
      bool hasOidcOpenIdConfiguration() const { return this->oidcOpenIdConfiguration_ != nullptr;};
      void deleteOidcOpenIdConfiguration() { this->oidcOpenIdConfiguration_ = nullptr;};
      inline const IdentityProviderMetadata::OidcOpenIdConfiguration & getOidcOpenIdConfiguration() const { DARABONBA_PTR_GET_CONST(oidcOpenIdConfiguration_, IdentityProviderMetadata::OidcOpenIdConfiguration) };
      inline IdentityProviderMetadata::OidcOpenIdConfiguration getOidcOpenIdConfiguration() { DARABONBA_PTR_GET(oidcOpenIdConfiguration_, IdentityProviderMetadata::OidcOpenIdConfiguration) };
      inline IdentityProviderMetadata& setOidcOpenIdConfiguration(const IdentityProviderMetadata::OidcOpenIdConfiguration & oidcOpenIdConfiguration) { DARABONBA_PTR_SET_VALUE(oidcOpenIdConfiguration_, oidcOpenIdConfiguration) };
      inline IdentityProviderMetadata& setOidcOpenIdConfiguration(IdentityProviderMetadata::OidcOpenIdConfiguration && oidcOpenIdConfiguration) { DARABONBA_PTR_SET_RVALUE(oidcOpenIdConfiguration_, oidcOpenIdConfiguration) };


    protected:
      // OIDC IdP的Meta信息。
      shared_ptr<IdentityProviderMetadata::OidcOpenIdConfiguration> oidcOpenIdConfiguration_ {};
    };

    virtual bool empty() const override { return this->identityProviderMetadata_ == nullptr
        && this->requestId_ == nullptr; };
    // identityProviderMetadata Field Functions 
    bool hasIdentityProviderMetadata() const { return this->identityProviderMetadata_ != nullptr;};
    void deleteIdentityProviderMetadata() { this->identityProviderMetadata_ = nullptr;};
    inline const ExecIdentityProviderMetadataUrlResolutionResponseBody::IdentityProviderMetadata & getIdentityProviderMetadata() const { DARABONBA_PTR_GET_CONST(identityProviderMetadata_, ExecIdentityProviderMetadataUrlResolutionResponseBody::IdentityProviderMetadata) };
    inline ExecIdentityProviderMetadataUrlResolutionResponseBody::IdentityProviderMetadata getIdentityProviderMetadata() { DARABONBA_PTR_GET(identityProviderMetadata_, ExecIdentityProviderMetadataUrlResolutionResponseBody::IdentityProviderMetadata) };
    inline ExecIdentityProviderMetadataUrlResolutionResponseBody& setIdentityProviderMetadata(const ExecIdentityProviderMetadataUrlResolutionResponseBody::IdentityProviderMetadata & identityProviderMetadata) { DARABONBA_PTR_SET_VALUE(identityProviderMetadata_, identityProviderMetadata) };
    inline ExecIdentityProviderMetadataUrlResolutionResponseBody& setIdentityProviderMetadata(ExecIdentityProviderMetadataUrlResolutionResponseBody::IdentityProviderMetadata && identityProviderMetadata) { DARABONBA_PTR_SET_RVALUE(identityProviderMetadata_, identityProviderMetadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecIdentityProviderMetadataUrlResolutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ExecIdentityProviderMetadataUrlResolutionResponseBody::IdentityProviderMetadata> identityProviderMetadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
