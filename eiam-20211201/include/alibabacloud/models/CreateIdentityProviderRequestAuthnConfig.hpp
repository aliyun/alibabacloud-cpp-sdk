// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTAUTHNCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTAUTHNCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestAuthnConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestAuthnConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnStatus, authnStatus_);
      DARABONBA_PTR_TO_JSON(AutoUpdatePasswordStatus, autoUpdatePasswordStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestAuthnConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnStatus, authnStatus_);
      DARABONBA_PTR_FROM_JSON(AutoUpdatePasswordStatus, autoUpdatePasswordStatus_);
    };
    CreateIdentityProviderRequestAuthnConfig() = default ;
    CreateIdentityProviderRequestAuthnConfig(const CreateIdentityProviderRequestAuthnConfig &) = default ;
    CreateIdentityProviderRequestAuthnConfig(CreateIdentityProviderRequestAuthnConfig &&) = default ;
    CreateIdentityProviderRequestAuthnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestAuthnConfig() = default ;
    CreateIdentityProviderRequestAuthnConfig& operator=(const CreateIdentityProviderRequestAuthnConfig &) = default ;
    CreateIdentityProviderRequestAuthnConfig& operator=(CreateIdentityProviderRequestAuthnConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authnStatus_ == nullptr
        && return this->autoUpdatePasswordStatus_ == nullptr; };
    // authnStatus Field Functions 
    bool hasAuthnStatus() const { return this->authnStatus_ != nullptr;};
    void deleteAuthnStatus() { this->authnStatus_ = nullptr;};
    inline string authnStatus() const { DARABONBA_PTR_GET_DEFAULT(authnStatus_, "") };
    inline CreateIdentityProviderRequestAuthnConfig& setAuthnStatus(string authnStatus) { DARABONBA_PTR_SET_VALUE(authnStatus_, authnStatus) };


    // autoUpdatePasswordStatus Field Functions 
    bool hasAutoUpdatePasswordStatus() const { return this->autoUpdatePasswordStatus_ != nullptr;};
    void deleteAutoUpdatePasswordStatus() { this->autoUpdatePasswordStatus_ = nullptr;};
    inline string autoUpdatePasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(autoUpdatePasswordStatus_, "") };
    inline CreateIdentityProviderRequestAuthnConfig& setAutoUpdatePasswordStatus(string autoUpdatePasswordStatus) { DARABONBA_PTR_SET_VALUE(autoUpdatePasswordStatus_, autoUpdatePasswordStatus) };


  protected:
    // Whether the corresponding IdP supports authentication. Value range:
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> authnStatus_ = nullptr;
    // Whether automatic password update is supported. Value range:
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> autoUpdatePasswordStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
