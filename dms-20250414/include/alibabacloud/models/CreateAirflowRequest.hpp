// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIRFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIRFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAirflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAirflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_TO_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_TO_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAirflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowName, airflowName_);
      DARABONBA_PTR_FROM_JSON(AppSpec, appSpec_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DagsDir, dagsDir_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(PluginsDir, pluginsDir_);
      DARABONBA_PTR_FROM_JSON(RequirementFile, requirementFile_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StartupFile, startupFile_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkerServerlessReplicas, workerServerlessReplicas_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateAirflowRequest() = default ;
    CreateAirflowRequest(const CreateAirflowRequest &) = default ;
    CreateAirflowRequest(CreateAirflowRequest &&) = default ;
    CreateAirflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAirflowRequest() = default ;
    CreateAirflowRequest& operator=(const CreateAirflowRequest &) = default ;
    CreateAirflowRequest& operator=(CreateAirflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowName_ == nullptr
        && return this->appSpec_ == nullptr && return this->clientToken_ == nullptr && return this->dagsDir_ == nullptr && return this->description_ == nullptr && return this->ossBucketName_ == nullptr
        && return this->ossPath_ == nullptr && return this->pluginsDir_ == nullptr && return this->requirementFile_ == nullptr && return this->securityGroupId_ == nullptr && return this->startupFile_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->workerServerlessReplicas_ == nullptr && return this->workspaceId_ == nullptr && return this->zoneId_ == nullptr; };
    // airflowName Field Functions 
    bool hasAirflowName() const { return this->airflowName_ != nullptr;};
    void deleteAirflowName() { this->airflowName_ = nullptr;};
    inline string airflowName() const { DARABONBA_PTR_GET_DEFAULT(airflowName_, "") };
    inline CreateAirflowRequest& setAirflowName(string airflowName) { DARABONBA_PTR_SET_VALUE(airflowName_, airflowName) };


    // appSpec Field Functions 
    bool hasAppSpec() const { return this->appSpec_ != nullptr;};
    void deleteAppSpec() { this->appSpec_ = nullptr;};
    inline string appSpec() const { DARABONBA_PTR_GET_DEFAULT(appSpec_, "") };
    inline CreateAirflowRequest& setAppSpec(string appSpec) { DARABONBA_PTR_SET_VALUE(appSpec_, appSpec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAirflowRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dagsDir Field Functions 
    bool hasDagsDir() const { return this->dagsDir_ != nullptr;};
    void deleteDagsDir() { this->dagsDir_ = nullptr;};
    inline string dagsDir() const { DARABONBA_PTR_GET_DEFAULT(dagsDir_, "") };
    inline CreateAirflowRequest& setDagsDir(string dagsDir) { DARABONBA_PTR_SET_VALUE(dagsDir_, dagsDir) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAirflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateAirflowRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline CreateAirflowRequest& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // pluginsDir Field Functions 
    bool hasPluginsDir() const { return this->pluginsDir_ != nullptr;};
    void deletePluginsDir() { this->pluginsDir_ = nullptr;};
    inline string pluginsDir() const { DARABONBA_PTR_GET_DEFAULT(pluginsDir_, "") };
    inline CreateAirflowRequest& setPluginsDir(string pluginsDir) { DARABONBA_PTR_SET_VALUE(pluginsDir_, pluginsDir) };


    // requirementFile Field Functions 
    bool hasRequirementFile() const { return this->requirementFile_ != nullptr;};
    void deleteRequirementFile() { this->requirementFile_ = nullptr;};
    inline string requirementFile() const { DARABONBA_PTR_GET_DEFAULT(requirementFile_, "") };
    inline CreateAirflowRequest& setRequirementFile(string requirementFile) { DARABONBA_PTR_SET_VALUE(requirementFile_, requirementFile) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateAirflowRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startupFile Field Functions 
    bool hasStartupFile() const { return this->startupFile_ != nullptr;};
    void deleteStartupFile() { this->startupFile_ = nullptr;};
    inline string startupFile() const { DARABONBA_PTR_GET_DEFAULT(startupFile_, "") };
    inline CreateAirflowRequest& setStartupFile(string startupFile) { DARABONBA_PTR_SET_VALUE(startupFile_, startupFile) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAirflowRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateAirflowRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workerServerlessReplicas Field Functions 
    bool hasWorkerServerlessReplicas() const { return this->workerServerlessReplicas_ != nullptr;};
    void deleteWorkerServerlessReplicas() { this->workerServerlessReplicas_ = nullptr;};
    inline int32_t workerServerlessReplicas() const { DARABONBA_PTR_GET_DEFAULT(workerServerlessReplicas_, 0) };
    inline CreateAirflowRequest& setWorkerServerlessReplicas(int32_t workerServerlessReplicas) { DARABONBA_PTR_SET_VALUE(workerServerlessReplicas_, workerServerlessReplicas) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateAirflowRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateAirflowRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> airflowName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appSpec_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> dagsDir_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<string> pluginsDir_ = nullptr;
    std::shared_ptr<string> requirementFile_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> startupFile_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> workerServerlessReplicas_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
