// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConsumerGroupResponseBodyDataConsumeRetryPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consumeRetryPolicy, consumeRetryPolicy_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(maxReceiveTps, maxReceiveTps_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumeRetryPolicy, consumeRetryPolicy_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(maxReceiveTps, maxReceiveTps_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetConsumerGroupResponseBodyData() = default ;
    GetConsumerGroupResponseBodyData(const GetConsumerGroupResponseBodyData &) = default ;
    GetConsumerGroupResponseBodyData(GetConsumerGroupResponseBodyData &&) = default ;
    GetConsumerGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupResponseBodyData() = default ;
    GetConsumerGroupResponseBodyData& operator=(const GetConsumerGroupResponseBodyData &) = default ;
    GetConsumerGroupResponseBodyData& operator=(GetConsumerGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeRetryPolicy_ != nullptr
        && this->consumerGroupId_ != nullptr && this->createTime_ != nullptr && this->deliveryOrderType_ != nullptr && this->instanceId_ != nullptr && this->maxReceiveTps_ != nullptr
        && this->regionId_ != nullptr && this->remark_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // consumeRetryPolicy Field Functions 
    bool hasConsumeRetryPolicy() const { return this->consumeRetryPolicy_ != nullptr;};
    void deleteConsumeRetryPolicy() { this->consumeRetryPolicy_ = nullptr;};
    inline const Models::GetConsumerGroupResponseBodyDataConsumeRetryPolicy & consumeRetryPolicy() const { DARABONBA_PTR_GET_CONST(consumeRetryPolicy_, Models::GetConsumerGroupResponseBodyDataConsumeRetryPolicy) };
    inline Models::GetConsumerGroupResponseBodyDataConsumeRetryPolicy consumeRetryPolicy() { DARABONBA_PTR_GET(consumeRetryPolicy_, Models::GetConsumerGroupResponseBodyDataConsumeRetryPolicy) };
    inline GetConsumerGroupResponseBodyData& setConsumeRetryPolicy(const Models::GetConsumerGroupResponseBodyDataConsumeRetryPolicy & consumeRetryPolicy) { DARABONBA_PTR_SET_VALUE(consumeRetryPolicy_, consumeRetryPolicy) };
    inline GetConsumerGroupResponseBodyData& setConsumeRetryPolicy(Models::GetConsumerGroupResponseBodyDataConsumeRetryPolicy && consumeRetryPolicy) { DARABONBA_PTR_SET_RVALUE(consumeRetryPolicy_, consumeRetryPolicy) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline GetConsumerGroupResponseBodyData& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetConsumerGroupResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline string deliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
    inline GetConsumerGroupResponseBodyData& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConsumerGroupResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxReceiveTps Field Functions 
    bool hasMaxReceiveTps() const { return this->maxReceiveTps_ != nullptr;};
    void deleteMaxReceiveTps() { this->maxReceiveTps_ = nullptr;};
    inline int64_t maxReceiveTps() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveTps_, 0L) };
    inline GetConsumerGroupResponseBodyData& setMaxReceiveTps(int64_t maxReceiveTps) { DARABONBA_PTR_SET_VALUE(maxReceiveTps_, maxReceiveTps) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConsumerGroupResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetConsumerGroupResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetConsumerGroupResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetConsumerGroupResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The consumption retry policy of the consumer group. For more information, see [Consumption retry](https://help.aliyun.com/document_detail/440356.html).
    std::shared_ptr<Models::GetConsumerGroupResponseBodyDataConsumeRetryPolicy> consumeRetryPolicy_ = nullptr;
    // The ID of the consumer group.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The time when the consumer group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The message delivery method of the consumer group.
    // 
    // Valid values:
    // 
    // *   Concurrently: concurrent delivery
    // *   Orderly: ordered delivery
    std::shared_ptr<string> deliveryOrderType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Maximum received message tps
    std::shared_ptr<int64_t> maxReceiveTps_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The remarks on the consumer group.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the consumer group.
    // 
    // Valid values:
    // 
    // *   RUNNING
    // *   CREATING
    std::shared_ptr<string> status_ = nullptr;
    // The time when the consumer group was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
