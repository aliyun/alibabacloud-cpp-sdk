// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLMONITORINGAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLMONITORINGAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class InstallMonitoringAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallMonitoringAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallMonitoringAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InstallMonitoringAgentRequest() = default ;
    InstallMonitoringAgentRequest(const InstallMonitoringAgentRequest &) = default ;
    InstallMonitoringAgentRequest(InstallMonitoringAgentRequest &&) = default ;
    InstallMonitoringAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallMonitoringAgentRequest() = default ;
    InstallMonitoringAgentRequest& operator=(const InstallMonitoringAgentRequest &) = default ;
    InstallMonitoringAgentRequest& operator=(InstallMonitoringAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->force_ == nullptr && this->installCommand_ == nullptr && this->instanceIds_ == nullptr && this->regionId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline InstallMonitoringAgentRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline InstallMonitoringAgentRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // installCommand Field Functions 
    bool hasInstallCommand() const { return this->installCommand_ != nullptr;};
    void deleteInstallCommand() { this->installCommand_ = nullptr;};
    inline string getInstallCommand() const { DARABONBA_PTR_GET_DEFAULT(installCommand_, "") };
    inline InstallMonitoringAgentRequest& setInstallCommand(string installCommand) { DARABONBA_PTR_SET_VALUE(installCommand_, installCommand) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline InstallMonitoringAgentRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline InstallMonitoringAgentRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InstallMonitoringAgentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to perform a dry run on the request. The dry run includes checks on permissions and instance status. Valid values:
    // 
    // - **false** (default): Sends a normal request. After the request passes the check, the name and description of the route table are directly modified.
    // - **true**: Sends a dry run request. Only checks are performed, and the name and description of the route table are not modified. Check items include whether required parameters are specified and the request format. If the check fails, an error is returned. If the check succeeds, the DryRunOperation error code is returned.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcibly install the CloudMonitor agent. Valid values:
    // - true (default): Forcibly installs the agent.
    // - false: Does not forcibly install the agent.
    shared_ptr<bool> force_ {};
    // Installs the CloudMonitor agent on all Alibaba Cloud hosts within the current Alibaba Cloud account. Valid values:
    // 
    // - onlyInstallNotHasAgent: Installs the latest version of the agent only on Alibaba Cloud hosts on which the CloudMonitor agent is not installed.
    // 
    // - onlyUpgradeAgent: Upgrades the agent only on Alibaba Cloud hosts on which a non-latest version of the CloudMonitor agent is installed.
    // 
    // - installAndUpgrade: Installs the latest version of the agent on Alibaba Cloud hosts on which the CloudMonitor agent is not installed, and upgrades the agent on Alibaba Cloud hosts on which a non-latest version of the CloudMonitor agent is installed.
    // 
    // > If you specify this parameter, the InstanceIds parameter becomes invalid.
    shared_ptr<string> installCommand_ {};
    // The ID of the Alibaba Cloud host.
    // 
    // Valid values of N: 1 to 10.
    // 
    // > You must specify either InstallCommand or InstanceIds.
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
