// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_INSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class InstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(CpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_TO_JSON(CpuCore, cpuCore_);
      DARABONBA_PTR_TO_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(Optimized, optimized_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_FROM_JSON(CpuCore, cpuCore_);
      DARABONBA_PTR_FROM_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(Optimized, optimized_);
    };
    InstanceType() = default ;
    InstanceType(const InstanceType &) = default ;
    InstanceType(InstanceType &&) = default ;
    InstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceType() = default ;
    InstanceType& operator=(const InstanceType &) = default ;
    InstanceType& operator=(InstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuArchitecture_ == nullptr
        && this->cpuCore_ == nullptr && this->instanceCategory_ == nullptr && this->instanceType_ == nullptr && this->instanceTypeFamily_ == nullptr && this->localStorageAmount_ == nullptr
        && this->localStorageCapacity_ == nullptr && this->modifyType_ == nullptr && this->optimized_ == nullptr; };
    // cpuArchitecture Field Functions 
    bool hasCpuArchitecture() const { return this->cpuArchitecture_ != nullptr;};
    void deleteCpuArchitecture() { this->cpuArchitecture_ = nullptr;};
    inline string getCpuArchitecture() const { DARABONBA_PTR_GET_DEFAULT(cpuArchitecture_, "") };
    inline InstanceType& setCpuArchitecture(string cpuArchitecture) { DARABONBA_PTR_SET_VALUE(cpuArchitecture_, cpuArchitecture) };


    // cpuCore Field Functions 
    bool hasCpuCore() const { return this->cpuCore_ != nullptr;};
    void deleteCpuCore() { this->cpuCore_ = nullptr;};
    inline int32_t getCpuCore() const { DARABONBA_PTR_GET_DEFAULT(cpuCore_, 0) };
    inline InstanceType& setCpuCore(int32_t cpuCore) { DARABONBA_PTR_SET_VALUE(cpuCore_, cpuCore) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string getInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline InstanceType& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline InstanceType& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline InstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // localStorageAmount Field Functions 
    bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
    void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
    inline int32_t getLocalStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
    inline InstanceType& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


    // localStorageCapacity Field Functions 
    bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
    void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
    inline int64_t getLocalStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
    inline InstanceType& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline InstanceType& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // optimized Field Functions 
    bool hasOptimized() const { return this->optimized_ != nullptr;};
    void deleteOptimized() { this->optimized_ = nullptr;};
    inline bool getOptimized() const { DARABONBA_PTR_GET_DEFAULT(optimized_, false) };
    inline InstanceType& setOptimized(bool optimized) { DARABONBA_PTR_SET_VALUE(optimized_, optimized) };


  protected:
    // The CPU architecture. Valid values:
    // 
    // - `X86`: X86 architecture.
    // 
    // - `ARM`: ARM architecture.
    shared_ptr<string> cpuArchitecture_ {};
    // The number of vCPUs.
    shared_ptr<int32_t> cpuCore_ {};
    // The instance category. Valid values:
    // 
    // - `General-purpose`: A general-purpose instance type.
    // 
    // - `Compute-optimized`: A compute-optimized instance type.
    // 
    // - `Memory-optimized`: A memory-optimized instance type.
    // 
    // - `Big data`: A big data instance type.
    // 
    // - `Local SSDs`: A local SSD instance type.
    // 
    // - `High Clock Speed`: A high clock speed instance type.
    // 
    // - `Enhanced`: An enhanced instance type.
    // 
    // - `Shared`: A shared instance type.
    // 
    // - `Compute-optimized with GPU`: A compute-optimized instance type with GPUs.
    // 
    // - `Visual Compute-optimized`: A visual compute-optimized instance type.
    // 
    // - `Heterogeneous Service`: A heterogeneous service instance type.
    // 
    // - `Compute-optimized with FPGA`: A compute-optimized instance type with FPGAs.
    // 
    // - `Compute-optimized with NPU`: A compute-optimized instance type with NPUs.
    // 
    // - `ECS Bare Metal`: An ECS Bare Metal instance.
    // 
    // - `Super Computing Cluster`: A supercomputing cluster instance type.
    shared_ptr<string> instanceCategory_ {};
    // The ECS instance type. For more information, see [Instance type families](https://help.aliyun.com/document_detail/25378.html).
    shared_ptr<string> instanceType_ {};
    // The instance type family. For valid values, see the ECS documentation for [DescribeInstanceTypeFamilies](https://help.aliyun.com/document_detail/25621.html).
    shared_ptr<string> instanceTypeFamily_ {};
    // The number of local disks attached to the instance.
    shared_ptr<int32_t> localStorageAmount_ {};
    // The capacity of each local disk attached to the instance, in GiB.
    shared_ptr<int64_t> localStorageCapacity_ {};
    shared_ptr<string> modifyType_ {};
    // Specifies whether the instance type is I/O optimized. Valid values:
    // 
    // - `true`: The instance type is I/O optimized.
    // 
    // - `false`: The instance type is not I/O optimized.
    shared_ptr<bool> optimized_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
