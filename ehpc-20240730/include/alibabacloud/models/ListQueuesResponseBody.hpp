// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodeTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListQueuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQueuesResponseBody() = default ;
    ListQueuesResponseBody(const ListQueuesResponseBody &) = default ;
    ListQueuesResponseBody(ListQueuesResponseBody &&) = default ;
    ListQueuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesResponseBody() = default ;
    ListQueuesResponseBody& operator=(const ListQueuesResponseBody &) = default ;
    ListQueuesResponseBody& operator=(ListQueuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Queues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Queues& obj) { 
        DARABONBA_PTR_TO_JSON(ComputeNodes, computeNodes_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnableScaleIn, enableScaleIn_);
        DARABONBA_PTR_TO_JSON(EnableScaleOut, enableScaleOut_);
        DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
        DARABONBA_PTR_TO_JSON(MaxCountPerCycle, maxCountPerCycle_);
        DARABONBA_PTR_TO_JSON(MinCount, minCount_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(TotalCores, totalCores_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, Queues& obj) { 
        DARABONBA_PTR_FROM_JSON(ComputeNodes, computeNodes_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnableScaleIn, enableScaleIn_);
        DARABONBA_PTR_FROM_JSON(EnableScaleOut, enableScaleOut_);
        DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
        DARABONBA_PTR_FROM_JSON(MaxCountPerCycle, maxCountPerCycle_);
        DARABONBA_PTR_FROM_JSON(MinCount, minCount_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(TotalCores, totalCores_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      };
      Queues() = default ;
      Queues(const Queues &) = default ;
      Queues(Queues &&) = default ;
      Queues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Queues() = default ;
      Queues& operator=(const Queues &) = default ;
      Queues& operator=(Queues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(CreatingCounts, creatingCounts_);
          DARABONBA_PTR_TO_JSON(ExceptionCounts, exceptionCounts_);
          DARABONBA_PTR_TO_JSON(RunningCounts, runningCounts_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatingCounts, creatingCounts_);
          DARABONBA_PTR_FROM_JSON(ExceptionCounts, exceptionCounts_);
          DARABONBA_PTR_FROM_JSON(RunningCounts, runningCounts_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creatingCounts_ == nullptr
        && this->exceptionCounts_ == nullptr && this->runningCounts_ == nullptr; };
        // creatingCounts Field Functions 
        bool hasCreatingCounts() const { return this->creatingCounts_ != nullptr;};
        void deleteCreatingCounts() { this->creatingCounts_ = nullptr;};
        inline int32_t getCreatingCounts() const { DARABONBA_PTR_GET_DEFAULT(creatingCounts_, 0) };
        inline Nodes& setCreatingCounts(int32_t creatingCounts) { DARABONBA_PTR_SET_VALUE(creatingCounts_, creatingCounts) };


        // exceptionCounts Field Functions 
        bool hasExceptionCounts() const { return this->exceptionCounts_ != nullptr;};
        void deleteExceptionCounts() { this->exceptionCounts_ = nullptr;};
        inline int32_t getExceptionCounts() const { DARABONBA_PTR_GET_DEFAULT(exceptionCounts_, 0) };
        inline Nodes& setExceptionCounts(int32_t exceptionCounts) { DARABONBA_PTR_SET_VALUE(exceptionCounts_, exceptionCounts) };


        // runningCounts Field Functions 
        bool hasRunningCounts() const { return this->runningCounts_ != nullptr;};
        void deleteRunningCounts() { this->runningCounts_ = nullptr;};
        inline int32_t getRunningCounts() const { DARABONBA_PTR_GET_DEFAULT(runningCounts_, 0) };
        inline Nodes& setRunningCounts(int32_t runningCounts) { DARABONBA_PTR_SET_VALUE(runningCounts_, runningCounts) };


      protected:
        // The number of compute nodes that are not ready.
        shared_ptr<int32_t> creatingCounts_ {};
        // The number of malfunctioning compute nodes.
        shared_ptr<int32_t> exceptionCounts_ {};
        // The number of running compute nodes.
        shared_ptr<int32_t> runningCounts_ {};
      };

      virtual bool empty() const override { return this->computeNodes_ == nullptr
        && this->createTime_ == nullptr && this->enableScaleIn_ == nullptr && this->enableScaleOut_ == nullptr && this->maxCount_ == nullptr && this->maxCountPerCycle_ == nullptr
        && this->minCount_ == nullptr && this->nodes_ == nullptr && this->queueName_ == nullptr && this->totalCores_ == nullptr && this->updateTime_ == nullptr
        && this->vSwitchIds_ == nullptr; };
      // computeNodes Field Functions 
      bool hasComputeNodes() const { return this->computeNodes_ != nullptr;};
      void deleteComputeNodes() { this->computeNodes_ = nullptr;};
      inline const vector<NodeTemplate> & getComputeNodes() const { DARABONBA_PTR_GET_CONST(computeNodes_, vector<NodeTemplate>) };
      inline vector<NodeTemplate> getComputeNodes() { DARABONBA_PTR_GET(computeNodes_, vector<NodeTemplate>) };
      inline Queues& setComputeNodes(const vector<NodeTemplate> & computeNodes) { DARABONBA_PTR_SET_VALUE(computeNodes_, computeNodes) };
      inline Queues& setComputeNodes(vector<NodeTemplate> && computeNodes) { DARABONBA_PTR_SET_RVALUE(computeNodes_, computeNodes) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Queues& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enableScaleIn Field Functions 
      bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
      void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
      inline bool getEnableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
      inline Queues& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


      // enableScaleOut Field Functions 
      bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
      void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
      inline bool getEnableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
      inline Queues& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


      // maxCount Field Functions 
      bool hasMaxCount() const { return this->maxCount_ != nullptr;};
      void deleteMaxCount() { this->maxCount_ = nullptr;};
      inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
      inline Queues& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


      // maxCountPerCycle Field Functions 
      bool hasMaxCountPerCycle() const { return this->maxCountPerCycle_ != nullptr;};
      void deleteMaxCountPerCycle() { this->maxCountPerCycle_ = nullptr;};
      inline int32_t getMaxCountPerCycle() const { DARABONBA_PTR_GET_DEFAULT(maxCountPerCycle_, 0) };
      inline Queues& setMaxCountPerCycle(int32_t maxCountPerCycle) { DARABONBA_PTR_SET_VALUE(maxCountPerCycle_, maxCountPerCycle) };


      // minCount Field Functions 
      bool hasMinCount() const { return this->minCount_ != nullptr;};
      void deleteMinCount() { this->minCount_ = nullptr;};
      inline int32_t getMinCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, 0) };
      inline Queues& setMinCount(int32_t minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const Queues::Nodes & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, Queues::Nodes) };
      inline Queues::Nodes getNodes() { DARABONBA_PTR_GET(nodes_, Queues::Nodes) };
      inline Queues& setNodes(const Queues::Nodes & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Queues& setNodes(Queues::Nodes && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Queues& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // totalCores Field Functions 
      bool hasTotalCores() const { return this->totalCores_ != nullptr;};
      void deleteTotalCores() { this->totalCores_ = nullptr;};
      inline int32_t getTotalCores() const { DARABONBA_PTR_GET_DEFAULT(totalCores_, 0) };
      inline Queues& setTotalCores(int32_t totalCores) { DARABONBA_PTR_SET_VALUE(totalCores_, totalCores) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Queues& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Queues& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Queues& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      // The hardware configurations of the compute nodes that are added in auto scale-outs. Up to five nodes are displayed.
      shared_ptr<vector<NodeTemplate>> computeNodes_ {};
      // The time when the queue was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
      shared_ptr<string> createTime_ {};
      // Indicates whether auto scale-in is enabled for the queue. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableScaleIn_ {};
      // Indicates whether auto scale-out is enabled for the queue. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableScaleOut_ {};
      // The maximum number of compute nodes that the queue can contain.
      shared_ptr<int32_t> maxCount_ {};
      // The minimum number of compute nodes that are added to the queue in each auto scale-out.
      shared_ptr<int32_t> maxCountPerCycle_ {};
      // The minimum number of compute nodes that the queue must contain.
      shared_ptr<int32_t> minCount_ {};
      // The statistics about the compute nodes in the queue.
      shared_ptr<Queues::Nodes> nodes_ {};
      // The queue name.
      shared_ptr<string> queueName_ {};
      // The total number of vCPUs that are used by all compute nodes in the queue.
      shared_ptr<int32_t> totalCores_ {};
      // The time when the queue was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
      shared_ptr<string> updateTime_ {};
      // The vSwitches that can be used for added nodes during auto scale-outs. Up to three vSwitches are displayed.
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queues_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListQueuesResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListQueuesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQueuesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<ListQueuesResponseBody::Queues> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<ListQueuesResponseBody::Queues>) };
    inline vector<ListQueuesResponseBody::Queues> getQueues() { DARABONBA_PTR_GET(queues_, vector<ListQueuesResponseBody::Queues>) };
    inline ListQueuesResponseBody& setQueues(const vector<ListQueuesResponseBody::Queues> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListQueuesResponseBody& setQueues(vector<ListQueuesResponseBody::Queues> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQueuesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    shared_ptr<string> clusterId_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The information about the queues.
    shared_ptr<vector<ListQueuesResponseBody::Queues>> queues_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
