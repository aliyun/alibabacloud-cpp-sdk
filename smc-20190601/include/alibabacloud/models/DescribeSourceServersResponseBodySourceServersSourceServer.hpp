// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDataDisks.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDisks.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServer& obj) { 
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HeartbeatRate, heartbeatRate_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(KernelLevel, kernelLevel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ReplicationDriver, replicationDriver_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StatusInfo, statusInfo_);
      DARABONBA_PTR_TO_JSON(SystemDiskParts, systemDiskParts_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(SystemInfo, systemInfo_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServer& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HeartbeatRate, heartbeatRate_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(KernelLevel, kernelLevel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ReplicationDriver, replicationDriver_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StatusInfo, statusInfo_);
      DARABONBA_PTR_FROM_JSON(SystemDiskParts, systemDiskParts_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(SystemInfo, systemInfo_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServer() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServer(const DescribeSourceServersResponseBodySourceServersSourceServer &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServer(DescribeSourceServersResponseBodySourceServersSourceServer &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServer() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServer& operator=(const DescribeSourceServersResponseBodySourceServersSourceServer &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServer& operator=(DescribeSourceServersResponseBodySourceServersSourceServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentVersion_ != nullptr
        && this->architecture_ != nullptr && this->creationTime_ != nullptr && this->dataDisks_ != nullptr && this->description_ != nullptr && this->disks_ != nullptr
        && this->errorCode_ != nullptr && this->heartbeatRate_ != nullptr && this->jobId_ != nullptr && this->kernelLevel_ != nullptr && this->name_ != nullptr
        && this->platform_ != nullptr && this->replicationDriver_ != nullptr && this->resourceGroupId_ != nullptr && this->sourceId_ != nullptr && this->state_ != nullptr
        && this->statusInfo_ != nullptr && this->systemDiskParts_ != nullptr && this->systemDiskSize_ != nullptr && this->systemInfo_ != nullptr && this->tags_ != nullptr
        && this->workgroupId_ != nullptr; };
    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisks & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisks) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisks dataDisks() { DARABONBA_PTR_GET(dataDisks_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisks) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setDataDisks(const Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisks & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setDataDisks(Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisks && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisks & disks() const { DARABONBA_PTR_GET_CONST(disks_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisks) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerDisks disks() { DARABONBA_PTR_GET(disks_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisks) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setDisks(const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisks & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setDisks(Models::DescribeSourceServersResponseBodySourceServersSourceServerDisks && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // heartbeatRate Field Functions 
    bool hasHeartbeatRate() const { return this->heartbeatRate_ != nullptr;};
    void deleteHeartbeatRate() { this->heartbeatRate_ = nullptr;};
    inline int32_t heartbeatRate() const { DARABONBA_PTR_GET_DEFAULT(heartbeatRate_, 0) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setHeartbeatRate(int32_t heartbeatRate) { DARABONBA_PTR_SET_VALUE(heartbeatRate_, heartbeatRate) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // kernelLevel Field Functions 
    bool hasKernelLevel() const { return this->kernelLevel_ != nullptr;};
    void deleteKernelLevel() { this->kernelLevel_ = nullptr;};
    inline int32_t kernelLevel() const { DARABONBA_PTR_GET_DEFAULT(kernelLevel_, 0) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setKernelLevel(int32_t kernelLevel) { DARABONBA_PTR_SET_VALUE(kernelLevel_, kernelLevel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // replicationDriver Field Functions 
    bool hasReplicationDriver() const { return this->replicationDriver_ != nullptr;};
    void deleteReplicationDriver() { this->replicationDriver_ = nullptr;};
    inline string replicationDriver() const { DARABONBA_PTR_GET_DEFAULT(replicationDriver_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setReplicationDriver(string replicationDriver) { DARABONBA_PTR_SET_VALUE(replicationDriver_, replicationDriver) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statusInfo Field Functions 
    bool hasStatusInfo() const { return this->statusInfo_ != nullptr;};
    void deleteStatusInfo() { this->statusInfo_ = nullptr;};
    inline string statusInfo() const { DARABONBA_PTR_GET_DEFAULT(statusInfo_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setStatusInfo(string statusInfo) { DARABONBA_PTR_SET_VALUE(statusInfo_, statusInfo) };


    // systemDiskParts Field Functions 
    bool hasSystemDiskParts() const { return this->systemDiskParts_ != nullptr;};
    void deleteSystemDiskParts() { this->systemDiskParts_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts & systemDiskParts() const { DARABONBA_PTR_GET_CONST(systemDiskParts_, Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts systemDiskParts() { DARABONBA_PTR_GET(systemDiskParts_, Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setSystemDiskParts(const Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts & systemDiskParts) { DARABONBA_PTR_SET_VALUE(systemDiskParts_, systemDiskParts) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setSystemDiskParts(Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts && systemDiskParts) { DARABONBA_PTR_SET_RVALUE(systemDiskParts_, systemDiskParts) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // systemInfo Field Functions 
    bool hasSystemInfo() const { return this->systemInfo_ != nullptr;};
    void deleteSystemInfo() { this->systemInfo_ = nullptr;};
    inline string systemInfo() const { DARABONBA_PTR_GET_DEFAULT(systemInfo_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setSystemInfo(string systemInfo) { DARABONBA_PTR_SET_VALUE(systemInfo_, systemInfo) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeSourceServersResponseBodySourceServersSourceServerTags) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeSourceServersResponseBodySourceServersSourceServerTags) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setTags(const Models::DescribeSourceServersResponseBodySourceServersSourceServerTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setTags(Models::DescribeSourceServersResponseBodySourceServersSourceServerTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline string workgroupId() const { DARABONBA_PTR_GET_DEFAULT(workgroupId_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServer& setWorkgroupId(string workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };


  protected:
    // The version number of the SMC client.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // The system architecture of the migration source.
    std::shared_ptr<string> architecture_ = nullptr;
    // The time when the migration source was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The data disks on the migration source.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisks> dataDisks_ = nullptr;
    // The description of the migration source.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the disk.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisks> disks_ = nullptr;
    // The error code of the migration source.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The interval at which heartbeats are sent from the SMC client. Unit: seconds.
    std::shared_ptr<int32_t> heartbeatRate_ = nullptr;
    // The ID of the last migration job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The kernel level of the migration source.
    std::shared_ptr<int32_t> kernelLevel_ = nullptr;
    // The name of the migration source.
    std::shared_ptr<string> name_ = nullptr;
    // The operating system of the migration source.
    std::shared_ptr<string> platform_ = nullptr;
    // The replication driver used for migration. Default value: SMT.
    std::shared_ptr<string> replicationDriver_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the migration source.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The state of the migration source.
    std::shared_ptr<string> state_ = nullptr;
    // The status information of the migration source. This parameter is returned if the migration source is in the Unavailable state. The value of this parameter consists of key-value pairs in the JSON format. Sample keys:
    // 
    //     error_code: The error code.
    //     error_msg: the error message.
    std::shared_ptr<string> statusInfo_ = nullptr;
    // The information about the system disk partition.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts> systemDiskParts_ = nullptr;
    // The system disk size of the migration source. Unit: GiB
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The system information of the migration source. The parameter must be specified as key-value pairs in the JSON format. The key-value pairs are extensible and have fixed keys. Maximum value: 1 KB. Example:
    // 
    //     agent_mode: the running mode.
    //     agent_type: the type of the run.
    //     client_type: the type of the client.
    //     hostname : the hostname.
    //     ipv4:IPv4 address
    //     ipv6: IPv6 address
    //     cores: the number of CPU cores.
    //     cpu_usage: the CPU utilization.
    //     memory: the memory size.
    //     memory_usage: the memory usage.
    std::shared_ptr<string> systemInfo_ = nullptr;
    // The tag details.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerTags> tags_ = nullptr;
    // The workgroup ID.
    std::shared_ptr<string> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
