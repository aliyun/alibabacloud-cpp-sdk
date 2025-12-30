// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUEUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUEUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateQueueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Queue, queueShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Queue, queueShrink_);
    };
    UpdateQueueShrinkRequest() = default ;
    UpdateQueueShrinkRequest(const UpdateQueueShrinkRequest &) = default ;
    UpdateQueueShrinkRequest(UpdateQueueShrinkRequest &&) = default ;
    UpdateQueueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQueueShrinkRequest() = default ;
    UpdateQueueShrinkRequest& operator=(const UpdateQueueShrinkRequest &) = default ;
    UpdateQueueShrinkRequest& operator=(UpdateQueueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->queueShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateQueueShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queueShrink Field Functions 
    bool hasQueueShrink() const { return this->queueShrink_ != nullptr;};
    void deleteQueueShrink() { this->queueShrink_ = nullptr;};
    inline string getQueueShrink() const { DARABONBA_PTR_GET_DEFAULT(queueShrink_, "") };
    inline UpdateQueueShrinkRequest& setQueueShrink(string queueShrink) { DARABONBA_PTR_SET_VALUE(queueShrink_, queueShrink) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    shared_ptr<string> clusterId_ {};
    // The information about the queue to be updated.
    shared_ptr<string> queueShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
