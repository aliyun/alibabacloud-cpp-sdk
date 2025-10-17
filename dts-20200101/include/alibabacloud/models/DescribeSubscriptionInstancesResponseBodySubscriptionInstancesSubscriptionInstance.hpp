// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCESSUBSCRIPTIONINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCESSUBSCRIPTIONINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject.hpp>
#include <alibabacloud/models/DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceCreateTime, instanceCreateTime_);
      DARABONBA_PTR_TO_JSON(JobCreateTime, jobCreateTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_TO_JSON(SubscriptionObject, subscriptionObject_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceCreateTime, instanceCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobCreateTime, jobCreateTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceID, subscriptionInstanceID_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceName, subscriptionInstanceName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionObject, subscriptionObject_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance(const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance(DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance &&) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& operator=(const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& operator=(DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTimestamp_ == nullptr
        && return this->consumptionCheckpoint_ == nullptr && return this->consumptionClient_ == nullptr && return this->endTimestamp_ == nullptr && return this->errorMessage_ == nullptr && return this->instanceCreateTime_ == nullptr
        && return this->jobCreateTime_ == nullptr && return this->payType_ == nullptr && return this->sourceEndpoint_ == nullptr && return this->status_ == nullptr && return this->subscribeTopic_ == nullptr
        && return this->subscriptionDataType_ == nullptr && return this->subscriptionHost_ == nullptr && return this->subscriptionInstanceID_ == nullptr && return this->subscriptionInstanceName_ == nullptr && return this->subscriptionObject_ == nullptr
        && return this->tags_ == nullptr; };
    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string beginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string consumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string consumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceCreateTime Field Functions 
    bool hasInstanceCreateTime() const { return this->instanceCreateTime_ != nullptr;};
    void deleteInstanceCreateTime() { this->instanceCreateTime_ = nullptr;};
    inline string instanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateTime_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setInstanceCreateTime(string instanceCreateTime) { DARABONBA_PTR_SET_VALUE(instanceCreateTime_, instanceCreateTime) };


    // jobCreateTime Field Functions 
    bool hasJobCreateTime() const { return this->jobCreateTime_ != nullptr;};
    void deleteJobCreateTime() { this->jobCreateTime_ = nullptr;};
    inline string jobCreateTime() const { DARABONBA_PTR_GET_DEFAULT(jobCreateTime_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setJobCreateTime(string jobCreateTime) { DARABONBA_PTR_SET_VALUE(jobCreateTime_, jobCreateTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint) };
    inline Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSourceEndpoint(const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSourceEndpoint(Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscribeTopic Field Functions 
    bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
    void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
    inline string subscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType & subscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType) };
    inline Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType subscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionDataType(const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionDataType(Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionHost Field Functions 
    bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
    void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
    inline const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost & subscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost) };
    inline Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost subscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionHost(const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionHost(Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


    // subscriptionInstanceID Field Functions 
    bool hasSubscriptionInstanceID() const { return this->subscriptionInstanceID_ != nullptr;};
    void deleteSubscriptionInstanceID() { this->subscriptionInstanceID_ = nullptr;};
    inline string subscriptionInstanceID() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceID_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionInstanceID(string subscriptionInstanceID) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceID_, subscriptionInstanceID) };


    // subscriptionInstanceName Field Functions 
    bool hasSubscriptionInstanceName() const { return this->subscriptionInstanceName_ != nullptr;};
    void deleteSubscriptionInstanceName() { this->subscriptionInstanceName_ = nullptr;};
    inline string subscriptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceName_, "") };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionInstanceName(string subscriptionInstanceName) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceName_, subscriptionInstanceName) };


    // subscriptionObject Field Functions 
    bool hasSubscriptionObject() const { return this->subscriptionObject_ != nullptr;};
    void deleteSubscriptionObject() { this->subscriptionObject_ = nullptr;};
    inline const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject & subscriptionObject() const { DARABONBA_PTR_GET_CONST(subscriptionObject_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject) };
    inline Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject subscriptionObject() { DARABONBA_PTR_GET(subscriptionObject_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionObject(const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject & subscriptionObject) { DARABONBA_PTR_SET_VALUE(subscriptionObject_, subscriptionObject) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setSubscriptionObject(Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject && subscriptionObject) { DARABONBA_PTR_SET_RVALUE(subscriptionObject_, subscriptionObject) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags) };
    inline Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setTags(const Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance& setTags(Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The start of the time range for change tracking. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> beginTimestamp_ = nullptr;
    // The consumption checkpoint of the change tracking instance. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> consumptionCheckpoint_ = nullptr;
    // The downstream client information, in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
    std::shared_ptr<string> consumptionClient_ = nullptr;
    // The end of the time range for change tracking. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> endTimestamp_ = nullptr;
    // The error message returned if change tracking failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the change tracking instance was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    std::shared_ptr<string> instanceCreateTime_ = nullptr;
    // The time when the change tracking task was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> jobCreateTime_ = nullptr;
    // The billing method of the change tracking instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint> sourceEndpoint_ = nullptr;
    // The status of the change tracking task. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Starting**: The task is being started.
    // *   **Normal**: The task is running as expected.
    // *   **Abnormal**: The task is not running as expected.
    std::shared_ptr<string> status_ = nullptr;
    // The topic of the change tracking instance.
    // 
    // >  This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
    std::shared_ptr<string> subscribeTopic_ = nullptr;
    // The types of operations that are tracked by the task.
    std::shared_ptr<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType> subscriptionDataType_ = nullptr;
    // The endpoint of the change tracking instance.
    std::shared_ptr<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionHost> subscriptionHost_ = nullptr;
    // The ID of the change tracking instance.
    std::shared_ptr<string> subscriptionInstanceID_ = nullptr;
    // The name of the change tracking instance.
    std::shared_ptr<string> subscriptionInstanceName_ = nullptr;
    // The objects for change tracking.
    std::shared_ptr<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject> subscriptionObject_ = nullptr;
    // The collection of tags.
    std::shared_ptr<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
