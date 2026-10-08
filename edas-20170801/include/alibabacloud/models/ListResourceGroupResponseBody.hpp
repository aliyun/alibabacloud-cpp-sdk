// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
    };
    ListResourceGroupResponseBody() = default ;
    ListResourceGroupResponseBody(const ListResourceGroupResponseBody &) = default ;
    ListResourceGroupResponseBody(ListResourceGroupResponseBody &&) = default ;
    ListResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBody() = default ;
    ListResourceGroupResponseBody& operator=(const ListResourceGroupResponseBody &) = default ;
    ListResourceGroupResponseBody& operator=(ListResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(ResGroupEntity, resGroupEntity_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(ResGroupEntity, resGroupEntity_);
      };
      ResourceGroupList() = default ;
      ResourceGroupList(const ResourceGroupList &) = default ;
      ResourceGroupList(ResourceGroupList &&) = default ;
      ResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroupList() = default ;
      ResourceGroupList& operator=(const ResourceGroupList &) = default ;
      ResourceGroupList& operator=(ResourceGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResGroupEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResGroupEntity& obj) { 
          DARABONBA_PTR_TO_JSON(AdminUserId, adminUserId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SlbList, slbList_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(ecsList, ecsList_);
        };
        friend void from_json(const Darabonba::Json& j, ResGroupEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(AdminUserId, adminUserId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SlbList, slbList_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(ecsList, ecsList_);
        };
        ResGroupEntity() = default ;
        ResGroupEntity(const ResGroupEntity &) = default ;
        ResGroupEntity(ResGroupEntity &&) = default ;
        ResGroupEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResGroupEntity() = default ;
        ResGroupEntity& operator=(const ResGroupEntity &) = default ;
        ResGroupEntity& operator=(ResGroupEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EcsList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EcsList& obj) { 
            DARABONBA_PTR_TO_JSON(EcsEntity, ecsEntity_);
          };
          friend void from_json(const Darabonba::Json& j, EcsList& obj) { 
            DARABONBA_PTR_FROM_JSON(EcsEntity, ecsEntity_);
          };
          EcsList() = default ;
          EcsList(const EcsList &) = default ;
          EcsList(EcsList &&) = default ;
          EcsList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EcsList() = default ;
          EcsList& operator=(const EcsList &) = default ;
          EcsList& operator=(EcsList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class EcsEntity : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EcsEntity& obj) { 
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
            friend void from_json(const Darabonba::Json& j, EcsEntity& obj) { 
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
            EcsEntity() = default ;
            EcsEntity(const EcsEntity &) = default ;
            EcsEntity(EcsEntity &&) = default ;
            EcsEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EcsEntity() = default ;
            EcsEntity& operator=(const EcsEntity &) = default ;
            EcsEntity& operator=(EcsEntity &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VpcEntity : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VpcEntity& obj) { 
                DARABONBA_PTR_TO_JSON(Cidrblock, cidrblock_);
                DARABONBA_PTR_TO_JSON(Description, description_);
                DARABONBA_PTR_TO_JSON(EcsNum, ecsNum_);
                DARABONBA_PTR_TO_JSON(Expired, expired_);
                DARABONBA_PTR_TO_JSON(RegionId, regionId_);
                DARABONBA_PTR_TO_JSON(Status, status_);
                DARABONBA_PTR_TO_JSON(UserId, userId_);
                DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
                DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
              };
              friend void from_json(const Darabonba::Json& j, VpcEntity& obj) { 
                DARABONBA_PTR_FROM_JSON(Cidrblock, cidrblock_);
                DARABONBA_PTR_FROM_JSON(Description, description_);
                DARABONBA_PTR_FROM_JSON(EcsNum, ecsNum_);
                DARABONBA_PTR_FROM_JSON(Expired, expired_);
                DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
                DARABONBA_PTR_FROM_JSON(Status, status_);
                DARABONBA_PTR_FROM_JSON(UserId, userId_);
                DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
                DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
              };
              VpcEntity() = default ;
              VpcEntity(const VpcEntity &) = default ;
              VpcEntity(VpcEntity &&) = default ;
              VpcEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VpcEntity() = default ;
              VpcEntity& operator=(const VpcEntity &) = default ;
              VpcEntity& operator=(VpcEntity &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->cidrblock_ == nullptr
        && this->description_ == nullptr && this->ecsNum_ == nullptr && this->expired_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->userId_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
              // cidrblock Field Functions 
              bool hasCidrblock() const { return this->cidrblock_ != nullptr;};
              void deleteCidrblock() { this->cidrblock_ = nullptr;};
              inline string getCidrblock() const { DARABONBA_PTR_GET_DEFAULT(cidrblock_, "") };
              inline VpcEntity& setCidrblock(string cidrblock) { DARABONBA_PTR_SET_VALUE(cidrblock_, cidrblock) };


              // description Field Functions 
              bool hasDescription() const { return this->description_ != nullptr;};
              void deleteDescription() { this->description_ = nullptr;};
              inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
              inline VpcEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


              // ecsNum Field Functions 
              bool hasEcsNum() const { return this->ecsNum_ != nullptr;};
              void deleteEcsNum() { this->ecsNum_ = nullptr;};
              inline int32_t getEcsNum() const { DARABONBA_PTR_GET_DEFAULT(ecsNum_, 0) };
              inline VpcEntity& setEcsNum(int32_t ecsNum) { DARABONBA_PTR_SET_VALUE(ecsNum_, ecsNum) };


              // expired Field Functions 
              bool hasExpired() const { return this->expired_ != nullptr;};
              void deleteExpired() { this->expired_ = nullptr;};
              inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
              inline VpcEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


              // regionId Field Functions 
              bool hasRegionId() const { return this->regionId_ != nullptr;};
              void deleteRegionId() { this->regionId_ = nullptr;};
              inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
              inline VpcEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
              inline VpcEntity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


              // userId Field Functions 
              bool hasUserId() const { return this->userId_ != nullptr;};
              void deleteUserId() { this->userId_ = nullptr;};
              inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
              inline VpcEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


              // vpcId Field Functions 
              bool hasVpcId() const { return this->vpcId_ != nullptr;};
              void deleteVpcId() { this->vpcId_ = nullptr;};
              inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
              inline VpcEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


              // vpcName Field Functions 
              bool hasVpcName() const { return this->vpcName_ != nullptr;};
              void deleteVpcName() { this->vpcName_ = nullptr;};
              inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
              inline VpcEntity& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


            protected:
              shared_ptr<string> cidrblock_ {};
              shared_ptr<string> description_ {};
              shared_ptr<int32_t> ecsNum_ {};
              shared_ptr<bool> expired_ {};
              shared_ptr<string> regionId_ {};
              shared_ptr<string> status_ {};
              shared_ptr<string> userId_ {};
              shared_ptr<string> vpcId_ {};
              shared_ptr<string> vpcName_ {};
            };

            class EcuEntity : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const EcuEntity& obj) { 
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
              friend void from_json(const Darabonba::Json& j, EcuEntity& obj) { 
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
              EcuEntity() = default ;
              EcuEntity(const EcuEntity &) = default ;
              EcuEntity(EcuEntity &&) = default ;
              EcuEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~EcuEntity() = default ;
              EcuEntity& operator=(const EcuEntity &) = default ;
              EcuEntity& operator=(EcuEntity &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->availableCpu_ == nullptr
        && this->availableMem_ == nullptr && this->cpu_ == nullptr && this->createTime_ == nullptr && this->dockerEnv_ == nullptr && this->ecuId_ == nullptr
        && this->heartbeatTime_ == nullptr && this->instanceId_ == nullptr && this->ipAddr_ == nullptr && this->mem_ == nullptr && this->name_ == nullptr
        && this->online_ == nullptr && this->regionId_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
              // availableCpu Field Functions 
              bool hasAvailableCpu() const { return this->availableCpu_ != nullptr;};
              void deleteAvailableCpu() { this->availableCpu_ = nullptr;};
              inline int32_t getAvailableCpu() const { DARABONBA_PTR_GET_DEFAULT(availableCpu_, 0) };
              inline EcuEntity& setAvailableCpu(int32_t availableCpu) { DARABONBA_PTR_SET_VALUE(availableCpu_, availableCpu) };


              // availableMem Field Functions 
              bool hasAvailableMem() const { return this->availableMem_ != nullptr;};
              void deleteAvailableMem() { this->availableMem_ = nullptr;};
              inline int32_t getAvailableMem() const { DARABONBA_PTR_GET_DEFAULT(availableMem_, 0) };
              inline EcuEntity& setAvailableMem(int32_t availableMem) { DARABONBA_PTR_SET_VALUE(availableMem_, availableMem) };


              // cpu Field Functions 
              bool hasCpu() const { return this->cpu_ != nullptr;};
              void deleteCpu() { this->cpu_ = nullptr;};
              inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
              inline EcuEntity& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


              // createTime Field Functions 
              bool hasCreateTime() const { return this->createTime_ != nullptr;};
              void deleteCreateTime() { this->createTime_ = nullptr;};
              inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
              inline EcuEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


              // dockerEnv Field Functions 
              bool hasDockerEnv() const { return this->dockerEnv_ != nullptr;};
              void deleteDockerEnv() { this->dockerEnv_ = nullptr;};
              inline bool getDockerEnv() const { DARABONBA_PTR_GET_DEFAULT(dockerEnv_, false) };
              inline EcuEntity& setDockerEnv(bool dockerEnv) { DARABONBA_PTR_SET_VALUE(dockerEnv_, dockerEnv) };


              // ecuId Field Functions 
              bool hasEcuId() const { return this->ecuId_ != nullptr;};
              void deleteEcuId() { this->ecuId_ = nullptr;};
              inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
              inline EcuEntity& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


              // heartbeatTime Field Functions 
              bool hasHeartbeatTime() const { return this->heartbeatTime_ != nullptr;};
              void deleteHeartbeatTime() { this->heartbeatTime_ = nullptr;};
              inline int64_t getHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTime_, 0L) };
              inline EcuEntity& setHeartbeatTime(int64_t heartbeatTime) { DARABONBA_PTR_SET_VALUE(heartbeatTime_, heartbeatTime) };


              // instanceId Field Functions 
              bool hasInstanceId() const { return this->instanceId_ != nullptr;};
              void deleteInstanceId() { this->instanceId_ = nullptr;};
              inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
              inline EcuEntity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


              // ipAddr Field Functions 
              bool hasIpAddr() const { return this->ipAddr_ != nullptr;};
              void deleteIpAddr() { this->ipAddr_ = nullptr;};
              inline string getIpAddr() const { DARABONBA_PTR_GET_DEFAULT(ipAddr_, "") };
              inline EcuEntity& setIpAddr(string ipAddr) { DARABONBA_PTR_SET_VALUE(ipAddr_, ipAddr) };


              // mem Field Functions 
              bool hasMem() const { return this->mem_ != nullptr;};
              void deleteMem() { this->mem_ = nullptr;};
              inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
              inline EcuEntity& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline EcuEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // online Field Functions 
              bool hasOnline() const { return this->online_ != nullptr;};
              void deleteOnline() { this->online_ = nullptr;};
              inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
              inline EcuEntity& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


              // regionId Field Functions 
              bool hasRegionId() const { return this->regionId_ != nullptr;};
              void deleteRegionId() { this->regionId_ = nullptr;};
              inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
              inline EcuEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


              // updateTime Field Functions 
              bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
              void deleteUpdateTime() { this->updateTime_ = nullptr;};
              inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
              inline EcuEntity& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


              // userId Field Functions 
              bool hasUserId() const { return this->userId_ != nullptr;};
              void deleteUserId() { this->userId_ = nullptr;};
              inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
              inline EcuEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


              // vpcId Field Functions 
              bool hasVpcId() const { return this->vpcId_ != nullptr;};
              void deleteVpcId() { this->vpcId_ = nullptr;};
              inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
              inline EcuEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


              // zoneId Field Functions 
              bool hasZoneId() const { return this->zoneId_ != nullptr;};
              void deleteZoneId() { this->zoneId_ = nullptr;};
              inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
              inline EcuEntity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


            protected:
              shared_ptr<int32_t> availableCpu_ {};
              shared_ptr<int32_t> availableMem_ {};
              shared_ptr<int32_t> cpu_ {};
              shared_ptr<int64_t> createTime_ {};
              shared_ptr<bool> dockerEnv_ {};
              shared_ptr<string> ecuId_ {};
              shared_ptr<int64_t> heartbeatTime_ {};
              shared_ptr<string> instanceId_ {};
              shared_ptr<string> ipAddr_ {};
              shared_ptr<int32_t> mem_ {};
              shared_ptr<string> name_ {};
              shared_ptr<bool> online_ {};
              shared_ptr<string> regionId_ {};
              shared_ptr<int64_t> updateTime_ {};
              shared_ptr<string> userId_ {};
              shared_ptr<string> vpcId_ {};
              shared_ptr<string> zoneId_ {};
            };

            virtual bool empty() const override { return this->cpu_ == nullptr
        && this->description_ == nullptr && this->ecuEntity_ == nullptr && this->eip_ == nullptr && this->expired_ == nullptr && this->groupId_ == nullptr
        && this->hostName_ == nullptr && this->innerIp_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->mem_ == nullptr
        && this->privateIp_ == nullptr && this->publicIp_ == nullptr && this->regionId_ == nullptr && this->serialNum_ == nullptr && this->sgId_ == nullptr
        && this->status_ == nullptr && this->userId_ == nullptr && this->vpcEntity_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
            // cpu Field Functions 
            bool hasCpu() const { return this->cpu_ != nullptr;};
            void deleteCpu() { this->cpu_ = nullptr;};
            inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
            inline EcsEntity& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline EcsEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // ecuEntity Field Functions 
            bool hasEcuEntity() const { return this->ecuEntity_ != nullptr;};
            void deleteEcuEntity() { this->ecuEntity_ = nullptr;};
            inline const EcsEntity::EcuEntity & getEcuEntity() const { DARABONBA_PTR_GET_CONST(ecuEntity_, EcsEntity::EcuEntity) };
            inline EcsEntity::EcuEntity getEcuEntity() { DARABONBA_PTR_GET(ecuEntity_, EcsEntity::EcuEntity) };
            inline EcsEntity& setEcuEntity(const EcsEntity::EcuEntity & ecuEntity) { DARABONBA_PTR_SET_VALUE(ecuEntity_, ecuEntity) };
            inline EcsEntity& setEcuEntity(EcsEntity::EcuEntity && ecuEntity) { DARABONBA_PTR_SET_RVALUE(ecuEntity_, ecuEntity) };


            // eip Field Functions 
            bool hasEip() const { return this->eip_ != nullptr;};
            void deleteEip() { this->eip_ = nullptr;};
            inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
            inline EcsEntity& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


            // expired Field Functions 
            bool hasExpired() const { return this->expired_ != nullptr;};
            void deleteExpired() { this->expired_ = nullptr;};
            inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
            inline EcsEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


            // groupId Field Functions 
            bool hasGroupId() const { return this->groupId_ != nullptr;};
            void deleteGroupId() { this->groupId_ = nullptr;};
            inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
            inline EcsEntity& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


            // hostName Field Functions 
            bool hasHostName() const { return this->hostName_ != nullptr;};
            void deleteHostName() { this->hostName_ = nullptr;};
            inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
            inline EcsEntity& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


            // innerIp Field Functions 
            bool hasInnerIp() const { return this->innerIp_ != nullptr;};
            void deleteInnerIp() { this->innerIp_ = nullptr;};
            inline string getInnerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
            inline EcsEntity& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline EcsEntity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // instanceName Field Functions 
            bool hasInstanceName() const { return this->instanceName_ != nullptr;};
            void deleteInstanceName() { this->instanceName_ = nullptr;};
            inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
            inline EcsEntity& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


            // mem Field Functions 
            bool hasMem() const { return this->mem_ != nullptr;};
            void deleteMem() { this->mem_ = nullptr;};
            inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
            inline EcsEntity& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


            // privateIp Field Functions 
            bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
            void deletePrivateIp() { this->privateIp_ = nullptr;};
            inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
            inline EcsEntity& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


            // publicIp Field Functions 
            bool hasPublicIp() const { return this->publicIp_ != nullptr;};
            void deletePublicIp() { this->publicIp_ = nullptr;};
            inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
            inline EcsEntity& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline EcsEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // serialNum Field Functions 
            bool hasSerialNum() const { return this->serialNum_ != nullptr;};
            void deleteSerialNum() { this->serialNum_ = nullptr;};
            inline string getSerialNum() const { DARABONBA_PTR_GET_DEFAULT(serialNum_, "") };
            inline EcsEntity& setSerialNum(string serialNum) { DARABONBA_PTR_SET_VALUE(serialNum_, serialNum) };


            // sgId Field Functions 
            bool hasSgId() const { return this->sgId_ != nullptr;};
            void deleteSgId() { this->sgId_ = nullptr;};
            inline string getSgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
            inline EcsEntity& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline EcsEntity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // userId Field Functions 
            bool hasUserId() const { return this->userId_ != nullptr;};
            void deleteUserId() { this->userId_ = nullptr;};
            inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
            inline EcsEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


            // vpcEntity Field Functions 
            bool hasVpcEntity() const { return this->vpcEntity_ != nullptr;};
            void deleteVpcEntity() { this->vpcEntity_ = nullptr;};
            inline const EcsEntity::VpcEntity & getVpcEntity() const { DARABONBA_PTR_GET_CONST(vpcEntity_, EcsEntity::VpcEntity) };
            inline EcsEntity::VpcEntity getVpcEntity() { DARABONBA_PTR_GET(vpcEntity_, EcsEntity::VpcEntity) };
            inline EcsEntity& setVpcEntity(const EcsEntity::VpcEntity & vpcEntity) { DARABONBA_PTR_SET_VALUE(vpcEntity_, vpcEntity) };
            inline EcsEntity& setVpcEntity(EcsEntity::VpcEntity && vpcEntity) { DARABONBA_PTR_SET_RVALUE(vpcEntity_, vpcEntity) };


            // vpcId Field Functions 
            bool hasVpcId() const { return this->vpcId_ != nullptr;};
            void deleteVpcId() { this->vpcId_ = nullptr;};
            inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
            inline EcsEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline EcsEntity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            shared_ptr<int32_t> cpu_ {};
            shared_ptr<string> description_ {};
            shared_ptr<EcsEntity::EcuEntity> ecuEntity_ {};
            shared_ptr<string> eip_ {};
            shared_ptr<bool> expired_ {};
            shared_ptr<string> groupId_ {};
            shared_ptr<string> hostName_ {};
            shared_ptr<string> innerIp_ {};
            shared_ptr<string> instanceId_ {};
            shared_ptr<string> instanceName_ {};
            shared_ptr<int32_t> mem_ {};
            shared_ptr<string> privateIp_ {};
            shared_ptr<string> publicIp_ {};
            shared_ptr<string> regionId_ {};
            shared_ptr<string> serialNum_ {};
            shared_ptr<string> sgId_ {};
            shared_ptr<string> status_ {};
            shared_ptr<string> userId_ {};
            shared_ptr<EcsEntity::VpcEntity> vpcEntity_ {};
            shared_ptr<string> vpcId_ {};
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->ecsEntity_ == nullptr; };
          // ecsEntity Field Functions 
          bool hasEcsEntity() const { return this->ecsEntity_ != nullptr;};
          void deleteEcsEntity() { this->ecsEntity_ = nullptr;};
          inline const vector<EcsList::EcsEntity> & getEcsEntity() const { DARABONBA_PTR_GET_CONST(ecsEntity_, vector<EcsList::EcsEntity>) };
          inline vector<EcsList::EcsEntity> getEcsEntity() { DARABONBA_PTR_GET(ecsEntity_, vector<EcsList::EcsEntity>) };
          inline EcsList& setEcsEntity(const vector<EcsList::EcsEntity> & ecsEntity) { DARABONBA_PTR_SET_VALUE(ecsEntity_, ecsEntity) };
          inline EcsList& setEcsEntity(vector<EcsList::EcsEntity> && ecsEntity) { DARABONBA_PTR_SET_RVALUE(ecsEntity_, ecsEntity) };


        protected:
          shared_ptr<vector<EcsList::EcsEntity>> ecsEntity_ {};
        };

        class SlbList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SlbList& obj) { 
            DARABONBA_PTR_TO_JSON(SlbEntity, slbEntity_);
          };
          friend void from_json(const Darabonba::Json& j, SlbList& obj) { 
            DARABONBA_PTR_FROM_JSON(SlbEntity, slbEntity_);
          };
          SlbList() = default ;
          SlbList(const SlbList &) = default ;
          SlbList(SlbList &&) = default ;
          SlbList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SlbList() = default ;
          SlbList& operator=(const SlbList &) = default ;
          SlbList& operator=(SlbList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SlbEntity : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SlbEntity& obj) { 
              DARABONBA_PTR_TO_JSON(Address, address_);
              DARABONBA_PTR_TO_JSON(AddressType, addressType_);
              DARABONBA_PTR_TO_JSON(Expired, expired_);
              DARABONBA_PTR_TO_JSON(GroupId, groupId_);
              DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(SlbId, slbId_);
              DARABONBA_PTR_TO_JSON(SlbName, slbName_);
              DARABONBA_PTR_TO_JSON(SlbStatus, slbStatus_);
              DARABONBA_PTR_TO_JSON(UserId, userId_);
              DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
              DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
            };
            friend void from_json(const Darabonba::Json& j, SlbEntity& obj) { 
              DARABONBA_PTR_FROM_JSON(Address, address_);
              DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
              DARABONBA_PTR_FROM_JSON(Expired, expired_);
              DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
              DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
              DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
              DARABONBA_PTR_FROM_JSON(SlbStatus, slbStatus_);
              DARABONBA_PTR_FROM_JSON(UserId, userId_);
              DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
              DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
            };
            SlbEntity() = default ;
            SlbEntity(const SlbEntity &) = default ;
            SlbEntity(SlbEntity &&) = default ;
            SlbEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SlbEntity() = default ;
            SlbEntity& operator=(const SlbEntity &) = default ;
            SlbEntity& operator=(SlbEntity &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->address_ == nullptr
        && this->addressType_ == nullptr && this->expired_ == nullptr && this->groupId_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr
        && this->slbId_ == nullptr && this->slbName_ == nullptr && this->slbStatus_ == nullptr && this->userId_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchId_ == nullptr; };
            // address Field Functions 
            bool hasAddress() const { return this->address_ != nullptr;};
            void deleteAddress() { this->address_ = nullptr;};
            inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
            inline SlbEntity& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


            // addressType Field Functions 
            bool hasAddressType() const { return this->addressType_ != nullptr;};
            void deleteAddressType() { this->addressType_ = nullptr;};
            inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
            inline SlbEntity& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


            // expired Field Functions 
            bool hasExpired() const { return this->expired_ != nullptr;};
            void deleteExpired() { this->expired_ = nullptr;};
            inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
            inline SlbEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


            // groupId Field Functions 
            bool hasGroupId() const { return this->groupId_ != nullptr;};
            void deleteGroupId() { this->groupId_ = nullptr;};
            inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
            inline SlbEntity& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


            // networkType Field Functions 
            bool hasNetworkType() const { return this->networkType_ != nullptr;};
            void deleteNetworkType() { this->networkType_ = nullptr;};
            inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
            inline SlbEntity& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline SlbEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // slbId Field Functions 
            bool hasSlbId() const { return this->slbId_ != nullptr;};
            void deleteSlbId() { this->slbId_ = nullptr;};
            inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
            inline SlbEntity& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


            // slbName Field Functions 
            bool hasSlbName() const { return this->slbName_ != nullptr;};
            void deleteSlbName() { this->slbName_ = nullptr;};
            inline string getSlbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
            inline SlbEntity& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


            // slbStatus Field Functions 
            bool hasSlbStatus() const { return this->slbStatus_ != nullptr;};
            void deleteSlbStatus() { this->slbStatus_ = nullptr;};
            inline string getSlbStatus() const { DARABONBA_PTR_GET_DEFAULT(slbStatus_, "") };
            inline SlbEntity& setSlbStatus(string slbStatus) { DARABONBA_PTR_SET_VALUE(slbStatus_, slbStatus) };


            // userId Field Functions 
            bool hasUserId() const { return this->userId_ != nullptr;};
            void deleteUserId() { this->userId_ = nullptr;};
            inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
            inline SlbEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


            // vpcId Field Functions 
            bool hasVpcId() const { return this->vpcId_ != nullptr;};
            void deleteVpcId() { this->vpcId_ = nullptr;};
            inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
            inline SlbEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


            // vswitchId Field Functions 
            bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
            void deleteVswitchId() { this->vswitchId_ = nullptr;};
            inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
            inline SlbEntity& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


          protected:
            shared_ptr<string> address_ {};
            shared_ptr<string> addressType_ {};
            shared_ptr<bool> expired_ {};
            shared_ptr<int32_t> groupId_ {};
            shared_ptr<string> networkType_ {};
            shared_ptr<string> regionId_ {};
            shared_ptr<string> slbId_ {};
            shared_ptr<string> slbName_ {};
            shared_ptr<string> slbStatus_ {};
            shared_ptr<string> userId_ {};
            shared_ptr<string> vpcId_ {};
            shared_ptr<string> vswitchId_ {};
          };

          virtual bool empty() const override { return this->slbEntity_ == nullptr; };
          // slbEntity Field Functions 
          bool hasSlbEntity() const { return this->slbEntity_ != nullptr;};
          void deleteSlbEntity() { this->slbEntity_ = nullptr;};
          inline const vector<SlbList::SlbEntity> & getSlbEntity() const { DARABONBA_PTR_GET_CONST(slbEntity_, vector<SlbList::SlbEntity>) };
          inline vector<SlbList::SlbEntity> getSlbEntity() { DARABONBA_PTR_GET(slbEntity_, vector<SlbList::SlbEntity>) };
          inline SlbList& setSlbEntity(const vector<SlbList::SlbEntity> & slbEntity) { DARABONBA_PTR_SET_VALUE(slbEntity_, slbEntity) };
          inline SlbList& setSlbEntity(vector<SlbList::SlbEntity> && slbEntity) { DARABONBA_PTR_SET_RVALUE(slbEntity_, slbEntity) };


        protected:
          shared_ptr<vector<SlbList::SlbEntity>> slbEntity_ {};
        };

        virtual bool empty() const override { return this->adminUserId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->slbList_ == nullptr && this->updateTime_ == nullptr && this->ecsList_ == nullptr; };
        // adminUserId Field Functions 
        bool hasAdminUserId() const { return this->adminUserId_ != nullptr;};
        void deleteAdminUserId() { this->adminUserId_ = nullptr;};
        inline string getAdminUserId() const { DARABONBA_PTR_GET_DEFAULT(adminUserId_, "") };
        inline ResGroupEntity& setAdminUserId(string adminUserId) { DARABONBA_PTR_SET_VALUE(adminUserId_, adminUserId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline ResGroupEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ResGroupEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResGroupEntity& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResGroupEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ResGroupEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // slbList Field Functions 
        bool hasSlbList() const { return this->slbList_ != nullptr;};
        void deleteSlbList() { this->slbList_ = nullptr;};
        inline const ResGroupEntity::SlbList & getSlbList() const { DARABONBA_PTR_GET_CONST(slbList_, ResGroupEntity::SlbList) };
        inline ResGroupEntity::SlbList getSlbList() { DARABONBA_PTR_GET(slbList_, ResGroupEntity::SlbList) };
        inline ResGroupEntity& setSlbList(const ResGroupEntity::SlbList & slbList) { DARABONBA_PTR_SET_VALUE(slbList_, slbList) };
        inline ResGroupEntity& setSlbList(ResGroupEntity::SlbList && slbList) { DARABONBA_PTR_SET_RVALUE(slbList_, slbList) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline ResGroupEntity& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // ecsList Field Functions 
        bool hasEcsList() const { return this->ecsList_ != nullptr;};
        void deleteEcsList() { this->ecsList_ = nullptr;};
        inline const ResGroupEntity::EcsList & getEcsList() const { DARABONBA_PTR_GET_CONST(ecsList_, ResGroupEntity::EcsList) };
        inline ResGroupEntity::EcsList getEcsList() { DARABONBA_PTR_GET(ecsList_, ResGroupEntity::EcsList) };
        inline ResGroupEntity& setEcsList(const ResGroupEntity::EcsList & ecsList) { DARABONBA_PTR_SET_VALUE(ecsList_, ecsList) };
        inline ResGroupEntity& setEcsList(ResGroupEntity::EcsList && ecsList) { DARABONBA_PTR_SET_RVALUE(ecsList_, ecsList) };


      protected:
        shared_ptr<string> adminUserId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<ResGroupEntity::SlbList> slbList_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<ResGroupEntity::EcsList> ecsList_ {};
      };

      virtual bool empty() const override { return this->resGroupEntity_ == nullptr; };
      // resGroupEntity Field Functions 
      bool hasResGroupEntity() const { return this->resGroupEntity_ != nullptr;};
      void deleteResGroupEntity() { this->resGroupEntity_ = nullptr;};
      inline const vector<ResourceGroupList::ResGroupEntity> & getResGroupEntity() const { DARABONBA_PTR_GET_CONST(resGroupEntity_, vector<ResourceGroupList::ResGroupEntity>) };
      inline vector<ResourceGroupList::ResGroupEntity> getResGroupEntity() { DARABONBA_PTR_GET(resGroupEntity_, vector<ResourceGroupList::ResGroupEntity>) };
      inline ResourceGroupList& setResGroupEntity(const vector<ResourceGroupList::ResGroupEntity> & resGroupEntity) { DARABONBA_PTR_SET_VALUE(resGroupEntity_, resGroupEntity) };
      inline ResourceGroupList& setResGroupEntity(vector<ResourceGroupList::ResGroupEntity> && resGroupEntity) { DARABONBA_PTR_SET_RVALUE(resGroupEntity_, resGroupEntity) };


    protected:
      shared_ptr<vector<ResourceGroupList::ResGroupEntity>> resGroupEntity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resourceGroupList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListResourceGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListResourceGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupList Field Functions 
    bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
    void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
    inline const ListResourceGroupResponseBody::ResourceGroupList & getResourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, ListResourceGroupResponseBody::ResourceGroupList) };
    inline ListResourceGroupResponseBody::ResourceGroupList getResourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, ListResourceGroupResponseBody::ResourceGroupList) };
    inline ListResourceGroupResponseBody& setResourceGroupList(const ListResourceGroupResponseBody::ResourceGroupList & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
    inline ListResourceGroupResponseBody& setResourceGroupList(ListResourceGroupResponseBody::ResourceGroupList && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListResourceGroupResponseBody::ResourceGroupList> resourceGroupList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
