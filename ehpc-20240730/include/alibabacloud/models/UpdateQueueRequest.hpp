// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateQueueRequestQueue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
    };
    UpdateQueueRequest() = default ;
    UpdateQueueRequest(const UpdateQueueRequest &) = default ;
    UpdateQueueRequest(UpdateQueueRequest &&) = default ;
    UpdateQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQueueRequest() = default ;
    UpdateQueueRequest& operator=(const UpdateQueueRequest &) = default ;
    UpdateQueueRequest& operator=(UpdateQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->queue_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateQueueRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline const UpdateQueueRequestQueue & queue() const { DARABONBA_PTR_GET_CONST(queue_, UpdateQueueRequestQueue) };
    inline UpdateQueueRequestQueue queue() { DARABONBA_PTR_GET(queue_, UpdateQueueRequestQueue) };
    inline UpdateQueueRequest& setQueue(const UpdateQueueRequestQueue & queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };
    inline UpdateQueueRequest& setQueue(UpdateQueueRequestQueue && queue) { DARABONBA_PTR_SET_RVALUE(queue_, queue) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The information about the queue to be updated.
    std::shared_ptr<UpdateQueueRequestQueue> queue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
