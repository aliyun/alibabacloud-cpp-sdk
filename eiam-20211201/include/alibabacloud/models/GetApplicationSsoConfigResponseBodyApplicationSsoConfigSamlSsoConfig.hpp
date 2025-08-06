// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODYAPPLICATIONSSOCONFIGSAMLSSOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODYAPPLICATIONSSOCONFIGSAMLSSOCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements.hpp>
#include <alibabacloud/models/GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& obj) { 
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
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig() = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig(const GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig &) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig(GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig &&) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig() = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& operator=(const GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig &) = default ;
    GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& operator=(GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assertionSigned_ != nullptr
        && this->attributeStatements_ != nullptr && this->defaultRelayState_ != nullptr && this->idPEntityId_ != nullptr && this->nameIdFormat_ != nullptr && this->nameIdValueExpression_ != nullptr
        && this->optionalRelayStates_ != nullptr && this->responseSigned_ != nullptr && this->signatureAlgorithm_ != nullptr && this->spEntityId_ != nullptr && this->spSsoAcsUrl_ != nullptr; };
    // assertionSigned Field Functions 
    bool hasAssertionSigned() const { return this->assertionSigned_ != nullptr;};
    void deleteAssertionSigned() { this->assertionSigned_ = nullptr;};
    inline bool assertionSigned() const { DARABONBA_PTR_GET_DEFAULT(assertionSigned_, false) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setAssertionSigned(bool assertionSigned) { DARABONBA_PTR_SET_VALUE(assertionSigned_, assertionSigned) };


    // attributeStatements Field Functions 
    bool hasAttributeStatements() const { return this->attributeStatements_ != nullptr;};
    void deleteAttributeStatements() { this->attributeStatements_ = nullptr;};
    inline const vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements> & attributeStatements() const { DARABONBA_PTR_GET_CONST(attributeStatements_, vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements>) };
    inline vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements> attributeStatements() { DARABONBA_PTR_GET(attributeStatements_, vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements>) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setAttributeStatements(const vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements> & attributeStatements) { DARABONBA_PTR_SET_VALUE(attributeStatements_, attributeStatements) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setAttributeStatements(vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements> && attributeStatements) { DARABONBA_PTR_SET_RVALUE(attributeStatements_, attributeStatements) };


    // defaultRelayState Field Functions 
    bool hasDefaultRelayState() const { return this->defaultRelayState_ != nullptr;};
    void deleteDefaultRelayState() { this->defaultRelayState_ = nullptr;};
    inline string defaultRelayState() const { DARABONBA_PTR_GET_DEFAULT(defaultRelayState_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setDefaultRelayState(string defaultRelayState) { DARABONBA_PTR_SET_VALUE(defaultRelayState_, defaultRelayState) };


    // idPEntityId Field Functions 
    bool hasIdPEntityId() const { return this->idPEntityId_ != nullptr;};
    void deleteIdPEntityId() { this->idPEntityId_ = nullptr;};
    inline string idPEntityId() const { DARABONBA_PTR_GET_DEFAULT(idPEntityId_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setIdPEntityId(string idPEntityId) { DARABONBA_PTR_SET_VALUE(idPEntityId_, idPEntityId) };


    // nameIdFormat Field Functions 
    bool hasNameIdFormat() const { return this->nameIdFormat_ != nullptr;};
    void deleteNameIdFormat() { this->nameIdFormat_ = nullptr;};
    inline string nameIdFormat() const { DARABONBA_PTR_GET_DEFAULT(nameIdFormat_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setNameIdFormat(string nameIdFormat) { DARABONBA_PTR_SET_VALUE(nameIdFormat_, nameIdFormat) };


    // nameIdValueExpression Field Functions 
    bool hasNameIdValueExpression() const { return this->nameIdValueExpression_ != nullptr;};
    void deleteNameIdValueExpression() { this->nameIdValueExpression_ = nullptr;};
    inline string nameIdValueExpression() const { DARABONBA_PTR_GET_DEFAULT(nameIdValueExpression_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setNameIdValueExpression(string nameIdValueExpression) { DARABONBA_PTR_SET_VALUE(nameIdValueExpression_, nameIdValueExpression) };


    // optionalRelayStates Field Functions 
    bool hasOptionalRelayStates() const { return this->optionalRelayStates_ != nullptr;};
    void deleteOptionalRelayStates() { this->optionalRelayStates_ = nullptr;};
    inline const vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates> & optionalRelayStates() const { DARABONBA_PTR_GET_CONST(optionalRelayStates_, vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates>) };
    inline vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates> optionalRelayStates() { DARABONBA_PTR_GET(optionalRelayStates_, vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates>) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setOptionalRelayStates(const vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates> & optionalRelayStates) { DARABONBA_PTR_SET_VALUE(optionalRelayStates_, optionalRelayStates) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setOptionalRelayStates(vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates> && optionalRelayStates) { DARABONBA_PTR_SET_RVALUE(optionalRelayStates_, optionalRelayStates) };


    // responseSigned Field Functions 
    bool hasResponseSigned() const { return this->responseSigned_ != nullptr;};
    void deleteResponseSigned() { this->responseSigned_ = nullptr;};
    inline bool responseSigned() const { DARABONBA_PTR_GET_DEFAULT(responseSigned_, false) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setResponseSigned(bool responseSigned) { DARABONBA_PTR_SET_VALUE(responseSigned_, responseSigned) };


    // signatureAlgorithm Field Functions 
    bool hasSignatureAlgorithm() const { return this->signatureAlgorithm_ != nullptr;};
    void deleteSignatureAlgorithm() { this->signatureAlgorithm_ = nullptr;};
    inline string signatureAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signatureAlgorithm_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setSignatureAlgorithm(string signatureAlgorithm) { DARABONBA_PTR_SET_VALUE(signatureAlgorithm_, signatureAlgorithm) };


    // spEntityId Field Functions 
    bool hasSpEntityId() const { return this->spEntityId_ != nullptr;};
    void deleteSpEntityId() { this->spEntityId_ = nullptr;};
    inline string spEntityId() const { DARABONBA_PTR_GET_DEFAULT(spEntityId_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setSpEntityId(string spEntityId) { DARABONBA_PTR_SET_VALUE(spEntityId_, spEntityId) };


    // spSsoAcsUrl Field Functions 
    bool hasSpSsoAcsUrl() const { return this->spSsoAcsUrl_ != nullptr;};
    void deleteSpSsoAcsUrl() { this->spSsoAcsUrl_ = nullptr;};
    inline string spSsoAcsUrl() const { DARABONBA_PTR_GET_DEFAULT(spSsoAcsUrl_, "") };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfig& setSpSsoAcsUrl(string spSsoAcsUrl) { DARABONBA_PTR_SET_VALUE(spSsoAcsUrl_, spSsoAcsUrl) };


  protected:
    // Whether the Assertion needs a signature. ResponseSigned and AssertionSigned cannot be false at the same time.
    // 
    // true: signature is required.
    // false: signature is not required.
    std::shared_ptr<bool> assertionSigned_ = nullptr;
    // The additional user attributes in the SAML assertion.
    std::shared_ptr<vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigAttributeStatements>> attributeStatements_ = nullptr;
    // The default value of the RelayState attribute. If the SSO request is initiated in EIAM, the RelayState attribute in the SAML response is set to this default value.
    std::shared_ptr<string> defaultRelayState_ = nullptr;
    // The custom issuer ID.
    std::shared_ptr<string> idPEntityId_ = nullptr;
    // The Format attribute of the NameID element in the SAML assertion. Valid values:
    // 
    // *   urn:oasis:names:tc:SAML:1.1:nameid-format:unspecified: No format is specified. How to resolve the NameID element depends on the application.
    // *   urn:oasis:names:tc:SAML:1.1:nameid-format:emailAddress: The NameID element must be an email address.
    // *   urn:oasis:names:tc:SAML:2.0:nameid-format:persistent: The NameID element must be persistent.
    // *   urn:oasis:names:tc:SAML:2.0:nameid-format:transient: The NameID element must be transient.
    std::shared_ptr<string> nameIdFormat_ = nullptr;
    // The expression that is used to generate the value of NameID in the SAML assertion.
    std::shared_ptr<string> nameIdValueExpression_ = nullptr;
    // Optional RelayState. The user will see the display names of multiple optional redirect addresses in the application card of the application portal. After the user clicks and completes SSO, they will automatically jump to the corresponding address. This field can only be filled in after the default redirect address is filled in.
    std::shared_ptr<vector<Models::GetApplicationSsoConfigResponseBodyApplicationSsoConfigSamlSsoConfigOptionalRelayStates>> optionalRelayStates_ = nullptr;
    // Whether the response needs to be signed. ResponseSigned and AssertionSigned cannot be false at the same time.
    // 
    // true: signature is required.
    // false: signature is not required.
    std::shared_ptr<bool> responseSigned_ = nullptr;
    // The algorithm that is used to calculate the signature for the SAML assertion.
    std::shared_ptr<string> signatureAlgorithm_ = nullptr;
    // The entity ID of the application in SAML. The application assumes the role of service provider.
    std::shared_ptr<string> spEntityId_ = nullptr;
    // The Assertion Consumer Service (ACS) URL of the application in SAML. The application assumes the role of service provider.
    std::shared_ptr<string> spSsoAcsUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
