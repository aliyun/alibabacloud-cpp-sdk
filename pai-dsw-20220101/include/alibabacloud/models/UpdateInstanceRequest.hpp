// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateInstanceRequestAffinity.hpp>
#include <alibabacloud/models/UpdateInstanceRequestAssignNodeSpec.hpp>
#include <vector>
#include <alibabacloud/models/UpdateInstanceRequestCloudDisks.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/UpdateInstanceRequestDatasets.hpp>
#include <alibabacloud/models/DynamicMount.hpp>
#include <alibabacloud/models/UpdateInstanceRequestRequestedResource.hpp>
#include <alibabacloud/models/UpdateInstanceRequestSpotSpec.hpp>
#include <alibabacloud/models/UpdateInstanceRequestUserCommand.hpp>
#include <alibabacloud/models/UpdateInstanceRequestUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(DisassociateAssignNode, disassociateAssignNode_);
      DARABONBA_PTR_TO_JSON(DisassociateCredential, disassociateCredential_);
      DARABONBA_PTR_TO_JSON(DisassociateDatasets, disassociateDatasets_);
      DARABONBA_PTR_TO_JSON(DisassociateDriver, disassociateDriver_);
      DARABONBA_PTR_TO_JSON(DisassociateEnvironmentVariables, disassociateEnvironmentVariables_);
      DARABONBA_PTR_TO_JSON(DisassociateForwardInfos, disassociateForwardInfos_);
      DARABONBA_PTR_TO_JSON(DisassociateSpot, disassociateSpot_);
      DARABONBA_PTR_TO_JSON(DisassociateUserCommand, disassociateUserCommand_);
      DARABONBA_PTR_TO_JSON(DisassociateVpc, disassociateVpc_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_ANY_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceSource, workspaceSource_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(DisassociateAssignNode, disassociateAssignNode_);
      DARABONBA_PTR_FROM_JSON(DisassociateCredential, disassociateCredential_);
      DARABONBA_PTR_FROM_JSON(DisassociateDatasets, disassociateDatasets_);
      DARABONBA_PTR_FROM_JSON(DisassociateDriver, disassociateDriver_);
      DARABONBA_PTR_FROM_JSON(DisassociateEnvironmentVariables, disassociateEnvironmentVariables_);
      DARABONBA_PTR_FROM_JSON(DisassociateForwardInfos, disassociateForwardInfos_);
      DARABONBA_PTR_FROM_JSON(DisassociateSpot, disassociateSpot_);
      DARABONBA_PTR_FROM_JSON(DisassociateUserCommand, disassociateUserCommand_);
      DARABONBA_PTR_FROM_JSON(DisassociateVpc, disassociateVpc_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_ANY_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceSource, workspaceSource_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->affinity_ != nullptr && this->assignNodeSpec_ != nullptr && this->cloudDisks_ != nullptr && this->credentialConfig_ != nullptr && this->datasets_ != nullptr
        && this->disassociateAssignNode_ != nullptr && this->disassociateCredential_ != nullptr && this->disassociateDatasets_ != nullptr && this->disassociateDriver_ != nullptr && this->disassociateEnvironmentVariables_ != nullptr
        && this->disassociateForwardInfos_ != nullptr && this->disassociateSpot_ != nullptr && this->disassociateUserCommand_ != nullptr && this->disassociateVpc_ != nullptr && this->driver_ != nullptr
        && this->dynamicMount_ != nullptr && this->ecsSpec_ != nullptr && this->environmentVariables_ != nullptr && this->imageAuth_ != nullptr && this->imageId_ != nullptr
        && this->imageUrl_ != nullptr && this->instanceName_ != nullptr && this->oversoldType_ != nullptr && this->priority_ != nullptr && this->requestedResource_ != nullptr
        && this->spotSpec_ != nullptr && this->userCommand_ != nullptr && this->userId_ != nullptr && this->userVpc_ != nullptr && this->workspaceSource_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline UpdateInstanceRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline const UpdateInstanceRequestAffinity & affinity() const { DARABONBA_PTR_GET_CONST(affinity_, UpdateInstanceRequestAffinity) };
    inline UpdateInstanceRequestAffinity affinity() { DARABONBA_PTR_GET(affinity_, UpdateInstanceRequestAffinity) };
    inline UpdateInstanceRequest& setAffinity(const UpdateInstanceRequestAffinity & affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };
    inline UpdateInstanceRequest& setAffinity(UpdateInstanceRequestAffinity && affinity) { DARABONBA_PTR_SET_RVALUE(affinity_, affinity) };


    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const UpdateInstanceRequestAssignNodeSpec & assignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, UpdateInstanceRequestAssignNodeSpec) };
    inline UpdateInstanceRequestAssignNodeSpec assignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, UpdateInstanceRequestAssignNodeSpec) };
    inline UpdateInstanceRequest& setAssignNodeSpec(const UpdateInstanceRequestAssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline UpdateInstanceRequest& setAssignNodeSpec(UpdateInstanceRequestAssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // cloudDisks Field Functions 
    bool hasCloudDisks() const { return this->cloudDisks_ != nullptr;};
    void deleteCloudDisks() { this->cloudDisks_ = nullptr;};
    inline const vector<UpdateInstanceRequestCloudDisks> & cloudDisks() const { DARABONBA_PTR_GET_CONST(cloudDisks_, vector<UpdateInstanceRequestCloudDisks>) };
    inline vector<UpdateInstanceRequestCloudDisks> cloudDisks() { DARABONBA_PTR_GET(cloudDisks_, vector<UpdateInstanceRequestCloudDisks>) };
    inline UpdateInstanceRequest& setCloudDisks(const vector<UpdateInstanceRequestCloudDisks> & cloudDisks) { DARABONBA_PTR_SET_VALUE(cloudDisks_, cloudDisks) };
    inline UpdateInstanceRequest& setCloudDisks(vector<UpdateInstanceRequestCloudDisks> && cloudDisks) { DARABONBA_PTR_SET_RVALUE(cloudDisks_, cloudDisks) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline UpdateInstanceRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline UpdateInstanceRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<UpdateInstanceRequestDatasets> & datasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<UpdateInstanceRequestDatasets>) };
    inline vector<UpdateInstanceRequestDatasets> datasets() { DARABONBA_PTR_GET(datasets_, vector<UpdateInstanceRequestDatasets>) };
    inline UpdateInstanceRequest& setDatasets(const vector<UpdateInstanceRequestDatasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline UpdateInstanceRequest& setDatasets(vector<UpdateInstanceRequestDatasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // disassociateAssignNode Field Functions 
    bool hasDisassociateAssignNode() const { return this->disassociateAssignNode_ != nullptr;};
    void deleteDisassociateAssignNode() { this->disassociateAssignNode_ = nullptr;};
    inline bool disassociateAssignNode() const { DARABONBA_PTR_GET_DEFAULT(disassociateAssignNode_, false) };
    inline UpdateInstanceRequest& setDisassociateAssignNode(bool disassociateAssignNode) { DARABONBA_PTR_SET_VALUE(disassociateAssignNode_, disassociateAssignNode) };


    // disassociateCredential Field Functions 
    bool hasDisassociateCredential() const { return this->disassociateCredential_ != nullptr;};
    void deleteDisassociateCredential() { this->disassociateCredential_ = nullptr;};
    inline bool disassociateCredential() const { DARABONBA_PTR_GET_DEFAULT(disassociateCredential_, false) };
    inline UpdateInstanceRequest& setDisassociateCredential(bool disassociateCredential) { DARABONBA_PTR_SET_VALUE(disassociateCredential_, disassociateCredential) };


    // disassociateDatasets Field Functions 
    bool hasDisassociateDatasets() const { return this->disassociateDatasets_ != nullptr;};
    void deleteDisassociateDatasets() { this->disassociateDatasets_ = nullptr;};
    inline bool disassociateDatasets() const { DARABONBA_PTR_GET_DEFAULT(disassociateDatasets_, false) };
    inline UpdateInstanceRequest& setDisassociateDatasets(bool disassociateDatasets) { DARABONBA_PTR_SET_VALUE(disassociateDatasets_, disassociateDatasets) };


    // disassociateDriver Field Functions 
    bool hasDisassociateDriver() const { return this->disassociateDriver_ != nullptr;};
    void deleteDisassociateDriver() { this->disassociateDriver_ = nullptr;};
    inline bool disassociateDriver() const { DARABONBA_PTR_GET_DEFAULT(disassociateDriver_, false) };
    inline UpdateInstanceRequest& setDisassociateDriver(bool disassociateDriver) { DARABONBA_PTR_SET_VALUE(disassociateDriver_, disassociateDriver) };


    // disassociateEnvironmentVariables Field Functions 
    bool hasDisassociateEnvironmentVariables() const { return this->disassociateEnvironmentVariables_ != nullptr;};
    void deleteDisassociateEnvironmentVariables() { this->disassociateEnvironmentVariables_ = nullptr;};
    inline bool disassociateEnvironmentVariables() const { DARABONBA_PTR_GET_DEFAULT(disassociateEnvironmentVariables_, false) };
    inline UpdateInstanceRequest& setDisassociateEnvironmentVariables(bool disassociateEnvironmentVariables) { DARABONBA_PTR_SET_VALUE(disassociateEnvironmentVariables_, disassociateEnvironmentVariables) };


    // disassociateForwardInfos Field Functions 
    bool hasDisassociateForwardInfos() const { return this->disassociateForwardInfos_ != nullptr;};
    void deleteDisassociateForwardInfos() { this->disassociateForwardInfos_ = nullptr;};
    inline bool disassociateForwardInfos() const { DARABONBA_PTR_GET_DEFAULT(disassociateForwardInfos_, false) };
    inline UpdateInstanceRequest& setDisassociateForwardInfos(bool disassociateForwardInfos) { DARABONBA_PTR_SET_VALUE(disassociateForwardInfos_, disassociateForwardInfos) };


    // disassociateSpot Field Functions 
    bool hasDisassociateSpot() const { return this->disassociateSpot_ != nullptr;};
    void deleteDisassociateSpot() { this->disassociateSpot_ = nullptr;};
    inline bool disassociateSpot() const { DARABONBA_PTR_GET_DEFAULT(disassociateSpot_, false) };
    inline UpdateInstanceRequest& setDisassociateSpot(bool disassociateSpot) { DARABONBA_PTR_SET_VALUE(disassociateSpot_, disassociateSpot) };


    // disassociateUserCommand Field Functions 
    bool hasDisassociateUserCommand() const { return this->disassociateUserCommand_ != nullptr;};
    void deleteDisassociateUserCommand() { this->disassociateUserCommand_ = nullptr;};
    inline bool disassociateUserCommand() const { DARABONBA_PTR_GET_DEFAULT(disassociateUserCommand_, false) };
    inline UpdateInstanceRequest& setDisassociateUserCommand(bool disassociateUserCommand) { DARABONBA_PTR_SET_VALUE(disassociateUserCommand_, disassociateUserCommand) };


    // disassociateVpc Field Functions 
    bool hasDisassociateVpc() const { return this->disassociateVpc_ != nullptr;};
    void deleteDisassociateVpc() { this->disassociateVpc_ = nullptr;};
    inline bool disassociateVpc() const { DARABONBA_PTR_GET_DEFAULT(disassociateVpc_, false) };
    inline UpdateInstanceRequest& setDisassociateVpc(bool disassociateVpc) { DARABONBA_PTR_SET_VALUE(disassociateVpc_, disassociateVpc) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline UpdateInstanceRequest& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // dynamicMount Field Functions 
    bool hasDynamicMount() const { return this->dynamicMount_ != nullptr;};
    void deleteDynamicMount() { this->dynamicMount_ = nullptr;};
    inline const DynamicMount & dynamicMount() const { DARABONBA_PTR_GET_CONST(dynamicMount_, DynamicMount) };
    inline DynamicMount dynamicMount() { DARABONBA_PTR_GET(dynamicMount_, DynamicMount) };
    inline UpdateInstanceRequest& setDynamicMount(const DynamicMount & dynamicMount) { DARABONBA_PTR_SET_VALUE(dynamicMount_, dynamicMount) };
    inline UpdateInstanceRequest& setDynamicMount(DynamicMount && dynamicMount) { DARABONBA_PTR_SET_RVALUE(dynamicMount_, dynamicMount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline UpdateInstanceRequest& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline     const Darabonba::Json & environmentVariables() const { DARABONBA_GET(environmentVariables_) };
    Darabonba::Json & environmentVariables() { DARABONBA_GET(environmentVariables_) };
    inline UpdateInstanceRequest& setEnvironmentVariables(const Darabonba::Json & environmentVariables) { DARABONBA_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateInstanceRequest& setEnvironmentVariables(Darabonba::Json & environmentVariables) { DARABONBA_SET_RVALUE(environmentVariables_, environmentVariables) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string imageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline UpdateInstanceRequest& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline UpdateInstanceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string oversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline UpdateInstanceRequest& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline UpdateInstanceRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestedResource Field Functions 
    bool hasRequestedResource() const { return this->requestedResource_ != nullptr;};
    void deleteRequestedResource() { this->requestedResource_ = nullptr;};
    inline const UpdateInstanceRequestRequestedResource & requestedResource() const { DARABONBA_PTR_GET_CONST(requestedResource_, UpdateInstanceRequestRequestedResource) };
    inline UpdateInstanceRequestRequestedResource requestedResource() { DARABONBA_PTR_GET(requestedResource_, UpdateInstanceRequestRequestedResource) };
    inline UpdateInstanceRequest& setRequestedResource(const UpdateInstanceRequestRequestedResource & requestedResource) { DARABONBA_PTR_SET_VALUE(requestedResource_, requestedResource) };
    inline UpdateInstanceRequest& setRequestedResource(UpdateInstanceRequestRequestedResource && requestedResource) { DARABONBA_PTR_SET_RVALUE(requestedResource_, requestedResource) };


    // spotSpec Field Functions 
    bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
    void deleteSpotSpec() { this->spotSpec_ = nullptr;};
    inline const UpdateInstanceRequestSpotSpec & spotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, UpdateInstanceRequestSpotSpec) };
    inline UpdateInstanceRequestSpotSpec spotSpec() { DARABONBA_PTR_GET(spotSpec_, UpdateInstanceRequestSpotSpec) };
    inline UpdateInstanceRequest& setSpotSpec(const UpdateInstanceRequestSpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
    inline UpdateInstanceRequest& setSpotSpec(UpdateInstanceRequestSpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline const UpdateInstanceRequestUserCommand & userCommand() const { DARABONBA_PTR_GET_CONST(userCommand_, UpdateInstanceRequestUserCommand) };
    inline UpdateInstanceRequestUserCommand userCommand() { DARABONBA_PTR_GET(userCommand_, UpdateInstanceRequestUserCommand) };
    inline UpdateInstanceRequest& setUserCommand(const UpdateInstanceRequestUserCommand & userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };
    inline UpdateInstanceRequest& setUserCommand(UpdateInstanceRequestUserCommand && userCommand) { DARABONBA_PTR_SET_RVALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateInstanceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UpdateInstanceRequestUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UpdateInstanceRequestUserVpc) };
    inline UpdateInstanceRequestUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, UpdateInstanceRequestUserVpc) };
    inline UpdateInstanceRequest& setUserVpc(const UpdateInstanceRequestUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline UpdateInstanceRequest& setUserVpc(UpdateInstanceRequestUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceSource Field Functions 
    bool hasWorkspaceSource() const { return this->workspaceSource_ != nullptr;};
    void deleteWorkspaceSource() { this->workspaceSource_ = nullptr;};
    inline string workspaceSource() const { DARABONBA_PTR_GET_DEFAULT(workspaceSource_, "") };
    inline UpdateInstanceRequest& setWorkspaceSource(string workspaceSource) { DARABONBA_PTR_SET_VALUE(workspaceSource_, workspaceSource) };


  protected:
    // The visibility of the instance.
    // 
    // Valid values:
    // 
    // *   PUBLIC: Accessible to all members in the workspace.
    // *   PRIVATE: Accessible only to you and the administrator of the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The affinity configuration.
    std::shared_ptr<UpdateInstanceRequestAffinity> affinity_ = nullptr;
    std::shared_ptr<UpdateInstanceRequestAssignNodeSpec> assignNodeSpec_ = nullptr;
    // The cloud disks.
    std::shared_ptr<vector<UpdateInstanceRequestCloudDisks>> cloudDisks_ = nullptr;
    // The credential configuration.
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The datasets.
    std::shared_ptr<vector<UpdateInstanceRequestDatasets>> datasets_ = nullptr;
    std::shared_ptr<bool> disassociateAssignNode_ = nullptr;
    // Specifies whether to delete the credential injection information.
    std::shared_ptr<bool> disassociateCredential_ = nullptr;
    // Specifies whether to delete the associated datasets.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> disassociateDatasets_ = nullptr;
    // Specifies whether to delete the NVIDIA driver configuration.
    std::shared_ptr<bool> disassociateDriver_ = nullptr;
    std::shared_ptr<bool> disassociateEnvironmentVariables_ = nullptr;
    // Specifies whether to delete the associated forward information.
    std::shared_ptr<bool> disassociateForwardInfos_ = nullptr;
    std::shared_ptr<bool> disassociateSpot_ = nullptr;
    std::shared_ptr<bool> disassociateUserCommand_ = nullptr;
    // Specifies whether to delete the associated user VPC.
    std::shared_ptr<bool> disassociateVpc_ = nullptr;
    // The NVIDIA driver configuration.
    std::shared_ptr<string> driver_ = nullptr;
    // The dynamic mount configuration.
    std::shared_ptr<DynamicMount> dynamicMount_ = nullptr;
    // The ECS instance type of the instance. You can call [ListEcsSpecs](https://help.aliyun.com/document_detail/470423.html) to obtain the ECS instance type.
    std::shared_ptr<string> ecsSpec_ = nullptr;
    Darabonba::Json environmentVariables_ = nullptr;
    // The Base64-encoded account and password for the user‘s private image. The password will be hidden.
    std::shared_ptr<string> imageAuth_ = nullptr;
    // The image ID. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image address. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image address.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The instance name. Format requirements:
    // 
    // *   The name can contain only letters, digits, and underscores (_).
    // *   The name can be up to 27 characters in length.
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> oversoldType_ = nullptr;
    // The priority based on which resources are allocated to instances. Valid values: 1 to 9.
    // 
    // *   1: the lowest priority.
    // *   9 is the highest priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The resource configurations.
    std::shared_ptr<UpdateInstanceRequestRequestedResource> requestedResource_ = nullptr;
    std::shared_ptr<UpdateInstanceRequestSpotSpec> spotSpec_ = nullptr;
    std::shared_ptr<UpdateInstanceRequestUserCommand> userCommand_ = nullptr;
    // the User ID of the instance.
    std::shared_ptr<string> userId_ = nullptr;
    // The virtual private cloud (VPC) configurations.
    std::shared_ptr<UpdateInstanceRequestUserVpc> userVpc_ = nullptr;
    // Specifies the storage corresponding to the working directory. You can mount disks or datasets to /mnt/workspace at the same time. OSS datasets and dynamically mounted datasets are not supported.
    // 
    // Valid values:
    // 
    // *   rootfsCloudDisk: Mount disk to the working directory.
    // *   Mount path of the dataset, such as /mnt/data: Datasets in URI format only support this method.
    // *   Dataset ID, such as d-vsqjvs\\*\\*\\*\\*rp5l206u: If a single dataset is mounted to multiple paths, the first path is selected. We recommend that you do not use this method, use the mount path instead.
    // 
    // If you leave this parameter empty:
    // 
    // *   If the instance uses cloud disks, cloud disks are selected by default.
    // *   if no disks are available, the first NAS or CPFS dataset is selected as the working directory.
    // *   If no disk, NAS, or CPFS datasets is available, the host space is used.
    std::shared_ptr<string> workspaceSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
