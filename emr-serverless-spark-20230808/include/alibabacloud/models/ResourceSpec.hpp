// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_RESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(cu, cu_);
      DARABONBA_PTR_TO_JSON(gpu, gpu_);
      DARABONBA_PTR_TO_JSON(gpuMachineNum, gpuMachineNum_);
      DARABONBA_PTR_TO_JSON(instanceTypeId, instanceTypeId_);
      DARABONBA_PTR_TO_JSON(maxCu, maxCu_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(cu, cu_);
      DARABONBA_PTR_FROM_JSON(gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(gpuMachineNum, gpuMachineNum_);
      DARABONBA_PTR_FROM_JSON(instanceTypeId, instanceTypeId_);
      DARABONBA_PTR_FROM_JSON(maxCu, maxCu_);
    };
    ResourceSpec() = default ;
    ResourceSpec(const ResourceSpec &) = default ;
    ResourceSpec(ResourceSpec &&) = default ;
    ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceSpec() = default ;
    ResourceSpec& operator=(const ResourceSpec &) = default ;
    ResourceSpec& operator=(ResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr
        && this->gpu_ == nullptr && this->gpuMachineNum_ == nullptr && this->instanceTypeId_ == nullptr && this->maxCu_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline ResourceSpec& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline ResourceSpec& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMachineNum Field Functions 
    bool hasGpuMachineNum() const { return this->gpuMachineNum_ != nullptr;};
    void deleteGpuMachineNum() { this->gpuMachineNum_ = nullptr;};
    inline int32_t getGpuMachineNum() const { DARABONBA_PTR_GET_DEFAULT(gpuMachineNum_, 0) };
    inline ResourceSpec& setGpuMachineNum(int32_t gpuMachineNum) { DARABONBA_PTR_SET_VALUE(gpuMachineNum_, gpuMachineNum) };


    // instanceTypeId Field Functions 
    bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
    void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
    inline string getInstanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
    inline ResourceSpec& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


    // maxCu Field Functions 
    bool hasMaxCu() const { return this->maxCu_ != nullptr;};
    void deleteMaxCu() { this->maxCu_ = nullptr;};
    inline int32_t getMaxCu() const { DARABONBA_PTR_GET_DEFAULT(maxCu_, 0) };
    inline ResourceSpec& setMaxCu(int32_t maxCu) { DARABONBA_PTR_SET_VALUE(maxCu_, maxCu) };


  protected:
    // The number of CUs. Currently, 1 CU is equivalent to 1 vCPU and 4 GB of memory.
    shared_ptr<int32_t> cu_ {};
    // The number of GPUs.
    shared_ptr<int32_t> gpu_ {};
    // The number of GPU machines.
    shared_ptr<int32_t> gpuMachineNum_ {};
    // The instance type ID.
    shared_ptr<string> instanceTypeId_ {};
    // The upper limit of the absolute value for the queue quota. If not specified, the backend falls back to the number of CUs.
    shared_ptr<int32_t> maxCu_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
