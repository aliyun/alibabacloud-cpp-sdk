// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTERMINALSETTINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTERMINALSETTINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20251111
{
namespace Models
{
  class ModifyTerminalSettingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTerminalSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordlessLoginConfig, passwordlessLoginConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTerminalSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordlessLoginConfig, passwordlessLoginConfigShrink_);
    };
    ModifyTerminalSettingsShrinkRequest() = default ;
    ModifyTerminalSettingsShrinkRequest(const ModifyTerminalSettingsShrinkRequest &) = default ;
    ModifyTerminalSettingsShrinkRequest(ModifyTerminalSettingsShrinkRequest &&) = default ;
    ModifyTerminalSettingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTerminalSettingsShrinkRequest() = default ;
    ModifyTerminalSettingsShrinkRequest& operator=(const ModifyTerminalSettingsShrinkRequest &) = default ;
    ModifyTerminalSettingsShrinkRequest& operator=(ModifyTerminalSettingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordlessLoginConfigShrink_ == nullptr; };
    // passwordlessLoginConfigShrink Field Functions 
    bool hasPasswordlessLoginConfigShrink() const { return this->passwordlessLoginConfigShrink_ != nullptr;};
    void deletePasswordlessLoginConfigShrink() { this->passwordlessLoginConfigShrink_ = nullptr;};
    inline string passwordlessLoginConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(passwordlessLoginConfigShrink_, "") };
    inline ModifyTerminalSettingsShrinkRequest& setPasswordlessLoginConfigShrink(string passwordlessLoginConfigShrink) { DARABONBA_PTR_SET_VALUE(passwordlessLoginConfigShrink_, passwordlessLoginConfigShrink) };


  protected:
    // 免密登录配置
    // 
    // This parameter is required.
    std::shared_ptr<string> passwordlessLoginConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20251111
#endif
