// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTSESSIONMANAGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTSESSIONMANAGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCloudAssistantSettingsRequestSessionManagerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudAssistantSettingsRequestSessionManagerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SessionManagerEnabled, sessionManagerEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudAssistantSettingsRequestSessionManagerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionManagerEnabled, sessionManagerEnabled_);
    };
    ModifyCloudAssistantSettingsRequestSessionManagerConfig() = default ;
    ModifyCloudAssistantSettingsRequestSessionManagerConfig(const ModifyCloudAssistantSettingsRequestSessionManagerConfig &) = default ;
    ModifyCloudAssistantSettingsRequestSessionManagerConfig(ModifyCloudAssistantSettingsRequestSessionManagerConfig &&) = default ;
    ModifyCloudAssistantSettingsRequestSessionManagerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudAssistantSettingsRequestSessionManagerConfig() = default ;
    ModifyCloudAssistantSettingsRequestSessionManagerConfig& operator=(const ModifyCloudAssistantSettingsRequestSessionManagerConfig &) = default ;
    ModifyCloudAssistantSettingsRequestSessionManagerConfig& operator=(ModifyCloudAssistantSettingsRequestSessionManagerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionManagerEnabled_ == nullptr; };
    // sessionManagerEnabled Field Functions 
    bool hasSessionManagerEnabled() const { return this->sessionManagerEnabled_ != nullptr;};
    void deleteSessionManagerEnabled() { this->sessionManagerEnabled_ = nullptr;};
    inline bool sessionManagerEnabled() const { DARABONBA_PTR_GET_DEFAULT(sessionManagerEnabled_, false) };
    inline ModifyCloudAssistantSettingsRequestSessionManagerConfig& setSessionManagerEnabled(bool sessionManagerEnabled) { DARABONBA_PTR_SET_VALUE(sessionManagerEnabled_, sessionManagerEnabled) };


  protected:
    // Specify whether to enable Cloud Assistant Session Manager. Valid values:
    // 
    // *   true: Enables the feature.
    // *   false: Disables the feature.
    // 
    // Notes:
    // 
    // *   The feature applies to all regions.
    std::shared_ptr<bool> sessionManagerEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
