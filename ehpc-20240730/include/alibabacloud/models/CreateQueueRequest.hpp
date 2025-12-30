// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueueTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
    };
    CreateQueueRequest() = default ;
    CreateQueueRequest(const CreateQueueRequest &) = default ;
    CreateQueueRequest(CreateQueueRequest &&) = default ;
    CreateQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueueRequest() = default ;
    CreateQueueRequest& operator=(const CreateQueueRequest &) = default ;
    CreateQueueRequest& operator=(CreateQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->queue_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateQueueRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline const QueueTemplate & getQueue() const { DARABONBA_PTR_GET_CONST(queue_, QueueTemplate) };
    inline QueueTemplate getQueue() { DARABONBA_PTR_GET(queue_, QueueTemplate) };
    inline CreateQueueRequest& setQueue(const QueueTemplate & queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };
    inline CreateQueueRequest& setQueue(QueueTemplate && queue) { DARABONBA_PTR_SET_RVALUE(queue_, queue) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The configurations of the queue to be created.
    shared_ptr<QueueTemplate> queue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
