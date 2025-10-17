// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODYMACHINETYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODYMACHINETYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineTypesResponseBodyMachineTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineTypesResponseBodyMachineTypes& obj) { 
      DARABONBA_PTR_TO_JSON(BondNum, bondNum_);
      DARABONBA_PTR_TO_JSON(CpuInfo, cpuInfo_);
      DARABONBA_PTR_TO_JSON(DiskInfo, diskInfo_);
      DARABONBA_PTR_TO_JSON(GpuInfo, gpuInfo_);
      DARABONBA_PTR_TO_JSON(MemoryInfo, memoryInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(TotalCpuCore, totalCpuCore_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineTypesResponseBodyMachineTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(BondNum, bondNum_);
      DARABONBA_PTR_FROM_JSON(CpuInfo, cpuInfo_);
      DARABONBA_PTR_FROM_JSON(DiskInfo, diskInfo_);
      DARABONBA_PTR_FROM_JSON(GpuInfo, gpuInfo_);
      DARABONBA_PTR_FROM_JSON(MemoryInfo, memoryInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(TotalCpuCore, totalCpuCore_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListMachineTypesResponseBodyMachineTypes() = default ;
    ListMachineTypesResponseBodyMachineTypes(const ListMachineTypesResponseBodyMachineTypes &) = default ;
    ListMachineTypesResponseBodyMachineTypes(ListMachineTypesResponseBodyMachineTypes &&) = default ;
    ListMachineTypesResponseBodyMachineTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineTypesResponseBodyMachineTypes() = default ;
    ListMachineTypesResponseBodyMachineTypes& operator=(const ListMachineTypesResponseBodyMachineTypes &) = default ;
    ListMachineTypesResponseBodyMachineTypes& operator=(ListMachineTypesResponseBodyMachineTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bondNum_ == nullptr
        && return this->cpuInfo_ == nullptr && return this->diskInfo_ == nullptr && return this->gpuInfo_ == nullptr && return this->memoryInfo_ == nullptr && return this->name_ == nullptr
        && return this->networkInfo_ == nullptr && return this->nodeCount_ == nullptr && return this->totalCpuCore_ == nullptr && return this->type_ == nullptr; };
    // bondNum Field Functions 
    bool hasBondNum() const { return this->bondNum_ != nullptr;};
    void deleteBondNum() { this->bondNum_ = nullptr;};
    inline int32_t bondNum() const { DARABONBA_PTR_GET_DEFAULT(bondNum_, 0) };
    inline ListMachineTypesResponseBodyMachineTypes& setBondNum(int32_t bondNum) { DARABONBA_PTR_SET_VALUE(bondNum_, bondNum) };


    // cpuInfo Field Functions 
    bool hasCpuInfo() const { return this->cpuInfo_ != nullptr;};
    void deleteCpuInfo() { this->cpuInfo_ = nullptr;};
    inline string cpuInfo() const { DARABONBA_PTR_GET_DEFAULT(cpuInfo_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setCpuInfo(string cpuInfo) { DARABONBA_PTR_SET_VALUE(cpuInfo_, cpuInfo) };


    // diskInfo Field Functions 
    bool hasDiskInfo() const { return this->diskInfo_ != nullptr;};
    void deleteDiskInfo() { this->diskInfo_ = nullptr;};
    inline string diskInfo() const { DARABONBA_PTR_GET_DEFAULT(diskInfo_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setDiskInfo(string diskInfo) { DARABONBA_PTR_SET_VALUE(diskInfo_, diskInfo) };


    // gpuInfo Field Functions 
    bool hasGpuInfo() const { return this->gpuInfo_ != nullptr;};
    void deleteGpuInfo() { this->gpuInfo_ = nullptr;};
    inline string gpuInfo() const { DARABONBA_PTR_GET_DEFAULT(gpuInfo_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setGpuInfo(string gpuInfo) { DARABONBA_PTR_SET_VALUE(gpuInfo_, gpuInfo) };


    // memoryInfo Field Functions 
    bool hasMemoryInfo() const { return this->memoryInfo_ != nullptr;};
    void deleteMemoryInfo() { this->memoryInfo_ = nullptr;};
    inline string memoryInfo() const { DARABONBA_PTR_GET_DEFAULT(memoryInfo_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setMemoryInfo(string memoryInfo) { DARABONBA_PTR_SET_VALUE(memoryInfo_, memoryInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline string networkInfo() const { DARABONBA_PTR_GET_DEFAULT(networkInfo_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setNetworkInfo(string networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline string nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // totalCpuCore Field Functions 
    bool hasTotalCpuCore() const { return this->totalCpuCore_ != nullptr;};
    void deleteTotalCpuCore() { this->totalCpuCore_ = nullptr;};
    inline int32_t totalCpuCore() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCore_, 0) };
    inline ListMachineTypesResponseBodyMachineTypes& setTotalCpuCore(int32_t totalCpuCore) { DARABONBA_PTR_SET_VALUE(totalCpuCore_, totalCpuCore) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMachineTypesResponseBodyMachineTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of bonds.
    std::shared_ptr<int32_t> bondNum_ = nullptr;
    // The CPU information.
    std::shared_ptr<string> cpuInfo_ = nullptr;
    // The disk information.
    std::shared_ptr<string> diskInfo_ = nullptr;
    // The GPU information.
    std::shared_ptr<string> gpuInfo_ = nullptr;
    // The storage information.
    std::shared_ptr<string> memoryInfo_ = nullptr;
    // The name of the instance type.
    std::shared_ptr<string> name_ = nullptr;
    // The network information.
    std::shared_ptr<string> networkInfo_ = nullptr;
    // The number of nodes.
    std::shared_ptr<string> nodeCount_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> totalCpuCore_ = nullptr;
    // The access type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
