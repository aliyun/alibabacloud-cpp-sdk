// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECSSPEC_HPP_
#define ALIBABACLOUD_MODELS_ECSSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class EcsSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcsSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NonProtectSpotDiscount, nonProtectSpotDiscount_);
      DARABONBA_PTR_TO_JSON(PaymentTypes, paymentTypes_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SpotStockStatus, spotStockStatus_);
      DARABONBA_PTR_TO_JSON(SupportedGPUDrivers, supportedGPUDrivers_);
    };
    friend void from_json(const Darabonba::Json& j, EcsSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NonProtectSpotDiscount, nonProtectSpotDiscount_);
      DARABONBA_PTR_FROM_JSON(PaymentTypes, paymentTypes_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SpotStockStatus, spotStockStatus_);
      DARABONBA_PTR_FROM_JSON(SupportedGPUDrivers, supportedGPUDrivers_);
    };
    EcsSpec() = default ;
    EcsSpec(const EcsSpec &) = default ;
    EcsSpec(EcsSpec &&) = default ;
    EcsSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcsSpec() = default ;
    EcsSpec& operator=(const EcsSpec &) = default ;
    EcsSpec& operator=(EcsSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceleratorType_ != nullptr
        && this->cpu_ != nullptr && this->defaultGPUDriver_ != nullptr && this->gpu_ != nullptr && this->gpuMemory_ != nullptr && this->gpuType_ != nullptr
        && this->instanceType_ != nullptr && this->isAvailable_ != nullptr && this->memory_ != nullptr && this->nonProtectSpotDiscount_ != nullptr && this->paymentTypes_ != nullptr
        && this->resourceType_ != nullptr && this->spotStockStatus_ != nullptr && this->supportedGPUDrivers_ != nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline EcsSpec& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline EcsSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // defaultGPUDriver Field Functions 
    bool hasDefaultGPUDriver() const { return this->defaultGPUDriver_ != nullptr;};
    void deleteDefaultGPUDriver() { this->defaultGPUDriver_ = nullptr;};
    inline string defaultGPUDriver() const { DARABONBA_PTR_GET_DEFAULT(defaultGPUDriver_, "") };
    inline EcsSpec& setDefaultGPUDriver(string defaultGPUDriver) { DARABONBA_PTR_SET_VALUE(defaultGPUDriver_, defaultGPUDriver) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline EcsSpec& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline EcsSpec& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline EcsSpec& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline EcsSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isAvailable Field Functions 
    bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
    void deleteIsAvailable() { this->isAvailable_ = nullptr;};
    inline bool isAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
    inline EcsSpec& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline EcsSpec& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nonProtectSpotDiscount Field Functions 
    bool hasNonProtectSpotDiscount() const { return this->nonProtectSpotDiscount_ != nullptr;};
    void deleteNonProtectSpotDiscount() { this->nonProtectSpotDiscount_ = nullptr;};
    inline float nonProtectSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(nonProtectSpotDiscount_, 0.0) };
    inline EcsSpec& setNonProtectSpotDiscount(float nonProtectSpotDiscount) { DARABONBA_PTR_SET_VALUE(nonProtectSpotDiscount_, nonProtectSpotDiscount) };


    // paymentTypes Field Functions 
    bool hasPaymentTypes() const { return this->paymentTypes_ != nullptr;};
    void deletePaymentTypes() { this->paymentTypes_ = nullptr;};
    inline const vector<string> & paymentTypes() const { DARABONBA_PTR_GET_CONST(paymentTypes_, vector<string>) };
    inline vector<string> paymentTypes() { DARABONBA_PTR_GET(paymentTypes_, vector<string>) };
    inline EcsSpec& setPaymentTypes(const vector<string> & paymentTypes) { DARABONBA_PTR_SET_VALUE(paymentTypes_, paymentTypes) };
    inline EcsSpec& setPaymentTypes(vector<string> && paymentTypes) { DARABONBA_PTR_SET_RVALUE(paymentTypes_, paymentTypes) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline EcsSpec& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // spotStockStatus Field Functions 
    bool hasSpotStockStatus() const { return this->spotStockStatus_ != nullptr;};
    void deleteSpotStockStatus() { this->spotStockStatus_ = nullptr;};
    inline string spotStockStatus() const { DARABONBA_PTR_GET_DEFAULT(spotStockStatus_, "") };
    inline EcsSpec& setSpotStockStatus(string spotStockStatus) { DARABONBA_PTR_SET_VALUE(spotStockStatus_, spotStockStatus) };


    // supportedGPUDrivers Field Functions 
    bool hasSupportedGPUDrivers() const { return this->supportedGPUDrivers_ != nullptr;};
    void deleteSupportedGPUDrivers() { this->supportedGPUDrivers_ = nullptr;};
    inline const vector<string> & supportedGPUDrivers() const { DARABONBA_PTR_GET_CONST(supportedGPUDrivers_, vector<string>) };
    inline vector<string> supportedGPUDrivers() { DARABONBA_PTR_GET(supportedGPUDrivers_, vector<string>) };
    inline EcsSpec& setSupportedGPUDrivers(const vector<string> & supportedGPUDrivers) { DARABONBA_PTR_SET_VALUE(supportedGPUDrivers_, supportedGPUDrivers) };
    inline EcsSpec& setSupportedGPUDrivers(vector<string> && supportedGPUDrivers) { DARABONBA_PTR_SET_RVALUE(supportedGPUDrivers_, supportedGPUDrivers) };


  protected:
    std::shared_ptr<string> acceleratorType_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<string> defaultGPUDriver_ = nullptr;
    std::shared_ptr<int32_t> gpu_ = nullptr;
    std::shared_ptr<int32_t> gpuMemory_ = nullptr;
    std::shared_ptr<string> gpuType_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<bool> isAvailable_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<float> nonProtectSpotDiscount_ = nullptr;
    std::shared_ptr<vector<string>> paymentTypes_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> spotStockStatus_ = nullptr;
    std::shared_ptr<vector<string>> supportedGPUDrivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
