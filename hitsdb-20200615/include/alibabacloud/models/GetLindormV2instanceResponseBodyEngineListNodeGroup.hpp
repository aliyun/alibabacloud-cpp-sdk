// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYENGINELISTNODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYENGINELISTNODEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceResponseBodyEngineListNodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceResponseBodyEngineListNodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_TO_JSON(EnableAttachLocalDisk, enableAttachLocalDisk_);
      DARABONBA_PTR_TO_JSON(LocalDiskCapacity, localDiskCapacity_);
      DARABONBA_PTR_TO_JSON(LocalDiskCategory, localDiskCategory_);
      DARABONBA_PTR_TO_JSON(MemorySizeGiB, memorySizeGiB_);
      DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceResponseBodyEngineListNodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(EnableAttachLocalDisk, enableAttachLocalDisk_);
      DARABONBA_PTR_FROM_JSON(LocalDiskCapacity, localDiskCapacity_);
      DARABONBA_PTR_FROM_JSON(LocalDiskCategory, localDiskCategory_);
      DARABONBA_PTR_FROM_JSON(MemorySizeGiB, memorySizeGiB_);
      DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLindormV2InstanceResponseBodyEngineListNodeGroup() = default ;
    GetLindormV2InstanceResponseBodyEngineListNodeGroup(const GetLindormV2InstanceResponseBodyEngineListNodeGroup &) = default ;
    GetLindormV2InstanceResponseBodyEngineListNodeGroup(GetLindormV2InstanceResponseBodyEngineListNodeGroup &&) = default ;
    GetLindormV2InstanceResponseBodyEngineListNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceResponseBodyEngineListNodeGroup() = default ;
    GetLindormV2InstanceResponseBodyEngineListNodeGroup& operator=(const GetLindormV2InstanceResponseBodyEngineListNodeGroup &) = default ;
    GetLindormV2InstanceResponseBodyEngineListNodeGroup& operator=(GetLindormV2InstanceResponseBodyEngineListNodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->cpuCoreCount_ != nullptr && this->enableAttachLocalDisk_ != nullptr && this->localDiskCapacity_ != nullptr && this->localDiskCategory_ != nullptr && this->memorySizeGiB_ != nullptr
        && this->nodeSpec_ != nullptr && this->quantity_ != nullptr && this->resourceGroupName_ != nullptr && this->specId_ != nullptr && this->status_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // cpuCoreCount Field Functions 
    bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
    void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
    inline int32_t cpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


    // enableAttachLocalDisk Field Functions 
    bool hasEnableAttachLocalDisk() const { return this->enableAttachLocalDisk_ != nullptr;};
    void deleteEnableAttachLocalDisk() { this->enableAttachLocalDisk_ = nullptr;};
    inline bool enableAttachLocalDisk() const { DARABONBA_PTR_GET_DEFAULT(enableAttachLocalDisk_, false) };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setEnableAttachLocalDisk(bool enableAttachLocalDisk) { DARABONBA_PTR_SET_VALUE(enableAttachLocalDisk_, enableAttachLocalDisk) };


    // localDiskCapacity Field Functions 
    bool hasLocalDiskCapacity() const { return this->localDiskCapacity_ != nullptr;};
    void deleteLocalDiskCapacity() { this->localDiskCapacity_ = nullptr;};
    inline int64_t localDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(localDiskCapacity_, 0L) };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setLocalDiskCapacity(int64_t localDiskCapacity) { DARABONBA_PTR_SET_VALUE(localDiskCapacity_, localDiskCapacity) };


    // localDiskCategory Field Functions 
    bool hasLocalDiskCategory() const { return this->localDiskCategory_ != nullptr;};
    void deleteLocalDiskCategory() { this->localDiskCategory_ = nullptr;};
    inline string localDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(localDiskCategory_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setLocalDiskCategory(string localDiskCategory) { DARABONBA_PTR_SET_VALUE(localDiskCategory_, localDiskCategory) };


    // memorySizeGiB Field Functions 
    bool hasMemorySizeGiB() const { return this->memorySizeGiB_ != nullptr;};
    void deleteMemorySizeGiB() { this->memorySizeGiB_ = nullptr;};
    inline int32_t memorySizeGiB() const { DARABONBA_PTR_GET_DEFAULT(memorySizeGiB_, 0) };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setMemorySizeGiB(int32_t memorySizeGiB) { DARABONBA_PTR_SET_VALUE(memorySizeGiB_, memorySizeGiB) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline string nodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListNodeGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int32_t> cpuCoreCount_ = nullptr;
    std::shared_ptr<bool> enableAttachLocalDisk_ = nullptr;
    std::shared_ptr<int64_t> localDiskCapacity_ = nullptr;
    std::shared_ptr<string> localDiskCategory_ = nullptr;
    std::shared_ptr<int32_t> memorySizeGiB_ = nullptr;
    std::shared_ptr<string> nodeSpec_ = nullptr;
    std::shared_ptr<int32_t> quantity_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> specId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
