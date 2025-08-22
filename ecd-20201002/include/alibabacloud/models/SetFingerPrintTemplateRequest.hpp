// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFINGERPRINTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETFINGERPRINTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class SetFingerPrintTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetFingerPrintTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptedFingerPrintTemplate, encryptedFingerPrintTemplate_);
      DARABONBA_PTR_TO_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_TO_JSON(FingerPrintTemplate, fingerPrintTemplate_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetFingerPrintTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptedFingerPrintTemplate, encryptedFingerPrintTemplate_);
      DARABONBA_PTR_FROM_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_FROM_JSON(FingerPrintTemplate, fingerPrintTemplate_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    SetFingerPrintTemplateRequest() = default ;
    SetFingerPrintTemplateRequest(const SetFingerPrintTemplateRequest &) = default ;
    SetFingerPrintTemplateRequest(SetFingerPrintTemplateRequest &&) = default ;
    SetFingerPrintTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetFingerPrintTemplateRequest() = default ;
    SetFingerPrintTemplateRequest& operator=(const SetFingerPrintTemplateRequest &) = default ;
    SetFingerPrintTemplateRequest& operator=(SetFingerPrintTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->clientToken_ != nullptr && this->description_ != nullptr && this->encryptedFingerPrintTemplate_ != nullptr && this->encryptedKey_ != nullptr && this->fingerPrintTemplate_ != nullptr
        && this->loginToken_ != nullptr && this->password_ != nullptr && this->regionId_ != nullptr && this->sessionId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline SetFingerPrintTemplateRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetFingerPrintTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetFingerPrintTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptedFingerPrintTemplate Field Functions 
    bool hasEncryptedFingerPrintTemplate() const { return this->encryptedFingerPrintTemplate_ != nullptr;};
    void deleteEncryptedFingerPrintTemplate() { this->encryptedFingerPrintTemplate_ = nullptr;};
    inline string encryptedFingerPrintTemplate() const { DARABONBA_PTR_GET_DEFAULT(encryptedFingerPrintTemplate_, "") };
    inline SetFingerPrintTemplateRequest& setEncryptedFingerPrintTemplate(string encryptedFingerPrintTemplate) { DARABONBA_PTR_SET_VALUE(encryptedFingerPrintTemplate_, encryptedFingerPrintTemplate) };


    // encryptedKey Field Functions 
    bool hasEncryptedKey() const { return this->encryptedKey_ != nullptr;};
    void deleteEncryptedKey() { this->encryptedKey_ = nullptr;};
    inline string encryptedKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedKey_, "") };
    inline SetFingerPrintTemplateRequest& setEncryptedKey(string encryptedKey) { DARABONBA_PTR_SET_VALUE(encryptedKey_, encryptedKey) };


    // fingerPrintTemplate Field Functions 
    bool hasFingerPrintTemplate() const { return this->fingerPrintTemplate_ != nullptr;};
    void deleteFingerPrintTemplate() { this->fingerPrintTemplate_ = nullptr;};
    inline string fingerPrintTemplate() const { DARABONBA_PTR_GET_DEFAULT(fingerPrintTemplate_, "") };
    inline SetFingerPrintTemplateRequest& setFingerPrintTemplate(string fingerPrintTemplate) { DARABONBA_PTR_SET_VALUE(fingerPrintTemplate_, fingerPrintTemplate) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline SetFingerPrintTemplateRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SetFingerPrintTemplateRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetFingerPrintTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SetFingerPrintTemplateRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> encryptedFingerPrintTemplate_ = nullptr;
    std::shared_ptr<string> encryptedKey_ = nullptr;
    std::shared_ptr<string> fingerPrintTemplate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> loginToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
