// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCERETRYSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCERETRYSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class UpdateInstanceRetryStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRetryStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRetryStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
    };
    UpdateInstanceRetryStrategyRequest() = default ;
    UpdateInstanceRetryStrategyRequest(const UpdateInstanceRetryStrategyRequest &) = default ;
    UpdateInstanceRetryStrategyRequest(UpdateInstanceRetryStrategyRequest &&) = default ;
    UpdateInstanceRetryStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRetryStrategyRequest() = default ;
    UpdateInstanceRetryStrategyRequest& operator=(const UpdateInstanceRetryStrategyRequest &) = default ;
    UpdateInstanceRetryStrategyRequest& operator=(UpdateInstanceRetryStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleSessionId_ == nullptr
        && return this->instanceId_ == nullptr && return this->retryInterval_ == nullptr && return this->retryTimes_ == nullptr; };
    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline UpdateInstanceRetryStrategyRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceRetryStrategyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline UpdateInstanceRetryStrategyRequest& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t retryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline UpdateInstanceRetryStrategyRequest& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


  protected:
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> retryInterval_ = nullptr;
    std::shared_ptr<int32_t> retryTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
