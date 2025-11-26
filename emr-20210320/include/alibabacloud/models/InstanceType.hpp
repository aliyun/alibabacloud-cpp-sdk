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
        && return this->cpuCore_ == nullptr && return this->instanceCategory_ == nullptr && return this->instanceType_ == nullptr && return this->instanceTypeFamily_ == nullptr && return this->localStorageAmount_ == nullptr
        && return this->localStorageCapacity_ == nullptr && return this->modifyType_ == nullptr && return this->optimized_ == nullptr; };
    // cpuArchitecture Field Functions 
    bool hasCpuArchitecture() const { return this->cpuArchitecture_ != nullptr;};
    void deleteCpuArchitecture() { this->cpuArchitecture_ = nullptr;};
    inline string cpuArchitecture() const { DARABONBA_PTR_GET_DEFAULT(cpuArchitecture_, "") };
    inline InstanceType& setCpuArchitecture(string cpuArchitecture) { DARABONBA_PTR_SET_VALUE(cpuArchitecture_, cpuArchitecture) };


    // cpuCore Field Functions 
    bool hasCpuCore() const { return this->cpuCore_ != nullptr;};
    void deleteCpuCore() { this->cpuCore_ = nullptr;};
    inline int32_t cpuCore() const { DARABONBA_PTR_GET_DEFAULT(cpuCore_, 0) };
    inline InstanceType& setCpuCore(int32_t cpuCore) { DARABONBA_PTR_SET_VALUE(cpuCore_, cpuCore) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string instanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline InstanceType& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline InstanceType& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline InstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // localStorageAmount Field Functions 
    bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
    void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
    inline int32_t localStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
    inline InstanceType& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


    // localStorageCapacity Field Functions 
    bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
    void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
    inline int64_t localStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
    inline InstanceType& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string modifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline InstanceType& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // optimized Field Functions 
    bool hasOptimized() const { return this->optimized_ != nullptr;};
    void deleteOptimized() { this->optimized_ = nullptr;};
    inline bool optimized() const { DARABONBA_PTR_GET_DEFAULT(optimized_, false) };
    inline InstanceType& setOptimized(bool optimized) { DARABONBA_PTR_SET_VALUE(optimized_, optimized) };


  protected:
    // cpu架构。
    std::shared_ptr<string> cpuArchitecture_ = nullptr;
    // vCPU内核数目。
    std::shared_ptr<int32_t> cpuCore_ = nullptr;
    // 实例规格分类。取值范围：
    // - General-purpose： 通用型。
    // - Compute-optimized：计算型。
    // - Memory-optimized：内存型。
    // - Big data：大数据型。
    // - Local SSDs ：本地SSD型。
    // - High Clock Speed ：高主频型。
    // - Enhanced ：增强型。
    // - Shared：共享型。
    // - Compute-optimized with GPU ：GPU计算型。
    // - Visual Compute-optimized ：视觉计算型。
    // - Heterogeneous Service ：异构服务型。
    // - Compute-optimized with FPGA ：FPGA计算型。
    // - Compute-optimized with NPU ：NPU计算型。
    // - ECS Bare Metal ：弹性裸金属服务器。
    // - Super Computing Cluster：超级计算集群。
    std::shared_ptr<string> instanceCategory_ = nullptr;
    // 实例规格。
    std::shared_ptr<string> instanceType_ = nullptr;
    // 实例规格所属的实例规格族。取值请参见DescribeInstanceTypeFamilies。
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // 实例挂载的本地盘的数量。
    std::shared_ptr<int32_t> localStorageAmount_ = nullptr;
    // 实例挂载的本地盘的单盘容量。单位：GiB
    std::shared_ptr<int64_t> localStorageCapacity_ = nullptr;
    std::shared_ptr<string> modifyType_ = nullptr;
    // 是否IO优化类型。
    std::shared_ptr<bool> optimized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
