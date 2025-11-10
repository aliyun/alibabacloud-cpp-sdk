// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMERGROUPREQUESTCONSUMERETRYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMERGROUPREQUESTCONSUMERETRYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateConsumerGroupRequestConsumeRetryPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerGroupRequestConsumeRetryPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(deadLetterTargetTopic, deadLetterTargetTopic_);
      DARABONBA_PTR_TO_JSON(fixedIntervalRetryTime, fixedIntervalRetryTime_);
      DARABONBA_PTR_TO_JSON(maxRetryTimes, maxRetryTimes_);
      DARABONBA_PTR_TO_JSON(retryPolicy, retryPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerGroupRequestConsumeRetryPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(deadLetterTargetTopic, deadLetterTargetTopic_);
      DARABONBA_PTR_FROM_JSON(fixedIntervalRetryTime, fixedIntervalRetryTime_);
      DARABONBA_PTR_FROM_JSON(maxRetryTimes, maxRetryTimes_);
      DARABONBA_PTR_FROM_JSON(retryPolicy, retryPolicy_);
    };
    UpdateConsumerGroupRequestConsumeRetryPolicy() = default ;
    UpdateConsumerGroupRequestConsumeRetryPolicy(const UpdateConsumerGroupRequestConsumeRetryPolicy &) = default ;
    UpdateConsumerGroupRequestConsumeRetryPolicy(UpdateConsumerGroupRequestConsumeRetryPolicy &&) = default ;
    UpdateConsumerGroupRequestConsumeRetryPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerGroupRequestConsumeRetryPolicy() = default ;
    UpdateConsumerGroupRequestConsumeRetryPolicy& operator=(const UpdateConsumerGroupRequestConsumeRetryPolicy &) = default ;
    UpdateConsumerGroupRequestConsumeRetryPolicy& operator=(UpdateConsumerGroupRequestConsumeRetryPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deadLetterTargetTopic_ == nullptr
        && return this->fixedIntervalRetryTime_ == nullptr && return this->maxRetryTimes_ == nullptr && return this->retryPolicy_ == nullptr; };
    // deadLetterTargetTopic Field Functions 
    bool hasDeadLetterTargetTopic() const { return this->deadLetterTargetTopic_ != nullptr;};
    void deleteDeadLetterTargetTopic() { this->deadLetterTargetTopic_ = nullptr;};
    inline string deadLetterTargetTopic() const { DARABONBA_PTR_GET_DEFAULT(deadLetterTargetTopic_, "") };
    inline UpdateConsumerGroupRequestConsumeRetryPolicy& setDeadLetterTargetTopic(string deadLetterTargetTopic) { DARABONBA_PTR_SET_VALUE(deadLetterTargetTopic_, deadLetterTargetTopic) };


    // fixedIntervalRetryTime Field Functions 
    bool hasFixedIntervalRetryTime() const { return this->fixedIntervalRetryTime_ != nullptr;};
    void deleteFixedIntervalRetryTime() { this->fixedIntervalRetryTime_ = nullptr;};
    inline int32_t fixedIntervalRetryTime() const { DARABONBA_PTR_GET_DEFAULT(fixedIntervalRetryTime_, 0) };
    inline UpdateConsumerGroupRequestConsumeRetryPolicy& setFixedIntervalRetryTime(int32_t fixedIntervalRetryTime) { DARABONBA_PTR_SET_VALUE(fixedIntervalRetryTime_, fixedIntervalRetryTime) };


    // maxRetryTimes Field Functions 
    bool hasMaxRetryTimes() const { return this->maxRetryTimes_ != nullptr;};
    void deleteMaxRetryTimes() { this->maxRetryTimes_ = nullptr;};
    inline int32_t maxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTimes_, 0) };
    inline UpdateConsumerGroupRequestConsumeRetryPolicy& setMaxRetryTimes(int32_t maxRetryTimes) { DARABONBA_PTR_SET_VALUE(maxRetryTimes_, maxRetryTimes) };


    // retryPolicy Field Functions 
    bool hasRetryPolicy() const { return this->retryPolicy_ != nullptr;};
    void deleteRetryPolicy() { this->retryPolicy_ = nullptr;};
    inline string retryPolicy() const { DARABONBA_PTR_GET_DEFAULT(retryPolicy_, "") };
    inline UpdateConsumerGroupRequestConsumeRetryPolicy& setRetryPolicy(string retryPolicy) { DARABONBA_PTR_SET_VALUE(retryPolicy_, retryPolicy) };


  protected:
    // The dead-letter topic.
    // 
    // If a message still fails to be consumed after the maximum number of retries specified in the consumption retry policy is reached, the message is delivered to the dead-letter topic for subsequent business recovery or backtracking. For more information, see [Consumption retry and dead-letter messages](https://help.aliyun.com/document_detail/440356.html).
    std::shared_ptr<string> deadLetterTargetTopic_ = nullptr;
    // Fixed retry interval, unit: seconds.This option is effective when retryPolicy is FixedRetryPolicy.Value range：
    //   - Concurrently:10-1800
    //   - Orderly:1-600
    std::shared_ptr<int32_t> fixedIntervalRetryTime_ = nullptr;
    // The maximum number of retries.
    std::shared_ptr<int32_t> maxRetryTimes_ = nullptr;
    // The retry policy. For more information, see [Message retry](https://help.aliyun.com/document_detail/440356.html).
    // 
    // Valid values:
    // 
    // *   FixedRetryPolicy: fixed-interval retry. This value is valid only if you set deliveryOrderType to Orderly.
    // *   DefaultRetryPolicy: exponential backoff retry. This value is valid only if you set deliveryOrderType to Concurrently.
    // 
    // This parameter is required.
    std::shared_ptr<string> retryPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
