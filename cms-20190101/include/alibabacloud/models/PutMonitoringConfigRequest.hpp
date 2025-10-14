// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMONITORINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMONITORINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMonitoringConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMonitoringConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(EnableInstallAgentNewECS, enableInstallAgentNewECS_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutMonitoringConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(EnableInstallAgentNewECS, enableInstallAgentNewECS_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutMonitoringConfigRequest() = default ;
    PutMonitoringConfigRequest(const PutMonitoringConfigRequest &) = default ;
    PutMonitoringConfigRequest(PutMonitoringConfigRequest &&) = default ;
    PutMonitoringConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMonitoringConfigRequest() = default ;
    PutMonitoringConfigRequest& operator=(const PutMonitoringConfigRequest &) = default ;
    PutMonitoringConfigRequest& operator=(PutMonitoringConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoInstall_ == nullptr
        && return this->enableInstallAgentNewECS_ == nullptr && return this->regionId_ == nullptr; };
    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline bool autoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
    inline PutMonitoringConfigRequest& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // enableInstallAgentNewECS Field Functions 
    bool hasEnableInstallAgentNewECS() const { return this->enableInstallAgentNewECS_ != nullptr;};
    void deleteEnableInstallAgentNewECS() { this->enableInstallAgentNewECS_ = nullptr;};
    inline bool enableInstallAgentNewECS() const { DARABONBA_PTR_GET_DEFAULT(enableInstallAgentNewECS_, false) };
    inline PutMonitoringConfigRequest& setEnableInstallAgentNewECS(bool enableInstallAgentNewECS) { DARABONBA_PTR_SET_VALUE(enableInstallAgentNewECS_, enableInstallAgentNewECS) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutMonitoringConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<bool> autoInstall_ = nullptr;
    // Specifies whether to automatically install the CloudMonitor agent on new ECS instances. Valid values:
    // 
    // *   true (default): The CloudMonitor agent is automatically installed on new ECS instances.
    // *   false: The CloudMonitor agent is not automatically installed on new ECS instances.
    std::shared_ptr<bool> enableInstallAgentNewECS_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
