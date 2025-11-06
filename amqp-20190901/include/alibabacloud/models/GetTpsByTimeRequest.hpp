// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTPSBYTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTPSBYTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetTpsByTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTpsByTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTpsByTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetTpsByTimeRequest() = default ;
    GetTpsByTimeRequest(const GetTpsByTimeRequest &) = default ;
    GetTpsByTimeRequest(GetTpsByTimeRequest &&) = default ;
    GetTpsByTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTpsByTimeRequest() = default ;
    GetTpsByTimeRequest& operator=(const GetTpsByTimeRequest &) = default ;
    GetTpsByTimeRequest& operator=(GetTpsByTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->clientToken_ == nullptr && return this->consoleSessionId_ == nullptr && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->queueName_ == nullptr
        && return this->startTime_ == nullptr && return this->vhostName_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GetTpsByTimeRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetTpsByTimeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetTpsByTimeRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline GetTpsByTimeRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTpsByTimeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetTpsByTimeRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline GetTpsByTimeRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetTpsByTimeRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> api_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> startTime_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
