// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BLINDTRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BLINDTRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class BlindTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BlindTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallPriority, callPriority_);
      DARABONBA_PTR_TO_JSON(ContactFlowVariables, contactFlowVariables_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(QueuingOverflowThreshold, queuingOverflowThreshold_);
      DARABONBA_PTR_TO_JSON(QueuingTimeoutSeconds, queuingTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(RoutingType, routingType_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyParams, strategyParams_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(Transferee, transferee_);
      DARABONBA_PTR_TO_JSON(TransfereeType, transfereeType_);
      DARABONBA_PTR_TO_JSON(Transferor, transferor_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BlindTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallPriority, callPriority_);
      DARABONBA_PTR_FROM_JSON(ContactFlowVariables, contactFlowVariables_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(QueuingOverflowThreshold, queuingOverflowThreshold_);
      DARABONBA_PTR_FROM_JSON(QueuingTimeoutSeconds, queuingTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(RoutingType, routingType_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyParams, strategyParams_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(Transferee, transferee_);
      DARABONBA_PTR_FROM_JSON(TransfereeType, transfereeType_);
      DARABONBA_PTR_FROM_JSON(Transferor, transferor_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    BlindTransferRequest() = default ;
    BlindTransferRequest(const BlindTransferRequest &) = default ;
    BlindTransferRequest(BlindTransferRequest &&) = default ;
    BlindTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BlindTransferRequest() = default ;
    BlindTransferRequest& operator=(const BlindTransferRequest &) = default ;
    BlindTransferRequest& operator=(BlindTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callPriority_ != nullptr
        && this->contactFlowVariables_ != nullptr && this->deviceId_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->queuingOverflowThreshold_ != nullptr
        && this->queuingTimeoutSeconds_ != nullptr && this->routingType_ != nullptr && this->skillGroupId_ != nullptr && this->strategyName_ != nullptr && this->strategyParams_ != nullptr
        && this->tags_ != nullptr && this->timeoutSeconds_ != nullptr && this->transferee_ != nullptr && this->transfereeType_ != nullptr && this->transferor_ != nullptr
        && this->userId_ != nullptr; };
    // callPriority Field Functions 
    bool hasCallPriority() const { return this->callPriority_ != nullptr;};
    void deleteCallPriority() { this->callPriority_ = nullptr;};
    inline int32_t callPriority() const { DARABONBA_PTR_GET_DEFAULT(callPriority_, 0) };
    inline BlindTransferRequest& setCallPriority(int32_t callPriority) { DARABONBA_PTR_SET_VALUE(callPriority_, callPriority) };


    // contactFlowVariables Field Functions 
    bool hasContactFlowVariables() const { return this->contactFlowVariables_ != nullptr;};
    void deleteContactFlowVariables() { this->contactFlowVariables_ = nullptr;};
    inline string contactFlowVariables() const { DARABONBA_PTR_GET_DEFAULT(contactFlowVariables_, "") };
    inline BlindTransferRequest& setContactFlowVariables(string contactFlowVariables) { DARABONBA_PTR_SET_VALUE(contactFlowVariables_, contactFlowVariables) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BlindTransferRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BlindTransferRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline BlindTransferRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // queuingOverflowThreshold Field Functions 
    bool hasQueuingOverflowThreshold() const { return this->queuingOverflowThreshold_ != nullptr;};
    void deleteQueuingOverflowThreshold() { this->queuingOverflowThreshold_ = nullptr;};
    inline int64_t queuingOverflowThreshold() const { DARABONBA_PTR_GET_DEFAULT(queuingOverflowThreshold_, 0L) };
    inline BlindTransferRequest& setQueuingOverflowThreshold(int64_t queuingOverflowThreshold) { DARABONBA_PTR_SET_VALUE(queuingOverflowThreshold_, queuingOverflowThreshold) };


    // queuingTimeoutSeconds Field Functions 
    bool hasQueuingTimeoutSeconds() const { return this->queuingTimeoutSeconds_ != nullptr;};
    void deleteQueuingTimeoutSeconds() { this->queuingTimeoutSeconds_ = nullptr;};
    inline int64_t queuingTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(queuingTimeoutSeconds_, 0L) };
    inline BlindTransferRequest& setQueuingTimeoutSeconds(int64_t queuingTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(queuingTimeoutSeconds_, queuingTimeoutSeconds) };


    // routingType Field Functions 
    bool hasRoutingType() const { return this->routingType_ != nullptr;};
    void deleteRoutingType() { this->routingType_ = nullptr;};
    inline string routingType() const { DARABONBA_PTR_GET_DEFAULT(routingType_, "") };
    inline BlindTransferRequest& setRoutingType(string routingType) { DARABONBA_PTR_SET_VALUE(routingType_, routingType) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline BlindTransferRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline BlindTransferRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyParams Field Functions 
    bool hasStrategyParams() const { return this->strategyParams_ != nullptr;};
    void deleteStrategyParams() { this->strategyParams_ = nullptr;};
    inline string strategyParams() const { DARABONBA_PTR_GET_DEFAULT(strategyParams_, "") };
    inline BlindTransferRequest& setStrategyParams(string strategyParams) { DARABONBA_PTR_SET_VALUE(strategyParams_, strategyParams) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline BlindTransferRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline BlindTransferRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // transferee Field Functions 
    bool hasTransferee() const { return this->transferee_ != nullptr;};
    void deleteTransferee() { this->transferee_ = nullptr;};
    inline string transferee() const { DARABONBA_PTR_GET_DEFAULT(transferee_, "") };
    inline BlindTransferRequest& setTransferee(string transferee) { DARABONBA_PTR_SET_VALUE(transferee_, transferee) };


    // transfereeType Field Functions 
    bool hasTransfereeType() const { return this->transfereeType_ != nullptr;};
    void deleteTransfereeType() { this->transfereeType_ = nullptr;};
    inline string transfereeType() const { DARABONBA_PTR_GET_DEFAULT(transfereeType_, "") };
    inline BlindTransferRequest& setTransfereeType(string transfereeType) { DARABONBA_PTR_SET_VALUE(transfereeType_, transfereeType) };


    // transferor Field Functions 
    bool hasTransferor() const { return this->transferor_ != nullptr;};
    void deleteTransferor() { this->transferor_ = nullptr;};
    inline string transferor() const { DARABONBA_PTR_GET_DEFAULT(transferor_, "") };
    inline BlindTransferRequest& setTransferor(string transferor) { DARABONBA_PTR_SET_VALUE(transferor_, transferor) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BlindTransferRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> callPriority_ = nullptr;
    std::shared_ptr<string> contactFlowVariables_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> queuingOverflowThreshold_ = nullptr;
    std::shared_ptr<int64_t> queuingTimeoutSeconds_ = nullptr;
    std::shared_ptr<string> routingType_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> strategyName_ = nullptr;
    std::shared_ptr<string> strategyParams_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transferee_ = nullptr;
    std::shared_ptr<string> transfereeType_ = nullptr;
    std::shared_ptr<string> transferor_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
