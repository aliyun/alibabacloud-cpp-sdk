// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDISASTERRECOVERYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDISASTERRECOVERYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateDisasterRecoveryItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDisasterRecoveryItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDisasterRecoveryItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(topics, topics_);
    };
    UpdateDisasterRecoveryItemRequest() = default ;
    UpdateDisasterRecoveryItemRequest(const UpdateDisasterRecoveryItemRequest &) = default ;
    UpdateDisasterRecoveryItemRequest(UpdateDisasterRecoveryItemRequest &&) = default ;
    UpdateDisasterRecoveryItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDisasterRecoveryItemRequest() = default ;
    UpdateDisasterRecoveryItemRequest& operator=(const UpdateDisasterRecoveryItemRequest &) = default ;
    UpdateDisasterRecoveryItemRequest& operator=(UpdateDisasterRecoveryItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Topics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Topics& obj) { 
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(deliveryOrderType, deliveryOrderType_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(topicName, topicName_);
      };
      friend void from_json(const Darabonba::Json& j, Topics& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(deliveryOrderType, deliveryOrderType_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(topicName, topicName_);
      };
      Topics() = default ;
      Topics(const Topics &) = default ;
      Topics(Topics &&) = default ;
      Topics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Topics() = default ;
      Topics& operator=(const Topics &) = default ;
      Topics& operator=(Topics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->deliveryOrderType_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->regionId_ == nullptr && this->topicName_ == nullptr; };
      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Topics& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // deliveryOrderType Field Functions 
      bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
      void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
      inline string getDeliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
      inline Topics& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Topics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Topics& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Topics& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Topics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    protected:
      // The ID of the consumer group. If you use the two-way backup mode, you must specify this parameter.
      shared_ptr<string> consumerGroupId_ {};
      // The method used to deliver messages to the destination instance.
      // 
      // Valid values:
      // 
      // *   Concurrently: concurrent delivery
      // *   Orderly: ordered delivery
      shared_ptr<string> deliveryOrderType_ {};
      // The instance ID. If you set instanceType to EXTERNAL_ROCKETMQ, the system automatically generates an ID for the instance. You can obtain the ID by querying the global message backup plan.
      shared_ptr<string> instanceId_ {};
      // The instance type. Valid values:
      // 
      // *   ALIYUN_ROCKETMQ: ApsaraMQ for RocketMQ instance
      // *   EXTERNAL_ROCKETMQ: open source RocketMQ cluster
      shared_ptr<string> instanceType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The topic name. You must specify this parameter.
      shared_ptr<string> topicName_ {};
    };

    virtual bool empty() const override { return this->topics_ == nullptr; };
    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<UpdateDisasterRecoveryItemRequest::Topics> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<UpdateDisasterRecoveryItemRequest::Topics>) };
    inline vector<UpdateDisasterRecoveryItemRequest::Topics> getTopics() { DARABONBA_PTR_GET(topics_, vector<UpdateDisasterRecoveryItemRequest::Topics>) };
    inline UpdateDisasterRecoveryItemRequest& setTopics(const vector<UpdateDisasterRecoveryItemRequest::Topics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline UpdateDisasterRecoveryItemRequest& setTopics(vector<UpdateDisasterRecoveryItemRequest::Topics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // The topics involved in the topic mapping.
    shared_ptr<vector<UpdateDisasterRecoveryItemRequest::Topics>> topics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
