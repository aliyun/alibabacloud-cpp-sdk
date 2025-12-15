// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class AttachNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComputeNode, computeNodeShrink_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, AttachNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComputeNode, computeNodeShrink_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    AttachNodesShrinkRequest() = default ;
    AttachNodesShrinkRequest(const AttachNodesShrinkRequest &) = default ;
    AttachNodesShrinkRequest(AttachNodesShrinkRequest &&) = default ;
    AttachNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachNodesShrinkRequest() = default ;
    AttachNodesShrinkRequest& operator=(const AttachNodesShrinkRequest &) = default ;
    AttachNodesShrinkRequest& operator=(AttachNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->computeNodeShrink_ == nullptr && return this->queueName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AttachNodesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // computeNodeShrink Field Functions 
    bool hasComputeNodeShrink() const { return this->computeNodeShrink_ != nullptr;};
    void deleteComputeNodeShrink() { this->computeNodeShrink_ = nullptr;};
    inline string computeNodeShrink() const { DARABONBA_PTR_GET_DEFAULT(computeNodeShrink_, "") };
    inline AttachNodesShrinkRequest& setComputeNodeShrink(string computeNodeShrink) { DARABONBA_PTR_SET_VALUE(computeNodeShrink_, computeNodeShrink) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline AttachNodesShrinkRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The list of compute nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> computeNodeShrink_ = nullptr;
    // The name of the queue to which the instance is to be added.
    std::shared_ptr<string> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
