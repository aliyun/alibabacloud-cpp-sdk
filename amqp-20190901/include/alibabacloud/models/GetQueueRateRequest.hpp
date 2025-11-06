// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueRateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueRateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_TO_JSON(QueueNames, queueNames_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueRateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_FROM_JSON(QueueNames, queueNames_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetQueueRateRequest() = default ;
    GetQueueRateRequest(const GetQueueRateRequest &) = default ;
    GetQueueRateRequest(GetQueueRateRequest &&) = default ;
    GetQueueRateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueRateRequest() = default ;
    GetQueueRateRequest& operator=(const GetQueueRateRequest &) = default ;
    GetQueueRateRequest& operator=(GetQueueRateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->queueNames_ == nullptr && return this->vhostName_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetQueueRateRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueueRateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queueNames Field Functions 
    bool hasQueueNames() const { return this->queueNames_ != nullptr;};
    void deleteQueueNames() { this->queueNames_ = nullptr;};
    inline     const Darabonba::Json & queueNames() const { DARABONBA_GET(queueNames_) };
    Darabonba::Json & queueNames() { DARABONBA_GET(queueNames_) };
    inline GetQueueRateRequest& setQueueNames(const Darabonba::Json & queueNames) { DARABONBA_SET_VALUE(queueNames_, queueNames) };
    inline GetQueueRateRequest& setQueueNames(Darabonba::Json & queueNames) { DARABONBA_SET_RVALUE(queueNames_, queueNames) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetQueueRateRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    Darabonba::Json queueNames_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
