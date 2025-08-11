// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESRESPONSEBODYPATTERNTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESRESPONSEBODYPATTERNTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribePatternTypesResponseBodyPatternTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternTypesResponseBodyPatternTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternTypesResponseBodyPatternTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    DescribePatternTypesResponseBodyPatternTypes() = default ;
    DescribePatternTypesResponseBodyPatternTypes(const DescribePatternTypesResponseBodyPatternTypes &) = default ;
    DescribePatternTypesResponseBodyPatternTypes(DescribePatternTypesResponseBodyPatternTypes &&) = default ;
    DescribePatternTypesResponseBodyPatternTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternTypesResponseBodyPatternTypes() = default ;
    DescribePatternTypesResponseBodyPatternTypes& operator=(const DescribePatternTypesResponseBodyPatternTypes &) = default ;
    DescribePatternTypesResponseBodyPatternTypes& operator=(DescribePatternTypesResponseBodyPatternTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cores_ != nullptr
        && this->instanceFamilyLevel_ != nullptr && this->instanceType_ != nullptr && this->instanceTypeFamily_ != nullptr && this->memory_ != nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribePatternTypesResponseBodyPatternTypes& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribePatternTypesResponseBodyPatternTypes& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribePatternTypesResponseBodyPatternTypes& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribePatternTypesResponseBodyPatternTypes& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribePatternTypesResponseBodyPatternTypes& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The number of vCPUs that are assigned to the instance type.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The level of the instance family.
    // 
    // *   EntryLevel: entry level (shared instance types) Instance types of this level are the most cost-effective but may not provide stable computing performance. Instance types of this level are suitable for business scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
    // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources and are suitable for scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // *   CreditEntryLevel: credit-based entry level (burstable instance types). CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The name of the instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The instance family.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The memory size that are assigned to the instance type. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
