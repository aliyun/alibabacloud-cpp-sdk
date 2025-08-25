// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIATEATTENDEDTRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIATEATTENDEDTRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class InitiateAttendedTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitiateAttendedTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallPriority, callPriority_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(QueuingOverflowThreshold, queuingOverflowThreshold_);
      DARABONBA_PTR_TO_JSON(QueuingTimeoutSeconds, queuingTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(RoutingType, routingType_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyParams, strategyParams_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(Transferee, transferee_);
      DARABONBA_PTR_TO_JSON(TransfereeType, transfereeType_);
      DARABONBA_PTR_TO_JSON(Transferor, transferor_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, InitiateAttendedTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallPriority, callPriority_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(QueuingOverflowThreshold, queuingOverflowThreshold_);
      DARABONBA_PTR_FROM_JSON(QueuingTimeoutSeconds, queuingTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(RoutingType, routingType_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyParams, strategyParams_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(Transferee, transferee_);
      DARABONBA_PTR_FROM_JSON(TransfereeType, transfereeType_);
      DARABONBA_PTR_FROM_JSON(Transferor, transferor_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    InitiateAttendedTransferRequest() = default ;
    InitiateAttendedTransferRequest(const InitiateAttendedTransferRequest &) = default ;
    InitiateAttendedTransferRequest(InitiateAttendedTransferRequest &&) = default ;
    InitiateAttendedTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitiateAttendedTransferRequest() = default ;
    InitiateAttendedTransferRequest& operator=(const InitiateAttendedTransferRequest &) = default ;
    InitiateAttendedTransferRequest& operator=(InitiateAttendedTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callPriority_ != nullptr
        && this->deviceId_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->queuingOverflowThreshold_ != nullptr && this->queuingTimeoutSeconds_ != nullptr
        && this->routingType_ != nullptr && this->strategyName_ != nullptr && this->strategyParams_ != nullptr && this->tags_ != nullptr && this->timeoutSeconds_ != nullptr
        && this->transferee_ != nullptr && this->transfereeType_ != nullptr && this->transferor_ != nullptr && this->userId_ != nullptr; };
    // callPriority Field Functions 
    bool hasCallPriority() const { return this->callPriority_ != nullptr;};
    void deleteCallPriority() { this->callPriority_ = nullptr;};
    inline int32_t callPriority() const { DARABONBA_PTR_GET_DEFAULT(callPriority_, 0) };
    inline InitiateAttendedTransferRequest& setCallPriority(int32_t callPriority) { DARABONBA_PTR_SET_VALUE(callPriority_, callPriority) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline InitiateAttendedTransferRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InitiateAttendedTransferRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline InitiateAttendedTransferRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // queuingOverflowThreshold Field Functions 
    bool hasQueuingOverflowThreshold() const { return this->queuingOverflowThreshold_ != nullptr;};
    void deleteQueuingOverflowThreshold() { this->queuingOverflowThreshold_ = nullptr;};
    inline int64_t queuingOverflowThreshold() const { DARABONBA_PTR_GET_DEFAULT(queuingOverflowThreshold_, 0L) };
    inline InitiateAttendedTransferRequest& setQueuingOverflowThreshold(int64_t queuingOverflowThreshold) { DARABONBA_PTR_SET_VALUE(queuingOverflowThreshold_, queuingOverflowThreshold) };


    // queuingTimeoutSeconds Field Functions 
    bool hasQueuingTimeoutSeconds() const { return this->queuingTimeoutSeconds_ != nullptr;};
    void deleteQueuingTimeoutSeconds() { this->queuingTimeoutSeconds_ = nullptr;};
    inline int64_t queuingTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(queuingTimeoutSeconds_, 0L) };
    inline InitiateAttendedTransferRequest& setQueuingTimeoutSeconds(int64_t queuingTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(queuingTimeoutSeconds_, queuingTimeoutSeconds) };


    // routingType Field Functions 
    bool hasRoutingType() const { return this->routingType_ != nullptr;};
    void deleteRoutingType() { this->routingType_ = nullptr;};
    inline string routingType() const { DARABONBA_PTR_GET_DEFAULT(routingType_, "") };
    inline InitiateAttendedTransferRequest& setRoutingType(string routingType) { DARABONBA_PTR_SET_VALUE(routingType_, routingType) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline InitiateAttendedTransferRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyParams Field Functions 
    bool hasStrategyParams() const { return this->strategyParams_ != nullptr;};
    void deleteStrategyParams() { this->strategyParams_ = nullptr;};
    inline string strategyParams() const { DARABONBA_PTR_GET_DEFAULT(strategyParams_, "") };
    inline InitiateAttendedTransferRequest& setStrategyParams(string strategyParams) { DARABONBA_PTR_SET_VALUE(strategyParams_, strategyParams) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline InitiateAttendedTransferRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline InitiateAttendedTransferRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // transferee Field Functions 
    bool hasTransferee() const { return this->transferee_ != nullptr;};
    void deleteTransferee() { this->transferee_ = nullptr;};
    inline string transferee() const { DARABONBA_PTR_GET_DEFAULT(transferee_, "") };
    inline InitiateAttendedTransferRequest& setTransferee(string transferee) { DARABONBA_PTR_SET_VALUE(transferee_, transferee) };


    // transfereeType Field Functions 
    bool hasTransfereeType() const { return this->transfereeType_ != nullptr;};
    void deleteTransfereeType() { this->transfereeType_ = nullptr;};
    inline string transfereeType() const { DARABONBA_PTR_GET_DEFAULT(transfereeType_, "") };
    inline InitiateAttendedTransferRequest& setTransfereeType(string transfereeType) { DARABONBA_PTR_SET_VALUE(transfereeType_, transfereeType) };


    // transferor Field Functions 
    bool hasTransferor() const { return this->transferor_ != nullptr;};
    void deleteTransferor() { this->transferor_ = nullptr;};
    inline string transferor() const { DARABONBA_PTR_GET_DEFAULT(transferor_, "") };
    inline InitiateAttendedTransferRequest& setTransferor(string transferor) { DARABONBA_PTR_SET_VALUE(transferor_, transferor) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InitiateAttendedTransferRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> callPriority_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> queuingOverflowThreshold_ = nullptr;
    std::shared_ptr<int64_t> queuingTimeoutSeconds_ = nullptr;
    std::shared_ptr<string> routingType_ = nullptr;
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
