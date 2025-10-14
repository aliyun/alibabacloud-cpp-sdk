// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODYECSSPECS_HPP_
#define ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODYECSSPECS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEcsSpecsResponseBodyEcsSpecsLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListEcsSpecsResponseBodyEcsSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsSpecsResponseBodyEcsSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUMemorySize, GPUMemorySize_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(SpotStockStatus, spotStockStatus_);
      DARABONBA_PTR_TO_JSON(SystemDiskCapacity, systemDiskCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsSpecsResponseBodyEcsSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUMemorySize, GPUMemorySize_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(SpotStockStatus, spotStockStatus_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCapacity, systemDiskCapacity_);
    };
    ListEcsSpecsResponseBodyEcsSpecs() = default ;
    ListEcsSpecsResponseBodyEcsSpecs(const ListEcsSpecsResponseBodyEcsSpecs &) = default ;
    ListEcsSpecsResponseBodyEcsSpecs(ListEcsSpecsResponseBodyEcsSpecs &&) = default ;
    ListEcsSpecsResponseBodyEcsSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsSpecsResponseBodyEcsSpecs() = default ;
    ListEcsSpecsResponseBodyEcsSpecs& operator=(const ListEcsSpecsResponseBodyEcsSpecs &) = default ;
    ListEcsSpecsResponseBodyEcsSpecs& operator=(ListEcsSpecsResponseBodyEcsSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && return this->CPU_ == nullptr && return this->currency_ == nullptr && return this->GPU_ == nullptr && return this->GPUMemorySize_ == nullptr && return this->GPUType_ == nullptr
        && return this->instanceBandwidthRx_ == nullptr && return this->instanceType_ == nullptr && return this->isAvailable_ == nullptr && return this->labels_ == nullptr && return this->memory_ == nullptr
        && return this->price_ == nullptr && return this->spotStockStatus_ == nullptr && return this->systemDiskCapacity_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListEcsSpecsResponseBodyEcsSpecs& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int64_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0L) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setCPU(int64_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline ListEcsSpecsResponseBodyEcsSpecs& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline int64_t GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0L) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setGPU(int64_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUMemorySize Field Functions 
    bool hasGPUMemorySize() const { return this->GPUMemorySize_ != nullptr;};
    void deleteGPUMemorySize() { this->GPUMemorySize_ = nullptr;};
    inline float GPUMemorySize() const { DARABONBA_PTR_GET_DEFAULT(GPUMemorySize_, 0.0) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setGPUMemorySize(float GPUMemorySize) { DARABONBA_PTR_SET_VALUE(GPUMemorySize_, GPUMemorySize) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline ListEcsSpecsResponseBodyEcsSpecs& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // instanceBandwidthRx Field Functions 
    bool hasInstanceBandwidthRx() const { return this->instanceBandwidthRx_ != nullptr;};
    void deleteInstanceBandwidthRx() { this->instanceBandwidthRx_ = nullptr;};
    inline int64_t instanceBandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(instanceBandwidthRx_, 0L) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setInstanceBandwidthRx(int64_t instanceBandwidthRx) { DARABONBA_PTR_SET_VALUE(instanceBandwidthRx_, instanceBandwidthRx) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListEcsSpecsResponseBodyEcsSpecs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isAvailable Field Functions 
    bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
    void deleteIsAvailable() { this->isAvailable_ = nullptr;};
    inline bool isAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListEcsSpecsResponseBodyEcsSpecsLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListEcsSpecsResponseBodyEcsSpecsLabels>) };
    inline vector<Models::ListEcsSpecsResponseBodyEcsSpecsLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListEcsSpecsResponseBodyEcsSpecsLabels>) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setLabels(const vector<Models::ListEcsSpecsResponseBodyEcsSpecsLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setLabels(vector<Models::ListEcsSpecsResponseBodyEcsSpecsLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // spotStockStatus Field Functions 
    bool hasSpotStockStatus() const { return this->spotStockStatus_ != nullptr;};
    void deleteSpotStockStatus() { this->spotStockStatus_ = nullptr;};
    inline string spotStockStatus() const { DARABONBA_PTR_GET_DEFAULT(spotStockStatus_, "") };
    inline ListEcsSpecsResponseBodyEcsSpecs& setSpotStockStatus(string spotStockStatus) { DARABONBA_PTR_SET_VALUE(spotStockStatus_, spotStockStatus) };


    // systemDiskCapacity Field Functions 
    bool hasSystemDiskCapacity() const { return this->systemDiskCapacity_ != nullptr;};
    void deleteSystemDiskCapacity() { this->systemDiskCapacity_ = nullptr;};
    inline int64_t systemDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCapacity_, 0L) };
    inline ListEcsSpecsResponseBodyEcsSpecs& setSystemDiskCapacity(int64_t systemDiskCapacity) { DARABONBA_PTR_SET_VALUE(systemDiskCapacity_, systemDiskCapacity) };


  protected:
    // The accelerator type.
    std::shared_ptr<string> acceleratorType_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int64_t> CPU_ = nullptr;
    // The currency unit.
    std::shared_ptr<string> currency_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<int64_t> GPU_ = nullptr;
    std::shared_ptr<float> GPUMemorySize_ = nullptr;
    // The GPU type. Valid values:
    // 
    // *   V100
    // *   A100
    // *   A10
    // *   T4
    // *   P100
    std::shared_ptr<string> GPUType_ = nullptr;
    // The inbound bandwidth of the instance.
    std::shared_ptr<int64_t> instanceBandwidthRx_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Indicates whether the resource was available.
    std::shared_ptr<bool> isAvailable_ = nullptr;
    // The labels of the ECS specification.
    std::shared_ptr<vector<Models::ListEcsSpecsResponseBodyEcsSpecsLabels>> labels_ = nullptr;
    // The memory size. Unit: GB.
    std::shared_ptr<float> memory_ = nullptr;
    // The price.
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<string> spotStockStatus_ = nullptr;
    // The size of the system disk. Unit: GB.
    std::shared_ptr<int64_t> systemDiskCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
