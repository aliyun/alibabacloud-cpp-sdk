// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGECOPYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGECOPYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class SendMessageCopyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageCopyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProcessToken, processToken_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageCopyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProcessToken, processToken_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    SendMessageCopyRequest() = default ;
    SendMessageCopyRequest(const SendMessageCopyRequest &) = default ;
    SendMessageCopyRequest(SendMessageCopyRequest &&) = default ;
    SendMessageCopyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageCopyRequest() = default ;
    SendMessageCopyRequest& operator=(const SendMessageCopyRequest &) = default ;
    SendMessageCopyRequest& operator=(SendMessageCopyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->processToken_ == nullptr && return this->queueName_ == nullptr && return this->vhostName_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline SendMessageCopyRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendMessageCopyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // processToken Field Functions 
    bool hasProcessToken() const { return this->processToken_ != nullptr;};
    void deleteProcessToken() { this->processToken_ = nullptr;};
    inline string processToken() const { DARABONBA_PTR_GET_DEFAULT(processToken_, "") };
    inline SendMessageCopyRequest& setProcessToken(string processToken) { DARABONBA_PTR_SET_VALUE(processToken_, processToken) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline SendMessageCopyRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline SendMessageCopyRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
