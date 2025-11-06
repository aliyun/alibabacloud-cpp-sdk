// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUEUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUEUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class DeleteQueueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQueueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collina, collina_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(QueueNames, queueNamesShrink_);
      DARABONBA_PTR_TO_JSON(UmidToken, umidToken_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQueueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collina, collina_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(QueueNames, queueNamesShrink_);
      DARABONBA_PTR_FROM_JSON(UmidToken, umidToken_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    DeleteQueueShrinkRequest() = default ;
    DeleteQueueShrinkRequest(const DeleteQueueShrinkRequest &) = default ;
    DeleteQueueShrinkRequest(DeleteQueueShrinkRequest &&) = default ;
    DeleteQueueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQueueShrinkRequest() = default ;
    DeleteQueueShrinkRequest& operator=(const DeleteQueueShrinkRequest &) = default ;
    DeleteQueueShrinkRequest& operator=(DeleteQueueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collina_ == nullptr
        && return this->consoleSessionId_ == nullptr && return this->instanceId_ == nullptr && return this->queueName_ == nullptr && return this->queueNamesShrink_ == nullptr && return this->umidToken_ == nullptr
        && return this->vhostName_ == nullptr; };
    // collina Field Functions 
    bool hasCollina() const { return this->collina_ != nullptr;};
    void deleteCollina() { this->collina_ = nullptr;};
    inline string collina() const { DARABONBA_PTR_GET_DEFAULT(collina_, "") };
    inline DeleteQueueShrinkRequest& setCollina(string collina) { DARABONBA_PTR_SET_VALUE(collina_, collina) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline DeleteQueueShrinkRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteQueueShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline DeleteQueueShrinkRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueNamesShrink Field Functions 
    bool hasQueueNamesShrink() const { return this->queueNamesShrink_ != nullptr;};
    void deleteQueueNamesShrink() { this->queueNamesShrink_ = nullptr;};
    inline string queueNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(queueNamesShrink_, "") };
    inline DeleteQueueShrinkRequest& setQueueNamesShrink(string queueNamesShrink) { DARABONBA_PTR_SET_VALUE(queueNamesShrink_, queueNamesShrink) };


    // umidToken Field Functions 
    bool hasUmidToken() const { return this->umidToken_ != nullptr;};
    void deleteUmidToken() { this->umidToken_ = nullptr;};
    inline string umidToken() const { DARABONBA_PTR_GET_DEFAULT(umidToken_, "") };
    inline DeleteQueueShrinkRequest& setUmidToken(string umidToken) { DARABONBA_PTR_SET_VALUE(umidToken_, umidToken) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline DeleteQueueShrinkRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> collina_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<string> queueNamesShrink_ = nullptr;
    std::shared_ptr<string> umidToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
