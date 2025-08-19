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
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(totalCpuCores, totalCpuCores_);
      DARABONBA_PTR_TO_JSON(totalDiskSize, totalDiskSize_);
      DARABONBA_PTR_TO_JSON(totalGpuMemorySize, totalGpuMemorySize_);
      DARABONBA_PTR_TO_JSON(totalMemorySize, totalMemorySize_);
    };
    friend void from_json(const Darabonba::Json& j, ResidentResourceAllocation& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
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
    virtual bool empty() const override { this->functionName_ != nullptr
        && this->instanceCount_ != nullptr && this->qualifier_ != nullptr && this->totalCpuCores_ != nullptr && this->totalDiskSize_ != nullptr && this->totalGpuMemorySize_ != nullptr
        && this->totalMemorySize_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ResidentResourceAllocation& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline ResidentResourceAllocation& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline ResidentResourceAllocation& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // totalCpuCores Field Functions 
    bool hasTotalCpuCores() const { return this->totalCpuCores_ != nullptr;};
    void deleteTotalCpuCores() { this->totalCpuCores_ = nullptr;};
    inline double totalCpuCores() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCores_, 0.0) };
    inline ResidentResourceAllocation& setTotalCpuCores(double totalCpuCores) { DARABONBA_PTR_SET_VALUE(totalCpuCores_, totalCpuCores) };


    // totalDiskSize Field Functions 
    bool hasTotalDiskSize() const { return this->totalDiskSize_ != nullptr;};
    void deleteTotalDiskSize() { this->totalDiskSize_ = nullptr;};
    inline double totalDiskSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskSize_, 0.0) };
    inline ResidentResourceAllocation& setTotalDiskSize(double totalDiskSize) { DARABONBA_PTR_SET_VALUE(totalDiskSize_, totalDiskSize) };


    // totalGpuMemorySize Field Functions 
    bool hasTotalGpuMemorySize() const { return this->totalGpuMemorySize_ != nullptr;};
    void deleteTotalGpuMemorySize() { this->totalGpuMemorySize_ = nullptr;};
    inline double totalGpuMemorySize() const { DARABONBA_PTR_GET_DEFAULT(totalGpuMemorySize_, 0.0) };
    inline ResidentResourceAllocation& setTotalGpuMemorySize(double totalGpuMemorySize) { DARABONBA_PTR_SET_VALUE(totalGpuMemorySize_, totalGpuMemorySize) };


    // totalMemorySize Field Functions 
    bool hasTotalMemorySize() const { return this->totalMemorySize_ != nullptr;};
    void deleteTotalMemorySize() { this->totalMemorySize_ = nullptr;};
    inline double totalMemorySize() const { DARABONBA_PTR_GET_DEFAULT(totalMemorySize_, 0.0) };
    inline ResidentResourceAllocation& setTotalMemorySize(double totalMemorySize) { DARABONBA_PTR_SET_VALUE(totalMemorySize_, totalMemorySize) };


  protected:
    // 使用该资源池的函数名
    std::shared_ptr<string> functionName_ = nullptr;
    // 实例数
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // 函数的别名
    std::shared_ptr<string> qualifier_ = nullptr;
    // CPU 占用总核数
    std::shared_ptr<double> totalCpuCores_ = nullptr;
    // 占用磁盘大小，单位 GB
    std::shared_ptr<double> totalDiskSize_ = nullptr;
    // 占用显存大小，单位 GB
    std::shared_ptr<double> totalGpuMemorySize_ = nullptr;
    // 内存占用大小，单位 GB
    std::shared_ptr<double> totalMemorySize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
