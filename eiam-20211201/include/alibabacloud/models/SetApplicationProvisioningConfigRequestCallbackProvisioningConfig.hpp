// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTCALLBACKPROVISIONINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUESTCALLBACKPROVISIONINGCONFIG_HPP_
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
  class SetApplicationProvisioningConfigRequestCallbackProvisioningConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_TO_JSON(EncryptRequired, encryptRequired_);
      DARABONBA_PTR_TO_JSON(ListenEventScopes, listenEventScopes_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
      DARABONBA_PTR_FROM_JSON(EncryptRequired, encryptRequired_);
      DARABONBA_PTR_FROM_JSON(ListenEventScopes, listenEventScopes_);
    };
    SetApplicationProvisioningConfigRequestCallbackProvisioningConfig() = default ;
    SetApplicationProvisioningConfigRequestCallbackProvisioningConfig(const SetApplicationProvisioningConfigRequestCallbackProvisioningConfig &) = default ;
    SetApplicationProvisioningConfigRequestCallbackProvisioningConfig(SetApplicationProvisioningConfigRequestCallbackProvisioningConfig &&) = default ;
    SetApplicationProvisioningConfigRequestCallbackProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationProvisioningConfigRequestCallbackProvisioningConfig() = default ;
    SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& operator=(const SetApplicationProvisioningConfigRequestCallbackProvisioningConfig &) = default ;
    SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& operator=(SetApplicationProvisioningConfigRequestCallbackProvisioningConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackUrl_ != nullptr
        && this->encryptKey_ != nullptr && this->encryptRequired_ != nullptr && this->listenEventScopes_ != nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // encryptKey Field Functions 
    bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
    void deleteEncryptKey() { this->encryptKey_ = nullptr;};
    inline string encryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
    inline SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


    // encryptRequired Field Functions 
    bool hasEncryptRequired() const { return this->encryptRequired_ != nullptr;};
    void deleteEncryptRequired() { this->encryptRequired_ = nullptr;};
    inline bool encryptRequired() const { DARABONBA_PTR_GET_DEFAULT(encryptRequired_, false) };
    inline SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& setEncryptRequired(bool encryptRequired) { DARABONBA_PTR_SET_VALUE(encryptRequired_, encryptRequired) };


    // listenEventScopes Field Functions 
    bool hasListenEventScopes() const { return this->listenEventScopes_ != nullptr;};
    void deleteListenEventScopes() { this->listenEventScopes_ = nullptr;};
    inline const vector<string> & listenEventScopes() const { DARABONBA_PTR_GET_CONST(listenEventScopes_, vector<string>) };
    inline vector<string> listenEventScopes() { DARABONBA_PTR_GET(listenEventScopes_, vector<string>) };
    inline SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& setListenEventScopes(const vector<string> & listenEventScopes) { DARABONBA_PTR_SET_VALUE(listenEventScopes_, listenEventScopes) };
    inline SetApplicationProvisioningConfigRequestCallbackProvisioningConfig& setListenEventScopes(vector<string> && listenEventScopes) { DARABONBA_PTR_SET_RVALUE(listenEventScopes_, listenEventScopes) };


  protected:
    // The URL that the application uses to receive IDaaS event callbacks.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The symmetric key for IDaaS event callbacks. The key is an AES-256 encryption key in the HEX format.
    std::shared_ptr<string> encryptKey_ = nullptr;
    // Specifies whether to encrypt IDaaS event callback messages. Valid values:
    // 
    // *   true: encrypt the messages.
    // *   false: transmit the messages in plaintext.
    std::shared_ptr<bool> encryptRequired_ = nullptr;
    // The list of types of IDaaS event callback messages that are supported by the listener.
    std::shared_ptr<vector<string>> listenEventScopes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
