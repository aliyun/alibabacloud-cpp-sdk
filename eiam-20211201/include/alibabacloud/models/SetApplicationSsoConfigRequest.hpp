// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationSsoConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationSsoConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InitLoginType, initLoginType_);
      DARABONBA_PTR_TO_JSON(InitLoginUrl, initLoginUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_TO_JSON(SamlSsoConfig, samlSsoConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationSsoConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InitLoginType, initLoginType_);
      DARABONBA_PTR_FROM_JSON(InitLoginUrl, initLoginUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OidcSsoConfig, oidcSsoConfig_);
      DARABONBA_PTR_FROM_JSON(SamlSsoConfig, samlSsoConfig_);
    };
    SetApplicationSsoConfigRequest() = default ;
    SetApplicationSsoConfigRequest(const SetApplicationSsoConfigRequest &) = default ;
    SetApplicationSsoConfigRequest(SetApplicationSsoConfigRequest &&) = default ;
    SetApplicationSsoConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationSsoConfigRequest() = default ;
    SetApplicationSsoConfigRequest& operator=(const SetApplicationSsoConfigRequest &) = default ;
    SetApplicationSsoConfigRequest& operator=(SetApplicationSsoConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SamlSsoConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SamlSsoConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AssertionSigned, assertionSigned_);
        DARABONBA_PTR_TO_JSON(AttributeStatements, attributeStatements_);
        DARABONBA_PTR_TO_JSON(DefaultRelayState, defaultRelayState_);
        DARABONBA_PTR_TO_JSON(IdPEntityId, idPEntityId_);
        DARABONBA_PTR_TO_JSON(NameIdFormat, nameIdFormat_);
        DARABONBA_PTR_TO_JSON(NameIdValueExpression, nameIdValueExpression_);
        DARABONBA_PTR_TO_JSON(OptionalRelayStates, optionalRelayStates_);
        DARABONBA_PTR_TO_JSON(ResponseSigned, responseSigned_);
        DARABONBA_PTR_TO_JSON(SignatureAlgorithm, signatureAlgorithm_);
        DARABONBA_PTR_TO_JSON(SpEntityId, spEntityId_);
        DARABONBA_PTR_TO_JSON(SpSsoAcsUrl, spSsoAcsUrl_);
      };
      friend void from_json(const Darabonba::Json& j, SamlSsoConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AssertionSigned, assertionSigned_);
        DARABONBA_PTR_FROM_JSON(AttributeStatements, attributeStatements_);
        DARABONBA_PTR_FROM_JSON(DefaultRelayState, defaultRelayState_);
        DARABONBA_PTR_FROM_JSON(IdPEntityId, idPEntityId_);
        DARABONBA_PTR_FROM_JSON(NameIdFormat, nameIdFormat_);
        DARABONBA_PTR_FROM_JSON(NameIdValueExpression, nameIdValueExpression_);
        DARABONBA_PTR_FROM_JSON(OptionalRelayStates, optionalRelayStates_);
        DARABONBA_PTR_FROM_JSON(ResponseSigned, responseSigned_);
        DARABONBA_PTR_FROM_JSON(SignatureAlgorithm, signatureAlgorithm_);
        DARABONBA_PTR_FROM_JSON(SpEntityId, spEntityId_);
        DARABONBA_PTR_FROM_JSON(SpSsoAcsUrl, spSsoAcsUrl_);
      };
      SamlSsoConfig() = default ;
      SamlSsoConfig(const SamlSsoConfig &) = default ;
      SamlSsoConfig(SamlSsoConfig &&) = default ;
      SamlSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SamlSsoConfig() = default ;
      SamlSsoConfig& operator=(const SamlSsoConfig &) = default ;
      SamlSsoConfig& operator=(SamlSsoConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OptionalRelayStates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OptionalRelayStates& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(RelayState, relayState_);
        };
        friend void from_json(const Darabonba::Json& j, OptionalRelayStates& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(RelayState, relayState_);
        };
        OptionalRelayStates() = default ;
        OptionalRelayStates(const OptionalRelayStates &) = default ;
        OptionalRelayStates(OptionalRelayStates &&) = default ;
        OptionalRelayStates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OptionalRelayStates() = default ;
        OptionalRelayStates& operator=(const OptionalRelayStates &) = default ;
        OptionalRelayStates& operator=(OptionalRelayStates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->relayState_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline OptionalRelayStates& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // relayState Field Functions 
        bool hasRelayState() const { return this->relayState_ != nullptr;};
        void deleteRelayState() { this->relayState_ = nullptr;};
        inline string getRelayState() const { DARABONBA_PTR_GET_DEFAULT(relayState_, "") };
        inline OptionalRelayStates& setRelayState(string relayState) { DARABONBA_PTR_SET_VALUE(relayState_, relayState) };


      protected:
        // RelayState displayName
        shared_ptr<string> displayName_ {};
        // RelayState value
        shared_ptr<string> relayState_ {};
      };

      class AttributeStatements : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttributeStatements& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
          DARABONBA_PTR_TO_JSON(AttributeValueExpression, attributeValueExpression_);
        };
        friend void from_json(const Darabonba::Json& j, AttributeStatements& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
          DARABONBA_PTR_FROM_JSON(AttributeValueExpression, attributeValueExpression_);
        };
        AttributeStatements() = default ;
        AttributeStatements(const AttributeStatements &) = default ;
        AttributeStatements(AttributeStatements &&) = default ;
        AttributeStatements(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttributeStatements() = default ;
        AttributeStatements& operator=(const AttributeStatements &) = default ;
        AttributeStatements& operator=(AttributeStatements &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attributeName_ == nullptr
        && this->attributeValueExpression_ == nullptr; };
        // attributeName Field Functions 
        bool hasAttributeName() const { return this->attributeName_ != nullptr;};
        void deleteAttributeName() { this->attributeName_ = nullptr;};
        inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
        inline AttributeStatements& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


        // attributeValueExpression Field Functions 
        bool hasAttributeValueExpression() const { return this->attributeValueExpression_ != nullptr;};
        void deleteAttributeValueExpression() { this->attributeValueExpression_ = nullptr;};
        inline string getAttributeValueExpression() const { DARABONBA_PTR_GET_DEFAULT(attributeValueExpression_, "") };
        inline AttributeStatements& setAttributeValueExpression(string attributeValueExpression) { DARABONBA_PTR_SET_VALUE(attributeValueExpression_, attributeValueExpression) };


      protected:
        // The name of the attribute in the SAML assertion.
        shared_ptr<string> attributeName_ {};
        // The expression that is used to generate the value of the attribute in the SAML assertion.
        shared_ptr<string> attributeValueExpression_ {};
      };

      virtual bool empty() const override { return this->assertionSigned_ == nullptr
        && this->attributeStatements_ == nullptr && this->defaultRelayState_ == nullptr && this->idPEntityId_ == nullptr && this->nameIdFormat_ == nullptr && this->nameIdValueExpression_ == nullptr
        && this->optionalRelayStates_ == nullptr && this->responseSigned_ == nullptr && this->signatureAlgorithm_ == nullptr && this->spEntityId_ == nullptr && this->spSsoAcsUrl_ == nullptr; };
      // assertionSigned Field Functions 
      bool hasAssertionSigned() const { return this->assertionSigned_ != nullptr;};
      void deleteAssertionSigned() { this->assertionSigned_ = nullptr;};
      inline bool getAssertionSigned() const { DARABONBA_PTR_GET_DEFAULT(assertionSigned_, false) };
      inline SamlSsoConfig& setAssertionSigned(bool assertionSigned) { DARABONBA_PTR_SET_VALUE(assertionSigned_, assertionSigned) };


      // attributeStatements Field Functions 
      bool hasAttributeStatements() const { return this->attributeStatements_ != nullptr;};
      void deleteAttributeStatements() { this->attributeStatements_ = nullptr;};
      inline const vector<SamlSsoConfig::AttributeStatements> & getAttributeStatements() const { DARABONBA_PTR_GET_CONST(attributeStatements_, vector<SamlSsoConfig::AttributeStatements>) };
      inline vector<SamlSsoConfig::AttributeStatements> getAttributeStatements() { DARABONBA_PTR_GET(attributeStatements_, vector<SamlSsoConfig::AttributeStatements>) };
      inline SamlSsoConfig& setAttributeStatements(const vector<SamlSsoConfig::AttributeStatements> & attributeStatements) { DARABONBA_PTR_SET_VALUE(attributeStatements_, attributeStatements) };
      inline SamlSsoConfig& setAttributeStatements(vector<SamlSsoConfig::AttributeStatements> && attributeStatements) { DARABONBA_PTR_SET_RVALUE(attributeStatements_, attributeStatements) };


      // defaultRelayState Field Functions 
      bool hasDefaultRelayState() const { return this->defaultRelayState_ != nullptr;};
      void deleteDefaultRelayState() { this->defaultRelayState_ = nullptr;};
      inline string getDefaultRelayState() const { DARABONBA_PTR_GET_DEFAULT(defaultRelayState_, "") };
      inline SamlSsoConfig& setDefaultRelayState(string defaultRelayState) { DARABONBA_PTR_SET_VALUE(defaultRelayState_, defaultRelayState) };


      // idPEntityId Field Functions 
      bool hasIdPEntityId() const { return this->idPEntityId_ != nullptr;};
      void deleteIdPEntityId() { this->idPEntityId_ = nullptr;};
      inline string getIdPEntityId() const { DARABONBA_PTR_GET_DEFAULT(idPEntityId_, "") };
      inline SamlSsoConfig& setIdPEntityId(string idPEntityId) { DARABONBA_PTR_SET_VALUE(idPEntityId_, idPEntityId) };


      // nameIdFormat Field Functions 
      bool hasNameIdFormat() const { return this->nameIdFormat_ != nullptr;};
      void deleteNameIdFormat() { this->nameIdFormat_ = nullptr;};
      inline string getNameIdFormat() const { DARABONBA_PTR_GET_DEFAULT(nameIdFormat_, "") };
      inline SamlSsoConfig& setNameIdFormat(string nameIdFormat) { DARABONBA_PTR_SET_VALUE(nameIdFormat_, nameIdFormat) };


      // nameIdValueExpression Field Functions 
      bool hasNameIdValueExpression() const { return this->nameIdValueExpression_ != nullptr;};
      void deleteNameIdValueExpression() { this->nameIdValueExpression_ = nullptr;};
      inline string getNameIdValueExpression() const { DARABONBA_PTR_GET_DEFAULT(nameIdValueExpression_, "") };
      inline SamlSsoConfig& setNameIdValueExpression(string nameIdValueExpression) { DARABONBA_PTR_SET_VALUE(nameIdValueExpression_, nameIdValueExpression) };


      // optionalRelayStates Field Functions 
      bool hasOptionalRelayStates() const { return this->optionalRelayStates_ != nullptr;};
      void deleteOptionalRelayStates() { this->optionalRelayStates_ = nullptr;};
      inline const vector<SamlSsoConfig::OptionalRelayStates> & getOptionalRelayStates() const { DARABONBA_PTR_GET_CONST(optionalRelayStates_, vector<SamlSsoConfig::OptionalRelayStates>) };
      inline vector<SamlSsoConfig::OptionalRelayStates> getOptionalRelayStates() { DARABONBA_PTR_GET(optionalRelayStates_, vector<SamlSsoConfig::OptionalRelayStates>) };
      inline SamlSsoConfig& setOptionalRelayStates(const vector<SamlSsoConfig::OptionalRelayStates> & optionalRelayStates) { DARABONBA_PTR_SET_VALUE(optionalRelayStates_, optionalRelayStates) };
      inline SamlSsoConfig& setOptionalRelayStates(vector<SamlSsoConfig::OptionalRelayStates> && optionalRelayStates) { DARABONBA_PTR_SET_RVALUE(optionalRelayStates_, optionalRelayStates) };


      // responseSigned Field Functions 
      bool hasResponseSigned() const { return this->responseSigned_ != nullptr;};
      void deleteResponseSigned() { this->responseSigned_ = nullptr;};
      inline bool getResponseSigned() const { DARABONBA_PTR_GET_DEFAULT(responseSigned_, false) };
      inline SamlSsoConfig& setResponseSigned(bool responseSigned) { DARABONBA_PTR_SET_VALUE(responseSigned_, responseSigned) };


      // signatureAlgorithm Field Functions 
      bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
      void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
      inline string getSignatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
      inline SamlSsoConfig& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


      // spEntityId Field Functions 
      bool hasSpEntityId() const { return this->spEntityId_ != nullptr;};
      void deleteSpEntityId() { this->spEntityId_ = nullptr;};
      inline string getSpEntityId() const { DARABONBA_PTR_GET_DEFAULT(spEntityId_, "") };
      inline SamlSsoConfig& setSpEntityId(string spEntityId) { DARABONBA_PTR_SET_VALUE(spEntityId_, spEntityId) };


      // spSsoAcsUrl Field Functions 
      bool hasSpSsoAcsUrl() const { return this->spSsoAcsUrl_ != nullptr;};
      void deleteSpSsoAcsUrl() { this->spSsoAcsUrl_ = nullptr;};
      inline string getSpSsoAcsUrl() const { DARABONBA_PTR_GET_DEFAULT(spSsoAcsUrl_, "") };
      inline SamlSsoConfig& setSpSsoAcsUrl(string spSsoAcsUrl) { DARABONBA_PTR_SET_VALUE(spSsoAcsUrl_, spSsoAcsUrl) };


    protected:
      // Specifies whether to calculate the signature for the assertion. You cannot set the ResponseSigned and AssertionSigned parameters to false at the same time. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> assertionSigned_ {};
      // The additional user attributes in the SAML assertion.
      shared_ptr<vector<SamlSsoConfig::AttributeStatements>> attributeStatements_ {};
      // The default value of the RelayState attribute. If the SSO request is initiated in EIAM, the RelayState attribute in the SAML response is set to this default value.
      shared_ptr<string> defaultRelayState_ {};
      // IdP entityId.
      shared_ptr<string> idPEntityId_ {};
      // The format of the NameID element in the SAML assertion. Valid values:
      // 
      // *   urn:oasis:names:tc:SAML:1.1:nameid-format:unspecified: No format is specified. How to resolve the NameID element depends on the application.
      // *   urn:oasis:names:tc:SAML:1.1:nameid-format:emailAddress: The NameID element must be an email address.
      // *   urn:oasis:names:tc:SAML:2.0:nameid-format:persistent: The NameID element must be persistent.
      // *   urn:oasis:names:tc:SAML:2.0:nameid-format:transient: The NameID element must be transient.
      // 
      // Valid values:
      // 
      // *   urn:oasis:names:tc:SAML:1.1:nameid-format:unspecified: No format is specified. This is the default value.
      // *   urn:oasis:names:tc:SAML:1.1:nameid-format:emailAddress: The NameID element must be an email address.
      // *   urn:oasis:names:tc:SAML:2.0:nameid-format:persistent: The NameID element must be persistent.
      // *   urn:oasis:names:tc:SAML:2.0:nameid-format:transient: The NameID element must be transient.
      shared_ptr<string> nameIdFormat_ {};
      // The expression that is used to generate the value of NameID in the SAML assertion.
      shared_ptr<string> nameIdValueExpression_ {};
      // Optional relayStates
      shared_ptr<vector<SamlSsoConfig::OptionalRelayStates>> optionalRelayStates_ {};
      // Specifies whether to calculate the signature for the response. You cannot set the ResponseSigned and AssertionSigned parameters to false at the same time. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> responseSigned_ {};
      // The algorithm that is used to calculate the signature for the SAML assertion.
      // 
      // Valid value:
      // 
      // *   RSA-SHA256: the Rivest-Shamir-Adleman (RSA)-Secure Hash Algorithm 256 (SHA-256) algorithm.
      shared_ptr<string> signatureAlgorithm_ {};
      // The entity ID of the application in SAML.
      shared_ptr<string> spEntityId_ {};
      // The Assertion Consumer Service (ACS) URL of the application in SAML.
      shared_ptr<string> spSsoAcsUrl_ {};
    };

    class OidcSsoConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OidcSsoConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
        DARABONBA_PTR_TO_JSON(AllowedPublicClient, allowedPublicClient_);
        DARABONBA_PTR_TO_JSON(CodeEffectiveTime, codeEffectiveTime_);
        DARABONBA_PTR_TO_JSON(CustomClaims, customClaims_);
        DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_TO_JSON(GrantTypes, grantTypes_);
        DARABONBA_PTR_TO_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
        DARABONBA_PTR_TO_JSON(PasswordAuthenticationSourceId, passwordAuthenticationSourceId_);
        DARABONBA_PTR_TO_JSON(PasswordTotpMfaRequired, passwordTotpMfaRequired_);
        DARABONBA_PTR_TO_JSON(PkceChallengeMethods, pkceChallengeMethods_);
        DARABONBA_PTR_TO_JSON(PkceRequired, pkceRequired_);
        DARABONBA_PTR_TO_JSON(PostLogoutRedirectUris, postLogoutRedirectUris_);
        DARABONBA_PTR_TO_JSON(RedirectUris, redirectUris_);
        DARABONBA_PTR_TO_JSON(RefreshTokenEffective, refreshTokenEffective_);
        DARABONBA_PTR_TO_JSON(ResponseTypes, responseTypes_);
        DARABONBA_PTR_TO_JSON(SubjectIdExpression, subjectIdExpression_);
      };
      friend void from_json(const Darabonba::Json& j, OidcSsoConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
        DARABONBA_PTR_FROM_JSON(AllowedPublicClient, allowedPublicClient_);
        DARABONBA_PTR_FROM_JSON(CodeEffectiveTime, codeEffectiveTime_);
        DARABONBA_PTR_FROM_JSON(CustomClaims, customClaims_);
        DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_FROM_JSON(GrantTypes, grantTypes_);
        DARABONBA_PTR_FROM_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
        DARABONBA_PTR_FROM_JSON(PasswordAuthenticationSourceId, passwordAuthenticationSourceId_);
        DARABONBA_PTR_FROM_JSON(PasswordTotpMfaRequired, passwordTotpMfaRequired_);
        DARABONBA_PTR_FROM_JSON(PkceChallengeMethods, pkceChallengeMethods_);
        DARABONBA_PTR_FROM_JSON(PkceRequired, pkceRequired_);
        DARABONBA_PTR_FROM_JSON(PostLogoutRedirectUris, postLogoutRedirectUris_);
        DARABONBA_PTR_FROM_JSON(RedirectUris, redirectUris_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenEffective, refreshTokenEffective_);
        DARABONBA_PTR_FROM_JSON(ResponseTypes, responseTypes_);
        DARABONBA_PTR_FROM_JSON(SubjectIdExpression, subjectIdExpression_);
      };
      OidcSsoConfig() = default ;
      OidcSsoConfig(const OidcSsoConfig &) = default ;
      OidcSsoConfig(OidcSsoConfig &&) = default ;
      OidcSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OidcSsoConfig() = default ;
      OidcSsoConfig& operator=(const OidcSsoConfig &) = default ;
      OidcSsoConfig& operator=(OidcSsoConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomClaims : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomClaims& obj) { 
          DARABONBA_PTR_TO_JSON(ClaimName, claimName_);
          DARABONBA_PTR_TO_JSON(ClaimValueExpression, claimValueExpression_);
        };
        friend void from_json(const Darabonba::Json& j, CustomClaims& obj) { 
          DARABONBA_PTR_FROM_JSON(ClaimName, claimName_);
          DARABONBA_PTR_FROM_JSON(ClaimValueExpression, claimValueExpression_);
        };
        CustomClaims() = default ;
        CustomClaims(const CustomClaims &) = default ;
        CustomClaims(CustomClaims &&) = default ;
        CustomClaims(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomClaims() = default ;
        CustomClaims& operator=(const CustomClaims &) = default ;
        CustomClaims& operator=(CustomClaims &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->claimName_ == nullptr
        && this->claimValueExpression_ == nullptr; };
        // claimName Field Functions 
        bool hasClaimName() const { return this->claimName_ != nullptr;};
        void deleteClaimName() { this->claimName_ = nullptr;};
        inline string getClaimName() const { DARABONBA_PTR_GET_DEFAULT(claimName_, "") };
        inline CustomClaims& setClaimName(string claimName) { DARABONBA_PTR_SET_VALUE(claimName_, claimName) };


        // claimValueExpression Field Functions 
        bool hasClaimValueExpression() const { return this->claimValueExpression_ != nullptr;};
        void deleteClaimValueExpression() { this->claimValueExpression_ = nullptr;};
        inline string getClaimValueExpression() const { DARABONBA_PTR_GET_DEFAULT(claimValueExpression_, "") };
        inline CustomClaims& setClaimValueExpression(string claimValueExpression) { DARABONBA_PTR_SET_VALUE(claimValueExpression_, claimValueExpression) };


      protected:
        // The claim name.
        shared_ptr<string> claimName_ {};
        // The expression that is used to calculate the value of the claim.
        shared_ptr<string> claimValueExpression_ {};
      };

      virtual bool empty() const override { return this->accessTokenEffectiveTime_ == nullptr
        && this->allowedPublicClient_ == nullptr && this->codeEffectiveTime_ == nullptr && this->customClaims_ == nullptr && this->grantScopes_ == nullptr && this->grantTypes_ == nullptr
        && this->idTokenEffectiveTime_ == nullptr && this->passwordAuthenticationSourceId_ == nullptr && this->passwordTotpMfaRequired_ == nullptr && this->pkceChallengeMethods_ == nullptr && this->pkceRequired_ == nullptr
        && this->postLogoutRedirectUris_ == nullptr && this->redirectUris_ == nullptr && this->refreshTokenEffective_ == nullptr && this->responseTypes_ == nullptr && this->subjectIdExpression_ == nullptr; };
      // accessTokenEffectiveTime Field Functions 
      bool hasAccessTokenEffectiveTime() const { return this->accessTokenEffectiveTime_ != nullptr;};
      void deleteAccessTokenEffectiveTime() { this->accessTokenEffectiveTime_ = nullptr;};
      inline int64_t getAccessTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenEffectiveTime_, 0L) };
      inline OidcSsoConfig& setAccessTokenEffectiveTime(int64_t accessTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(accessTokenEffectiveTime_, accessTokenEffectiveTime) };


      // allowedPublicClient Field Functions 
      bool hasAllowedPublicClient() const { return this->allowedPublicClient_ != nullptr;};
      void deleteAllowedPublicClient() { this->allowedPublicClient_ = nullptr;};
      inline bool getAllowedPublicClient() const { DARABONBA_PTR_GET_DEFAULT(allowedPublicClient_, false) };
      inline OidcSsoConfig& setAllowedPublicClient(bool allowedPublicClient) { DARABONBA_PTR_SET_VALUE(allowedPublicClient_, allowedPublicClient) };


      // codeEffectiveTime Field Functions 
      bool hasCodeEffectiveTime() const { return this->codeEffectiveTime_ != nullptr;};
      void deleteCodeEffectiveTime() { this->codeEffectiveTime_ = nullptr;};
      inline int64_t getCodeEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(codeEffectiveTime_, 0L) };
      inline OidcSsoConfig& setCodeEffectiveTime(int64_t codeEffectiveTime) { DARABONBA_PTR_SET_VALUE(codeEffectiveTime_, codeEffectiveTime) };


      // customClaims Field Functions 
      bool hasCustomClaims() const { return this->customClaims_ != nullptr;};
      void deleteCustomClaims() { this->customClaims_ = nullptr;};
      inline const vector<OidcSsoConfig::CustomClaims> & getCustomClaims() const { DARABONBA_PTR_GET_CONST(customClaims_, vector<OidcSsoConfig::CustomClaims>) };
      inline vector<OidcSsoConfig::CustomClaims> getCustomClaims() { DARABONBA_PTR_GET(customClaims_, vector<OidcSsoConfig::CustomClaims>) };
      inline OidcSsoConfig& setCustomClaims(const vector<OidcSsoConfig::CustomClaims> & customClaims) { DARABONBA_PTR_SET_VALUE(customClaims_, customClaims) };
      inline OidcSsoConfig& setCustomClaims(vector<OidcSsoConfig::CustomClaims> && customClaims) { DARABONBA_PTR_SET_RVALUE(customClaims_, customClaims) };


      // grantScopes Field Functions 
      bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
      void deleteGrantScopes() { this->grantScopes_ = nullptr;};
      inline const vector<string> & getGrantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
      inline vector<string> getGrantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
      inline OidcSsoConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
      inline OidcSsoConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


      // grantTypes Field Functions 
      bool hasGrantTypes() const { return this->grantTypes_ != nullptr;};
      void deleteGrantTypes() { this->grantTypes_ = nullptr;};
      inline const vector<string> & getGrantTypes() const { DARABONBA_PTR_GET_CONST(grantTypes_, vector<string>) };
      inline vector<string> getGrantTypes() { DARABONBA_PTR_GET(grantTypes_, vector<string>) };
      inline OidcSsoConfig& setGrantTypes(const vector<string> & grantTypes) { DARABONBA_PTR_SET_VALUE(grantTypes_, grantTypes) };
      inline OidcSsoConfig& setGrantTypes(vector<string> && grantTypes) { DARABONBA_PTR_SET_RVALUE(grantTypes_, grantTypes) };


      // idTokenEffectiveTime Field Functions 
      bool hasIdTokenEffectiveTime() const { return this->idTokenEffectiveTime_ != nullptr;};
      void deleteIdTokenEffectiveTime() { this->idTokenEffectiveTime_ = nullptr;};
      inline int64_t getIdTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(idTokenEffectiveTime_, 0L) };
      inline OidcSsoConfig& setIdTokenEffectiveTime(int64_t idTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(idTokenEffectiveTime_, idTokenEffectiveTime) };


      // passwordAuthenticationSourceId Field Functions 
      bool hasPasswordAuthenticationSourceId() const { return this->passwordAuthenticationSourceId_ != nullptr;};
      void deletePasswordAuthenticationSourceId() { this->passwordAuthenticationSourceId_ = nullptr;};
      inline string getPasswordAuthenticationSourceId() const { DARABONBA_PTR_GET_DEFAULT(passwordAuthenticationSourceId_, "") };
      inline OidcSsoConfig& setPasswordAuthenticationSourceId(string passwordAuthenticationSourceId) { DARABONBA_PTR_SET_VALUE(passwordAuthenticationSourceId_, passwordAuthenticationSourceId) };


      // passwordTotpMfaRequired Field Functions 
      bool hasPasswordTotpMfaRequired() const { return this->passwordTotpMfaRequired_ != nullptr;};
      void deletePasswordTotpMfaRequired() { this->passwordTotpMfaRequired_ = nullptr;};
      inline bool getPasswordTotpMfaRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordTotpMfaRequired_, false) };
      inline OidcSsoConfig& setPasswordTotpMfaRequired(bool passwordTotpMfaRequired) { DARABONBA_PTR_SET_VALUE(passwordTotpMfaRequired_, passwordTotpMfaRequired) };


      // pkceChallengeMethods Field Functions 
      bool hasPkceChallengeMethods() const { return this->pkceChallengeMethods_ != nullptr;};
      void deletePkceChallengeMethods() { this->pkceChallengeMethods_ = nullptr;};
      inline const vector<string> & getPkceChallengeMethods() const { DARABONBA_PTR_GET_CONST(pkceChallengeMethods_, vector<string>) };
      inline vector<string> getPkceChallengeMethods() { DARABONBA_PTR_GET(pkceChallengeMethods_, vector<string>) };
      inline OidcSsoConfig& setPkceChallengeMethods(const vector<string> & pkceChallengeMethods) { DARABONBA_PTR_SET_VALUE(pkceChallengeMethods_, pkceChallengeMethods) };
      inline OidcSsoConfig& setPkceChallengeMethods(vector<string> && pkceChallengeMethods) { DARABONBA_PTR_SET_RVALUE(pkceChallengeMethods_, pkceChallengeMethods) };


      // pkceRequired Field Functions 
      bool hasPkceRequired() const { return this->pkceRequired_ != nullptr;};
      void deletePkceRequired() { this->pkceRequired_ = nullptr;};
      inline bool getPkceRequired() const { DARABONBA_PTR_GET_DEFAULT(pkceRequired_, false) };
      inline OidcSsoConfig& setPkceRequired(bool pkceRequired) { DARABONBA_PTR_SET_VALUE(pkceRequired_, pkceRequired) };


      // postLogoutRedirectUris Field Functions 
      bool hasPostLogoutRedirectUris() const { return this->postLogoutRedirectUris_ != nullptr;};
      void deletePostLogoutRedirectUris() { this->postLogoutRedirectUris_ = nullptr;};
      inline const vector<string> & getPostLogoutRedirectUris() const { DARABONBA_PTR_GET_CONST(postLogoutRedirectUris_, vector<string>) };
      inline vector<string> getPostLogoutRedirectUris() { DARABONBA_PTR_GET(postLogoutRedirectUris_, vector<string>) };
      inline OidcSsoConfig& setPostLogoutRedirectUris(const vector<string> & postLogoutRedirectUris) { DARABONBA_PTR_SET_VALUE(postLogoutRedirectUris_, postLogoutRedirectUris) };
      inline OidcSsoConfig& setPostLogoutRedirectUris(vector<string> && postLogoutRedirectUris) { DARABONBA_PTR_SET_RVALUE(postLogoutRedirectUris_, postLogoutRedirectUris) };


      // redirectUris Field Functions 
      bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
      void deleteRedirectUris() { this->redirectUris_ = nullptr;};
      inline const vector<string> & getRedirectUris() const { DARABONBA_PTR_GET_CONST(redirectUris_, vector<string>) };
      inline vector<string> getRedirectUris() { DARABONBA_PTR_GET(redirectUris_, vector<string>) };
      inline OidcSsoConfig& setRedirectUris(const vector<string> & redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };
      inline OidcSsoConfig& setRedirectUris(vector<string> && redirectUris) { DARABONBA_PTR_SET_RVALUE(redirectUris_, redirectUris) };


      // refreshTokenEffective Field Functions 
      bool hasRefreshTokenEffective() const { return this->refreshTokenEffective_ != nullptr;};
      void deleteRefreshTokenEffective() { this->refreshTokenEffective_ = nullptr;};
      inline int64_t getRefreshTokenEffective() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenEffective_, 0L) };
      inline OidcSsoConfig& setRefreshTokenEffective(int64_t refreshTokenEffective) { DARABONBA_PTR_SET_VALUE(refreshTokenEffective_, refreshTokenEffective) };


      // responseTypes Field Functions 
      bool hasResponseTypes() const { return this->responseTypes_ != nullptr;};
      void deleteResponseTypes() { this->responseTypes_ = nullptr;};
      inline const vector<string> & getResponseTypes() const { DARABONBA_PTR_GET_CONST(responseTypes_, vector<string>) };
      inline vector<string> getResponseTypes() { DARABONBA_PTR_GET(responseTypes_, vector<string>) };
      inline OidcSsoConfig& setResponseTypes(const vector<string> & responseTypes) { DARABONBA_PTR_SET_VALUE(responseTypes_, responseTypes) };
      inline OidcSsoConfig& setResponseTypes(vector<string> && responseTypes) { DARABONBA_PTR_SET_RVALUE(responseTypes_, responseTypes) };


      // subjectIdExpression Field Functions 
      bool hasSubjectIdExpression() const { return this->subjectIdExpression_ != nullptr;};
      void deleteSubjectIdExpression() { this->subjectIdExpression_ = nullptr;};
      inline string getSubjectIdExpression() const { DARABONBA_PTR_GET_DEFAULT(subjectIdExpression_, "") };
      inline OidcSsoConfig& setSubjectIdExpression(string subjectIdExpression) { DARABONBA_PTR_SET_VALUE(subjectIdExpression_, subjectIdExpression) };


    protected:
      // The validity period of the issued access token. Unit: seconds. Default value: 1200.
      shared_ptr<int64_t> accessTokenEffectiveTime_ {};
      shared_ptr<bool> allowedPublicClient_ {};
      // The validity period of the issued code. Unit: seconds. Default value: 60.
      shared_ptr<int64_t> codeEffectiveTime_ {};
      // The custom claims that are returned for the ID token.
      shared_ptr<vector<OidcSsoConfig::CustomClaims>> customClaims_ {};
      // The scopes of user attributes that can be returned for the UserInfo endpoint or ID token.
      shared_ptr<vector<string>> grantScopes_ {};
      // The authorization types that are supported for OIDC protocols.
      shared_ptr<vector<string>> grantTypes_ {};
      // The validity period of the issued ID token. Unit: seconds. Default value: 300.
      shared_ptr<int64_t> idTokenEffectiveTime_ {};
      // The ID of the identity authentication source in password mode. Configure this parameter only when the value of the GrantTypes parameter includes the password mode.
      shared_ptr<string> passwordAuthenticationSourceId_ {};
      // Specifies whether time-based one-time password (TOTP) authentication is required in password mode. Configure this parameter only when the value of the GrantTypes parameter includes the password mode.
      shared_ptr<bool> passwordTotpMfaRequired_ {};
      // The algorithms that are used to calculate the code challenge for PKCE.
      shared_ptr<vector<string>> pkceChallengeMethods_ {};
      // Specifies whether the SSO of the application requires Proof Key for Code Exchange (PKCE) (RFC 7636).
      shared_ptr<bool> pkceRequired_ {};
      // The logout redirect URIs that are supported by the application.
      shared_ptr<vector<string>> postLogoutRedirectUris_ {};
      // The redirect URIs that are supported by the application.
      shared_ptr<vector<string>> redirectUris_ {};
      // The validity period of the issued refresh token. Unit: seconds. Default value: 86400.
      shared_ptr<int64_t> refreshTokenEffective_ {};
      // The response types that are supported by the application. Configure this parameter when the value of the GrantTypes parameter includes the implicit mode.
      shared_ptr<vector<string>> responseTypes_ {};
      // The custom expression that is used to calculate the subject ID returned for the ID token.
      shared_ptr<string> subjectIdExpression_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->clientToken_ == nullptr && this->initLoginType_ == nullptr && this->initLoginUrl_ == nullptr && this->instanceId_ == nullptr && this->oidcSsoConfig_ == nullptr
        && this->samlSsoConfig_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SetApplicationSsoConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetApplicationSsoConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // initLoginType Field Functions 
    bool hasInitLoginType() const { return this->initLoginType_ != nullptr;};
    void deleteInitLoginType() { this->initLoginType_ = nullptr;};
    inline string getInitLoginType() const { DARABONBA_PTR_GET_DEFAULT(initLoginType_, "") };
    inline SetApplicationSsoConfigRequest& setInitLoginType(string initLoginType) { DARABONBA_PTR_SET_VALUE(initLoginType_, initLoginType) };


    // initLoginUrl Field Functions 
    bool hasInitLoginUrl() const { return this->initLoginUrl_ != nullptr;};
    void deleteInitLoginUrl() { this->initLoginUrl_ = nullptr;};
    inline string getInitLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(initLoginUrl_, "") };
    inline SetApplicationSsoConfigRequest& setInitLoginUrl(string initLoginUrl) { DARABONBA_PTR_SET_VALUE(initLoginUrl_, initLoginUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetApplicationSsoConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // oidcSsoConfig Field Functions 
    bool hasOidcSsoConfig() const { return this->oidcSsoConfig_ != nullptr;};
    void deleteOidcSsoConfig() { this->oidcSsoConfig_ = nullptr;};
    inline const SetApplicationSsoConfigRequest::OidcSsoConfig & getOidcSsoConfig() const { DARABONBA_PTR_GET_CONST(oidcSsoConfig_, SetApplicationSsoConfigRequest::OidcSsoConfig) };
    inline SetApplicationSsoConfigRequest::OidcSsoConfig getOidcSsoConfig() { DARABONBA_PTR_GET(oidcSsoConfig_, SetApplicationSsoConfigRequest::OidcSsoConfig) };
    inline SetApplicationSsoConfigRequest& setOidcSsoConfig(const SetApplicationSsoConfigRequest::OidcSsoConfig & oidcSsoConfig) { DARABONBA_PTR_SET_VALUE(oidcSsoConfig_, oidcSsoConfig) };
    inline SetApplicationSsoConfigRequest& setOidcSsoConfig(SetApplicationSsoConfigRequest::OidcSsoConfig && oidcSsoConfig) { DARABONBA_PTR_SET_RVALUE(oidcSsoConfig_, oidcSsoConfig) };


    // samlSsoConfig Field Functions 
    bool hasSamlSsoConfig() const { return this->samlSsoConfig_ != nullptr;};
    void deleteSamlSsoConfig() { this->samlSsoConfig_ = nullptr;};
    inline const SetApplicationSsoConfigRequest::SamlSsoConfig & getSamlSsoConfig() const { DARABONBA_PTR_GET_CONST(samlSsoConfig_, SetApplicationSsoConfigRequest::SamlSsoConfig) };
    inline SetApplicationSsoConfigRequest::SamlSsoConfig getSamlSsoConfig() { DARABONBA_PTR_GET(samlSsoConfig_, SetApplicationSsoConfigRequest::SamlSsoConfig) };
    inline SetApplicationSsoConfigRequest& setSamlSsoConfig(const SetApplicationSsoConfigRequest::SamlSsoConfig & samlSsoConfig) { DARABONBA_PTR_SET_VALUE(samlSsoConfig_, samlSsoConfig) };
    inline SetApplicationSsoConfigRequest& setSamlSsoConfig(SetApplicationSsoConfigRequest::SamlSsoConfig && samlSsoConfig) { DARABONBA_PTR_SET_RVALUE(samlSsoConfig_, samlSsoConfig) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // Idp client token.
    shared_ptr<string> clientToken_ {};
    // The initial SSO method. Valid values:
    // 
    // *   only_app_init_sso: Only application-initiated SSO is allowed. This method is selected by default when the SSO protocol of the application is an OIDC protocol. If this method is selected when the SSO protocol of the application is SAML, the InitLoginUrl parameter is required.
    // *   idaas_or_app_init_sso: IDaaS-initiated SSO and application-initiated SSO are allowed. This method is selected by default when the SSO protocol of the application is SAML. If this method is selected when the SSO protocol of the application is an OIDC protocol, the InitLoginUrl parameter is required.
    shared_ptr<string> initLoginType_ {};
    // The initial webhook URL of SSO. This parameter is required when the SSO protocol of the application is an OIDC protocol and the InitLoginType parameters is set to idaas_or_app_init_sso or when the SSO protocol of the application is SAML and the InitLoginType parameter is set to only_app_init_sso.
    shared_ptr<string> initLoginUrl_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The Open ID Connect (OIDC)-based SSO configuration attributes of the application.
    shared_ptr<SetApplicationSsoConfigRequest::OidcSsoConfig> oidcSsoConfig_ {};
    // The Security Assertion Markup Language (SAML)-based SSO configuration attributes of the application.
    shared_ptr<SetApplicationSsoConfigRequest::SamlSsoConfig> samlSsoConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
