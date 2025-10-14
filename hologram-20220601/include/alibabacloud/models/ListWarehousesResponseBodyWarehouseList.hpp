// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSESRESPONSEBODYWAREHOUSELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSESRESPONSEBODYWAREHOUSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListWarehousesResponseBodyWarehouseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehousesResponseBodyWarehouseList& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehousesResponseBodyWarehouseList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListWarehousesResponseBodyWarehouseList() = default ;
    ListWarehousesResponseBodyWarehouseList(const ListWarehousesResponseBodyWarehouseList &) = default ;
    ListWarehousesResponseBodyWarehouseList(ListWarehousesResponseBodyWarehouseList &&) = default ;
    ListWarehousesResponseBodyWarehouseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehousesResponseBodyWarehouseList() = default ;
    ListWarehousesResponseBodyWarehouseList& operator=(const ListWarehousesResponseBodyWarehouseList &) = default ;
    ListWarehousesResponseBodyWarehouseList& operator=(ListWarehousesResponseBodyWarehouseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->id_ == nullptr && return this->mem_ == nullptr && return this->name_ == nullptr && return this->nodeCount_ == nullptr && return this->status_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline ListWarehousesResponseBodyWarehouseList& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWarehousesResponseBodyWarehouseList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int64_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0L) };
    inline ListWarehousesResponseBodyWarehouseList& setMem(int64_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWarehousesResponseBodyWarehouseList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline ListWarehousesResponseBodyWarehouseList& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWarehousesResponseBodyWarehouseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of CPU cores.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The memory capacity.
    std::shared_ptr<int64_t> mem_ = nullptr;
    // The name of the virtual warehouse instance.
    std::shared_ptr<string> name_ = nullptr;
    // The number of compute nodes.
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
