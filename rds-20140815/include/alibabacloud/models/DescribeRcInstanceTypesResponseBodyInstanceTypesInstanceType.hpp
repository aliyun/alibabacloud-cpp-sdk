// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_TO_JSON(DiskQuantity, diskQuantity_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(DiskQuantity, diskQuantity_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
    };
    DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType(const DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType(DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(const DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCoreCount_ == nullptr
        && return this->diskQuantity_ == nullptr && return this->instanceTypeFamily_ == nullptr && return this->instanceTypeId_ == nullptr && return this->memorySize_ == nullptr; };
    // cpuCoreCount Field Functions 
    bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
    void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
    inline int32_t cpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


    // diskQuantity Field Functions 
    bool hasDiskQuantity() const { return this->diskQuantity_ != nullptr;};
    void deleteDiskQuantity() { this->diskQuantity_ = nullptr;};
    inline int64_t diskQuantity() const { DARABONBA_PTR_GET_DEFAULT(diskQuantity_, 0L) };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& setDiskQuantity(int64_t diskQuantity) { DARABONBA_PTR_SET_VALUE(diskQuantity_, diskQuantity) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // instanceTypeId Field Functions 
    bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
    void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
    inline string instanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypesInstanceType& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


  protected:
    // The maximum number of CPU cores.
    std::shared_ptr<int32_t> cpuCoreCount_ = nullptr;
    std::shared_ptr<int64_t> diskQuantity_ = nullptr;
    // The ID of the instance family.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The instance type of the instance.
    std::shared_ptr<string> instanceTypeId_ = nullptr;
    // The memory size of the instance type. Unit: GiB.
    std::shared_ptr<int32_t> memorySize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
