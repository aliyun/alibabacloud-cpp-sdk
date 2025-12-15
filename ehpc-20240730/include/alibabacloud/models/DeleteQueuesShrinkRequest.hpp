// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUEUESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUEUESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DeleteQueuesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQueuesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(QueueNames, queueNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQueuesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(QueueNames, queueNamesShrink_);
    };
    DeleteQueuesShrinkRequest() = default ;
    DeleteQueuesShrinkRequest(const DeleteQueuesShrinkRequest &) = default ;
    DeleteQueuesShrinkRequest(DeleteQueuesShrinkRequest &&) = default ;
    DeleteQueuesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQueuesShrinkRequest() = default ;
    DeleteQueuesShrinkRequest& operator=(const DeleteQueuesShrinkRequest &) = default ;
    DeleteQueuesShrinkRequest& operator=(DeleteQueuesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->queueNamesShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteQueuesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queueNamesShrink Field Functions 
    bool hasQueueNamesShrink() const { return this->queueNamesShrink_ != nullptr;};
    void deleteQueueNamesShrink() { this->queueNamesShrink_ = nullptr;};
    inline string queueNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(queueNamesShrink_, "") };
    inline DeleteQueuesShrinkRequest& setQueueNamesShrink(string queueNamesShrink) { DARABONBA_PTR_SET_VALUE(queueNamesShrink_, queueNamesShrink) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The queues that you want to delete.
    std::shared_ptr<string> queueNamesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
