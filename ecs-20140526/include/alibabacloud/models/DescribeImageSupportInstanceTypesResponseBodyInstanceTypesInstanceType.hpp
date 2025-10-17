// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
    };
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType(const DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType(DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(const DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCoreCount_ == nullptr
        && return this->instanceTypeFamily_ == nullptr && return this->instanceTypeId_ == nullptr && return this->memorySize_ == nullptr; };
    // cpuCoreCount Field Functions 
    bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
    void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
    inline int32_t cpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
    inline DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // instanceTypeId Field Functions 
    bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
    void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
    inline string instanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
    inline DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline float memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0.0) };
    inline DescribeImageSupportInstanceTypesResponseBodyInstanceTypesInstanceType& setMemorySize(float memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


  protected:
    // The number of vCPUs of the instance type.
    std::shared_ptr<int32_t> cpuCoreCount_ = nullptr;
    // DescribeImageSupportInstanceTypes
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // Queries the instance types supported by an image.
    std::shared_ptr<string> instanceTypeId_ = nullptr;
    // The memory size of the instance type. Unit: GiB.
    std::shared_ptr<float> memorySize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
