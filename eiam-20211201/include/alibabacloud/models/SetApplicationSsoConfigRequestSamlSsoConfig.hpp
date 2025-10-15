// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTSAMLSSOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTSAMLSSOCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements.hpp>
#include <alibabacloud/models/SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationSsoConfigRequestSamlSsoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationSsoConfigRequestSamlSsoConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SetApplicationSsoConfigRequestSamlSsoConfig& obj) { 
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
    SetApplicationSsoConfigRequestSamlSsoConfig() = default ;
    SetApplicationSsoConfigRequestSamlSsoConfig(const SetApplicationSsoConfigRequestSamlSsoConfig &) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfig(SetApplicationSsoConfigRequestSamlSsoConfig &&) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationSsoConfigRequestSamlSsoConfig() = default ;
    SetApplicationSsoConfigRequestSamlSsoConfig& operator=(const SetApplicationSsoConfigRequestSamlSsoConfig &) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfig& operator=(SetApplicationSsoConfigRequestSamlSsoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assertionSigned_ == nullptr
        && return this->attributeStatements_ == nullptr && return this->defaultRelayState_ == nullptr && return this->idPEntityId_ == nullptr && return this->nameIdFormat_ == nullptr && return this->nameIdValueExpression_ == nullptr
        && return this->optionalRelayStates_ == nullptr && return this->responseSigned_ == nullptr && return this->signatureAlgorithm_ == nullptr && return this->spEntityId_ == nullptr && return this->spSsoAcsUrl_ == nullptr; };
    // assertionSigned Field Functions 
    bool hasAssertionSigned() const { return this->assertionSigned_ != nullptr;};
    void deleteAssertionSigned() { this->assertionSigned_ = nullptr;};
    inline bool assertionSigned() const { DARABONBA_PTR_GET_DEFAULT(assertionSigned_, false) };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setAssertionSigned(bool assertionSigned) { DARABONBA_PTR_SET_VALUE(assertionSigned_, assertionSigned) };


    // attributeStatements Field Functions 
    bool hasAttributeStatements() const { return this->attributeStatements_ != nullptr;};
    void deleteAttributeStatements() { this->attributeStatements_ = nullptr;};
    inline const vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements> & attributeStatements() const { DARABONBA_PTR_GET_CONST(attributeStatements_, vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements>) };
    inline vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements> attributeStatements() { DARABONBA_PTR_GET(attributeStatements_, vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements>) };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setAttributeStatements(const vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements> & attributeStatements) { DARABONBA_PTR_SET_VALUE(attributeStatements_, attributeStatements) };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setAttributeStatements(vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements> && attributeStatements) { DARABONBA_PTR_SET_RVALUE(attributeStatements_, attributeStatements) };


    // defaultRelayState Field Functions 
    bool hasDefaultRelayState() const { return this->defaultRelayState_ != nullptr;};
    void deleteDefaultRelayState() { this->defaultRelayState_ = nullptr;};
    inline string defaultRelayState() const { DARABONBA_PTR_GET_DEFAULT(defaultRelayState_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setDefaultRelayState(string defaultRelayState) { DARABONBA_PTR_SET_VALUE(defaultRelayState_, defaultRelayState) };


    // idPEntityId Field Functions 
    bool hasIdPEntityId() const { return this->idPEntityId_ != nullptr;};
    void deleteIdPEntityId() { this->idPEntityId_ = nullptr;};
    inline string idPEntityId() const { DARABONBA_PTR_GET_DEFAULT(idPEntityId_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setIdPEntityId(string idPEntityId) { DARABONBA_PTR_SET_VALUE(idPEntityId_, idPEntityId) };


    // nameIdFormat Field Functions 
    bool hasNameIdFormat() const { return this->nameIdFormat_ != nullptr;};
    void deleteNameIdFormat() { this->nameIdFormat_ = nullptr;};
    inline string nameIdFormat() const { DARABONBA_PTR_GET_DEFAULT(nameIdFormat_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setNameIdFormat(string nameIdFormat) { DARABONBA_PTR_SET_VALUE(nameIdFormat_, nameIdFormat) };


    // nameIdValueExpression Field Functions 
    bool hasNameIdValueExpression() const { return this->nameIdValueExpression_ != nullptr;};
    void deleteNameIdValueExpression() { this->nameIdValueExpression_ = nullptr;};
    inline string nameIdValueExpression() const { DARABONBA_PTR_GET_DEFAULT(nameIdValueExpression_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setNameIdValueExpression(string nameIdValueExpression) { DARABONBA_PTR_SET_VALUE(nameIdValueExpression_, nameIdValueExpression) };


    // optionalRelayStates Field Functions 
    bool hasOptionalRelayStates() const { return this->optionalRelayStates_ != nullptr;};
    void deleteOptionalRelayStates() { this->optionalRelayStates_ = nullptr;};
    inline const vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates> & optionalRelayStates() const { DARABONBA_PTR_GET_CONST(optionalRelayStates_, vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates>) };
    inline vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates> optionalRelayStates() { DARABONBA_PTR_GET(optionalRelayStates_, vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates>) };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setOptionalRelayStates(const vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates> & optionalRelayStates) { DARABONBA_PTR_SET_VALUE(optionalRelayStates_, optionalRelayStates) };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setOptionalRelayStates(vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates> && optionalRelayStates) { DARABONBA_PTR_SET_RVALUE(optionalRelayStates_, optionalRelayStates) };


    // responseSigned Field Functions 
    bool hasResponseSigned() const { return this->responseSigned_ != nullptr;};
    void deleteResponseSigned() { this->responseSigned_ = nullptr;};
    inline bool responseSigned() const { DARABONBA_PTR_GET_DEFAULT(responseSigned_, false) };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setResponseSigned(bool responseSigned) { DARABONBA_PTR_SET_VALUE(responseSigned_, responseSigned) };


    // signatureAlgorithm Field Functions 
    bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
    void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
    inline string signatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


    // spEntityId Field Functions 
    bool hasSpEntityId() const { return this->spEntityId_ != nullptr;};
    void deleteSpEntityId() { this->spEntityId_ = nullptr;};
    inline string spEntityId() const { DARABONBA_PTR_GET_DEFAULT(spEntityId_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setSpEntityId(string spEntityId) { DARABONBA_PTR_SET_VALUE(spEntityId_, spEntityId) };


    // spSsoAcsUrl Field Functions 
    bool hasSpSsoAcsUrl() const { return this->spSsoAcsUrl_ != nullptr;};
    void deleteSpSsoAcsUrl() { this->spSsoAcsUrl_ = nullptr;};
    inline string spSsoAcsUrl() const { DARABONBA_PTR_GET_DEFAULT(spSsoAcsUrl_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfig& setSpSsoAcsUrl(string spSsoAcsUrl) { DARABONBA_PTR_SET_VALUE(spSsoAcsUrl_, spSsoAcsUrl) };


  protected:
    // Specifies whether to calculate the signature for the assertion. You cannot set the ResponseSigned and AssertionSigned parameters to false at the same time. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> assertionSigned_ = nullptr;
    // The additional user attributes in the SAML assertion.
    std::shared_ptr<vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements>> attributeStatements_ = nullptr;
    // The default value of the RelayState attribute. If the SSO request is initiated in EIAM, the RelayState attribute in the SAML response is set to this default value.
    std::shared_ptr<string> defaultRelayState_ = nullptr;
    // IdP entityId.
    std::shared_ptr<string> idPEntityId_ = nullptr;
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
    std::shared_ptr<string> nameIdFormat_ = nullptr;
    // The expression that is used to generate the value of NameID in the SAML assertion.
    std::shared_ptr<string> nameIdValueExpression_ = nullptr;
    // Optional relayStates
    std::shared_ptr<vector<Models::SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates>> optionalRelayStates_ = nullptr;
    // Specifies whether to calculate the signature for the response. You cannot set the ResponseSigned and AssertionSigned parameters to false at the same time. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> responseSigned_ = nullptr;
    // The algorithm that is used to calculate the signature for the SAML assertion.
    // 
    // Valid value:
    // 
    // *   RSA-SHA256: the Rivest-Shamir-Adleman (RSA)-Secure Hash Algorithm 256 (SHA-256) algorithm.
    std::shared_ptr<string> signatureAlgorithm_ = nullptr;
    // The entity ID of the application in SAML.
    std::shared_ptr<string> spEntityId_ = nullptr;
    // The Assertion Consumer Service (ACS) URL of the application in SAML.
    std::shared_ptr<string> spSsoAcsUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
