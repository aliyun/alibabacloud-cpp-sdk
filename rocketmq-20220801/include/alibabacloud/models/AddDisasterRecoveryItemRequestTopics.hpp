// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDISASTERRECOVERYITEMREQUESTTOPICS_HPP_
#define ALIBABACLOUD_MODELS_ADDDISASTERRECOVERYITEMREQUESTTOPICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class AddDisasterRecoveryItemRequestTopics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDisasterRecoveryItemRequestTopics& obj) { 
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, AddDisasterRecoveryItemRequestTopics& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    AddDisasterRecoveryItemRequestTopics() = default ;
    AddDisasterRecoveryItemRequestTopics(const AddDisasterRecoveryItemRequestTopics &) = default ;
    AddDisasterRecoveryItemRequestTopics(AddDisasterRecoveryItemRequestTopics &&) = default ;
    AddDisasterRecoveryItemRequestTopics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDisasterRecoveryItemRequestTopics() = default ;
    AddDisasterRecoveryItemRequestTopics& operator=(const AddDisasterRecoveryItemRequestTopics &) = default ;
    AddDisasterRecoveryItemRequestTopics& operator=(AddDisasterRecoveryItemRequestTopics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && return this->deliveryOrderType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->regionId_ == nullptr && return this->topicName_ == nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline AddDisasterRecoveryItemRequestTopics& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline string deliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
    inline AddDisasterRecoveryItemRequestTopics& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddDisasterRecoveryItemRequestTopics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline AddDisasterRecoveryItemRequestTopics& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddDisasterRecoveryItemRequestTopics& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline AddDisasterRecoveryItemRequestTopics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // Consumer group ID, required for ACTIVE_ACTIVE bidirectional backup
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The order in which messages are delivered to the target instance. The parameter values ​​are as follows:
    //   - Concurrently: concurrent delivery
    //   - Orderly: sequential delivery
    std::shared_ptr<string> deliveryOrderType_ = nullptr;
    // Instance ID, an instance ID will be automatically generated when `instanceType` is `EXTERNAL_ROCKETMQ`, and it can be obtained by querying the backup plan.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance type
    //   - ALIYUN_ROCKETMQ: Alibaba Cloud instance
    //   - EXTERNAL_ROCKETMQ: External instance, open-source instance, open-source cluster
    std::shared_ptr<string> instanceType_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
    // Disaster recovery topic name, required
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
