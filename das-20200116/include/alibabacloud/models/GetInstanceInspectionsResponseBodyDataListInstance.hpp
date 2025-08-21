// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATALISTINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATALISTINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceInspectionsResponseBodyDataListInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionsResponseBodyDataListInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceArea, instanceArea_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionsResponseBodyDataListInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceArea, instanceArea_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetInstanceInspectionsResponseBodyDataListInstance() = default ;
    GetInstanceInspectionsResponseBodyDataListInstance(const GetInstanceInspectionsResponseBodyDataListInstance &) = default ;
    GetInstanceInspectionsResponseBodyDataListInstance(GetInstanceInspectionsResponseBodyDataListInstance &&) = default ;
    GetInstanceInspectionsResponseBodyDataListInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionsResponseBodyDataListInstance() = default ;
    GetInstanceInspectionsResponseBodyDataListInstance& operator=(const GetInstanceInspectionsResponseBodyDataListInstance &) = default ;
    GetInstanceInspectionsResponseBodyDataListInstance& operator=(GetInstanceInspectionsResponseBodyDataListInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->category_ != nullptr && this->cpu_ != nullptr && this->engine_ != nullptr && this->engineVersion_ != nullptr && this->instanceAlias_ != nullptr
        && this->instanceArea_ != nullptr && this->instanceClass_ != nullptr && this->instanceId_ != nullptr && this->memory_ != nullptr && this->networkType_ != nullptr
        && this->nodeId_ != nullptr && this->region_ != nullptr && this->storage_ != nullptr && this->uuid_ != nullptr && this->vpcId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceArea Field Functions 
    bool hasInstanceArea() const { return this->instanceArea_ != nullptr;};
    void deleteInstanceArea() { this->instanceArea_ = nullptr;};
    inline string instanceArea() const { DARABONBA_PTR_GET_DEFAULT(instanceArea_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setInstanceArea(string instanceArea) { DARABONBA_PTR_SET_VALUE(instanceArea_, instanceArea) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int32_t storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceInspectionsResponseBodyDataListInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The account ID. You can view the ID of the logon account by moving the pointer over the profile in the Alibaba Cloud management console.
    std::shared_ptr<string> accountId_ = nullptr;
    // The connection mode of the instance. Valid values:
    // 
    // *   **standard**: standard mode.
    // *   **safe**: database proxy mode.
    std::shared_ptr<string> category_ = nullptr;
    // The CPU specification of the instance. For example, if a value of 8 is returned, the instance has eight CPU cores.
    std::shared_ptr<string> cpu_ = nullptr;
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **Redis**
    // *   **PolarDBMySQL**
    std::shared_ptr<string> engine_ = nullptr;
    // The version number of the database engine.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The type of the instance on which the database is deployed. Valid values:
    // 
    // *   **RDS**: an Alibaba Cloud database instance.
    // *   **ECS**: an Elastic Compute Service (ECS) instance on which a self-managed database is deployed.
    // *   **IDC**: a self-managed database instance that is not deployed on Alibaba Cloud.
    // 
    // >  The value IDC indicates that the instance is deployed in a data center.
    std::shared_ptr<string> instanceArea_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceClass_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The memory capacity of the database that is deployed on the instance. Unit: MB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The network type of the instance.
    std::shared_ptr<string> networkType_ = nullptr;
    // The ID of the node on the instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> region_ = nullptr;
    // The storage space of the instance. Unit: GB.
    std::shared_ptr<int32_t> storage_ = nullptr;
    // The unique identifier of the instance.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the instance is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
