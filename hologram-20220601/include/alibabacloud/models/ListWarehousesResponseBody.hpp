// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListWarehousesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehousesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(WarehouseList, warehouseList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehousesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(WarehouseList, warehouseList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListWarehousesResponseBody() = default ;
    ListWarehousesResponseBody(const ListWarehousesResponseBody &) = default ;
    ListWarehousesResponseBody(ListWarehousesResponseBody &&) = default ;
    ListWarehousesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehousesResponseBody() = default ;
    ListWarehousesResponseBody& operator=(const ListWarehousesResponseBody &) = default ;
    ListWarehousesResponseBody& operator=(ListWarehousesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarehouseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarehouseList& obj) { 
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Mem, mem_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, WarehouseList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Mem, mem_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      WarehouseList() = default ;
      WarehouseList(const WarehouseList &) = default ;
      WarehouseList(WarehouseList &&) = default ;
      WarehouseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarehouseList() = default ;
      WarehouseList& operator=(const WarehouseList &) = default ;
      WarehouseList& operator=(WarehouseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->id_ == nullptr && this->mem_ == nullptr && this->name_ == nullptr && this->nodeCount_ == nullptr && this->status_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
      inline WarehouseList& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline WarehouseList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mem Field Functions 
      bool hasMem() const { return this->mem_ != nullptr;};
      void deleteMem() { this->mem_ = nullptr;};
      inline int64_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0L) };
      inline WarehouseList& setMem(int64_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WarehouseList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline int64_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
      inline WarehouseList& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline WarehouseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The number of CPU cores.
      shared_ptr<int64_t> cpu_ {};
      // The ID.
      shared_ptr<int64_t> id_ {};
      // The memory capacity.
      shared_ptr<int64_t> mem_ {};
      // The name of the virtual warehouse instance.
      shared_ptr<string> name_ {};
      // The number of compute nodes.
      shared_ptr<int64_t> nodeCount_ {};
      // The status.
      // 
      // Valid values:
      // 
      // *   kRunning
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   kSuspended
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   kInit
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   kFailed
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   kAllocating
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->warehouseList_ == nullptr
        && this->requestId_ == nullptr; };
    // warehouseList Field Functions 
    bool hasWarehouseList() const { return this->warehouseList_ != nullptr;};
    void deleteWarehouseList() { this->warehouseList_ = nullptr;};
    inline const vector<ListWarehousesResponseBody::WarehouseList> & getWarehouseList() const { DARABONBA_PTR_GET_CONST(warehouseList_, vector<ListWarehousesResponseBody::WarehouseList>) };
    inline vector<ListWarehousesResponseBody::WarehouseList> getWarehouseList() { DARABONBA_PTR_GET(warehouseList_, vector<ListWarehousesResponseBody::WarehouseList>) };
    inline ListWarehousesResponseBody& setWarehouseList(const vector<ListWarehousesResponseBody::WarehouseList> & warehouseList) { DARABONBA_PTR_SET_VALUE(warehouseList_, warehouseList) };
    inline ListWarehousesResponseBody& setWarehouseList(vector<ListWarehousesResponseBody::WarehouseList> && warehouseList) { DARABONBA_PTR_SET_RVALUE(warehouseList_, warehouseList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarehousesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of virtual warehouse instances.
    shared_ptr<vector<ListWarehousesResponseBody::WarehouseList>> warehouseList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
