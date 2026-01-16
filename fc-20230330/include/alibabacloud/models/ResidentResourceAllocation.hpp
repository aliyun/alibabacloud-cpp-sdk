// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIDENTRESOURCEALLOCATION_HPP_
#define ALIBABACLOUD_MODELS_RESIDENTRESOURCEALLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ResidentResourceAllocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResidentResourceAllocation& obj) { 
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(totalCpuCores, totalCpuCores_);
      DARABONBA_PTR_TO_JSON(totalDiskSize, totalDiskSize_);
      DARABONBA_PTR_TO_JSON(totalGpuMemorySize, totalGpuMemorySize_);
      DARABONBA_PTR_TO_JSON(totalMemorySize, totalMemorySize_);
    };
    friend void from_json(const Darabonba::Json& j, ResidentResourceAllocation& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(totalCpuCores, totalCpuCores_);
      DARABONBA_PTR_FROM_JSON(totalDiskSize, totalDiskSize_);
      DARABONBA_PTR_FROM_JSON(totalGpuMemorySize, totalGpuMemorySize_);
      DARABONBA_PTR_FROM_JSON(totalMemorySize, totalMemorySize_);
    };
    ResidentResourceAllocation() = default ;
    ResidentResourceAllocation(const ResidentResourceAllocation &) = default ;
    ResidentResourceAllocation(ResidentResourceAllocation &&) = default ;
    ResidentResourceAllocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResidentResourceAllocation() = default ;
    ResidentResourceAllocation& operator=(const ResidentResourceAllocation &) = default ;
    ResidentResourceAllocation& operator=(ResidentResourceAllocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && this->instanceCount_ == nullptr && this->instanceType_ == nullptr && this->qualifier_ == nullptr && this->totalCpuCores_ == nullptr && this->totalDiskSize_ == nullptr
        && this->totalGpuMemorySize_ == nullptr && this->totalMemorySize_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ResidentResourceAllocation& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline ResidentResourceAllocation& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ResidentResourceAllocation& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ResidentResourceAllocation& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // totalCpuCores Field Functions 
    bool hasTotalCpuCores() const { return this->totalCpuCores_ != nullptr;};
    void deleteTotalCpuCores() { this->totalCpuCores_ = nullptr;};
    inline double getTotalCpuCores() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCores_, 0.0) };
    inline ResidentResourceAllocation& setTotalCpuCores(double totalCpuCores) { DARABONBA_PTR_SET_VALUE(totalCpuCores_, totalCpuCores) };


    // totalDiskSize Field Functions 
    bool hasTotalDiskSize() const { return this->totalDiskSize_ != nullptr;};
    void deleteTotalDiskSize() { this->totalDiskSize_ = nullptr;};
    inline double getTotalDiskSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskSize_, 0.0) };
    inline ResidentResourceAllocation& setTotalDiskSize(double totalDiskSize) { DARABONBA_PTR_SET_VALUE(totalDiskSize_, totalDiskSize) };


    // totalGpuMemorySize Field Functions 
    bool hasTotalGpuMemorySize() const { return this->totalGpuMemorySize_ != nullptr;};
    void deleteTotalGpuMemorySize() { this->totalGpuMemorySize_ = nullptr;};
    inline double getTotalGpuMemorySize() const { DARABONBA_PTR_GET_DEFAULT(totalGpuMemorySize_, 0.0) };
    inline ResidentResourceAllocation& setTotalGpuMemorySize(double totalGpuMemorySize) { DARABONBA_PTR_SET_VALUE(totalGpuMemorySize_, totalGpuMemorySize) };


    // totalMemorySize Field Functions 
    bool hasTotalMemorySize() const { return this->totalMemorySize_ != nullptr;};
    void deleteTotalMemorySize() { this->totalMemorySize_ = nullptr;};
    inline double getTotalMemorySize() const { DARABONBA_PTR_GET_DEFAULT(totalMemorySize_, 0.0) };
    inline ResidentResourceAllocation& setTotalMemorySize(double totalMemorySize) { DARABONBA_PTR_SET_VALUE(totalMemorySize_, totalMemorySize) };


  protected:
    // 使用该资源池的函数名
    shared_ptr<string> functionName_ {};
    // 实例数
    shared_ptr<int32_t> instanceCount_ {};
    shared_ptr<string> instanceType_ {};
    // 函数的别名
    shared_ptr<string> qualifier_ {};
    // CPU 占用总核数
    shared_ptr<double> totalCpuCores_ {};
    // 占用磁盘大小，单位 GB
    shared_ptr<double> totalDiskSize_ {};
    // 占用显存大小，单位 GB
    shared_ptr<double> totalGpuMemorySize_ {};
    // 内存占用大小，单位 GB
    shared_ptr<double> totalMemorySize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
