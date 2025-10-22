// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIRFLOWRESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIRFLOWRESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateAirflowResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAirflowResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CustomAirflowCfg, customAirflowCfg_);
      DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_TO_JSON(DeployErrorMsg, deployErrorMsg_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_TO_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_TO_JSON(Requirements, requirements_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAirflowResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CustomAirflowCfg, customAirflowCfg_);
      DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_FROM_JSON(DeployErrorMsg, deployErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_FROM_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_FROM_JSON(Requirements, requirements_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateAirflowResponseBodyRoot() = default ;
    UpdateAirflowResponseBodyRoot(const UpdateAirflowResponseBodyRoot &) = default ;
    UpdateAirflowResponseBodyRoot(UpdateAirflowResponseBodyRoot &&) = default ;
    UpdateAirflowResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAirflowResponseBodyRoot() = default ;
    UpdateAirflowResponseBodyRoot& operator=(const UpdateAirflowResponseBodyRoot &) = default ;
    UpdateAirflowResponseBodyRoot& operator=(UpdateAirflowResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowName_ == nullptr
        && return this->appSpec_ == nullptr && return this->appType_ == nullptr && return this->customAirflowCfg_ == nullptr && return this->dagsDir_ == nullptr && return this->deployErrorMsg_ == nullptr
        && return this->description_ == nullptr && return this->environments_ == nullptr && return this->gmtCreated_ == nullptr && return this->ossBucketName_ == nullptr && return this->ossPath_ == nullptr
        && return this->pluginsDir_ == nullptr && return this->requirementFile_ == nullptr && return this->requirements_ == nullptr && return this->securityGroupId_ == nullptr && return this->startupFile_ == nullptr
        && return this->status_ == nullptr && return this->uuid_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->workerServerlessReplicas_ == nullptr
        && return this->workspaceId_ == nullptr && return this->zoneId_ == nullptr; };
    // airflowName Field Functions 
    bool hasAirflowName() const { return this->airflowName_ != nullptr;};
    void deleteAirflowName() { this->airflowName_ = nullptr;};
    inline string airflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
    inline UpdateAirflowResponseBodyRoot& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


    // appSpec Field Functions 
    bool hasAppSpec() const { return this->appSpec_ != nullptr;};
    void deleteAppSpec() { this->appSpec_ = nullptr;};
    inline string appSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
    inline UpdateAirflowResponseBodyRoot& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline UpdateAirflowResponseBodyRoot& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // customAirflowCfg Field Functions 
    bool hasCustomAirflowCfg() const { return this->customAirflowCfg_ != nullptr;};
    void deleteCustomAirflowCfg() { this->customAirflowCfg_ = nullptr;};
    inline const vector<string> & customAirflowCfg() const { DARABONBA_PTR_GET_CONST(customAirflowCfg_, vector<string>) };
    inline vector<string> customAirflowCfg() { DARABONBA_PTR_GET(customAirflowCfg_, vector<string>) };
    inline UpdateAirflowResponseBodyRoot& setCustomAirflowCfg(const vector<string> & customAirflowCfg) { DARABONBA_PTR_SET_VALUE(customAirflowCfg_, customAirflowCfg) };
    inline UpdateAirflowResponseBodyRoot& setCustomAirflowCfg(vector<string> && customAirflowCfg) { DARABONBA_PTR_SET_RVALUE(customAirflowCfg_, customAirflowCfg) };


    // dagsDir Field Functions 
    bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
    void deleteDagsDir() { this->dagsDir_ = nullptr;};
    inline string dagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
    inline UpdateAirflowResponseBodyRoot& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


    // deployErrorMsg Field Functions 
    bool hasDeployErrorMsg() const { return this->deployErrorMsg_ != nullptr;};
    void deleteDeployErrorMsg() { this->deployErrorMsg_ = nullptr;};
    inline string deployErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(deployErrorMsg_, "") };
    inline UpdateAirflowResponseBodyRoot& setDeployErrorMsg(string deployErrorMsg) { DARABONBA_PTR_SET_VALUE(deployErrorMsg_, deployErrorMsg) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAirflowResponseBodyRoot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline string environments() const { DARABONBA_PTR_GET_DEFAULT(environments_, "") };
    inline UpdateAirflowResponseBodyRoot& setEnvironments(string environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline UpdateAirflowResponseBodyRoot& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline UpdateAirflowResponseBodyRoot& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline UpdateAirflowResponseBodyRoot& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // pluginsDir Field Functions 
    bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
    void deletePluginsDir() { this->pluginsDir_ = nullptr;};
    inline string pluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
    inline UpdateAirflowResponseBodyRoot& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


    // requirementFile Field Functions 
    bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
    void deleteRequirementFile() { this->requirementFile_ = nullptr;};
    inline string requirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
    inline UpdateAirflowResponseBodyRoot& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


    // requirements Field Functions 
    bool hasRequirements() const { return this->requirements_ != nullptr;};
    void deleteRequirements() { this->requirements_ = nullptr;};
    inline string requirements() const { DARABONBA_PTR_GET_DEFAULT(requirements_, "") };
    inline UpdateAirflowResponseBodyRoot& setRequirements(string requirements) { DARABONBA_PTR_SET_VALUE(requirements_, requirements) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateAirflowResponseBodyRoot& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startupFile Field Functions 
    bool hasStartupFile() const { return this->startupFile_ != nullptr;};
    void deleteStartupFile() { this->startupFile_ = nullptr;};
    inline string startupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
    inline UpdateAirflowResponseBodyRoot& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAirflowResponseBodyRoot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateAirflowResponseBodyRoot& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateAirflowResponseBodyRoot& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateAirflowResponseBodyRoot& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workerServerlessReplicas Field Functions 
    bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
    void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
    inline int32_t workerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
    inline UpdateAirflowResponseBodyRoot& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateAirflowResponseBodyRoot& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateAirflowResponseBodyRoot& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> airflowName_ = nullptr;
    // SMALL。
    std::shared_ptr<string> appSpec_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<vector<string>> customAirflowCfg_ = nullptr;
    std::shared_ptr<string> dagsDir_ = nullptr;
    std::shared_ptr<string> deployErrorMsg_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> environments_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<string> pluginsDir_ = nullptr;
    std::shared_ptr<string> requirementFile_ = nullptr;
    std::shared_ptr<string> requirements_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> startupFile_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<int32_t> workerServerlessReplicas_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
