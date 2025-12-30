// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMachineTypesResponseBody() = default ;
    ListMachineTypesResponseBody(const ListMachineTypesResponseBody &) = default ;
    ListMachineTypesResponseBody(ListMachineTypesResponseBody &&) = default ;
    ListMachineTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineTypesResponseBody() = default ;
    ListMachineTypesResponseBody& operator=(const ListMachineTypesResponseBody &) = default ;
    ListMachineTypesResponseBody& operator=(ListMachineTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MachineTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MachineTypes& obj) { 
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
      friend void from_json(const Darabonba::Json& j, MachineTypes& obj) { 
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
      MachineTypes() = default ;
      MachineTypes(const MachineTypes &) = default ;
      MachineTypes(MachineTypes &&) = default ;
      MachineTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MachineTypes() = default ;
      MachineTypes& operator=(const MachineTypes &) = default ;
      MachineTypes& operator=(MachineTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bondNum_ == nullptr
        && this->cpuInfo_ == nullptr && this->diskInfo_ == nullptr && this->gpuInfo_ == nullptr && this->memoryInfo_ == nullptr && this->name_ == nullptr
        && this->networkInfo_ == nullptr && this->nodeCount_ == nullptr && this->totalCpuCore_ == nullptr && this->type_ == nullptr; };
      // bondNum Field Functions 
      bool hasBondNum() const { return this->bondNum_ != nullptr;};
      void deleteBondNum() { this->bondNum_ = nullptr;};
      inline int32_t getBondNum() const { DARABONBA_PTR_GET_DEFAULT(bondNum_, 0) };
      inline MachineTypes& setBondNum(int32_t bondNum) { DARABONBA_PTR_SET_VALUE(bondNum_, bondNum) };


      // cpuInfo Field Functions 
      bool hasCpuInfo() const { return this->cpuInfo_ != nullptr;};
      void deleteCpuInfo() { this->cpuInfo_ = nullptr;};
      inline string getCpuInfo() const { DARABONBA_PTR_GET_DEFAULT(cpuInfo_, "") };
      inline MachineTypes& setCpuInfo(string cpuInfo) { DARABONBA_PTR_SET_VALUE(cpuInfo_, cpuInfo) };


      // diskInfo Field Functions 
      bool hasDiskInfo() const { return this->diskInfo_ != nullptr;};
      void deleteDiskInfo() { this->diskInfo_ = nullptr;};
      inline string getDiskInfo() const { DARABONBA_PTR_GET_DEFAULT(diskInfo_, "") };
      inline MachineTypes& setDiskInfo(string diskInfo) { DARABONBA_PTR_SET_VALUE(diskInfo_, diskInfo) };


      // gpuInfo Field Functions 
      bool hasGpuInfo() const { return this->gpuInfo_ != nullptr;};
      void deleteGpuInfo() { this->gpuInfo_ = nullptr;};
      inline string getGpuInfo() const { DARABONBA_PTR_GET_DEFAULT(gpuInfo_, "") };
      inline MachineTypes& setGpuInfo(string gpuInfo) { DARABONBA_PTR_SET_VALUE(gpuInfo_, gpuInfo) };


      // memoryInfo Field Functions 
      bool hasMemoryInfo() const { return this->memoryInfo_ != nullptr;};
      void deleteMemoryInfo() { this->memoryInfo_ = nullptr;};
      inline string getMemoryInfo() const { DARABONBA_PTR_GET_DEFAULT(memoryInfo_, "") };
      inline MachineTypes& setMemoryInfo(string memoryInfo) { DARABONBA_PTR_SET_VALUE(memoryInfo_, memoryInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MachineTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkInfo Field Functions 
      bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
      void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
      inline string getNetworkInfo() const { DARABONBA_PTR_GET_DEFAULT(networkInfo_, "") };
      inline MachineTypes& setNetworkInfo(string networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline string getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
      inline MachineTypes& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // totalCpuCore Field Functions 
      bool hasTotalCpuCore() const { return this->totalCpuCore_ != nullptr;};
      void deleteTotalCpuCore() { this->totalCpuCore_ = nullptr;};
      inline int32_t getTotalCpuCore() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCore_, 0) };
      inline MachineTypes& setTotalCpuCore(int32_t totalCpuCore) { DARABONBA_PTR_SET_VALUE(totalCpuCore_, totalCpuCore) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MachineTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of bonds.
      shared_ptr<int32_t> bondNum_ {};
      // The CPU information.
      shared_ptr<string> cpuInfo_ {};
      // The disk information.
      shared_ptr<string> diskInfo_ {};
      // The GPU information.
      shared_ptr<string> gpuInfo_ {};
      // The storage information.
      shared_ptr<string> memoryInfo_ {};
      // The name of the instance type.
      shared_ptr<string> name_ {};
      // The network information.
      shared_ptr<string> networkInfo_ {};
      // The number of nodes.
      shared_ptr<string> nodeCount_ {};
      // The number of vCPUs.
      shared_ptr<int32_t> totalCpuCore_ {};
      // The access type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->machineTypes_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline const vector<ListMachineTypesResponseBody::MachineTypes> & getMachineTypes() const { DARABONBA_PTR_GET_CONST(machineTypes_, vector<ListMachineTypesResponseBody::MachineTypes>) };
    inline vector<ListMachineTypesResponseBody::MachineTypes> getMachineTypes() { DARABONBA_PTR_GET(machineTypes_, vector<ListMachineTypesResponseBody::MachineTypes>) };
    inline ListMachineTypesResponseBody& setMachineTypes(const vector<ListMachineTypesResponseBody::MachineTypes> & machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };
    inline ListMachineTypesResponseBody& setMachineTypes(vector<ListMachineTypesResponseBody::MachineTypes> && machineTypes) { DARABONBA_PTR_SET_RVALUE(machineTypes_, machineTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMachineTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMachineTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance types.
    shared_ptr<vector<ListMachineTypesResponseBody::MachineTypes>> machineTypes_ {};
    // The token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
