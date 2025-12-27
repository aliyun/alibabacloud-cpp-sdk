// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESRESPONSEBODYDESKTOPTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESRESPONSEBODYDESKTOPTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopTypesResponseBodyDesktopTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopTypesResponseBodyDesktopTypes& obj) { 
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DesktopTypeId, desktopTypeId_);
      DARABONBA_PTR_TO_JSON(DesktopTypeStatus, desktopTypeStatus_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(MaxSessionCount, maxSessionCount_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(StockState, stockState_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopTypesResponseBodyDesktopTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DesktopTypeId, desktopTypeId_);
      DARABONBA_PTR_FROM_JSON(DesktopTypeStatus, desktopTypeStatus_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(MaxSessionCount, maxSessionCount_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(StockState, stockState_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribeDesktopTypesResponseBodyDesktopTypes() = default ;
    DescribeDesktopTypesResponseBodyDesktopTypes(const DescribeDesktopTypesResponseBodyDesktopTypes &) = default ;
    DescribeDesktopTypesResponseBodyDesktopTypes(DescribeDesktopTypesResponseBodyDesktopTypes &&) = default ;
    DescribeDesktopTypesResponseBodyDesktopTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopTypesResponseBodyDesktopTypes() = default ;
    DescribeDesktopTypesResponseBodyDesktopTypes& operator=(const DescribeDesktopTypesResponseBodyDesktopTypes &) = default ;
    DescribeDesktopTypesResponseBodyDesktopTypes& operator=(DescribeDesktopTypesResponseBodyDesktopTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCount_ == nullptr
        && return this->dataDiskSize_ == nullptr && return this->description_ == nullptr && return this->desktopTypeId_ == nullptr && return this->desktopTypeStatus_ == nullptr && return this->gpuCount_ == nullptr
        && return this->gpuMemory_ == nullptr && return this->gpuSpec_ == nullptr && return this->instanceTypeFamily_ == nullptr && return this->maxSessionCount_ == nullptr && return this->memorySize_ == nullptr
        && return this->scopes_ == nullptr && return this->stockState_ == nullptr && return this->systemDiskSize_ == nullptr; };
    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline string cpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setCpuCount(string cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline string dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // desktopTypeId Field Functions 
    bool hasDesktopTypeId() const { return this->desktopTypeId_ != nullptr;};
    void deleteDesktopTypeId() { this->desktopTypeId_ = nullptr;};
    inline string desktopTypeId() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeId_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setDesktopTypeId(string desktopTypeId) { DARABONBA_PTR_SET_VALUE(desktopTypeId_, desktopTypeId) };


    // desktopTypeStatus Field Functions 
    bool hasDesktopTypeStatus() const { return this->desktopTypeStatus_ != nullptr;};
    void deleteDesktopTypeStatus() { this->desktopTypeStatus_ = nullptr;};
    inline string desktopTypeStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeStatus_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setDesktopTypeStatus(string desktopTypeStatus) { DARABONBA_PTR_SET_VALUE(desktopTypeStatus_, desktopTypeStatus) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline float gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // maxSessionCount Field Functions 
    bool hasMaxSessionCount() const { return this->maxSessionCount_ != nullptr;};
    void deleteMaxSessionCount() { this->maxSessionCount_ = nullptr;};
    inline int32_t maxSessionCount() const { DARABONBA_PTR_GET_DEFAULT(maxSessionCount_, 0) };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setMaxSessionCount(int32_t maxSessionCount) { DARABONBA_PTR_SET_VALUE(maxSessionCount_, maxSessionCount) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline string memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> scopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // stockState Field Functions 
    bool hasStockState() const { return this->stockState_ != nullptr;};
    void deleteStockState() { this->stockState_ = nullptr;};
    inline string stockState() const { DARABONBA_PTR_GET_DEFAULT(stockState_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setStockState(string stockState) { DARABONBA_PTR_SET_VALUE(stockState_, stockState) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline string systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, "") };
    inline DescribeDesktopTypesResponseBodyDesktopTypes& setSystemDiskSize(string systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<string> cpuCount_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<string> dataDiskSize_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the cloud desktop type.
    std::shared_ptr<string> desktopTypeId_ = nullptr;
    // The status of the cloud desktop type. If SUFFICIENT is returned, the number of cloud desktops of the type is sufficient.
    std::shared_ptr<string> desktopTypeStatus_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<float> gpuCount_ = nullptr;
    // The GPU memory size. For GPU-accelerated cloud computers, this return value is significant. Unit: MB.
    std::shared_ptr<int32_t> gpuMemory_ = nullptr;
    // The GPU memory.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // The family of the cloud desktop type.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The number of sessions supported by the specification.
    std::shared_ptr<int32_t> maxSessionCount_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<string> memorySize_ = nullptr;
    // The sales modes of the specifications.
    std::shared_ptr<vector<string>> scopes_ = nullptr;
    // The inventory status of the specification.
    // 
    // Valid values:
    // 
    // *   Insufficient
    // *   Sufficient
    std::shared_ptr<string> stockState_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<string> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
