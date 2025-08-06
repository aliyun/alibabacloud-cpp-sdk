// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTSLSDELIVERYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTSLSDELIVERYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCloudAssistantSettingsRequestSlsDeliveryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudAssistantSettingsRequestSlsDeliveryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudAssistantSettingsRequestSlsDeliveryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ModifyCloudAssistantSettingsRequestSlsDeliveryConfig() = default ;
    ModifyCloudAssistantSettingsRequestSlsDeliveryConfig(const ModifyCloudAssistantSettingsRequestSlsDeliveryConfig &) = default ;
    ModifyCloudAssistantSettingsRequestSlsDeliveryConfig(ModifyCloudAssistantSettingsRequestSlsDeliveryConfig &&) = default ;
    ModifyCloudAssistantSettingsRequestSlsDeliveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudAssistantSettingsRequestSlsDeliveryConfig() = default ;
    ModifyCloudAssistantSettingsRequestSlsDeliveryConfig& operator=(const ModifyCloudAssistantSettingsRequestSlsDeliveryConfig &) = default ;
    ModifyCloudAssistantSettingsRequestSlsDeliveryConfig& operator=(ModifyCloudAssistantSettingsRequestSlsDeliveryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->logstoreName_ != nullptr && this->projectName_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyCloudAssistantSettingsRequestSlsDeliveryConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string logstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline ModifyCloudAssistantSettingsRequestSlsDeliveryConfig& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ModifyCloudAssistantSettingsRequestSlsDeliveryConfig& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // Specifies whether to deliver records to Simple Log Service. Default value: false.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The name of the Logstore.
    std::shared_ptr<string> logstoreName_ = nullptr;
    // The name of the Simple Log Service project.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
