// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ContainerNamespace, containerNamespace_);
      DARABONBA_PTR_TO_JSON(ContainerRepository, containerRepository_);
      DARABONBA_PTR_TO_JSON(ContainerTag, containerTag_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceRamRole, instanceRamRole_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfImageToKeep, maxNumberOfImageToKeep_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetMode, netMode_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicationJobRuns, replicationJobRuns_);
      DARABONBA_PTR_TO_JSON(ReplicationParameters, replicationParameters_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunOnce, runOnce_);
      DARABONBA_PTR_TO_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusInfo, statusInfo_);
      DARABONBA_PTR_TO_JSON(SystemDiskParts, systemDiskParts_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TransitionInstanceId, transitionInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ValidTime, validTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ContainerNamespace, containerNamespace_);
      DARABONBA_PTR_FROM_JSON(ContainerRepository, containerRepository_);
      DARABONBA_PTR_FROM_JSON(ContainerTag, containerTag_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceRamRole, instanceRamRole_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfImageToKeep, maxNumberOfImageToKeep_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetMode, netMode_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationJobRuns, replicationJobRuns_);
      DARABONBA_PTR_FROM_JSON(ReplicationParameters, replicationParameters_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunOnce, runOnce_);
      DARABONBA_PTR_FROM_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusInfo, statusInfo_);
      DARABONBA_PTR_FROM_JSON(SystemDiskParts, systemDiskParts_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TransitionInstanceId, transitionInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ValidTime, validTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessStatus_ != nullptr
        && this->containerNamespace_ != nullptr && this->containerRepository_ != nullptr && this->containerTag_ != nullptr && this->creationTime_ != nullptr && this->dataDisks_ != nullptr
        && this->description_ != nullptr && this->disks_ != nullptr && this->endTime_ != nullptr && this->errorCode_ != nullptr && this->frequency_ != nullptr
        && this->imageId_ != nullptr && this->imageName_ != nullptr && this->instanceId_ != nullptr && this->instanceRamRole_ != nullptr && this->instanceType_ != nullptr
        && this->jobId_ != nullptr && this->jobType_ != nullptr && this->launchTemplateId_ != nullptr && this->launchTemplateVersion_ != nullptr && this->licenseType_ != nullptr
        && this->maxNumberOfImageToKeep_ != nullptr && this->name_ != nullptr && this->netMode_ != nullptr && this->progress_ != nullptr && this->regionId_ != nullptr
        && this->replicationJobRuns_ != nullptr && this->replicationParameters_ != nullptr && this->resourceGroupId_ != nullptr && this->runOnce_ != nullptr && this->scheduledStartTime_ != nullptr
        && this->sourceId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->statusInfo_ != nullptr && this->systemDiskParts_ != nullptr
        && this->systemDiskSize_ != nullptr && this->tags_ != nullptr && this->targetType_ != nullptr && this->transitionInstanceId_ != nullptr && this->vSwitchId_ != nullptr
        && this->validTime_ != nullptr && this->vpcId_ != nullptr && this->workgroupId_ != nullptr; };
    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // containerNamespace Field Functions 
    bool hasContainerNamespace() const { return this->containerNamespace_ != nullptr;};
    void deleteContainerNamespace() { this->containerNamespace_ = nullptr;};
    inline string containerNamespace() const { DARABONBA_PTR_GET_DEFAULT(containerNamespace_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setContainerNamespace(string containerNamespace) { DARABONBA_PTR_SET_VALUE(containerNamespace_, containerNamespace) };


    // containerRepository Field Functions 
    bool hasContainerRepository() const { return this->containerRepository_ != nullptr;};
    void deleteContainerRepository() { this->containerRepository_ = nullptr;};
    inline string containerRepository() const { DARABONBA_PTR_GET_DEFAULT(containerRepository_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setContainerRepository(string containerRepository) { DARABONBA_PTR_SET_VALUE(containerRepository_, containerRepository) };


    // containerTag Field Functions 
    bool hasContainerTag() const { return this->containerTag_ != nullptr;};
    void deleteContainerTag() { this->containerTag_ = nullptr;};
    inline string containerTag() const { DARABONBA_PTR_GET_DEFAULT(containerTag_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setContainerTag(string containerTag) { DARABONBA_PTR_SET_VALUE(containerTag_, containerTag) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks dataDisks() { DARABONBA_PTR_GET(dataDisks_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setDataDisks(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setDataDisks(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks & disks() const { DARABONBA_PTR_GET_CONST(disks_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks disks() { DARABONBA_PTR_GET(disks_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setDisks(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setDisks(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int32_t frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setFrequency(int32_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRamRole Field Functions 
    bool hasInstanceRamRole() const { return this->instanceRamRole_ != nullptr;};
    void deleteInstanceRamRole() { this->instanceRamRole_ = nullptr;};
    inline string instanceRamRole() const { DARABONBA_PTR_GET_DEFAULT(instanceRamRole_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setInstanceRamRole(string instanceRamRole) { DARABONBA_PTR_SET_VALUE(instanceRamRole_, instanceRamRole) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline int32_t jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // licenseType Field Functions 
    bool hasLicenseType() const { return this->licenseType_ != nullptr;};
    void deleteLicenseType() { this->licenseType_ = nullptr;};
    inline string licenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


    // maxNumberOfImageToKeep Field Functions 
    bool hasMaxNumberOfImageToKeep() const { return this->maxNumberOfImageToKeep_ != nullptr;};
    void deleteMaxNumberOfImageToKeep() { this->maxNumberOfImageToKeep_ = nullptr;};
    inline int32_t maxNumberOfImageToKeep() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfImageToKeep_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setMaxNumberOfImageToKeep(int32_t maxNumberOfImageToKeep) { DARABONBA_PTR_SET_VALUE(maxNumberOfImageToKeep_, maxNumberOfImageToKeep) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netMode Field Functions 
    bool hasNetMode() const { return this->netMode_ != nullptr;};
    void deleteNetMode() { this->netMode_ = nullptr;};
    inline int32_t netMode() const { DARABONBA_PTR_GET_DEFAULT(netMode_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setNetMode(int32_t netMode) { DARABONBA_PTR_SET_VALUE(netMode_, netMode) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline float progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicationJobRuns Field Functions 
    bool hasReplicationJobRuns() const { return this->replicationJobRuns_ != nullptr;};
    void deleteReplicationJobRuns() { this->replicationJobRuns_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns & replicationJobRuns() const { DARABONBA_PTR_GET_CONST(replicationJobRuns_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns replicationJobRuns() { DARABONBA_PTR_GET(replicationJobRuns_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setReplicationJobRuns(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns & replicationJobRuns) { DARABONBA_PTR_SET_VALUE(replicationJobRuns_, replicationJobRuns) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setReplicationJobRuns(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns && replicationJobRuns) { DARABONBA_PTR_SET_RVALUE(replicationJobRuns_, replicationJobRuns) };


    // replicationParameters Field Functions 
    bool hasReplicationParameters() const { return this->replicationParameters_ != nullptr;};
    void deleteReplicationParameters() { this->replicationParameters_ = nullptr;};
    inline string replicationParameters() const { DARABONBA_PTR_GET_DEFAULT(replicationParameters_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setReplicationParameters(string replicationParameters) { DARABONBA_PTR_SET_VALUE(replicationParameters_, replicationParameters) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runOnce Field Functions 
    bool hasRunOnce() const { return this->runOnce_ != nullptr;};
    void deleteRunOnce() { this->runOnce_ = nullptr;};
    inline bool runOnce() const { DARABONBA_PTR_GET_DEFAULT(runOnce_, false) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setRunOnce(bool runOnce) { DARABONBA_PTR_SET_VALUE(runOnce_, runOnce) };


    // scheduledStartTime Field Functions 
    bool hasScheduledStartTime() const { return this->scheduledStartTime_ != nullptr;};
    void deleteScheduledStartTime() { this->scheduledStartTime_ = nullptr;};
    inline string scheduledStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduledStartTime_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setScheduledStartTime(string scheduledStartTime) { DARABONBA_PTR_SET_VALUE(scheduledStartTime_, scheduledStartTime) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusInfo Field Functions 
    bool hasStatusInfo() const { return this->statusInfo_ != nullptr;};
    void deleteStatusInfo() { this->statusInfo_ = nullptr;};
    inline string statusInfo() const { DARABONBA_PTR_GET_DEFAULT(statusInfo_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setStatusInfo(string statusInfo) { DARABONBA_PTR_SET_VALUE(statusInfo_, statusInfo) };


    // systemDiskParts Field Functions 
    bool hasSystemDiskParts() const { return this->systemDiskParts_ != nullptr;};
    void deleteSystemDiskParts() { this->systemDiskParts_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts & systemDiskParts() const { DARABONBA_PTR_GET_CONST(systemDiskParts_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts systemDiskParts() { DARABONBA_PTR_GET(systemDiskParts_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setSystemDiskParts(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts & systemDiskParts) { DARABONBA_PTR_SET_VALUE(systemDiskParts_, systemDiskParts) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setSystemDiskParts(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts && systemDiskParts) { DARABONBA_PTR_SET_RVALUE(systemDiskParts_, systemDiskParts) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setTags(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setTags(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // transitionInstanceId Field Functions 
    bool hasTransitionInstanceId() const { return this->transitionInstanceId_ != nullptr;};
    void deleteTransitionInstanceId() { this->transitionInstanceId_ = nullptr;};
    inline string transitionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(transitionInstanceId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setTransitionInstanceId(string transitionInstanceId) { DARABONBA_PTR_SET_VALUE(transitionInstanceId_, transitionInstanceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // validTime Field Functions 
    bool hasValidTime() const { return this->validTime_ != nullptr;};
    void deleteValidTime() { this->validTime_ = nullptr;};
    inline string validTime() const { DARABONBA_PTR_GET_DEFAULT(validTime_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setValidTime(string validTime) { DARABONBA_PTR_SET_VALUE(validTime_, validTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline string workgroupId() const { DARABONBA_PTR_GET_DEFAULT(workgroupId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob& setWorkgroupId(string workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };


  protected:
    // The business status of the migration job. Valid values:
    // 
    // *   Preparing: The migration is being prepared.
    // *   Syncing: Data is being synchronized.
    // *   Processing: The migration is in progress.
    // *   Cleaning: Intermediate resources are being released.
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The namespace of the destination Docker container image.
    std::shared_ptr<string> containerNamespace_ = nullptr;
    // The repository that stores the destination Docker container image.
    std::shared_ptr<string> containerRepository_ = nullptr;
    // The tag of the destination Docker container image.
    std::shared_ptr<string> containerTag_ = nullptr;
    // The time when the migration job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The data disks on the destination ECS instance.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks> dataDisks_ = nullptr;
    // The description of the migration job.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the disk.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisks> disks_ = nullptr;
    // The time when the migration job was complete. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    // 
    // >  The time displayed in the SMC console is in the format of UTC+8.
    std::shared_ptr<string> endTime_ = nullptr;
    // The error code returned if an error occurred in the migration job.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The interval at which the incremental migration job runs. Unit: hour. Valid values: 1 to 168.
    std::shared_ptr<int32_t> frequency_ = nullptr;
    // The ID of the destination image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the destination image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The ID of the destination ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is assigned to the instance.
    std::shared_ptr<string> instanceRamRole_ = nullptr;
    // The instance type of the intermediate instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the migration job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The type of the migration job. Valid values:
    // 
    // *   0: server migration.
    // *   1: operating system migration.
    // *   2: cross-zone migration.
    // *   3: agentless migration for a VMware VM.
    std::shared_ptr<int32_t> jobType_ = nullptr;
    // The ID of the launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The versions of the launch template.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The type of license for the migration job. Valid values:
    // 
    // *   An empty value indicates no license.
    // *   A value of BYOL indicates Bring Your Own License (BYOL).
    std::shared_ptr<string> licenseType_ = nullptr;
    // The maximum number of images retained for the incremental migration job. Valid values: 1 to 10.
    std::shared_ptr<int32_t> maxNumberOfImageToKeep_ = nullptr;
    // The name of the migration job.
    std::shared_ptr<string> name_ = nullptr;
    // The type of network used for the migration.
    std::shared_ptr<int32_t> netMode_ = nullptr;
    // The progress of the migration job.
    std::shared_ptr<float> progress_ = nullptr;
    // The ID of the Alibaba Cloud region to which the source server is migrated.
    std::shared_ptr<string> regionId_ = nullptr;
    // The execution records of the migration job.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns> replicationJobRuns_ = nullptr;
    // The string of key-value pairs configured for the replication driver.
    std::shared_ptr<string> replicationParameters_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether incremental migration is disabled for the source server. Valid values:
    // 
    // *   true: Incremental migration is disabled. A migration job runs only once after the job is created.
    // *   false: Incremental migration is enabled. For an incremental migration job, SMC synchronizes incremental data to Alibaba Cloud at the interval specified by the `Frequency` parameter.
    std::shared_ptr<bool> runOnce_ = nullptr;
    // The time when the migration job is scheduled to run. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. The time must meet the following requirements:
    // 
    // *   The value must be within 30 days after the current time.
    // *   If you do not specify this parameter, you must manually start the migration job after the migration job is created. You can call the [StartReplicationJob](https://help.aliyun.com/document_detail/121823.html) operation to start the migration job.
    std::shared_ptr<string> scheduledStartTime_ = nullptr;
    // The ID of the source server.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The time when the migration job was started. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    // 
    // >  The time displayed in the SMC console is in the format of UTC+8.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the migration job. Valid values:
    // 
    // *   Ready: The migration job is not started.
    // *   Running: The migration job is running.
    // *   Stopped: The migration job is paused.
    // *   InError: An error occurs in the migration job.
    // *   Finished: The migration job is complete.
    // *   Waiting: The migration job is waiting to run.
    // *   Expired: The migration job has expired.
    // *   Deleting: The migration job is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The status information about the migration job.
    std::shared_ptr<string> statusInfo_ = nullptr;
    // The system disk partitions.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts> systemDiskParts_ = nullptr;
    // The size of the system disk of the destination ECS instance.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The information about tags that are attached to the SMC resource.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags> tags_ = nullptr;
    // The type of destination to which the source server is migrated. Valid values:
    // 
    // *   Image: After the migration job is complete, SMC generates an ECS image for the source server.
    // *   ContainerImage: After the migration job is complete, SMC generates a Docker container image for the source server.
    // *   TargetInstance: After the migration job is complete, SMC migrates the source server to the destination instance. If you set this parameter to TargetInstance, you must set the InstanceId parameter.
    std::shared_ptr<string> targetType_ = nullptr;
    // The ID of the intermediate instance.
    std::shared_ptr<string> transitionInstanceId_ = nullptr;
    // The ID of the vSwitch in the specified VPC.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The time when the migration job expired. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    // 
    // >  The time displayed in the SMC console is in the format of UTC+8.
    std::shared_ptr<string> validTime_ = nullptr;
    // The ID of a virtual private cloud (VPC) for which you have configured an Express Connect circuit or a VPN gateway.
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
