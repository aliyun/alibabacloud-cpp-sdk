// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECREASENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DECREASENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DecreaseNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecreaseNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchInterval, batchInterval_);
      DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DecreaseNodeCount, decreaseNodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DecreaseNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchInterval, batchInterval_);
      DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DecreaseNodeCount, decreaseNodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DecreaseNodesRequest() = default ;
    DecreaseNodesRequest(const DecreaseNodesRequest &) = default ;
    DecreaseNodesRequest(DecreaseNodesRequest &&) = default ;
    DecreaseNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecreaseNodesRequest() = default ;
    DecreaseNodesRequest& operator=(const DecreaseNodesRequest &) = default ;
    DecreaseNodesRequest& operator=(DecreaseNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchInterval_ == nullptr
        && this->batchSize_ == nullptr && this->clusterId_ == nullptr && this->decreaseNodeCount_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeIds_ == nullptr
        && this->regionId_ == nullptr; };
    // batchInterval Field Functions 
    bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
    void deleteBatchInterval() { this->batchInterval_ = nullptr;};
    inline int32_t getBatchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0) };
    inline DecreaseNodesRequest& setBatchInterval(int32_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline DecreaseNodesRequest& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DecreaseNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // decreaseNodeCount Field Functions 
    bool hasDecreaseNodeCount() const { return this->decreaseNodeCount_ != nullptr;};
    void deleteDecreaseNodeCount() { this->decreaseNodeCount_ = nullptr;};
    inline int32_t getDecreaseNodeCount() const { DARABONBA_PTR_GET_DEFAULT(decreaseNodeCount_, 0) };
    inline DecreaseNodesRequest& setDecreaseNodeCount(int32_t decreaseNodeCount) { DARABONBA_PTR_SET_VALUE(decreaseNodeCount_, decreaseNodeCount) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DecreaseNodesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline DecreaseNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline DecreaseNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DecreaseNodesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cooldown time between batches.
    shared_ptr<int32_t> batchInterval_ {};
    // The number of nodes to concurrently take offline in a single batch.
    shared_ptr<int32_t> batchSize_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The number of nodes to remove. The value must be less than the number of active nodes in the node group.
    shared_ptr<int32_t> decreaseNodeCount_ {};
    // The node group ID.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // An array of node IDs. The array can contain from 1 to 500 elements.
    shared_ptr<vector<string>> nodeIds_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
