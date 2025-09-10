// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class Resource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Resource& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(CpuUsed, cpuUsed_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_ANY_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuUsed, gpuUsed_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceMaxAllocatableCPU, instanceMaxAllocatableCPU_);
      DARABONBA_PTR_TO_JSON(InstanceMaxAllocatableGPU, instanceMaxAllocatableGPU_);
      DARABONBA_PTR_TO_JSON(InstanceMaxAllocatableMemory, instanceMaxAllocatableMemory_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MemoryUsed, memoryUsed_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PostPaidInstanceCount, postPaidInstanceCount_);
      DARABONBA_PTR_TO_JSON(PrePaidInstanceCount, prePaidInstanceCount_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, Resource& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(CpuUsed, cpuUsed_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_ANY_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuUsed, gpuUsed_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceMaxAllocatableCPU, instanceMaxAllocatableCPU_);
      DARABONBA_PTR_FROM_JSON(InstanceMaxAllocatableGPU, instanceMaxAllocatableGPU_);
      DARABONBA_PTR_FROM_JSON(InstanceMaxAllocatableMemory, instanceMaxAllocatableMemory_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MemoryUsed, memoryUsed_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PostPaidInstanceCount, postPaidInstanceCount_);
      DARABONBA_PTR_FROM_JSON(PrePaidInstanceCount, prePaidInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    Resource() = default ;
    Resource(const Resource &) = default ;
    Resource(Resource &&) = default ;
    Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Resource() = default ;
    Resource& operator=(const Resource &) = default ;
    Resource& operator=(Resource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->cpuCount_ != nullptr && this->cpuUsed_ != nullptr && this->createTime_ != nullptr && this->extraData_ != nullptr && this->features_ != nullptr
        && this->gpuCount_ != nullptr && this->gpuUsed_ != nullptr && this->instanceCount_ != nullptr && this->instanceMaxAllocatableCPU_ != nullptr && this->instanceMaxAllocatableGPU_ != nullptr
        && this->instanceMaxAllocatableMemory_ != nullptr && this->memory_ != nullptr && this->memoryUsed_ != nullptr && this->message_ != nullptr && this->postPaidInstanceCount_ != nullptr
        && this->prePaidInstanceCount_ != nullptr && this->resourceId_ != nullptr && this->resourceName_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr
        && this->updateTime_ != nullptr && this->vendor_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline Resource& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t cpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline Resource& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // cpuUsed Field Functions 
    bool hasCpuUsed() const { return this->cpuUsed_ != nullptr;};
    void deleteCpuUsed() { this->cpuUsed_ = nullptr;};
    inline int32_t cpuUsed() const { DARABONBA_PTR_GET_DEFAULT(cpuUsed_, 0) };
    inline Resource& setCpuUsed(int32_t cpuUsed) { DARABONBA_PTR_SET_VALUE(cpuUsed_, cpuUsed) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Resource& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline     const Darabonba::Json & extraData() const { DARABONBA_GET(extraData_) };
    Darabonba::Json & extraData() { DARABONBA_GET(extraData_) };
    inline Resource& setExtraData(const Darabonba::Json & extraData) { DARABONBA_SET_VALUE(extraData_, extraData) };
    inline Resource& setExtraData(Darabonba::Json & extraData) { DARABONBA_SET_RVALUE(extraData_, extraData) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<string> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
    inline vector<string> features() { DARABONBA_PTR_GET(features_, vector<string>) };
    inline Resource& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline Resource& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline int32_t gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0) };
    inline Resource& setGpuCount(int32_t gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuUsed Field Functions 
    bool hasGpuUsed() const { return this->gpuUsed_ != nullptr;};
    void deleteGpuUsed() { this->gpuUsed_ = nullptr;};
    inline float gpuUsed() const { DARABONBA_PTR_GET_DEFAULT(gpuUsed_, 0.0) };
    inline Resource& setGpuUsed(float gpuUsed) { DARABONBA_PTR_SET_VALUE(gpuUsed_, gpuUsed) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline Resource& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceMaxAllocatableCPU Field Functions 
    bool hasInstanceMaxAllocatableCPU() const { return this->instanceMaxAllocatableCPU_ != nullptr;};
    void deleteInstanceMaxAllocatableCPU() { this->instanceMaxAllocatableCPU_ = nullptr;};
    inline int32_t instanceMaxAllocatableCPU() const { DARABONBA_PTR_GET_DEFAULT(instanceMaxAllocatableCPU_, 0) };
    inline Resource& setInstanceMaxAllocatableCPU(int32_t instanceMaxAllocatableCPU) { DARABONBA_PTR_SET_VALUE(instanceMaxAllocatableCPU_, instanceMaxAllocatableCPU) };


    // instanceMaxAllocatableGPU Field Functions 
    bool hasInstanceMaxAllocatableGPU() const { return this->instanceMaxAllocatableGPU_ != nullptr;};
    void deleteInstanceMaxAllocatableGPU() { this->instanceMaxAllocatableGPU_ = nullptr;};
    inline float instanceMaxAllocatableGPU() const { DARABONBA_PTR_GET_DEFAULT(instanceMaxAllocatableGPU_, 0.0) };
    inline Resource& setInstanceMaxAllocatableGPU(float instanceMaxAllocatableGPU) { DARABONBA_PTR_SET_VALUE(instanceMaxAllocatableGPU_, instanceMaxAllocatableGPU) };


    // instanceMaxAllocatableMemory Field Functions 
    bool hasInstanceMaxAllocatableMemory() const { return this->instanceMaxAllocatableMemory_ != nullptr;};
    void deleteInstanceMaxAllocatableMemory() { this->instanceMaxAllocatableMemory_ = nullptr;};
    inline int32_t instanceMaxAllocatableMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceMaxAllocatableMemory_, 0) };
    inline Resource& setInstanceMaxAllocatableMemory(int32_t instanceMaxAllocatableMemory) { DARABONBA_PTR_SET_VALUE(instanceMaxAllocatableMemory_, instanceMaxAllocatableMemory) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline Resource& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // memoryUsed Field Functions 
    bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
    void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
    inline int32_t memoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, 0) };
    inline Resource& setMemoryUsed(int32_t memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Resource& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // postPaidInstanceCount Field Functions 
    bool hasPostPaidInstanceCount() const { return this->postPaidInstanceCount_ != nullptr;};
    void deletePostPaidInstanceCount() { this->postPaidInstanceCount_ = nullptr;};
    inline int32_t postPaidInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(postPaidInstanceCount_, 0) };
    inline Resource& setPostPaidInstanceCount(int32_t postPaidInstanceCount) { DARABONBA_PTR_SET_VALUE(postPaidInstanceCount_, postPaidInstanceCount) };


    // prePaidInstanceCount Field Functions 
    bool hasPrePaidInstanceCount() const { return this->prePaidInstanceCount_ != nullptr;};
    void deletePrePaidInstanceCount() { this->prePaidInstanceCount_ = nullptr;};
    inline int32_t prePaidInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(prePaidInstanceCount_, 0) };
    inline Resource& setPrePaidInstanceCount(int32_t prePaidInstanceCount) { DARABONBA_PTR_SET_VALUE(prePaidInstanceCount_, prePaidInstanceCount) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline Resource& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline Resource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Resource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Resource& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline Resource& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<int32_t> cpuCount_ = nullptr;
    std::shared_ptr<int32_t> cpuUsed_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    Darabonba::Json extraData_ = nullptr;
    std::shared_ptr<vector<string>> features_ = nullptr;
    std::shared_ptr<int32_t> gpuCount_ = nullptr;
    std::shared_ptr<float> gpuUsed_ = nullptr;
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    std::shared_ptr<int32_t> instanceMaxAllocatableCPU_ = nullptr;
    std::shared_ptr<float> instanceMaxAllocatableGPU_ = nullptr;
    std::shared_ptr<int32_t> instanceMaxAllocatableMemory_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<int32_t> memoryUsed_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> postPaidInstanceCount_ = nullptr;
    std::shared_ptr<int32_t> prePaidInstanceCount_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
