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
    shared_ptr<string> bestEffortType_ {};
    // The CPU specifications that are required for each instance. Unit: millicores. This parameter cannot be set to 0. Valid values:
    // 
    // *   **500**
    // *   **1000**
    // *   **2000**
    // *   **4000**
    // *   **8000**
    // *   **12000**
    // *   **16000**
    // *   **32000**
    // 
    // This parameter is required.
    shared_ptr<int32_t> cpu_ {};
    shared_ptr<string> gpuA10_ {};
    shared_ptr<string> gpuPpu810e_ {};
    // The memory size that is required by each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the Cpu parameter:
    // 
    // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
    // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 2000.
    // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
    // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8,000.
    // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
    // *   This parameter is set to **24576** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
    // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
    // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> newSaeVersion_ {};
    shared_ptr<string> resourceType_ {};
    // Scenarios:
    // 
    // *   Web
    // *   micro_service
    shared_ptr<string> workload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
