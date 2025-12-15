// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AttachNodesRequestComputeNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class AttachNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComputeNode, computeNode_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, AttachNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComputeNode, computeNode_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    AttachNodesRequest() = default ;
    AttachNodesRequest(const AttachNodesRequest &) = default ;
    AttachNodesRequest(AttachNodesRequest &&) = default ;
    AttachNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachNodesRequest() = default ;
    AttachNodesRequest& operator=(const AttachNodesRequest &) = default ;
    AttachNodesRequest& operator=(AttachNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->computeNode_ == nullptr && return this->queueName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AttachNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // computeNode Field Functions 
    bool hasComputeNode() const { return this->computeNode_ != nullptr;};
    void deleteComputeNode() { this->computeNode_ = nullptr;};
    inline const AttachNodesRequestComputeNode & computeNode() const { DARABONBA_PTR_GET_CONST(computeNode_, AttachNodesRequestComputeNode) };
    inline AttachNodesRequestComputeNode computeNode() { DARABONBA_PTR_GET(computeNode_, AttachNodesRequestComputeNode) };
    inline AttachNodesRequest& setComputeNode(const AttachNodesRequestComputeNode & computeNode) { DARABONBA_PTR_SET_VALUE(computeNode_, computeNode) };
    inline AttachNodesRequest& setComputeNode(AttachNodesRequestComputeNode && computeNode) { DARABONBA_PTR_SET_RVALUE(computeNode_, computeNode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline AttachNodesRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The list of compute nodes.
    // 
    // This parameter is required.
    std::shared_ptr<AttachNodesRequestComputeNode> computeNode_ = nullptr;
    // The name of the queue to which the instance is to be added.
    std::shared_ptr<string> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
