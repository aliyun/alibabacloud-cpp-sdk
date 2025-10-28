// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERRESPONSEBODYECSENTITYLISTECSENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERRESPONSEBODYECSENTITYLISTECSENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity() = default ;
    ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity(const ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity &) = default ;
    ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity(ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity &&) = default ;
    ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity() = default ;
    ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& operator=(const ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity &) = default ;
    ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& operator=(ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->eip_ == nullptr && return this->expired_ == nullptr && return this->innerIp_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->mem_ == nullptr && return this->privateIp_ == nullptr && return this->publicIp_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // innerIp Field Functions 
    bool hasInnerIp() const { return this->innerIp_ != nullptr;};
    void deleteInnerIp() { this->innerIp_ = nullptr;};
    inline string innerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline ListEcsNotInClusterResponseBodyEcsEntityListEcsEntity& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The number of CPU cores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The elastic IP address (EIP) associated with the ECS instance.
    std::shared_ptr<string> eip_ = nullptr;
    // Indicates whether the ECS instance has expired. Valid values:
    // 
    // *   **true**: The ECS instance has expired.
    // *   **false**: The ECS instance has not expired.
    std::shared_ptr<bool> expired_ = nullptr;
    // The private IP address of the ECS instance.
    std::shared_ptr<string> innerIp_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the ECS instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The size of memory. Unit: bytes.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The private IP address of the ECS instance.
    std::shared_ptr<string> privateIp_ = nullptr;
    // The public IP address of the ECS instance.
    std::shared_ptr<string> publicIp_ = nullptr;
    // The ID of the region where the ECS instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the ECS instance. Valid values:
    // 
    // *   **Pending**: The ECS instance is being created.
    // *   **Running**: The ECS instance is running.
    // *   **Starting**: The ECS instance is being started.
    // *   **Stopping**: The ECS instance is being stopped.
    // *   **Stopped**: The ECS instance is stopped.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
