// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESRESPONSEBODY_HPP_
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
  class DescribeDesktopTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopTypes, desktopTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopTypes, desktopTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopTypesResponseBody() = default ;
    DescribeDesktopTypesResponseBody(const DescribeDesktopTypesResponseBody &) = default ;
    DescribeDesktopTypesResponseBody(DescribeDesktopTypesResponseBody &&) = default ;
    DescribeDesktopTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopTypesResponseBody() = default ;
    DescribeDesktopTypesResponseBody& operator=(const DescribeDesktopTypesResponseBody &) = default ;
    DescribeDesktopTypesResponseBody& operator=(DescribeDesktopTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesktopTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopTypes& obj) { 
        DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopTypeId, desktopTypeId_);
        DARABONBA_PTR_TO_JSON(DesktopTypeStatus, desktopTypeStatus_);
        DARABONBA_PTR_TO_JSON(EnvId, envId_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
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
      friend void from_json(const Darabonba::Json& j, DesktopTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopTypeId, desktopTypeId_);
        DARABONBA_PTR_FROM_JSON(DesktopTypeStatus, desktopTypeStatus_);
        DARABONBA_PTR_FROM_JSON(EnvId, envId_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
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
      DesktopTypes() = default ;
      DesktopTypes(const DesktopTypes &) = default ;
      DesktopTypes(DesktopTypes &&) = default ;
      DesktopTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopTypes() = default ;
      DesktopTypes& operator=(const DesktopTypes &) = default ;
      DesktopTypes& operator=(DesktopTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpuCount_ == nullptr
        && this->dataDiskSize_ == nullptr && this->description_ == nullptr && this->desktopTypeId_ == nullptr && this->desktopTypeStatus_ == nullptr && this->envId_ == nullptr
        && this->envType_ == nullptr && this->gpuCount_ == nullptr && this->gpuMemory_ == nullptr && this->gpuSpec_ == nullptr && this->instanceTypeFamily_ == nullptr
        && this->maxSessionCount_ == nullptr && this->memorySize_ == nullptr && this->scopes_ == nullptr && this->stockState_ == nullptr && this->systemDiskSize_ == nullptr; };
      // cpuCount Field Functions 
      bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
      void deleteCpuCount() { this->cpuCount_ = nullptr;};
      inline string getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, "") };
      inline DesktopTypes& setCpuCount(string cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline string getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
      inline DesktopTypes& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DesktopTypes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopTypeId Field Functions 
      bool hasDesktopTypeId() const { return this->desktopTypeId_ != nullptr;};
      void deleteDesktopTypeId() { this->desktopTypeId_ = nullptr;};
      inline string getDesktopTypeId() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeId_, "") };
      inline DesktopTypes& setDesktopTypeId(string desktopTypeId) { DARABONBA_PTR_SET_VALUE(desktopTypeId_, desktopTypeId) };


      // desktopTypeStatus Field Functions 
      bool hasDesktopTypeStatus() const { return this->desktopTypeStatus_ != nullptr;};
      void deleteDesktopTypeStatus() { this->desktopTypeStatus_ = nullptr;};
      inline string getDesktopTypeStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeStatus_, "") };
      inline DesktopTypes& setDesktopTypeStatus(string desktopTypeStatus) { DARABONBA_PTR_SET_VALUE(desktopTypeStatus_, desktopTypeStatus) };


      // envId Field Functions 
      bool hasEnvId() const { return this->envId_ != nullptr;};
      void deleteEnvId() { this->envId_ = nullptr;};
      inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
      inline DesktopTypes& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline DesktopTypes& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // gpuCount Field Functions 
      bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
      void deleteGpuCount() { this->gpuCount_ = nullptr;};
      inline float getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
      inline DesktopTypes& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


      // gpuMemory Field Functions 
      bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
      void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
      inline int32_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
      inline DesktopTypes& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline DesktopTypes& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // instanceTypeFamily Field Functions 
      bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
      void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
      inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
      inline DesktopTypes& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


      // maxSessionCount Field Functions 
      bool hasMaxSessionCount() const { return this->maxSessionCount_ != nullptr;};
      void deleteMaxSessionCount() { this->maxSessionCount_ = nullptr;};
      inline int32_t getMaxSessionCount() const { DARABONBA_PTR_GET_DEFAULT(maxSessionCount_, 0) };
      inline DesktopTypes& setMaxSessionCount(int32_t maxSessionCount) { DARABONBA_PTR_SET_VALUE(maxSessionCount_, maxSessionCount) };


      // memorySize Field Functions 
      bool hasMemorySize() const { return this->memorySize_ != nullptr;};
      void deleteMemorySize() { this->memorySize_ = nullptr;};
      inline string getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
      inline DesktopTypes& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      // scopes Field Functions 
      bool hasScopes() const { return this->scopes_ != nullptr;};
      void deleteScopes() { this->scopes_ = nullptr;};
      inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
      inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
      inline DesktopTypes& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
      inline DesktopTypes& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


      // stockState Field Functions 
      bool hasStockState() const { return this->stockState_ != nullptr;};
      void deleteStockState() { this->stockState_ = nullptr;};
      inline string getStockState() const { DARABONBA_PTR_GET_DEFAULT(stockState_, "") };
      inline DesktopTypes& setStockState(string stockState) { DARABONBA_PTR_SET_VALUE(stockState_, stockState) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline string getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, "") };
      inline DesktopTypes& setSystemDiskSize(string systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // The number of vCPUs.
      shared_ptr<string> cpuCount_ {};
      // The size of the data disk. Unit: GiB.
      shared_ptr<string> dataDiskSize_ {};
      shared_ptr<string> description_ {};
      // The ID of the cloud desktop type.
      shared_ptr<string> desktopTypeId_ {};
      // The status of the cloud desktop type. If SUFFICIENT is returned, the number of cloud desktops of the type is sufficient.
      shared_ptr<string> desktopTypeStatus_ {};
      shared_ptr<string> envId_ {};
      shared_ptr<string> envType_ {};
      // The number of GPUs.
      shared_ptr<float> gpuCount_ {};
      // The GPU memory size. For GPU-accelerated cloud computers, this return value is significant. Unit: MB.
      shared_ptr<int32_t> gpuMemory_ {};
      // The GPU memory.
      shared_ptr<string> gpuSpec_ {};
      // The family of the cloud desktop type.
      shared_ptr<string> instanceTypeFamily_ {};
      // The number of sessions supported by the specification.
      shared_ptr<int32_t> maxSessionCount_ {};
      // The memory size. Unit: MiB.
      shared_ptr<string> memorySize_ {};
      // The sales modes of the specifications.
      shared_ptr<vector<string>> scopes_ {};
      // The inventory status of the specification.
      // 
      // Valid values:
      // 
      // *   Insufficient
      // *   Sufficient
      shared_ptr<string> stockState_ {};
      // The size of the system disk. Unit: GiB.
      shared_ptr<string> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->desktopTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // desktopTypes Field Functions 
    bool hasDesktopTypes() const { return this->desktopTypes_ != nullptr;};
    void deleteDesktopTypes() { this->desktopTypes_ = nullptr;};
    inline const vector<DescribeDesktopTypesResponseBody::DesktopTypes> & getDesktopTypes() const { DARABONBA_PTR_GET_CONST(desktopTypes_, vector<DescribeDesktopTypesResponseBody::DesktopTypes>) };
    inline vector<DescribeDesktopTypesResponseBody::DesktopTypes> getDesktopTypes() { DARABONBA_PTR_GET(desktopTypes_, vector<DescribeDesktopTypesResponseBody::DesktopTypes>) };
    inline DescribeDesktopTypesResponseBody& setDesktopTypes(const vector<DescribeDesktopTypesResponseBody::DesktopTypes> & desktopTypes) { DARABONBA_PTR_SET_VALUE(desktopTypes_, desktopTypes) };
    inline DescribeDesktopTypesResponseBody& setDesktopTypes(vector<DescribeDesktopTypesResponseBody::DesktopTypes> && desktopTypes) { DARABONBA_PTR_SET_RVALUE(desktopTypes_, desktopTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The specifications.
    shared_ptr<vector<DescribeDesktopTypesResponseBody::DesktopTypes>> desktopTypes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
