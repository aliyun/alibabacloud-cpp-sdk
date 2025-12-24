// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTERMINALSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTERMINALSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTerminalSettingsRequestPasswordlessLoginConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20251111
{
namespace Models
{
  class ModifyTerminalSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTerminalSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordlessLoginConfig, passwordlessLoginConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTerminalSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordlessLoginConfig, passwordlessLoginConfig_);
    };
    ModifyTerminalSettingsRequest() = default ;
    ModifyTerminalSettingsRequest(const ModifyTerminalSettingsRequest &) = default ;
    ModifyTerminalSettingsRequest(ModifyTerminalSettingsRequest &&) = default ;
    ModifyTerminalSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTerminalSettingsRequest() = default ;
    ModifyTerminalSettingsRequest& operator=(const ModifyTerminalSettingsRequest &) = default ;
    ModifyTerminalSettingsRequest& operator=(ModifyTerminalSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordlessLoginConfig_ == nullptr; };
    // passwordlessLoginConfig Field Functions 
    bool hasPasswordlessLoginConfig() const { return this->passwordlessLoginConfig_ != nullptr;};
    void deletePasswordlessLoginConfig() { this->passwordlessLoginConfig_ = nullptr;};
    inline const ModifyTerminalSettingsRequestPasswordlessLoginConfig & passwordlessLoginConfig() const { DARABONBA_PTR_GET_CONST(passwordlessLoginConfig_, ModifyTerminalSettingsRequestPasswordlessLoginConfig) };
    inline ModifyTerminalSettingsRequestPasswordlessLoginConfig passwordlessLoginConfig() { DARABONBA_PTR_GET(passwordlessLoginConfig_, ModifyTerminalSettingsRequestPasswordlessLoginConfig) };
    inline ModifyTerminalSettingsRequest& setPasswordlessLoginConfig(const ModifyTerminalSettingsRequestPasswordlessLoginConfig & passwordlessLoginConfig) { DARABONBA_PTR_SET_VALUE(passwordlessLoginConfig_, passwordlessLoginConfig) };
    inline ModifyTerminalSettingsRequest& setPasswordlessLoginConfig(ModifyTerminalSettingsRequestPasswordlessLoginConfig && passwordlessLoginConfig) { DARABONBA_PTR_SET_RVALUE(passwordlessLoginConfig_, passwordlessLoginConfig) };


  protected:
    // 免密登录配置
    // 
    // This parameter is required.
    std::shared_ptr<ModifyTerminalSettingsRequestPasswordlessLoginConfig> passwordlessLoginConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20251111
#endif
