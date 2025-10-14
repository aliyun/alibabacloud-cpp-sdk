// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestAffinity.hpp>
#include <alibabacloud/models/CreateInstanceRequestAssignNodeSpec.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestCloudDisks.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/CreateInstanceRequestDatasets.hpp>
#include <alibabacloud/models/DynamicMount.hpp>
#include <map>
#include <alibabacloud/models/CreateInstanceRequestLabels.hpp>
#include <alibabacloud/models/CreateInstanceRequestRequestedResource.hpp>
#include <alibabacloud/models/CreateInstanceRequestSpotSpec.hpp>
#include <alibabacloud/models/CreateInstanceRequestTag.hpp>
#include <alibabacloud/models/CreateInstanceRequestUserCommand.hpp>
#include <alibabacloud/models/CreateInstanceRequestUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceSource, workspaceSource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceSource, workspaceSource_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->affinity_ == nullptr && return this->assignNodeSpec_ == nullptr && return this->cloudDisks_ == nullptr && return this->credentialConfig_ == nullptr && return this->datasets_ == nullptr
        && return this->driver_ == nullptr && return this->dynamicMount_ == nullptr && return this->ecsSpec_ == nullptr && return this->environmentVariables_ == nullptr && return this->imageAuth_ == nullptr
        && return this->imageId_ == nullptr && return this->imageUrl_ == nullptr && return this->instanceName_ == nullptr && return this->labels_ == nullptr && return this->oversoldType_ == nullptr
        && return this->priority_ == nullptr && return this->requestedResource_ == nullptr && return this->resourceId_ == nullptr && return this->spotSpec_ == nullptr && return this->tag_ == nullptr
        && return this->userCommand_ == nullptr && return this->userId_ == nullptr && return this->userVpc_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceSource_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateInstanceRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline const CreateInstanceRequestAffinity & affinity() const { DARABONBA_PTR_GET_CONST(affinity_, CreateInstanceRequestAffinity) };
    inline CreateInstanceRequestAffinity affinity() { DARABONBA_PTR_GET(affinity_, CreateInstanceRequestAffinity) };
    inline CreateInstanceRequest& setAffinity(const CreateInstanceRequestAffinity & affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };
    inline CreateInstanceRequest& setAffinity(CreateInstanceRequestAffinity && affinity) { DARABONBA_PTR_SET_RVALUE(affinity_, affinity) };


    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const CreateInstanceRequestAssignNodeSpec & assignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, CreateInstanceRequestAssignNodeSpec) };
    inline CreateInstanceRequestAssignNodeSpec assignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, CreateInstanceRequestAssignNodeSpec) };
    inline CreateInstanceRequest& setAssignNodeSpec(const CreateInstanceRequestAssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline CreateInstanceRequest& setAssignNodeSpec(CreateInstanceRequestAssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // cloudDisks Field Functions 
    bool hasCloudDisks() const { return this->cloudDisks_ != nullptr;};
    void deleteCloudDisks() { this->cloudDisks_ = nullptr;};
    inline const vector<CreateInstanceRequestCloudDisks> & cloudDisks() const { DARABONBA_PTR_GET_CONST(cloudDisks_, vector<CreateInstanceRequestCloudDisks>) };
    inline vector<CreateInstanceRequestCloudDisks> cloudDisks() { DARABONBA_PTR_GET(cloudDisks_, vector<CreateInstanceRequestCloudDisks>) };
    inline CreateInstanceRequest& setCloudDisks(const vector<CreateInstanceRequestCloudDisks> & cloudDisks) { DARABONBA_PTR_SET_VALUE(cloudDisks_, cloudDisks) };
    inline CreateInstanceRequest& setCloudDisks(vector<CreateInstanceRequestCloudDisks> && cloudDisks) { DARABONBA_PTR_SET_RVALUE(cloudDisks_, cloudDisks) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateInstanceRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateInstanceRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<CreateInstanceRequestDatasets> & datasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<CreateInstanceRequestDatasets>) };
    inline vector<CreateInstanceRequestDatasets> datasets() { DARABONBA_PTR_GET(datasets_, vector<CreateInstanceRequestDatasets>) };
    inline CreateInstanceRequest& setDatasets(const vector<CreateInstanceRequestDatasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline CreateInstanceRequest& setDatasets(vector<CreateInstanceRequestDatasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline CreateInstanceRequest& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // dynamicMount Field Functions 
    bool hasDynamicMount() const { return this->dynamicMount_ != nullptr;};
    void deleteDynamicMount() { this->dynamicMount_ = nullptr;};
    inline const DynamicMount & dynamicMount() const { DARABONBA_PTR_GET_CONST(dynamicMount_, DynamicMount) };
    inline DynamicMount dynamicMount() { DARABONBA_PTR_GET(dynamicMount_, DynamicMount) };
    inline CreateInstanceRequest& setDynamicMount(const DynamicMount & dynamicMount) { DARABONBA_PTR_SET_VALUE(dynamicMount_, dynamicMount) };
    inline CreateInstanceRequest& setDynamicMount(DynamicMount && dynamicMount) { DARABONBA_PTR_SET_RVALUE(dynamicMount_, dynamicMount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline CreateInstanceRequest& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & environmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> environmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline CreateInstanceRequest& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline CreateInstanceRequest& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string imageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline CreateInstanceRequest& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateInstanceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<CreateInstanceRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<CreateInstanceRequestLabels>) };
    inline vector<CreateInstanceRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<CreateInstanceRequestLabels>) };
    inline CreateInstanceRequest& setLabels(const vector<CreateInstanceRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateInstanceRequest& setLabels(vector<CreateInstanceRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string oversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline CreateInstanceRequest& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline CreateInstanceRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestedResource Field Functions 
    bool hasRequestedResource() const { return this->requestedResource_ != nullptr;};
    void deleteRequestedResource() { this->requestedResource_ = nullptr;};
    inline const CreateInstanceRequestRequestedResource & requestedResource() const { DARABONBA_PTR_GET_CONST(requestedResource_, CreateInstanceRequestRequestedResource) };
    inline CreateInstanceRequestRequestedResource requestedResource() { DARABONBA_PTR_GET(requestedResource_, CreateInstanceRequestRequestedResource) };
    inline CreateInstanceRequest& setRequestedResource(const CreateInstanceRequestRequestedResource & requestedResource) { DARABONBA_PTR_SET_VALUE(requestedResource_, requestedResource) };
    inline CreateInstanceRequest& setRequestedResource(CreateInstanceRequestRequestedResource && requestedResource) { DARABONBA_PTR_SET_RVALUE(requestedResource_, requestedResource) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateInstanceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // spotSpec Field Functions 
    bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
    void deleteSpotSpec() { this->spotSpec_ = nullptr;};
    inline const CreateInstanceRequestSpotSpec & spotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, CreateInstanceRequestSpotSpec) };
    inline CreateInstanceRequestSpotSpec spotSpec() { DARABONBA_PTR_GET(spotSpec_, CreateInstanceRequestSpotSpec) };
    inline CreateInstanceRequest& setSpotSpec(const CreateInstanceRequestSpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
    inline CreateInstanceRequest& setSpotSpec(CreateInstanceRequestSpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateInstanceRequestTag>) };
    inline vector<CreateInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateInstanceRequestTag>) };
    inline CreateInstanceRequest& setTag(const vector<CreateInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateInstanceRequest& setTag(vector<CreateInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline const CreateInstanceRequestUserCommand & userCommand() const { DARABONBA_PTR_GET_CONST(userCommand_, CreateInstanceRequestUserCommand) };
    inline CreateInstanceRequestUserCommand userCommand() { DARABONBA_PTR_GET(userCommand_, CreateInstanceRequestUserCommand) };
    inline CreateInstanceRequest& setUserCommand(const CreateInstanceRequestUserCommand & userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };
    inline CreateInstanceRequest& setUserCommand(CreateInstanceRequestUserCommand && userCommand) { DARABONBA_PTR_SET_RVALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateInstanceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateInstanceRequestUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateInstanceRequestUserVpc) };
    inline CreateInstanceRequestUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, CreateInstanceRequestUserVpc) };
    inline CreateInstanceRequest& setUserVpc(const CreateInstanceRequestUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateInstanceRequest& setUserVpc(CreateInstanceRequestUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateInstanceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceSource Field Functions 
    bool hasWorkspaceSource() const { return this->workspaceSource_ != nullptr;};
    void deleteWorkspaceSource() { this->workspaceSource_ = nullptr;};
    inline string workspaceSource() const { DARABONBA_PTR_GET_DEFAULT(workspaceSource_, "") };
    inline CreateInstanceRequest& setWorkspaceSource(string workspaceSource) { DARABONBA_PTR_SET_VALUE(workspaceSource_, workspaceSource) };


  protected:
    // The instance accessibility.
    // 
    // Valid values:
    // 
    // *   PUBLIC: The instances are accessible to all members in the workspace.
    // *   PRIVATE: The instances are accessible only to you and the administrator of the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The affinity configuration.
    std::shared_ptr<CreateInstanceRequestAffinity> affinity_ = nullptr;
    std::shared_ptr<CreateInstanceRequestAssignNodeSpec> assignNodeSpec_ = nullptr;
    // The cloud disks.
    std::shared_ptr<vector<CreateInstanceRequestCloudDisks>> cloudDisks_ = nullptr;
    // The credential configuration.
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The datasets.
    std::shared_ptr<vector<CreateInstanceRequestDatasets>> datasets_ = nullptr;
    // The NVIDIA driver configuration.
    std::shared_ptr<string> driver_ = nullptr;
    // The dynamic mount configuration.
    std::shared_ptr<DynamicMount> dynamicMount_ = nullptr;
    // The ECS instance type of the instance. You can call [ListEcsSpecs](https://help.aliyun.com/document_detail/470423.html) to obtain the ECS instance type.
    std::shared_ptr<string> ecsSpec_ = nullptr;
    // The environment variables.
    std::shared_ptr<map<string, string>> environmentVariables_ = nullptr;
    // The Base64-encoded account and password for the user\\"s private image. The password will be hidden.
    std::shared_ptr<string> imageAuth_ = nullptr;
    // The image ID. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image address. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image address.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The instance name. The name must meet the following requirements:
    // 
    // *   The name can contain only letters, digits, and underscores (_).
    // *   The name can be up to 27 characters in length.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The custom labels.
    std::shared_ptr<vector<CreateInstanceRequestLabels>> labels_ = nullptr;
    std::shared_ptr<string> oversoldType_ = nullptr;
    // The priority based on which resources are allocated to instances. Valid values: 1 to 9.
    // 
    // *   1: the lowest priority.
    // *   9: the highest priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The resource configurations.
    std::shared_ptr<CreateInstanceRequestRequestedResource> requestedResource_ = nullptr;
    // The ID of the resource group. This parameter is configured during prepayment. For information about how to create a dedicated resource group, see [Create a dedicated resource group and purchase general computing resources](https://help.aliyun.com/document_detail/202827.html).
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<CreateInstanceRequestSpotSpec> spotSpec_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateInstanceRequestTag>> tag_ = nullptr;
    std::shared_ptr<CreateInstanceRequestUserCommand> userCommand_ = nullptr;
    // The ID of the instance owner. Valid values: Alibaba Cloud account and RAM user.
    std::shared_ptr<string> userId_ = nullptr;
    // The virtual private cloud (VPC) configurations.
    std::shared_ptr<CreateInstanceRequestUserVpc> userVpc_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The storage corresponding to the working directory. You can mount disks or datasets to /mnt/workspace at the same time. OSS datasets and dynamically mounted datasets are not supported.
    // 
    // Valid values:
    // 
    // *   rootfsCloudDisk: Mount the disk to the working directory.
    // *   Mount path of the dataset, such as /mnt/data: Datasets in URI format only support this method.
    // *   Dataset ID, such as d-vsqjvs\\*\\*\\*\\*rp5l206u: If a single dataset is mounted to multiple paths, the first path is selected. We recommend that you do not use this method, use the mount path instead.
    // 
    // If you leave this parameter empty:
    // 
    // *   If the instance uses cloud disks, cloud disks are selected by default.
    // *   if no cloud disks are available, the first NAS or CPFS dataset is selected as the working directory.
    // *   If no cloud disks, and NAS or CPFS datasets are available, the host space is used.
    std::shared_ptr<string> workspaceSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
