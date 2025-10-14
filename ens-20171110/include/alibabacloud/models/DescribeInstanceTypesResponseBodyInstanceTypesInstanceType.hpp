// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_TO_JSON(InstanceTypeName, instanceTypeName_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeName, instanceTypeName_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType(DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCoreCount_ == nullptr
        && return this->instanceTypeId_ == nullptr && return this->instanceTypeName_ == nullptr && return this->memorySize_ == nullptr; };
    // cpuCoreCount Field Functions 
    bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
    void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
    inline int32_t cpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


    // instanceTypeId Field Functions 
    bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
    void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
    inline string instanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


    // instanceTypeName Field Functions 
    bool hasInstanceTypeName() const { return this->instanceTypeName_ != nullptr;};
    void deleteInstanceTypeName() { this->instanceTypeName_ = nullptr;};
    inline string instanceTypeName() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeName_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeName(string instanceTypeName) { DARABONBA_PTR_SET_VALUE(instanceTypeName_, instanceTypeName) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpuCoreCount_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<string> instanceTypeId_ = nullptr;
    // The name of the instance type.
    std::shared_ptr<string> instanceTypeName_ = nullptr;
    // The memory size. Unit: MB.
    std::shared_ptr<int32_t> memorySize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
