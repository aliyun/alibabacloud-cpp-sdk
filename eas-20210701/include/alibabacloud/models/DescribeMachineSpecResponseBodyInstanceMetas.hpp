// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODYINSTANCEMETAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODYINSTANCEMETAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeMachineSpecResponseBodyInstanceMetas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineSpecResponseBodyInstanceMetas& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUAmount, GPUAmount_);
      DARABONBA_PTR_TO_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NonProtectSpotDiscount, nonProtectSpotDiscount_);
      DARABONBA_PTR_TO_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_TO_JSON(StockStatus, stockStatus_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineSpecResponseBodyInstanceMetas& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUAmount, GPUAmount_);
      DARABONBA_PTR_FROM_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NonProtectSpotDiscount, nonProtectSpotDiscount_);
      DARABONBA_PTR_FROM_JSON(SpotDiscount, spotDiscount_);
      DARABONBA_PTR_FROM_JSON(StockStatus, stockStatus_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribeMachineSpecResponseBodyInstanceMetas() = default ;
    DescribeMachineSpecResponseBodyInstanceMetas(const DescribeMachineSpecResponseBodyInstanceMetas &) = default ;
    DescribeMachineSpecResponseBodyInstanceMetas(DescribeMachineSpecResponseBodyInstanceMetas &&) = default ;
    DescribeMachineSpecResponseBodyInstanceMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineSpecResponseBodyInstanceMetas() = default ;
    DescribeMachineSpecResponseBodyInstanceMetas& operator=(const DescribeMachineSpecResponseBodyInstanceMetas &) = default ;
    DescribeMachineSpecResponseBodyInstanceMetas& operator=(DescribeMachineSpecResponseBodyInstanceMetas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CPU_ != nullptr
        && this->GPU_ != nullptr && this->GPUAmount_ != nullptr && this->GPUMemory_ != nullptr && this->instanceType_ != nullptr && this->isAvailable_ != nullptr
        && this->memory_ != nullptr && this->nonProtectSpotDiscount_ != nullptr && this->spotDiscount_ != nullptr && this->stockStatus_ != nullptr && this->vendor_ != nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int32_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUAmount Field Functions 
    bool hasGPUAmount() const { return this->GPUAmount_ != nullptr;};
    void deleteGPUAmount() { this->GPUAmount_ = nullptr;};
    inline int32_t GPUAmount() const { DARABONBA_PTR_GET_DEFAULT(GPUAmount_, 0) };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setGPUAmount(int32_t GPUAmount) { DARABONBA_PTR_SET_VALUE(GPUAmount_, GPUAmount) };


    // GPUMemory Field Functions 
    bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
    void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
    inline float GPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, 0.0) };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setGPUMemory(float GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isAvailable Field Functions 
    bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
    void deleteIsAvailable() { this->isAvailable_ = nullptr;};
    inline bool isAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nonProtectSpotDiscount Field Functions 
    bool hasNonProtectSpotDiscount() const { return this->nonProtectSpotDiscount_ != nullptr;};
    void deleteNonProtectSpotDiscount() { this->nonProtectSpotDiscount_ = nullptr;};
    inline float nonProtectSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(nonProtectSpotDiscount_, 0.0) };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setNonProtectSpotDiscount(float nonProtectSpotDiscount) { DARABONBA_PTR_SET_VALUE(nonProtectSpotDiscount_, nonProtectSpotDiscount) };


    // spotDiscount Field Functions 
    bool hasSpotDiscount() const { return this->spotDiscount_ != nullptr;};
    void deleteSpotDiscount() { this->spotDiscount_ = nullptr;};
    inline float spotDiscount() const { DARABONBA_PTR_GET_DEFAULT(spotDiscount_, 0.0) };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setSpotDiscount(float spotDiscount) { DARABONBA_PTR_SET_VALUE(spotDiscount_, spotDiscount) };


    // stockStatus Field Functions 
    bool hasStockStatus() const { return this->stockStatus_ != nullptr;};
    void deleteStockStatus() { this->stockStatus_ = nullptr;};
    inline string stockStatus() const { DARABONBA_PTR_GET_DEFAULT(stockStatus_, "") };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setStockStatus(string stockStatus) { DARABONBA_PTR_SET_VALUE(stockStatus_, stockStatus) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeMachineSpecResponseBodyInstanceMetas& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The number of CPU cores in the instance type.
    std::shared_ptr<int32_t> CPU_ = nullptr;
    // The GPU type in the instance type. If the instance type is not a GPU-based instance type, this parameter does not exist.
    std::shared_ptr<string> GPU_ = nullptr;
    // The number of GPUs in the instance type.
    std::shared_ptr<int32_t> GPUAmount_ = nullptr;
    // The GPU memory in the instance type. Unit: GB.
    std::shared_ptr<float> GPUMemory_ = nullptr;
    // The name of the instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Indicates whether the instance type is available.
    std::shared_ptr<bool> isAvailable_ = nullptr;
    // The memory size in the instance type. Unit: GB.
    std::shared_ptr<float> memory_ = nullptr;
    // The minimum discount that can be accepted when the preemptible instance type does not include a usage duration. 0.1 indicates one fold. If this parameter is not returned, the bidding feature is not supported.
    std::shared_ptr<float> nonProtectSpotDiscount_ = nullptr;
    // The minimum discount that can be accepted when the preemptible instance type has the 1-hour protection duration. 0.1 indicates one fold. If this parameter is not returned, the bidding feature is not supported.
    std::shared_ptr<float> spotDiscount_ = nullptr;
    // The inventory status of the instance type.
    // 
    // Valid values:
    // 
    // *   WithStock
    // *   ClosedWithStock
    // *   NoStock
    std::shared_ptr<string> stockStatus_ = nullptr;
    // The source of the instance type.
    // 
    // Valid values:
    // 
    // *   ECS
    // *   BareMetal
    // *   Lingjun
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
