// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateConsumerGroupRequestConsumeRetryPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateConsumerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumeRetryPolicy, consumeRetryPolicy_);
      DARABONBA_PTR_TO_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_TO_JSON(maxReceiveTps, maxReceiveTps_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumeRetryPolicy, consumeRetryPolicy_);
      DARABONBA_PTR_FROM_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_FROM_JSON(maxReceiveTps, maxReceiveTps_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    UpdateConsumerGroupRequest() = default ;
    UpdateConsumerGroupRequest(const UpdateConsumerGroupRequest &) = default ;
    UpdateConsumerGroupRequest(UpdateConsumerGroupRequest &&) = default ;
    UpdateConsumerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerGroupRequest() = default ;
    UpdateConsumerGroupRequest& operator=(const UpdateConsumerGroupRequest &) = default ;
    UpdateConsumerGroupRequest& operator=(UpdateConsumerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumeRetryPolicy_ == nullptr
        && return this->deliveryOrderType_ == nullptr && return this->maxReceiveTps_ == nullptr && return this->remark_ == nullptr; };
    // consumeRetryPolicy Field Functions 
    bool hasConsumeRetryPolicy() const { return this->consumeRetryPolicy_ != nullptr;};
    void deleteConsumeRetryPolicy() { this->consumeRetryPolicy_ = nullptr;};
    inline const UpdateConsumerGroupRequestConsumeRetryPolicy & consumeRetryPolicy() const { DARABONBA_PTR_GET_CONST(consumeRetryPolicy_, UpdateConsumerGroupRequestConsumeRetryPolicy) };
    inline UpdateConsumerGroupRequestConsumeRetryPolicy consumeRetryPolicy() { DARABONBA_PTR_GET(consumeRetryPolicy_, UpdateConsumerGroupRequestConsumeRetryPolicy) };
    inline UpdateConsumerGroupRequest& setConsumeRetryPolicy(const UpdateConsumerGroupRequestConsumeRetryPolicy & consumeRetryPolicy) { DARABONBA_PTR_SET_VALUE(consumeRetryPolicy_, consumeRetryPolicy) };
    inline UpdateConsumerGroupRequest& setConsumeRetryPolicy(UpdateConsumerGroupRequestConsumeRetryPolicy && consumeRetryPolicy) { DARABONBA_PTR_SET_RVALUE(consumeRetryPolicy_, consumeRetryPolicy) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline string deliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
    inline UpdateConsumerGroupRequest& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


    // maxReceiveTps Field Functions 
    bool hasMaxReceiveTps() const { return this->maxReceiveTps_ != nullptr;};
    void deleteMaxReceiveTps() { this->maxReceiveTps_ = nullptr;};
    inline int64_t maxReceiveTps() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveTps_, 0L) };
    inline UpdateConsumerGroupRequest& setMaxReceiveTps(int64_t maxReceiveTps) { DARABONBA_PTR_SET_VALUE(maxReceiveTps_, maxReceiveTps) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateConsumerGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The new consumption retry policy of the consumer group. For more information, see [Consumption retry](https://help.aliyun.com/document_detail/440356.html).
    // 
    // This parameter is required.
    std::shared_ptr<UpdateConsumerGroupRequestConsumeRetryPolicy> consumeRetryPolicy_ = nullptr;
    // The new message delivery method of the consumer group.
    // 
    // Valid values:
    // 
    // *   Concurrently: concurrent delivery
    // *   Orderly: ordered delivery
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryOrderType_ = nullptr;
    // The maximum number of messages that can be processed by consumers per second.
    std::shared_ptr<int64_t> maxReceiveTps_ = nullptr;
    // The new description of the consumer group.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
