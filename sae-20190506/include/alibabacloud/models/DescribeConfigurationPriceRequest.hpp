// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BestEffortType, bestEffortType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(GpuA10, gpuA10_);
      DARABONBA_PTR_TO_JSON(GpuPpu810e, gpuPpu810e_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Workload, workload_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BestEffortType, bestEffortType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(GpuA10, gpuA10_);
      DARABONBA_PTR_FROM_JSON(GpuPpu810e, gpuPpu810e_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Workload, workload_);
    };
    DescribeConfigurationPriceRequest() = default ;
    DescribeConfigurationPriceRequest(const DescribeConfigurationPriceRequest &) = default ;
    DescribeConfigurationPriceRequest(DescribeConfigurationPriceRequest &&) = default ;
    DescribeConfigurationPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceRequest() = default ;
    DescribeConfigurationPriceRequest& operator=(const DescribeConfigurationPriceRequest &) = default ;
    DescribeConfigurationPriceRequest& operator=(DescribeConfigurationPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bestEffortType_ == nullptr
        && this->cpu_ == nullptr && this->gpuA10_ == nullptr && this->gpuPpu810e_ == nullptr && this->memory_ == nullptr && this->newSaeVersion_ == nullptr
        && this->resourceType_ == nullptr && this->workload_ == nullptr; };
    // bestEffortType Field Functions 
    bool hasBestEffortType() const { return this->bestEffortType_ != nullptr;};
    void deleteBestEffortType() { this->bestEffortType_ = nullptr;};
    inline string getBestEffortType() const { DARABONBA_PTR_GET_DEFAULT(bestEffortType_, "") };
    inline DescribeConfigurationPriceRequest& setBestEffortType(string bestEffortType) { DARABONBA_PTR_SET_VALUE(bestEffortType_, bestEffortType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeConfigurationPriceRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpuA10 Field Functions 
    bool hasGpuA10() const { return this->gpuA10_ != nullptr;};
    void deleteGpuA10() { this->gpuA10_ = nullptr;};
    inline string getGpuA10() const { DARABONBA_PTR_GET_DEFAULT(gpuA10_, "") };
    inline DescribeConfigurationPriceRequest& setGpuA10(string gpuA10) { DARABONBA_PTR_SET_VALUE(gpuA10_, gpuA10) };


    // gpuPpu810e Field Functions 
    bool hasGpuPpu810e() const { return this->gpuPpu810e_ != nullptr;};
    void deleteGpuPpu810e() { this->gpuPpu810e_ = nullptr;};
    inline string getGpuPpu810e() const { DARABONBA_PTR_GET_DEFAULT(gpuPpu810e_, "") };
    inline DescribeConfigurationPriceRequest& setGpuPpu810e(string gpuPpu810e) { DARABONBA_PTR_SET_VALUE(gpuPpu810e_, gpuPpu810e) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeConfigurationPriceRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline DescribeConfigurationPriceRequest& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeConfigurationPriceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // workload Field Functions 
    bool hasWorkload() const { return this->workload_ != nullptr;};
    void deleteWorkload() { this->workload_ = nullptr;};
    inline string getWorkload() const { DARABONBA_PTR_GET_DEFAULT(workload_, "") };
    inline DescribeConfigurationPriceRequest& setWorkload(string workload) { DARABONBA_PTR_SET_VALUE(workload_, workload) };


  protected:
    // The BestEffort policy. Valid values:
    // 
    // - besteffort: BestEffort.
    // - try-besteffort: BestEffort preferred.
    // - default: Default.
    shared_ptr<string> bestEffortType_ {};
    // The required CPU for each instance, in millicores. The value cannot be 0. Only the following defined specifications are supported:
    // - **500**
    // - **1000**
    // - **2000**
    // - **4000**
    // - **8000**
    // - **12000**
    // - **16000**
    // - **32000**
    // 
    // This parameter is required.
    shared_ptr<int32_t> cpu_ {};
    // The number of A10 GPUs.
    shared_ptr<string> gpuA10_ {};
    // The number of PPU 810E units.
    shared_ptr<string> gpuPpu810e_ {};
    // The required memory for each instance, in MB. The value cannot be 0. Memory has a one-to-one mapping with CPU. Only the following defined specifications are supported:
    // - **1024**: Corresponds to 500 and 1000 millicores.
    // - **2048**: Corresponds to 500, 1000, and 2000 millicores.
    // - **4096**: Corresponds to 1000, 2000, and 4000 millicores.
    // - **8192**: Corresponds to 2000, 4000, and 8000 millicores.
    // - **12288**: Corresponds to 12000 millicores.
    // - **16384**: Corresponds to 4000, 8000, and 16000 millicores.
    // - **24576**: Corresponds to 12000 millicores.
    // - **32768**: Corresponds to 16000 millicores.
    // - **65536**: Corresponds to 8000, 16000, and 32000 millicores.
    // - **131072**: Corresponds to 32000 millicores.
    // 
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    // The application edition. Valid values:
    // 
    // - lite: Lite Edition.
    // - std: Standard Edition.
    // - pro: Professional Edition.
    shared_ptr<string> newSaeVersion_ {};
    // The resource type. Valid values: NULL (default), default (default), and haiguang (Hygon server).
    shared_ptr<string> resourceType_ {};
    // Common scenarios. Valid values:
    // 
    // - web
    // 
    // - micro_service
    shared_ptr<string> workload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
