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
    virtual bool empty() const override { this->batchInterval_ != nullptr
        && this->batchSize_ != nullptr && this->clusterId_ != nullptr && this->decreaseNodeCount_ != nullptr && this->nodeGroupId_ != nullptr && this->nodeIds_ != nullptr
        && this->regionId_ != nullptr; };
    // batchInterval Field Functions 
    bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
    void deleteBatchInterval() { this->batchInterval_ = nullptr;};
    inline int32_t batchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0) };
    inline DecreaseNodesRequest& setBatchInterval(int32_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t batchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline DecreaseNodesRequest& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DecreaseNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // decreaseNodeCount Field Functions 
    bool hasDecreaseNodeCount() const { return this->decreaseNodeCount_ != nullptr;};
    void deleteDecreaseNodeCount() { this->decreaseNodeCount_ = nullptr;};
    inline int32_t decreaseNodeCount() const { DARABONBA_PTR_GET_DEFAULT(decreaseNodeCount_, 0) };
    inline DecreaseNodesRequest& setDecreaseNodeCount(int32_t decreaseNodeCount) { DARABONBA_PTR_SET_VALUE(decreaseNodeCount_, decreaseNodeCount) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DecreaseNodesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline DecreaseNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline DecreaseNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DecreaseNodesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cooldown interval between two batches.
    std::shared_ptr<int32_t> batchInterval_ = nullptr;
    // The number of nodes to be removed in a single batch.
    std::shared_ptr<int32_t> batchSize_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of nodes to scale out. The number of nodes to be scaled out. The value should be less than the number of surviving nodes in the current node group.
    std::shared_ptr<int32_t> decreaseNodeCount_ = nullptr;
    // The ID of the node group.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The array of node IDs. Valid values of array element N: 1 to 500.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    // The ID of the region in which you want to create the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
