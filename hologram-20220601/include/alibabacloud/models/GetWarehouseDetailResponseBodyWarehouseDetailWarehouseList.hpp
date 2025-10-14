// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODYWAREHOUSEDETAILWAREHOUSELIST_HPP_
#define ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODYWAREHOUSEDETAILWAREHOUSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScaleType, autoScaleType_);
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(ClusterCpu, clusterCpu_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DefaultWarehouse, defaultWarehouse_);
      DARABONBA_PTR_TO_JSON(ElasticCpu, elasticCpu_);
      DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InitClusterCount, initClusterCount_);
      DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(RebalanceStatus, rebalanceStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScaleType, autoScaleType_);
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(ClusterCpu, clusterCpu_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DefaultWarehouse, defaultWarehouse_);
      DARABONBA_PTR_FROM_JSON(ElasticCpu, elasticCpu_);
      DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InitClusterCount, initClusterCount_);
      DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(RebalanceStatus, rebalanceStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList() = default ;
    GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList(const GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList &) = default ;
    GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList(GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList &&) = default ;
    GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList() = default ;
    GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& operator=(const GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList &) = default ;
    GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& operator=(GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScaleType_ == nullptr
        && return this->clusterCount_ == nullptr && return this->clusterCpu_ == nullptr && return this->cpu_ == nullptr && return this->defaultWarehouse_ == nullptr && return this->elasticCpu_ == nullptr
        && return this->elasticType_ == nullptr && return this->id_ == nullptr && return this->initClusterCount_ == nullptr && return this->maxClusterCount_ == nullptr && return this->mem_ == nullptr
        && return this->name_ == nullptr && return this->nodeCount_ == nullptr && return this->rebalanceStatus_ == nullptr && return this->status_ == nullptr; };
    // autoScaleType Field Functions 
    bool hasAutoScaleType() const { return this->autoScaleType_ != nullptr;};
    void deleteAutoScaleType() { this->autoScaleType_ = nullptr;};
    inline string autoScaleType() const { DARABONBA_PTR_GET_DEFAULT(autoScaleType_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setAutoScaleType(string autoScaleType) { DARABONBA_PTR_SET_VALUE(autoScaleType_, autoScaleType) };


    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline string clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setClusterCount(string clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // clusterCpu Field Functions 
    bool hasClusterCpu() const { return this->clusterCpu_ != nullptr;};
    void deleteClusterCpu() { this->clusterCpu_ = nullptr;};
    inline string clusterCpu() const { DARABONBA_PTR_GET_DEFAULT(clusterCpu_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setClusterCpu(string clusterCpu) { DARABONBA_PTR_SET_VALUE(clusterCpu_, clusterCpu) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // defaultWarehouse Field Functions 
    bool hasDefaultWarehouse() const { return this->defaultWarehouse_ != nullptr;};
    void deleteDefaultWarehouse() { this->defaultWarehouse_ = nullptr;};
    inline bool defaultWarehouse() const { DARABONBA_PTR_GET_DEFAULT(defaultWarehouse_, false) };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setDefaultWarehouse(bool defaultWarehouse) { DARABONBA_PTR_SET_VALUE(defaultWarehouse_, defaultWarehouse) };


    // elasticCpu Field Functions 
    bool hasElasticCpu() const { return this->elasticCpu_ != nullptr;};
    void deleteElasticCpu() { this->elasticCpu_ = nullptr;};
    inline int64_t elasticCpu() const { DARABONBA_PTR_GET_DEFAULT(elasticCpu_, 0L) };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setElasticCpu(int64_t elasticCpu) { DARABONBA_PTR_SET_VALUE(elasticCpu_, elasticCpu) };


    // elasticType Field Functions 
    bool hasElasticType() const { return this->elasticType_ != nullptr;};
    void deleteElasticType() { this->elasticType_ = nullptr;};
    inline string elasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // initClusterCount Field Functions 
    bool hasInitClusterCount() const { return this->initClusterCount_ != nullptr;};
    void deleteInitClusterCount() { this->initClusterCount_ = nullptr;};
    inline string initClusterCount() const { DARABONBA_PTR_GET_DEFAULT(initClusterCount_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setInitClusterCount(string initClusterCount) { DARABONBA_PTR_SET_VALUE(initClusterCount_, initClusterCount) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline string maxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setMaxClusterCount(string maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int64_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0L) };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setMem(int64_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // rebalanceStatus Field Functions 
    bool hasRebalanceStatus() const { return this->rebalanceStatus_ != nullptr;};
    void deleteRebalanceStatus() { this->rebalanceStatus_ = nullptr;};
    inline string rebalanceStatus() const { DARABONBA_PTR_GET_DEFAULT(rebalanceStatus_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setRebalanceStatus(string rebalanceStatus) { DARABONBA_PTR_SET_VALUE(rebalanceStatus_, rebalanceStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWarehouseDetailResponseBodyWarehouseDetailWarehouseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> autoScaleType_ = nullptr;
    std::shared_ptr<string> clusterCount_ = nullptr;
    std::shared_ptr<string> clusterCpu_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    std::shared_ptr<bool> defaultWarehouse_ = nullptr;
    std::shared_ptr<int64_t> elasticCpu_ = nullptr;
    std::shared_ptr<string> elasticType_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> initClusterCount_ = nullptr;
    std::shared_ptr<string> maxClusterCount_ = nullptr;
    // The memory capacity.
    std::shared_ptr<int64_t> mem_ = nullptr;
    // The name of the virtual warehouse instance.
    std::shared_ptr<string> name_ = nullptr;
    // The number of compute nodes.
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
    std::shared_ptr<string> rebalanceStatus_ = nullptr;
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
