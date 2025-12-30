// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ComputeNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComputeNode& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      };
      friend void from_json(const Darabonba::Json& j, ComputeNode& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      };
      ComputeNode() = default ;
      ComputeNode(const ComputeNode &) = default ;
      ComputeNode(ComputeNode &&) = default ;
      ComputeNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComputeNode() = default ;
      ComputeNode& operator=(const ComputeNode &) = default ;
      ComputeNode& operator=(ComputeNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->instanceIds_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ComputeNode& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline ComputeNode& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline ComputeNode& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    protected:
      // The image ID. This image will be used to replace the original system disk image.
      // 
      // This parameter is required.
      shared_ptr<string> imageId_ {};
      // The IDs of ECS instances.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> instanceIds_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->computeNode_ == nullptr && this->queueName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AttachNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // computeNode Field Functions 
    bool hasComputeNode() const { return this->computeNode_ != nullptr;};
    void deleteComputeNode() { this->computeNode_ = nullptr;};
    inline const AttachNodesRequest::ComputeNode & getComputeNode() const { DARABONBA_PTR_GET_CONST(computeNode_, AttachNodesRequest::ComputeNode) };
    inline AttachNodesRequest::ComputeNode getComputeNode() { DARABONBA_PTR_GET(computeNode_, AttachNodesRequest::ComputeNode) };
    inline AttachNodesRequest& setComputeNode(const AttachNodesRequest::ComputeNode & computeNode) { DARABONBA_PTR_SET_VALUE(computeNode_, computeNode) };
    inline AttachNodesRequest& setComputeNode(AttachNodesRequest::ComputeNode && computeNode) { DARABONBA_PTR_SET_RVALUE(computeNode_, computeNode) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline AttachNodesRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The list of compute nodes.
    // 
    // This parameter is required.
    shared_ptr<AttachNodesRequest::ComputeNode> computeNode_ {};
    // The name of the queue to which the instance is to be added.
    shared_ptr<string> queueName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
