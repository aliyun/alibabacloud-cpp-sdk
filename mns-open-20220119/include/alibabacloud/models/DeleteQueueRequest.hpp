// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class DeleteQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    DeleteQueueRequest() = default ;
    DeleteQueueRequest(const DeleteQueueRequest &) = default ;
    DeleteQueueRequest(DeleteQueueRequest &&) = default ;
    DeleteQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQueueRequest() = default ;
    DeleteQueueRequest& operator=(const DeleteQueueRequest &) = default ;
    DeleteQueueRequest& operator=(DeleteQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queueName_ != nullptr; };
    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline DeleteQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


  protected:
    // The name of the queue.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
