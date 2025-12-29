// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEPATTERNS_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEPATTERNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class InstancePatterns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstancePatterns& obj) { 
      DARABONBA_PTR_TO_JSON(architectures, architectures_);
      DARABONBA_PTR_TO_JSON(burst_performance_option, burstPerformanceOption_);
      DARABONBA_PTR_TO_JSON(core, core_);
      DARABONBA_PTR_TO_JSON(cores, cores_);
      DARABONBA_PTR_TO_JSON(cpu_architectures, cpuArchitectures_);
      DARABONBA_PTR_TO_JSON(excluded_instance_types, excludedInstanceTypes_);
      DARABONBA_PTR_TO_JSON(instance_categories, instanceCategories_);
      DARABONBA_PTR_TO_JSON(instance_family_level, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(instance_type_families, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(max_cpu_cores, maxCpuCores_);
      DARABONBA_PTR_TO_JSON(max_memory_size, maxMemorySize_);
      DARABONBA_PTR_TO_JSON(max_price, maxPrice_);
      DARABONBA_PTR_TO_JSON(maximum_gpu_amount, maximumGpuAmount_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(min_cpu_cores, minCpuCores_);
      DARABONBA_PTR_TO_JSON(min_memory_size, minMemorySize_);
      DARABONBA_PTR_TO_JSON(minimum_eni_ipv6_address_quantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_TO_JSON(minimum_eni_private_ip_address_quantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_TO_JSON(minimum_eni_quantity, minimumEniQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, InstancePatterns& obj) { 
      DARABONBA_PTR_FROM_JSON(architectures, architectures_);
      DARABONBA_PTR_FROM_JSON(burst_performance_option, burstPerformanceOption_);
      DARABONBA_PTR_FROM_JSON(core, core_);
      DARABONBA_PTR_FROM_JSON(cores, cores_);
      DARABONBA_PTR_FROM_JSON(cpu_architectures, cpuArchitectures_);
      DARABONBA_PTR_FROM_JSON(excluded_instance_types, excludedInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(instance_categories, instanceCategories_);
      DARABONBA_PTR_FROM_JSON(instance_family_level, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(instance_type_families, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(max_cpu_cores, maxCpuCores_);
      DARABONBA_PTR_FROM_JSON(max_memory_size, maxMemorySize_);
      DARABONBA_PTR_FROM_JSON(max_price, maxPrice_);
      DARABONBA_PTR_FROM_JSON(maximum_gpu_amount, maximumGpuAmount_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(min_cpu_cores, minCpuCores_);
      DARABONBA_PTR_FROM_JSON(min_memory_size, minMemorySize_);
      DARABONBA_PTR_FROM_JSON(minimum_eni_ipv6_address_quantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_FROM_JSON(minimum_eni_private_ip_address_quantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_FROM_JSON(minimum_eni_quantity, minimumEniQuantity_);
    };
    InstancePatterns() = default ;
    InstancePatterns(const InstancePatterns &) = default ;
    InstancePatterns(InstancePatterns &&) = default ;
    InstancePatterns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstancePatterns() = default ;
    InstancePatterns& operator=(const InstancePatterns &) = default ;
    InstancePatterns& operator=(InstancePatterns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectures_ == nullptr
        && this->burstPerformanceOption_ == nullptr && this->core_ == nullptr && this->cores_ == nullptr && this->cpuArchitectures_ == nullptr && this->excludedInstanceTypes_ == nullptr
        && this->instanceCategories_ == nullptr && this->instanceFamilyLevel_ == nullptr && this->instanceTypeFamilies_ == nullptr && this->maxCpuCores_ == nullptr && this->maxMemorySize_ == nullptr
        && this->maxPrice_ == nullptr && this->maximumGpuAmount_ == nullptr && this->memory_ == nullptr && this->minCpuCores_ == nullptr && this->minMemorySize_ == nullptr
        && this->minimumEniIpv6AddressQuantity_ == nullptr && this->minimumEniPrivateIpAddressQuantity_ == nullptr && this->minimumEniQuantity_ == nullptr; };
    // architectures Field Functions 
    bool hasArchitectures() const { return this->architectures_ != nullptr;};
    void deleteArchitectures() { this->architectures_ = nullptr;};
    inline const vector<string> & getArchitectures() const { DARABONBA_PTR_GET_CONST(architectures_, vector<string>) };
    inline vector<string> getArchitectures() { DARABONBA_PTR_GET(architectures_, vector<string>) };
    inline InstancePatterns& setArchitectures(const vector<string> & architectures) { DARABONBA_PTR_SET_VALUE(architectures_, architectures) };
    inline InstancePatterns& setArchitectures(vector<string> && architectures) { DARABONBA_PTR_SET_RVALUE(architectures_, architectures) };


    // burstPerformanceOption Field Functions 
    bool hasBurstPerformanceOption() const { return this->burstPerformanceOption_ != nullptr;};
    void deleteBurstPerformanceOption() { this->burstPerformanceOption_ = nullptr;};
    inline string getBurstPerformanceOption() const { DARABONBA_PTR_GET_DEFAULT(burstPerformanceOption_, "") };
    inline InstancePatterns& setBurstPerformanceOption(string burstPerformanceOption) { DARABONBA_PTR_SET_VALUE(burstPerformanceOption_, burstPerformanceOption) };


    // core Field Functions 
    bool hasCore() const { return this->core_ != nullptr;};
    void deleteCore() { this->core_ = nullptr;};
    inline int64_t getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, 0L) };
    inline InstancePatterns& setCore(int64_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int64_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0L) };
    inline InstancePatterns& setCores(int64_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // cpuArchitectures Field Functions 
    bool hasCpuArchitectures() const { return this->cpuArchitectures_ != nullptr;};
    void deleteCpuArchitectures() { this->cpuArchitectures_ = nullptr;};
    inline const vector<string> & getCpuArchitectures() const { DARABONBA_PTR_GET_CONST(cpuArchitectures_, vector<string>) };
    inline vector<string> getCpuArchitectures() { DARABONBA_PTR_GET(cpuArchitectures_, vector<string>) };
    inline InstancePatterns& setCpuArchitectures(const vector<string> & cpuArchitectures) { DARABONBA_PTR_SET_VALUE(cpuArchitectures_, cpuArchitectures) };
    inline InstancePatterns& setCpuArchitectures(vector<string> && cpuArchitectures) { DARABONBA_PTR_SET_RVALUE(cpuArchitectures_, cpuArchitectures) };


    // excludedInstanceTypes Field Functions 
    bool hasExcludedInstanceTypes() const { return this->excludedInstanceTypes_ != nullptr;};
    void deleteExcludedInstanceTypes() { this->excludedInstanceTypes_ = nullptr;};
    inline const vector<string> & getExcludedInstanceTypes() const { DARABONBA_PTR_GET_CONST(excludedInstanceTypes_, vector<string>) };
    inline vector<string> getExcludedInstanceTypes() { DARABONBA_PTR_GET(excludedInstanceTypes_, vector<string>) };
    inline InstancePatterns& setExcludedInstanceTypes(const vector<string> & excludedInstanceTypes) { DARABONBA_PTR_SET_VALUE(excludedInstanceTypes_, excludedInstanceTypes) };
    inline InstancePatterns& setExcludedInstanceTypes(vector<string> && excludedInstanceTypes) { DARABONBA_PTR_SET_RVALUE(excludedInstanceTypes_, excludedInstanceTypes) };


    // instanceCategories Field Functions 
    bool hasInstanceCategories() const { return this->instanceCategories_ != nullptr;};
    void deleteInstanceCategories() { this->instanceCategories_ = nullptr;};
    inline const vector<string> & getInstanceCategories() const { DARABONBA_PTR_GET_CONST(instanceCategories_, vector<string>) };
    inline vector<string> getInstanceCategories() { DARABONBA_PTR_GET(instanceCategories_, vector<string>) };
    inline InstancePatterns& setInstanceCategories(const vector<string> & instanceCategories) { DARABONBA_PTR_SET_VALUE(instanceCategories_, instanceCategories) };
    inline InstancePatterns& setInstanceCategories(vector<string> && instanceCategories) { DARABONBA_PTR_SET_RVALUE(instanceCategories_, instanceCategories) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline InstancePatterns& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const vector<string> & getInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, vector<string>) };
    inline vector<string> getInstanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, vector<string>) };
    inline InstancePatterns& setInstanceTypeFamilies(const vector<string> & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline InstancePatterns& setInstanceTypeFamilies(vector<string> && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // maxCpuCores Field Functions 
    bool hasMaxCpuCores() const { return this->maxCpuCores_ != nullptr;};
    void deleteMaxCpuCores() { this->maxCpuCores_ = nullptr;};
    inline int64_t getMaxCpuCores() const { DARABONBA_PTR_GET_DEFAULT(maxCpuCores_, 0L) };
    inline InstancePatterns& setMaxCpuCores(int64_t maxCpuCores) { DARABONBA_PTR_SET_VALUE(maxCpuCores_, maxCpuCores) };


    // maxMemorySize Field Functions 
    bool hasMaxMemorySize() const { return this->maxMemorySize_ != nullptr;};
    void deleteMaxMemorySize() { this->maxMemorySize_ = nullptr;};
    inline float getMaxMemorySize() const { DARABONBA_PTR_GET_DEFAULT(maxMemorySize_, 0.0) };
    inline InstancePatterns& setMaxMemorySize(float maxMemorySize) { DARABONBA_PTR_SET_VALUE(maxMemorySize_, maxMemorySize) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline InstancePatterns& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // maximumGpuAmount Field Functions 
    bool hasMaximumGpuAmount() const { return this->maximumGpuAmount_ != nullptr;};
    void deleteMaximumGpuAmount() { this->maximumGpuAmount_ = nullptr;};
    inline int64_t getMaximumGpuAmount() const { DARABONBA_PTR_GET_DEFAULT(maximumGpuAmount_, 0L) };
    inline InstancePatterns& setMaximumGpuAmount(int64_t maximumGpuAmount) { DARABONBA_PTR_SET_VALUE(maximumGpuAmount_, maximumGpuAmount) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline InstancePatterns& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // minCpuCores Field Functions 
    bool hasMinCpuCores() const { return this->minCpuCores_ != nullptr;};
    void deleteMinCpuCores() { this->minCpuCores_ = nullptr;};
    inline int64_t getMinCpuCores() const { DARABONBA_PTR_GET_DEFAULT(minCpuCores_, 0L) };
    inline InstancePatterns& setMinCpuCores(int64_t minCpuCores) { DARABONBA_PTR_SET_VALUE(minCpuCores_, minCpuCores) };


    // minMemorySize Field Functions 
    bool hasMinMemorySize() const { return this->minMemorySize_ != nullptr;};
    void deleteMinMemorySize() { this->minMemorySize_ = nullptr;};
    inline float getMinMemorySize() const { DARABONBA_PTR_GET_DEFAULT(minMemorySize_, 0.0) };
    inline InstancePatterns& setMinMemorySize(float minMemorySize) { DARABONBA_PTR_SET_VALUE(minMemorySize_, minMemorySize) };


    // minimumEniIpv6AddressQuantity Field Functions 
    bool hasMinimumEniIpv6AddressQuantity() const { return this->minimumEniIpv6AddressQuantity_ != nullptr;};
    void deleteMinimumEniIpv6AddressQuantity() { this->minimumEniIpv6AddressQuantity_ = nullptr;};
    inline int64_t getMinimumEniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniIpv6AddressQuantity_, 0L) };
    inline InstancePatterns& setMinimumEniIpv6AddressQuantity(int64_t minimumEniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniIpv6AddressQuantity_, minimumEniIpv6AddressQuantity) };


    // minimumEniPrivateIpAddressQuantity Field Functions 
    bool hasMinimumEniPrivateIpAddressQuantity() const { return this->minimumEniPrivateIpAddressQuantity_ != nullptr;};
    void deleteMinimumEniPrivateIpAddressQuantity() { this->minimumEniPrivateIpAddressQuantity_ = nullptr;};
    inline int64_t getMinimumEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniPrivateIpAddressQuantity_, 0L) };
    inline InstancePatterns& setMinimumEniPrivateIpAddressQuantity(int64_t minimumEniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniPrivateIpAddressQuantity_, minimumEniPrivateIpAddressQuantity) };


    // minimumEniQuantity Field Functions 
    bool hasMinimumEniQuantity() const { return this->minimumEniQuantity_ != nullptr;};
    void deleteMinimumEniQuantity() { this->minimumEniQuantity_ = nullptr;};
    inline int64_t getMinimumEniQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniQuantity_, 0L) };
    inline InstancePatterns& setMinimumEniQuantity(int64_t minimumEniQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniQuantity_, minimumEniQuantity) };


  protected:
    shared_ptr<vector<string>> architectures_ {};
    shared_ptr<string> burstPerformanceOption_ {};
    shared_ptr<int64_t> core_ {};
    shared_ptr<int64_t> cores_ {};
    shared_ptr<vector<string>> cpuArchitectures_ {};
    shared_ptr<vector<string>> excludedInstanceTypes_ {};
    shared_ptr<vector<string>> instanceCategories_ {};
    shared_ptr<string> instanceFamilyLevel_ {};
    shared_ptr<vector<string>> instanceTypeFamilies_ {};
    shared_ptr<int64_t> maxCpuCores_ {};
    shared_ptr<float> maxMemorySize_ {};
    shared_ptr<float> maxPrice_ {};
    shared_ptr<int64_t> maximumGpuAmount_ {};
    shared_ptr<float> memory_ {};
    shared_ptr<int64_t> minCpuCores_ {};
    shared_ptr<float> minMemorySize_ {};
    shared_ptr<int64_t> minimumEniIpv6AddressQuantity_ {};
    shared_ptr<int64_t> minimumEniPrivateIpAddressQuantity_ {};
    shared_ptr<int64_t> minimumEniQuantity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
