// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREPLICATIONJOBATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREPLICATIONJOBATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyReplicationJobAttributeRequestDataDisk.hpp>
#include <alibabacloud/models/ModifyReplicationJobAttributeRequestSystemDiskPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class ModifyReplicationJobAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReplicationJobAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerNamespace, containerNamespace_);
      DARABONBA_PTR_TO_JSON(ContainerRepository, containerRepository_);
      DARABONBA_PTR_TO_JSON(ContainerTag, containerTag_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceRamRole, instanceRamRole_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfImageToKeep, maxNumberOfImageToKeep_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetMode, netMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReplicationParameters, replicationParameters_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_TO_JSON(SystemDiskPart, systemDiskPart_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ValidTime, validTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReplicationJobAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerNamespace, containerNamespace_);
      DARABONBA_PTR_FROM_JSON(ContainerRepository, containerRepository_);
      DARABONBA_PTR_FROM_JSON(ContainerTag, containerTag_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceRamRole, instanceRamRole_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfImageToKeep, maxNumberOfImageToKeep_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetMode, netMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReplicationParameters, replicationParameters_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPart, systemDiskPart_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ValidTime, validTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyReplicationJobAttributeRequest() = default ;
    ModifyReplicationJobAttributeRequest(const ModifyReplicationJobAttributeRequest &) = default ;
    ModifyReplicationJobAttributeRequest(ModifyReplicationJobAttributeRequest &&) = default ;
    ModifyReplicationJobAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReplicationJobAttributeRequest() = default ;
    ModifyReplicationJobAttributeRequest& operator=(const ModifyReplicationJobAttributeRequest &) = default ;
    ModifyReplicationJobAttributeRequest& operator=(ModifyReplicationJobAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerNamespace_ != nullptr
        && this->containerRepository_ != nullptr && this->containerTag_ != nullptr && this->dataDisk_ != nullptr && this->description_ != nullptr && this->frequency_ != nullptr
        && this->imageName_ != nullptr && this->instanceId_ != nullptr && this->instanceRamRole_ != nullptr && this->instanceType_ != nullptr && this->jobId_ != nullptr
        && this->launchTemplateId_ != nullptr && this->launchTemplateVersion_ != nullptr && this->maxNumberOfImageToKeep_ != nullptr && this->name_ != nullptr && this->netMode_ != nullptr
        && this->ownerId_ != nullptr && this->replicationParameters_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scheduledStartTime_ != nullptr && this->systemDiskPart_ != nullptr
        && this->systemDiskSize_ != nullptr && this->targetType_ != nullptr && this->vSwitchId_ != nullptr && this->validTime_ != nullptr && this->vpcId_ != nullptr; };
    // containerNamespace Field Functions 
    bool hasContainerNamespace() const { return this->containerNamespace_ != nullptr;};
    void deleteContainerNamespace() { this->containerNamespace_ = nullptr;};
    inline string containerNamespace() const { DARABONBA_PTR_GET_DEFAULT(containerNamespace_, "") };
    inline ModifyReplicationJobAttributeRequest& setContainerNamespace(string containerNamespace) { DARABONBA_PTR_SET_VALUE(containerNamespace_, containerNamespace) };


    // containerRepository Field Functions 
    bool hasContainerRepository() const { return this->containerRepository_ != nullptr;};
    void deleteContainerRepository() { this->containerRepository_ = nullptr;};
    inline string containerRepository() const { DARABONBA_PTR_GET_DEFAULT(containerRepository_, "") };
    inline ModifyReplicationJobAttributeRequest& setContainerRepository(string containerRepository) { DARABONBA_PTR_SET_VALUE(containerRepository_, containerRepository) };


    // containerTag Field Functions 
    bool hasContainerTag() const { return this->containerTag_ != nullptr;};
    void deleteContainerTag() { this->containerTag_ = nullptr;};
    inline string containerTag() const { DARABONBA_PTR_GET_DEFAULT(containerTag_, "") };
    inline ModifyReplicationJobAttributeRequest& setContainerTag(string containerTag) { DARABONBA_PTR_SET_VALUE(containerTag_, containerTag) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<ModifyReplicationJobAttributeRequestDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<ModifyReplicationJobAttributeRequestDataDisk>) };
    inline vector<ModifyReplicationJobAttributeRequestDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<ModifyReplicationJobAttributeRequestDataDisk>) };
    inline ModifyReplicationJobAttributeRequest& setDataDisk(const vector<ModifyReplicationJobAttributeRequestDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline ModifyReplicationJobAttributeRequest& setDataDisk(vector<ModifyReplicationJobAttributeRequestDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyReplicationJobAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int32_t frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0) };
    inline ModifyReplicationJobAttributeRequest& setFrequency(int32_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ModifyReplicationJobAttributeRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyReplicationJobAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRamRole Field Functions 
    bool hasInstanceRamRole() const { return this->instanceRamRole_ != nullptr;};
    void deleteInstanceRamRole() { this->instanceRamRole_ = nullptr;};
    inline string instanceRamRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRamRole_, "") };
    inline ModifyReplicationJobAttributeRequest& setInstanceRamRole(string instanceRamRole) { DARABONBA_PTR_SET_VALUE(instanceRamRole_, instanceRamRole) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyReplicationJobAttributeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ModifyReplicationJobAttributeRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline ModifyReplicationJobAttributeRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline ModifyReplicationJobAttributeRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // maxNumberOfImageToKeep Field Functions 
    bool hasMaxNumberOfImageToKeep() const { return this->maxNumberOfImageToKeep_ != nullptr;};
    void deleteMaxNumberOfImageToKeep() { this->maxNumberOfImageToKeep_ = nullptr;};
    inline int32_t maxNumberOfImageToKeep() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfImageToKeep_, 0) };
    inline ModifyReplicationJobAttributeRequest& setMaxNumberOfImageToKeep(int32_t maxNumberOfImageToKeep) { DARABONBA_PTR_SET_VALUE(maxNumberOfImageToKeep_, maxNumberOfImageToKeep) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyReplicationJobAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netMode Field Functions 
    bool hasNetMode() const { return this->netMode_ != nullptr;};
    void deleteNetMode() { this->netMode_ = nullptr;};
    inline int32_t netMode() const { DARABONBA_PTR_GET_DEFAULT(netMode_, 0) };
    inline ModifyReplicationJobAttributeRequest& setNetMode(int32_t netMode) { DARABONBA_PTR_SET_VALUE(netMode_, netMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyReplicationJobAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // replicationParameters Field Functions 
    bool hasReplicationParameters() const { return this->replicationParameters_ != nullptr;};
    void deleteReplicationParameters() { this->replicationParameters_ = nullptr;};
    inline string replicationParameters() const { DARABONBA_PTR_GET_DEFAULT(replicationParameters_, "") };
    inline ModifyReplicationJobAttributeRequest& setReplicationParameters(string replicationParameters) { DARABONBA_PTR_SET_VALUE(replicationParameters_, replicationParameters) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyReplicationJobAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scheduledStartTime Field Functions 
    bool hasScheduledStartTime() const { return this->scheduledStartTime_ != nullptr;};
    void deleteScheduledStartTime() { this->scheduledStartTime_ = nullptr;};
    inline string scheduledStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduledStartTime_, "") };
    inline ModifyReplicationJobAttributeRequest& setScheduledStartTime(string scheduledStartTime) { DARABONBA_PTR_SET_VALUE(scheduledStartTime_, scheduledStartTime) };


    // systemDiskPart Field Functions 
    bool hasSystemDiskPart() const { return this->systemDiskPart_ != nullptr;};
    void deleteSystemDiskPart() { this->systemDiskPart_ = nullptr;};
    inline const vector<ModifyReplicationJobAttributeRequestSystemDiskPart> & systemDiskPart() const { DARABONBA_PTR_GET_CONST(systemDiskPart_, vector<ModifyReplicationJobAttributeRequestSystemDiskPart>) };
    inline vector<ModifyReplicationJobAttributeRequestSystemDiskPart> systemDiskPart() { DARABONBA_PTR_GET(systemDiskPart_, vector<ModifyReplicationJobAttributeRequestSystemDiskPart>) };
    inline ModifyReplicationJobAttributeRequest& setSystemDiskPart(const vector<ModifyReplicationJobAttributeRequestSystemDiskPart> & systemDiskPart) { DARABONBA_PTR_SET_VALUE(systemDiskPart_, systemDiskPart) };
    inline ModifyReplicationJobAttributeRequest& setSystemDiskPart(vector<ModifyReplicationJobAttributeRequestSystemDiskPart> && systemDiskPart) { DARABONBA_PTR_SET_RVALUE(systemDiskPart_, systemDiskPart) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline ModifyReplicationJobAttributeRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ModifyReplicationJobAttributeRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyReplicationJobAttributeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // validTime Field Functions 
    bool hasValidTime() const { return this->validTime_ != nullptr;};
    void deleteValidTime() { this->validTime_ = nullptr;};
    inline string validTime() const { DARABONBA_PTR_GET_DEFAULT(validTime_, "") };
    inline ModifyReplicationJobAttributeRequest& setValidTime(string validTime) { DARABONBA_PTR_SET_VALUE(validTime_, validTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyReplicationJobAttributeRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The namespace of the destination Docker container image. For more information about Docker container images, see [Terms](https://help.aliyun.com/document_detail/60744.html).
    std::shared_ptr<string> containerNamespace_ = nullptr;
    // The repository that stores the destination Docker container image. For more information about Docker container images, see [Terms](https://help.aliyun.com/document_detail/60744.html).
    std::shared_ptr<string> containerRepository_ = nullptr;
    // The tag of the destination Docker container image. For more information about Docker container images, see [Terms](https://help.aliyun.com/document_detail/60744.html).
    std::shared_ptr<string> containerTag_ = nullptr;
    // The information about the data disk.
    std::shared_ptr<vector<ModifyReplicationJobAttributeRequestDataDisk>> dataDisk_ = nullptr;
    // The description of the migration job.
    // 
    // The description must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The interval at which an incremental migration job runs. Unit: hour. Valid values: 1 to 168.
    // 
    // This parameter is required if you set the `RunOnce` parameter to false.
    std::shared_ptr<int32_t> frequency_ = nullptr;
    // The name of the destination image. The name must meet the following requirements:
    // 
    // *   The name must be unique within an Alibaba Cloud region.
    // *   The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.
    // 
    // >  If an image whose name is the same as that of the destination image already exists in the current region when the migration job is in progress, the system adds the migration job ID to the end of the image name by default. Example: ImageName-JobId.
    std::shared_ptr<string> imageName_ = nullptr;
    // The destination instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is attached to the intermediate instance.
    std::shared_ptr<string> instanceRamRole_ = nullptr;
    // The type of the intermediate instance.
    // 
    // You can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the ECS instance types.
    // 
    // *   If you specify this parameter, SMC creates an intermediate instance of the specified instance type. If the specified instance type is unavailable, you cannot create the migration job.
    // *   If you do not specify this parameter, SMC selects an available instance type in a specific order to create an intermediate instance. For more information,
    // 
    // see the "How does SMC create an intermediate instance?" section of the "FAQ" topic.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The migration job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The launch template ID.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The version number of the launch template.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The maximum number of images that are retained for an incremental migration job. Valid values: 1 to 10.
    // 
    // This parameter is required if you set the `RunOnce` parameter to false.
    std::shared_ptr<int32_t> maxNumberOfImageToKeep_ = nullptr;
    // The name of the migration job. The name must meet the following requirements:
    // 
    // *   The name must be unique.
    // *   The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    // The network mode for data transmission. Valid values:
    // 
    // *   0: Data is transmitted over the Internet. Make sure that the source server can access the Internet.
    // *   2: Data is transmitted over a virtual private cloud (VPC). If you set this parameter to 2, you must specify the VSwitchId parameter. You can leave the VpcId parameter empty, the VPC ID can be queried by calling an operation.
    std::shared_ptr<int32_t> netMode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The parameters of the replication driver. The parameters are fixed key-value pairs of the JSON format. The value can be up to 2,048 characters in length.
    // 
    // A replication driver is a tool that is used to replicate the data of a source server to an intermediate instance. The parameters vary based on the replication driver type. If you use a Server Migration Tool (SMT) driver, you can set the following parameters:
    // 
    // *   bandwidth_limit: the maximum bandwidth for data transmission.
    // *   compress_level: the compression ratio of data to be transmitted.
    // *   checksum: specifies whether to enable checksum verification
    // 
    // For more information about the replication driver, see the response parameter `SourceServers.ReplicationDriver` of the [DescribeSourceServers](https://help.aliyun.com/document_detail/2402126.html) operation.
    std::shared_ptr<string> replicationParameters_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The time when the migration job is executed. SMC starts the migration job at the specified time.
    // 
    // Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC. For example, 2018-01-01T12:00:00Z indicates 20:00:00 on January 1, 2018 (UTC+8).
    // 
    // >  If ScheduledStartTime is left empty, SMC does not automatically start the migration job. In this case, you must call the [StartReplicationJob](https://help.aliyun.com/document_detail/121823.html) operation to start the migration job.
    std::shared_ptr<string> scheduledStartTime_ = nullptr;
    // The partition information of the system disk.
    std::shared_ptr<vector<ModifyReplicationJobAttributeRequestSystemDiskPart>> systemDiskPart_ = nullptr;
    // The system disk size of the destination ECS instance. Unit: GiB. Valid values: 20 to 500.
    // 
    // >  The size of a destination data disk must be greater than the size of data in the source data disk. For example, if the source data disk has 500 GiB of storage space and 100 GiB of data, you must set this parameter to a value greater than 100.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The type of destination to which the source server is migrated. You can modify the value only before the migration job starts. Valid values:
    // 
    // *   Image: After the migration job is complete, Server Migration Center (SMC) generates a destination Elastic Compute Service (ECS) image for the source server. You can use the image to create an ECS instance.
    // *   ContainerImage: After the migration job is complete, SMC generates a container image for the source server. You can use the container image in Container Registry.
    // *   TargetInstance: After the migration job is complete, SMC migrates the source server to the destination instance. If you set this parameter to TargetInstance, you must set the `InstanceId` parameter.
    // 
    // > 
    // 
    // *   The value of this parameter is not case-sensitive.
    // 
    // *   SMC does not allow you to migrate Windows servers or servers that run operating systems on the ARM architecture to Container Registry.
    std::shared_ptr<string> targetType_ = nullptr;
    // The ID of the vSwitch in the VPC.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The time when the migration job expires. You can schedule the migration job to expire 7 to 90 days after the job is created.
    // 
    // *   This parameter can be modified only if the migration job is in the Ready, Running, Stopped, InError, or Waiting state.
    // *   Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC. For example, 2018-01-01T12:00:00Z indicates 20:00:00 on January 1, 2018 (UTC+8).
    // *   If you do not specify this parameter, the migration job does not expire.
    // *   After a migration job expires, the job state changes to Expired. SMC retains the migration job for seven days after the job expires. After the job is retained for seven days, SMC deletes the migration job.
    // 
    // By default, a migration job is valid for 30 days after it is created.
    std::shared_ptr<string> validTime_ = nullptr;
    // The ID of the VPC for which an Express Connect circuit or VPN gateway is configured.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
