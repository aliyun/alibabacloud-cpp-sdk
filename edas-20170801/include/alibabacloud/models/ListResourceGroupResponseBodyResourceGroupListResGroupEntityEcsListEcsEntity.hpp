// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYECSLISTECSENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYECSLISTECSENTITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity.hpp>
#include <alibabacloud/models/ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcuEntity, ecuEntity_);
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SerialNum, serialNum_);
      DARABONBA_PTR_TO_JSON(SgId, sgId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VpcEntity, vpcEntity_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcuEntity, ecuEntity_);
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SerialNum, serialNum_);
      DARABONBA_PTR_FROM_JSON(SgId, sgId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VpcEntity, vpcEntity_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity(const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity(ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity &&) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& operator=(const ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& operator=(ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->description_ == nullptr && return this->ecuEntity_ == nullptr && return this->eip_ == nullptr && return this->expired_ == nullptr && return this->groupId_ == nullptr
        && return this->hostName_ == nullptr && return this->innerIp_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->mem_ == nullptr
        && return this->privateIp_ == nullptr && return this->publicIp_ == nullptr && return this->regionId_ == nullptr && return this->serialNum_ == nullptr && return this->sgId_ == nullptr
        && return this->status_ == nullptr && return this->userId_ == nullptr && return this->vpcEntity_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecuEntity Field Functions 
    bool hasEcuEntity() const { return this->ecuEntity_ != nullptr;};
    void deleteEcuEntity() { this->ecuEntity_ = nullptr;};
    inline const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity & ecuEntity() const { DARABONBA_PTR_GET_CONST(ecuEntity_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity) };
    inline Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity ecuEntity() { DARABONBA_PTR_GET(ecuEntity_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setEcuEntity(const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity & ecuEntity) { DARABONBA_PTR_SET_VALUE(ecuEntity_, ecuEntity) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setEcuEntity(Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity && ecuEntity) { DARABONBA_PTR_SET_RVALUE(ecuEntity_, ecuEntity) };


    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // innerIp Field Functions 
    bool hasInnerIp() const { return this->innerIp_ != nullptr;};
    void deleteInnerIp() { this->innerIp_ = nullptr;};
    inline string innerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serialNum Field Functions 
    bool hasSerialNum() const { return this->serialNum_ != nullptr;};
    void deleteSerialNum() { this->serialNum_ = nullptr;};
    inline string serialNum() const { DARABONBA_PTR_GET_DEFAULT(serialNum_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setSerialNum(string serialNum) { DARABONBA_PTR_SET_VALUE(serialNum_, serialNum) };


    // sgId Field Functions 
    bool hasSgId() const { return this->sgId_ != nullptr;};
    void deleteSgId() { this->sgId_ = nullptr;};
    inline string sgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcEntity Field Functions 
    bool hasVpcEntity() const { return this->vpcEntity_ != nullptr;};
    void deleteVpcEntity() { this->vpcEntity_ = nullptr;};
    inline const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity & vpcEntity() const { DARABONBA_PTR_GET_CONST(vpcEntity_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity) };
    inline Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity vpcEntity() { DARABONBA_PTR_GET(vpcEntity_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setVpcEntity(const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity & vpcEntity) { DARABONBA_PTR_SET_VALUE(vpcEntity_, vpcEntity) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setVpcEntity(Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity && vpcEntity) { DARABONBA_PTR_SET_RVALUE(vpcEntity_, vpcEntity) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The total number of CPU cores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The description of the ECS instance.
    std::shared_ptr<string> description_ = nullptr;
    // The elastic compute unit (ECU) that corresponds to the ECS instance.
    std::shared_ptr<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityEcuEntity> ecuEntity_ = nullptr;
    // The elastic IP address (EIP).
    std::shared_ptr<string> eip_ = nullptr;
    // Indicates whether the ECS instance has expired. Valid values:
    // 
    // *   true: The ECS instance has expired.
    // *   false: The ECS instance has not expired.
    std::shared_ptr<bool> expired_ = nullptr;
    // The ID of the resource group in Enterprise Distributed Application Service (EDAS).
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the host.
    std::shared_ptr<string> hostName_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> innerIp_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the ECS instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The total size of memory. Unit: MB.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The private IP address of the ECS instance.
    std::shared_ptr<string> privateIp_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> publicIp_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The serial number of the ECS instance.
    std::shared_ptr<string> serialNum_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> sgId_ = nullptr;
    // The status of the ECS instance. Valid values:
    // 
    // *   Pending: The ECS instance is being created.
    // *   Running: The ECS instance is running.
    // *   Starting: The ECS instance is being started.
    // *   Stopping: The ECS instance is being stopped.
    // *   Stopped: The ECS instance is stopped.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the user account.
    std::shared_ptr<string> userId_ = nullptr;
    // The VPCs.
    std::shared_ptr<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsListEcsEntityVpcEntity> vpcEntity_ = nullptr;
    // The unique ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
