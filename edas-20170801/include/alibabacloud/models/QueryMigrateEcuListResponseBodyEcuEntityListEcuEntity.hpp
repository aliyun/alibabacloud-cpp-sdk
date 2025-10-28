// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMIGRATEECULISTRESPONSEBODYECUENTITYLISTECUENTITY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMIGRATEECULISTRESPONSEBODYECUENTITYLISTECUENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableCpu, availableCpu_);
      DARABONBA_PTR_TO_JSON(AvailableMem, availableMem_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DockerEnv, dockerEnv_);
      DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
      DARABONBA_PTR_TO_JSON(HeartbeatTime, heartbeatTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpAddr, ipAddr_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableCpu, availableCpu_);
      DARABONBA_PTR_FROM_JSON(AvailableMem, availableMem_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DockerEnv, dockerEnv_);
      DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
      DARABONBA_PTR_FROM_JSON(HeartbeatTime, heartbeatTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpAddr, ipAddr_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity() = default ;
    QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity(const QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity &) = default ;
    QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity(QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity &&) = default ;
    QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity() = default ;
    QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& operator=(const QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity &) = default ;
    QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& operator=(QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableCpu_ == nullptr
        && return this->availableMem_ == nullptr && return this->cpu_ == nullptr && return this->createTime_ == nullptr && return this->dockerEnv_ == nullptr && return this->ecuId_ == nullptr
        && return this->heartbeatTime_ == nullptr && return this->instanceId_ == nullptr && return this->ipAddr_ == nullptr && return this->mem_ == nullptr && return this->name_ == nullptr
        && return this->online_ == nullptr && return this->regionId_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr && return this->vpcId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // availableCpu Field Functions 
    bool hasAvailableCpu() const { return this->availableCpu_ != nullptr;};
    void deleteAvailableCpu() { this->availableCpu_ = nullptr;};
    inline int32_t availableCpu() const { DARABONBA_PTR_GET_DEFAULT(availableCpu_, 0) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setAvailableCpu(int32_t availableCpu) { DARABONBA_PTR_SET_VALUE(availableCpu_, availableCpu) };


    // availableMem Field Functions 
    bool hasAvailableMem() const { return this->availableMem_ != nullptr;};
    void deleteAvailableMem() { this->availableMem_ = nullptr;};
    inline int32_t availableMem() const { DARABONBA_PTR_GET_DEFAULT(availableMem_, 0) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setAvailableMem(int32_t availableMem) { DARABONBA_PTR_SET_VALUE(availableMem_, availableMem) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dockerEnv Field Functions 
    bool hasDockerEnv() const { return this->dockerEnv_ != nullptr;};
    void deleteDockerEnv() { this->dockerEnv_ = nullptr;};
    inline bool dockerEnv() const { DARABONBA_PTR_GET_DEFAULT(dockerEnv_, false) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setDockerEnv(bool dockerEnv) { DARABONBA_PTR_SET_VALUE(dockerEnv_, dockerEnv) };


    // ecuId Field Functions 
    bool hasEcuId() const { return this->ecuId_ != nullptr;};
    void deleteEcuId() { this->ecuId_ = nullptr;};
    inline string ecuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


    // heartbeatTime Field Functions 
    bool hasHeartbeatTime() const { return this->heartbeatTime_ != nullptr;};
    void deleteHeartbeatTime() { this->heartbeatTime_ = nullptr;};
    inline int64_t heartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTime_, 0L) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setHeartbeatTime(int64_t heartbeatTime) { DARABONBA_PTR_SET_VALUE(heartbeatTime_, heartbeatTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipAddr Field Functions 
    bool hasIpAddr() const { return this->ipAddr_ != nullptr;};
    void deleteIpAddr() { this->ipAddr_ = nullptr;};
    inline string ipAddr() const { DARABONBA_PTR_GET_DEFAULT(ipAddr_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setIpAddr(string ipAddr) { DARABONBA_PTR_SET_VALUE(ipAddr_, ipAddr) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline QueryMigrateEcuListResponseBodyEcuEntityListEcuEntity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of available CPUs. Unit: cores.
    std::shared_ptr<int32_t> availableCpu_ = nullptr;
    // The size of available memory. Unit: MB.
    std::shared_ptr<int32_t> availableMem_ = nullptr;
    // The CPU quota set by the system. Unit: cores. The value 0 indicates that no quota is set by the system.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the ECU was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether Docker is installed. Valid values:
    // 
    // *   true: Docker is installed.
    // *   false: Docker is not installed.
    std::shared_ptr<bool> dockerEnv_ = nullptr;
    // The unique ID of the ECU. To query the ID, you can run the `dmidecode` command on the ECS instance that corresponds to the ECU.
    std::shared_ptr<string> ecuId_ = nullptr;
    // The time when the last heartbeat detection was performed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> heartbeatTime_ = nullptr;
    // The ID of the ECU.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The private IP address of the ECU.
    std::shared_ptr<string> ipAddr_ = nullptr;
    // The total size of memory.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The name of the ECU.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the ECU is online. Valid values:
    // 
    // *   true: The ECU is online.
    // *   false: The ECU is offline.
    std::shared_ptr<bool> online_ = nullptr;
    // The ID of the region where the ECU resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the ECU was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the Alibaba Cloud account to which the ECU belongs.
    std::shared_ptr<string> userId_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone where the ECU resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
