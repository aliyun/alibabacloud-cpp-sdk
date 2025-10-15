// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTAUTOUPDATEUSERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTAUTOUPDATEUSERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestAutoUpdateUserConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestAutoUpdateUserConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUpdateUserStatus, autoUpdateUserStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestAutoUpdateUserConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUpdateUserStatus, autoUpdateUserStatus_);
    };
    CreateIdentityProviderRequestAutoUpdateUserConfig() = default ;
    CreateIdentityProviderRequestAutoUpdateUserConfig(const CreateIdentityProviderRequestAutoUpdateUserConfig &) = default ;
    CreateIdentityProviderRequestAutoUpdateUserConfig(CreateIdentityProviderRequestAutoUpdateUserConfig &&) = default ;
    CreateIdentityProviderRequestAutoUpdateUserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestAutoUpdateUserConfig() = default ;
    CreateIdentityProviderRequestAutoUpdateUserConfig& operator=(const CreateIdentityProviderRequestAutoUpdateUserConfig &) = default ;
    CreateIdentityProviderRequestAutoUpdateUserConfig& operator=(CreateIdentityProviderRequestAutoUpdateUserConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpdateUserStatus_ == nullptr; };
    // autoUpdateUserStatus Field Functions 
    bool hasAutoUpdateUserStatus() const { return this->autoUpdateUserStatus_ != nullptr;};
    void deleteAutoUpdateUserStatus() { this->autoUpdateUserStatus_ = nullptr;};
    inline string autoUpdateUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoUpdateUserStatus_, "") };
    inline CreateIdentityProviderRequestAutoUpdateUserConfig& setAutoUpdateUserStatus(string autoUpdateUserStatus) { DARABONBA_PTR_SET_VALUE(autoUpdateUserStatus_, autoUpdateUserStatus) };


  protected:
    // Whether auto-updating of accounts is enabled. Possible values:
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> autoUpdateUserStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
