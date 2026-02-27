// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAREHOUSEDETAILRESPONSEBODY_HPP_
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
  class GetWarehouseDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarehouseDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WarehouseDetail, warehouseDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarehouseDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WarehouseDetail, warehouseDetail_);
    };
    GetWarehouseDetailResponseBody() = default ;
    GetWarehouseDetailResponseBody(const GetWarehouseDetailResponseBody &) = default ;
    GetWarehouseDetailResponseBody(GetWarehouseDetailResponseBody &&) = default ;
    GetWarehouseDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarehouseDetailResponseBody() = default ;
    GetWarehouseDetailResponseBody& operator=(const GetWarehouseDetailResponseBody &) = default ;
    GetWarehouseDetailResponseBody& operator=(GetWarehouseDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarehouseDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarehouseDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AutoElasticCpu, autoElasticCpu_);
        DARABONBA_PTR_TO_JSON(RemainingCpu, remainingCpu_);
        DARABONBA_PTR_TO_JSON(ReservedCpu, reservedCpu_);
        DARABONBA_PTR_TO_JSON(TimedElasticCpu, timedElasticCpu_);
        DARABONBA_PTR_TO_JSON(WarehouseList, warehouseList_);
      };
      friend void from_json(const Darabonba::Json& j, WarehouseDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoElasticCpu, autoElasticCpu_);
        DARABONBA_PTR_FROM_JSON(RemainingCpu, remainingCpu_);
        DARABONBA_PTR_FROM_JSON(ReservedCpu, reservedCpu_);
        DARABONBA_PTR_FROM_JSON(TimedElasticCpu, timedElasticCpu_);
        DARABONBA_PTR_FROM_JSON(WarehouseList, warehouseList_);
      };
      WarehouseDetail() = default ;
      WarehouseDetail(const WarehouseDetail &) = default ;
      WarehouseDetail(WarehouseDetail &&) = default ;
      WarehouseDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarehouseDetail() = default ;
      WarehouseDetail& operator=(const WarehouseDetail &) = default ;
      WarehouseDetail& operator=(WarehouseDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WarehouseList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarehouseList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, WarehouseList& obj) { 
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
        virtual bool empty() const override { return this->autoScaleType_ == nullptr
        && this->clusterCount_ == nullptr && this->clusterCpu_ == nullptr && this->cpu_ == nullptr && this->defaultWarehouse_ == nullptr && this->elasticCpu_ == nullptr
        && this->elasticType_ == nullptr && this->id_ == nullptr && this->initClusterCount_ == nullptr && this->maxClusterCount_ == nullptr && this->mem_ == nullptr
        && this->name_ == nullptr && this->nodeCount_ == nullptr && this->rebalanceStatus_ == nullptr && this->status_ == nullptr; };
        // autoScaleType Field Functions 
        bool hasAutoScaleType() const { return this->autoScaleType_ != nullptr;};
        void deleteAutoScaleType() { this->autoScaleType_ = nullptr;};
        inline string getAutoScaleType() const { DARABONBA_PTR_GET_DEFAULT(autoScaleType_, "") };
        inline WarehouseList& setAutoScaleType(string autoScaleType) { DARABONBA_PTR_SET_VALUE(autoScaleType_, autoScaleType) };


        // clusterCount Field Functions 
        bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
        void deleteClusterCount() { this->clusterCount_ = nullptr;};
        inline string getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, "") };
        inline WarehouseList& setClusterCount(string clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


        // clusterCpu Field Functions 
        bool hasClusterCpu() const { return this->clusterCpu_ != nullptr;};
        void deleteClusterCpu() { this->clusterCpu_ = nullptr;};
        inline string getClusterCpu() const { DARABONBA_PTR_GET_DEFAULT(clusterCpu_, "") };
        inline WarehouseList& setClusterCpu(string clusterCpu) { DARABONBA_PTR_SET_VALUE(clusterCpu_, clusterCpu) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
        inline WarehouseList& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // defaultWarehouse Field Functions 
        bool hasDefaultWarehouse() const { return this->defaultWarehouse_ != nullptr;};
        void deleteDefaultWarehouse() { this->defaultWarehouse_ = nullptr;};
        inline bool getDefaultWarehouse() const { DARABONBA_PTR_GET_DEFAULT(defaultWarehouse_, false) };
        inline WarehouseList& setDefaultWarehouse(bool defaultWarehouse) { DARABONBA_PTR_SET_VALUE(defaultWarehouse_, defaultWarehouse) };


        // elasticCpu Field Functions 
        bool hasElasticCpu() const { return this->elasticCpu_ != nullptr;};
        void deleteElasticCpu() { this->elasticCpu_ = nullptr;};
        inline int64_t getElasticCpu() const { DARABONBA_PTR_GET_DEFAULT(elasticCpu_, 0L) };
        inline WarehouseList& setElasticCpu(int64_t elasticCpu) { DARABONBA_PTR_SET_VALUE(elasticCpu_, elasticCpu) };


        // elasticType Field Functions 
        bool hasElasticType() const { return this->elasticType_ != nullptr;};
        void deleteElasticType() { this->elasticType_ = nullptr;};
        inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
        inline WarehouseList& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline WarehouseList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // initClusterCount Field Functions 
        bool hasInitClusterCount() const { return this->initClusterCount_ != nullptr;};
        void deleteInitClusterCount() { this->initClusterCount_ = nullptr;};
        inline string getInitClusterCount() const { DARABONBA_PTR_GET_DEFAULT(initClusterCount_, "") };
        inline WarehouseList& setInitClusterCount(string initClusterCount) { DARABONBA_PTR_SET_VALUE(initClusterCount_, initClusterCount) };


        // maxClusterCount Field Functions 
        bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
        void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
        inline string getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, "") };
        inline WarehouseList& setMaxClusterCount(string maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


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


        // rebalanceStatus Field Functions 
        bool hasRebalanceStatus() const { return this->rebalanceStatus_ != nullptr;};
        void deleteRebalanceStatus() { this->rebalanceStatus_ = nullptr;};
        inline string getRebalanceStatus() const { DARABONBA_PTR_GET_DEFAULT(rebalanceStatus_, "") };
        inline WarehouseList& setRebalanceStatus(string rebalanceStatus) { DARABONBA_PTR_SET_VALUE(rebalanceStatus_, rebalanceStatus) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline WarehouseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> autoScaleType_ {};
        shared_ptr<string> clusterCount_ {};
        shared_ptr<string> clusterCpu_ {};
        // The number of CPU cores.
        shared_ptr<int64_t> cpu_ {};
        shared_ptr<bool> defaultWarehouse_ {};
        shared_ptr<int64_t> elasticCpu_ {};
        shared_ptr<string> elasticType_ {};
        // The ID.
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> initClusterCount_ {};
        shared_ptr<string> maxClusterCount_ {};
        // The memory capacity.
        shared_ptr<int64_t> mem_ {};
        // The name of the virtual warehouse instance.
        shared_ptr<string> name_ {};
        // The number of compute nodes.
        shared_ptr<int64_t> nodeCount_ {};
        shared_ptr<string> rebalanceStatus_ {};
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

      virtual bool empty() const override { return this->autoElasticCpu_ == nullptr
        && this->remainingCpu_ == nullptr && this->reservedCpu_ == nullptr && this->timedElasticCpu_ == nullptr && this->warehouseList_ == nullptr; };
      // autoElasticCpu Field Functions 
      bool hasAutoElasticCpu() const { return this->autoElasticCpu_ != nullptr;};
      void deleteAutoElasticCpu() { this->autoElasticCpu_ = nullptr;};
      inline string getAutoElasticCpu() const { DARABONBA_PTR_GET_DEFAULT(autoElasticCpu_, "") };
      inline WarehouseDetail& setAutoElasticCpu(string autoElasticCpu) { DARABONBA_PTR_SET_VALUE(autoElasticCpu_, autoElasticCpu) };


      // remainingCpu Field Functions 
      bool hasRemainingCpu() const { return this->remainingCpu_ != nullptr;};
      void deleteRemainingCpu() { this->remainingCpu_ = nullptr;};
      inline string getRemainingCpu() const { DARABONBA_PTR_GET_DEFAULT(remainingCpu_, "") };
      inline WarehouseDetail& setRemainingCpu(string remainingCpu) { DARABONBA_PTR_SET_VALUE(remainingCpu_, remainingCpu) };


      // reservedCpu Field Functions 
      bool hasReservedCpu() const { return this->reservedCpu_ != nullptr;};
      void deleteReservedCpu() { this->reservedCpu_ = nullptr;};
      inline string getReservedCpu() const { DARABONBA_PTR_GET_DEFAULT(reservedCpu_, "") };
      inline WarehouseDetail& setReservedCpu(string reservedCpu) { DARABONBA_PTR_SET_VALUE(reservedCpu_, reservedCpu) };


      // timedElasticCpu Field Functions 
      bool hasTimedElasticCpu() const { return this->timedElasticCpu_ != nullptr;};
      void deleteTimedElasticCpu() { this->timedElasticCpu_ = nullptr;};
      inline string getTimedElasticCpu() const { DARABONBA_PTR_GET_DEFAULT(timedElasticCpu_, "") };
      inline WarehouseDetail& setTimedElasticCpu(string timedElasticCpu) { DARABONBA_PTR_SET_VALUE(timedElasticCpu_, timedElasticCpu) };


      // warehouseList Field Functions 
      bool hasWarehouseList() const { return this->warehouseList_ != nullptr;};
      void deleteWarehouseList() { this->warehouseList_ = nullptr;};
      inline const vector<WarehouseDetail::WarehouseList> & getWarehouseList() const { DARABONBA_PTR_GET_CONST(warehouseList_, vector<WarehouseDetail::WarehouseList>) };
      inline vector<WarehouseDetail::WarehouseList> getWarehouseList() { DARABONBA_PTR_GET(warehouseList_, vector<WarehouseDetail::WarehouseList>) };
      inline WarehouseDetail& setWarehouseList(const vector<WarehouseDetail::WarehouseList> & warehouseList) { DARABONBA_PTR_SET_VALUE(warehouseList_, warehouseList) };
      inline WarehouseDetail& setWarehouseList(vector<WarehouseDetail::WarehouseList> && warehouseList) { DARABONBA_PTR_SET_RVALUE(warehouseList_, warehouseList) };


    protected:
      shared_ptr<string> autoElasticCpu_ {};
      // The remaining unallocated computing resources of the virtual warehouse instance.
      shared_ptr<string> remainingCpu_ {};
      // The reserved computing resources. The amount of computing resources in all running virtual warehouses in an instance cannot exceed the amount of reserved computing resources in the virtual warehouses.
      shared_ptr<string> reservedCpu_ {};
      shared_ptr<string> timedElasticCpu_ {};
      // The list of virtual warehouses.
      shared_ptr<vector<WarehouseDetail::WarehouseList>> warehouseList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->warehouseDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWarehouseDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warehouseDetail Field Functions 
    bool hasWarehouseDetail() const { return this->warehouseDetail_ != nullptr;};
    void deleteWarehouseDetail() { this->warehouseDetail_ = nullptr;};
    inline const GetWarehouseDetailResponseBody::WarehouseDetail & getWarehouseDetail() const { DARABONBA_PTR_GET_CONST(warehouseDetail_, GetWarehouseDetailResponseBody::WarehouseDetail) };
    inline GetWarehouseDetailResponseBody::WarehouseDetail getWarehouseDetail() { DARABONBA_PTR_GET(warehouseDetail_, GetWarehouseDetailResponseBody::WarehouseDetail) };
    inline GetWarehouseDetailResponseBody& setWarehouseDetail(const GetWarehouseDetailResponseBody::WarehouseDetail & warehouseDetail) { DARABONBA_PTR_SET_VALUE(warehouseDetail_, warehouseDetail) };
    inline GetWarehouseDetailResponseBody& setWarehouseDetail(GetWarehouseDetailResponseBody::WarehouseDetail && warehouseDetail) { DARABONBA_PTR_SET_RVALUE(warehouseDetail_, warehouseDetail) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned values.
    shared_ptr<GetWarehouseDetailResponseBody::WarehouseDetail> warehouseDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
