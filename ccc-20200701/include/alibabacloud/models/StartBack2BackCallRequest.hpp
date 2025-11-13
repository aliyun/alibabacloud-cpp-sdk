// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBACK2BACKCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTBACK2BACKCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartBack2BackCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBack2BackCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalBroker, additionalBroker_);
      DARABONBA_PTR_TO_JSON(Broker, broker_);
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, StartBack2BackCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalBroker, additionalBroker_);
      DARABONBA_PTR_FROM_JSON(Broker, broker_);
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    StartBack2BackCallRequest() = default ;
    StartBack2BackCallRequest(const StartBack2BackCallRequest &) = default ;
    StartBack2BackCallRequest(StartBack2BackCallRequest &&) = default ;
    StartBack2BackCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBack2BackCallRequest() = default ;
    StartBack2BackCallRequest& operator=(const StartBack2BackCallRequest &) = default ;
    StartBack2BackCallRequest& operator=(StartBack2BackCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalBroker_ == nullptr
        && return this->broker_ == nullptr && return this->callee_ == nullptr && return this->caller_ == nullptr && return this->instanceId_ == nullptr && return this->tags_ == nullptr
        && return this->timeoutSeconds_ == nullptr; };
    // additionalBroker Field Functions 
    bool hasAdditionalBroker() const { return this->additionalBroker_ != nullptr;};
    void deleteAdditionalBroker() { this->additionalBroker_ = nullptr;};
    inline string additionalBroker() const { DARABONBA_PTR_GET_DEFAULT(additionalBroker_, "") };
    inline StartBack2BackCallRequest& setAdditionalBroker(string additionalBroker) { DARABONBA_PTR_SET_VALUE(additionalBroker_, additionalBroker) };


    // broker Field Functions 
    bool hasBroker() const { return this->broker_ != nullptr;};
    void deleteBroker() { this->broker_ = nullptr;};
    inline string broker() const { DARABONBA_PTR_GET_DEFAULT(broker_, "") };
    inline StartBack2BackCallRequest& setBroker(string broker) { DARABONBA_PTR_SET_VALUE(broker_, broker) };


    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline StartBack2BackCallRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline StartBack2BackCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartBack2BackCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline StartBack2BackCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline StartBack2BackCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    std::shared_ptr<string> additionalBroker_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> broker_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callee_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> caller_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
