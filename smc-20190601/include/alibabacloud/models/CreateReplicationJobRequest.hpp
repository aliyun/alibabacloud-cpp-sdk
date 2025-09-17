// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateReplicationJobRequestDataDisk.hpp>
#include <alibabacloud/models/CreateReplicationJobRequestDisks.hpp>
#include <alibabacloud/models/CreateReplicationJobRequestSystemDiskPart.hpp>
#include <alibabacloud/models/CreateReplicationJobRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateReplicationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ContainerNamespace, containerNamespace_);
      DARABONBA_PTR_TO_JSON(ContainerRepository, containerRepository_);
      DARABONBA_PTR_TO_JSON(ContainerTag, containerTag_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceRamRole, instanceRamRole_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfImageToKeep, maxNumberOfImageToKeep_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetMode, netMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicationParameters, replicationParameters_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(RunOnce, runOnce_);
      DARABONBA_PTR_TO_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SystemDiskPart, systemDiskPart_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ValidTime, validTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ContainerNamespace, containerNamespace_);
      DARABONBA_PTR_FROM_JSON(ContainerRepository, containerRepository_);
      DARABONBA_PTR_FROM_JSON(ContainerTag, containerTag_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceRamRole, instanceRamRole_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfImageToKeep, maxNumberOfImageToKeep_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetMode, netMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationParameters, replicationParameters_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(RunOnce, runOnce_);
      DARABONBA_PTR_FROM_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPart, systemDiskPart_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ValidTime, validTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateReplicationJobRequest() = default ;
    CreateReplicationJobRequest(const CreateReplicationJobRequest &) = default ;
    CreateReplicationJobRequest(CreateReplicationJobRequest &&) = default ;
    CreateReplicationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationJobRequest() = default ;
    CreateReplicationJobRequest& operator=(const CreateReplicationJobRequest &) = default ;
    CreateReplicationJobRequest& operator=(CreateReplicationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->containerNamespace_ != nullptr && this->containerRepository_ != nullptr && this->containerTag_ != nullptr && this->dataDisk_ != nullptr && this->description_ != nullptr
        && this->disks_ != nullptr && this->frequency_ != nullptr && this->imageName_ != nullptr && this->instanceId_ != nullptr && this->instanceRamRole_ != nullptr
        && this->instanceType_ != nullptr && this->jobType_ != nullptr && this->launchTemplateId_ != nullptr && this->launchTemplateVersion_ != nullptr && this->licenseType_ != nullptr
        && this->maxNumberOfImageToKeep_ != nullptr && this->name_ != nullptr && this->netMode_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->replicationParameters_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->runOnce_ != nullptr && this->scheduledStartTime_ != nullptr
        && this->sourceId_ != nullptr && this->systemDiskPart_ != nullptr && this->systemDiskSize_ != nullptr && this->tag_ != nullptr && this->targetType_ != nullptr
        && this->vSwitchId_ != nullptr && this->validTime_ != nullptr && this->vpcId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateReplicationJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // containerNamespace Field Functions 
    bool hasContainerNamespace() const { return this->containerNamespace_ != nullptr;};
    void deleteContainerNamespace() { this->containerNamespace_ = nullptr;};
    inline string containerNamespace() const { DARABONBA_PTR_GET_DEFAULT(containerNamespace_, "") };
    inline CreateReplicationJobRequest& setContainerNamespace(string containerNamespace) { DARABONBA_PTR_SET_VALUE(containerNamespace_, containerNamespace) };


    // containerRepository Field Functions 
    bool hasContainerRepository() const { return this->containerRepository_ != nullptr;};
    void deleteContainerRepository() { this->containerRepository_ = nullptr;};
    inline string containerRepository() const { DARABONBA_PTR_GET_DEFAULT(containerRepository_, "") };
    inline CreateReplicationJobRequest& setContainerRepository(string containerRepository) { DARABONBA_PTR_SET_VALUE(containerRepository_, containerRepository) };


    // containerTag Field Functions 
    bool hasContainerTag() const { return this->containerTag_ != nullptr;};
    void deleteContainerTag() { this->containerTag_ = nullptr;};
    inline string containerTag() const { DARABONBA_PTR_GET_DEFAULT(containerTag_, "") };
    inline CreateReplicationJobRequest& setContainerTag(string containerTag) { DARABONBA_PTR_SET_VALUE(containerTag_, containerTag) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<CreateReplicationJobRequestDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<CreateReplicationJobRequestDataDisk>) };
    inline vector<CreateReplicationJobRequestDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<CreateReplicationJobRequestDataDisk>) };
    inline CreateReplicationJobRequest& setDataDisk(const vector<CreateReplicationJobRequestDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateReplicationJobRequest& setDataDisk(vector<CreateReplicationJobRequestDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateReplicationJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const CreateReplicationJobRequestDisks & disks() const { DARABONBA_PTR_GET_CONST(disks_, CreateReplicationJobRequestDisks) };
    inline CreateReplicationJobRequestDisks disks() { DARABONBA_PTR_GET(disks_, CreateReplicationJobRequestDisks) };
    inline CreateReplicationJobRequest& setDisks(const CreateReplicationJobRequestDisks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline CreateReplicationJobRequest& setDisks(CreateReplicationJobRequestDisks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int32_t frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0) };
    inline CreateReplicationJobRequest& setFrequency(int32_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateReplicationJobRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateReplicationJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRamRole Field Functions 
    bool hasInstanceRamRole() const { return this->instanceRamRole_ != nullptr;};
    void deleteInstanceRamRole() { this->instanceRamRole_ = nullptr;};
    inline string instanceRamRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRamRole_, "") };
    inline CreateReplicationJobRequest& setInstanceRamRole(string instanceRamRole) { DARABONBA_PTR_SET_VALUE(instanceRamRole_, instanceRamRole) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateReplicationJobRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline int32_t jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
    inline CreateReplicationJobRequest& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline CreateReplicationJobRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline CreateReplicationJobRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string licenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline CreateReplicationJobRequest& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // maxNumberOfImageToKeep Field Functions 
    bool hasMaxNumberOfImageToKeep() const { return this->maxNumberOfImageToKeep_ != nullptr;};
    void deleteMaxNumberOfImageToKeep() { this->maxNumberOfImageToKeep_ = nullptr;};
    inline int32_t maxNumberOfImageToKeep() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfImageToKeep_, 0) };
    inline CreateReplicationJobRequest& setMaxNumberOfImageToKeep(int32_t maxNumberOfImageToKeep) { DARABONBA_PTR_SET_VALUE(maxNumberOfImageToKeep_, maxNumberOfImageToKeep) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateReplicationJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netMode Field Functions 
    bool hasNetMode() const { return this->netMode_ != nullptr;};
    void deleteNetMode() { this->netMode_ = nullptr;};
    inline int32_t netMode() const { DARABONBA_PTR_GET_DEFAULT(netMode_, 0) };
    inline CreateReplicationJobRequest& setNetMode(int32_t netMode) { DARABONBA_PTR_SET_VALUE(netMode_, netMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateReplicationJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateReplicationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicationParameters Field Functions 
    bool hasReplicationParameters() const { return this->replicationParameters_ != nullptr;};
    void deleteReplicationParameters() { this->replicationParameters_ = nullptr;};
    inline string replicationParameters() const { DARABONBA_PTR_GET_DEFAULT(replicationParameters_, "") };
    inline CreateReplicationJobRequest& setReplicationParameters(string replicationParameters) { DARABONBA_PTR_SET_VALUE(replicationParameters_, replicationParameters) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateReplicationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateReplicationJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // runOnce Field Functions 
    bool hasRunOnce() const { return this->runOnce_ != nullptr;};
    void deleteRunOnce() { this->runOnce_ = nullptr;};
    inline bool runOnce() const { DARABONBA_PTR_GET_DEFAULT(runOnce_, false) };
    inline CreateReplicationJobRequest& setRunOnce(bool runOnce) { DARABONBA_PTR_SET_VALUE(runOnce_, runOnce) };


    // scheduledStartTime Field Functions 
    bool hasScheduledStartTime() const { return this->scheduledStartTime_ != nullptr;};
    void deleteScheduledStartTime() { this->scheduledStartTime_ = nullptr;};
    inline string scheduledStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduledStartTime_, "") };
    inline CreateReplicationJobRequest& setScheduledStartTime(string scheduledStartTime) { DARABONBA_PTR_SET_VALUE(scheduledStartTime_, scheduledStartTime) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateReplicationJobRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // systemDiskPart Field Functions 
    bool hasSystemDiskPart() const { return this->systemDiskPart_ != nullptr;};
    void deleteSystemDiskPart() { this->systemDiskPart_ = nullptr;};
    inline const vector<CreateReplicationJobRequestSystemDiskPart> & systemDiskPart() const { DARABONBA_PTR_GET_CONST(systemDiskPart_, vector<CreateReplicationJobRequestSystemDiskPart>) };
    inline vector<CreateReplicationJobRequestSystemDiskPart> systemDiskPart() { DARABONBA_PTR_GET(systemDiskPart_, vector<CreateReplicationJobRequestSystemDiskPart>) };
    inline CreateReplicationJobRequest& setSystemDiskPart(const vector<CreateReplicationJobRequestSystemDiskPart> & systemDiskPart) { DARABONBA_PTR_SET_VALUE(systemDiskPart_, systemDiskPart) };
    inline CreateReplicationJobRequest& setSystemDiskPart(vector<CreateReplicationJobRequestSystemDiskPart> && systemDiskPart) { DARABONBA_PTR_SET_RVALUE(systemDiskPart_, systemDiskPart) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateReplicationJobRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateReplicationJobRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateReplicationJobRequestTag>) };
    inline vector<CreateReplicationJobRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateReplicationJobRequestTag>) };
    inline CreateReplicationJobRequest& setTag(const vector<CreateReplicationJobRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateReplicationJobRequest& setTag(vector<CreateReplicationJobRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateReplicationJobRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateReplicationJobRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // validTime Field Functions 
    bool hasValidTime() const { return this->validTime_ != nullptr;};
    void deleteValidTime() { this->validTime_ = nullptr;};
    inline string validTime() const { DARABONBA_PTR_GET_DEFAULT(validTime_, "") };
    inline CreateReplicationJobRequest& setValidTime(string validTime) { DARABONBA_PTR_SET_VALUE(validTime_, validTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateReplicationJobRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The namespace of the destination Docker container image. For more information about Docker container images, see [Terms](https://help.aliyun.com/document_detail/60744.html).
    std::shared_ptr<string> containerNamespace_ = nullptr;
    // The repository that stores the destination Docker container image. For more information about Docker container images, see [Terms](https://help.aliyun.com/document_detail/60744.html).
    std::shared_ptr<string> containerRepository_ = nullptr;
    // The tag of the destination Docker container image. For more information about Docker container images, see [Terms](https://help.aliyun.com/document_detail/60744.html).
    std::shared_ptr<string> containerTag_ = nullptr;
    // The data disks.
    std::shared_ptr<vector<CreateReplicationJobRequestDataDisk>> dataDisk_ = nullptr;
    // The description of the migration job.
    // 
    // The description must be 2 to 128 characters in length, and can contain digits, colons (:), underscores (_), and hyphens (-). The description must start with a letter, but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the disk.
    std::shared_ptr<CreateReplicationJobRequestDisks> disks_ = nullptr;
    // The interval at which SMC synchronizes incremental data to Alibaba Cloud. Unit: hour. Valid values: 1 to 168.
    // 
    // This parameter is required if you set the `RunOnce` parameter to false.
    // 
    // By default, this parameter is empty.
    std::shared_ptr<int32_t> frequency_ = nullptr;
    // The name of the destination image. The name must meet the following requirements:
    // 
    // *   The name must be unique within an Alibaba Cloud region.
    // *   The name must be 2 to 128 characters in length, and can contain digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter, but cannot start with `http://` or `https://`.
    // 
    // >  If you specify an image name that already exists in the destination region, the migration job ID is appended to the image name as a suffix. Example: ImageName_j-2zexxxxxxxxxxxxx.
    std::shared_ptr<string> imageName_ = nullptr;
    // The ID of the destination ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is assigned to the instance.
    std::shared_ptr<string> instanceRamRole_ = nullptr;
    // The type of the intermediate instance.
    // 
    // You can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to obtain the ECS instance types.
    // 
    // *   If you specify this parameter, SMC creates an intermediate instance of the specified instance type. If the specified instance type is unavailable, you cannot create the migration job.
    // *   If you do not specify this parameter, SMC selects an available instance type in a specific order to create an intermediate instance. For more information, see [SMC FAQ](https://help.aliyun.com/document_detail/121707.html).
    std::shared_ptr<string> instanceType_ = nullptr;
    // The type of the migration job. Valid values:
    // 
    // *   0: server migration.
    // *   1: operating system migration.
    // *   2: cross-zone migration.
    // *   3: agentless migration for a VMware VM.
    std::shared_ptr<int32_t> jobType_ = nullptr;
    // The ID of the launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The version number of the launch template.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The license type. Valid values:
    // 
    // *   An empty value specifies no license.
    // *   A value of BYOL specifies Bring Your Own License (BYOL).
    // 
    // For more information, see [SMC FAQ](https://help.aliyun.com/document_detail/121707.html).
    std::shared_ptr<string> licenseType_ = nullptr;
    // The maximum number of images retained for the incremental migration job. Valid values: 1 to 10.
    // 
    // This parameter is required if you set the `RunOnce` parameter to false.
    // 
    // By default, this parameter is empty.
    std::shared_ptr<int32_t> maxNumberOfImageToKeep_ = nullptr;
    // The name of the migration job. The name must meet the following requirements:
    // 
    // *   The name must be unique.
    // *   The name must be 2 to 128 characters in length, and can contain digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter, but cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    // The network mode for data transmission. Valid values:
    // 
    // *   0: Data is transmitted over the Internet. Make sure that the source server can access the Internet.
    // *   2: Data is transmitted over a VPC. If you specify this value, you must specify the VSwitchId parameter. You do not need to specify the VpcId parameter because the value of the VpcId parameter can be retrieved based on the value of the VSwitchId parameter.
    // 
    // Default value: 0
    std::shared_ptr<int32_t> netMode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the Alibaba Cloud region to which you want to migrate the source server.
    // 
    // For example, if you want to migrate the source server to the China (Hangzhou) region, set this parameter to `cn-hangzhou`. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the latest regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The parameters of the replication driver. The parameters must be specified as key-value pairs in the JSON format. The keys are fixed for each type of replication driver. The JSON string can be up to 2,048 characters in length.
    // 
    // A replication driver is a tool that is used to migrate a source server to an intermediate instance. The parameters vary based on the replication driver type. If you use a Server Migration Tool (SMT) driver, you can specify the following parameters:
    // 
    // *   bandwidth_limit: the maximum bandwidth for data transmission.
    // *   compress_level: the compression ratio of data to be transmitted.
    // *   checksum: specifies whether to enable checksum verification.
    // 
    // For more information about replication drivers, see the response parameter `SourceServers.ReplicationDriver` of the [DescribeSourceServers](https://help.aliyun.com/document_detail/121818.html) operation.
    std::shared_ptr<string> replicationParameters_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // Specifies whether to disable incremental migration for the source server. Valid values:
    // 
    // *   true: creates a migration job that runs only once. This is the default value. Incremental data of the source server is not synchronized.
    // *   false: creates an incremental migration job. In this case, you must specify the `Frequency` parameter. SMC synchronizes incremental data of the source server to Alibaba Cloud at the specified frequency. You can use an incremental migration job to synchronize incremental data from the source server to Alibaba Cloud without the need to interrupt your business. A full data image is generated for the source server when the job is running.
    // 
    // >  You can specify this parameter only when you create a migration job. The parameter value cannot be changed after the migration job is created.
    std::shared_ptr<bool> runOnce_ = nullptr;
    // The time when you want to run the migration job. The time must meet the following requirements:
    // 
    // *   The time must be specified in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. For example, 2018-01-01T12:00:00Z specifies 20:00:00 on January 1, 2018 (UTC+8).
    // *   The value must be within 30 days after the current time.
    // 
    // >  If you do not specify this parameter, you must manually start the migration job after the job is created. You can call the [StartReplicationJob](https://help.aliyun.com/document_detail/121823.html) operation to start the migration job.
    std::shared_ptr<string> scheduledStartTime_ = nullptr;
    // The ID of the source server.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The information about system disk partitions.
    std::shared_ptr<vector<CreateReplicationJobRequestSystemDiskPart>> systemDiskPart_ = nullptr;
    // The system disk size of the destination ECS instance. Unit: GiB. Valid values: 20 to 2048.
    // 
    // >  The value must be greater than the used space of the system disk on the source server. For example, if the total size of the source disk is 500 GiB and the used space is 100 GiB, the value of this parameter must be greater than 100 GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateReplicationJobRequestTag>> tag_ = nullptr;
    // The type of destination to which you want to migrate the source server. Valid values:
    // 
    // *   Image: After the migration job is complete, SMC generates an Elastic Compute Service (ECS) image for the source server.
    // *   ContainerImage: After the migration job is complete, SMC generates a Docker container image for the source server.
    // *   TargetInstance: After the migration job is completed, SMC migrates the source server to the destination instance. If you set this parameter to TargetInstance, you must set the `InstanceId` parameter.
    std::shared_ptr<string> targetType_ = nullptr;
    // The ID of the vSwitch in the specified VPC.
    // 
    // You must set this parameter if you use a VPC to migrate data.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The time when the migration job expires. You can schedule the migration job to expire 7 to 90 days after the job is created.
    // 
    // *   The time must be specified in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. For example, 2018-01-01T12:00:00Z specifies 20:00:00 on January 1, 2018 (UTC+8).
    // *   If you do not specify this parameter, the migration job does not expire.
    // *   After a migration job expires, the job state changes to Expired. SMC retains the migration job for seven days after the job expires. After the job is retained for seven days, SMC deletes the migration job.
    // 
    // By default, a migration job is valid for 30 days after it is created.
    std::shared_ptr<string> validTime_ = nullptr;
    // The ID of a VPC for which you have configured an Express Connect circuit or a VPN gateway.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
