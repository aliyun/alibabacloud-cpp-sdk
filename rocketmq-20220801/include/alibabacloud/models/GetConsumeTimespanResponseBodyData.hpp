// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMETIMESPANRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMETIMESPANRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumeTimespanResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumeTimespanResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(maxTimestamp, maxTimestamp_);
      DARABONBA_PTR_TO_JSON(minTimestamp, minTimestamp_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumeTimespanResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(maxTimestamp, maxTimestamp_);
      DARABONBA_PTR_FROM_JSON(minTimestamp, minTimestamp_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    GetConsumeTimespanResponseBodyData() = default ;
    GetConsumeTimespanResponseBodyData(const GetConsumeTimespanResponseBodyData &) = default ;
    GetConsumeTimespanResponseBodyData(GetConsumeTimespanResponseBodyData &&) = default ;
    GetConsumeTimespanResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumeTimespanResponseBodyData() = default ;
    GetConsumeTimespanResponseBodyData& operator=(const GetConsumeTimespanResponseBodyData &) = default ;
    GetConsumeTimespanResponseBodyData& operator=(GetConsumeTimespanResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumeTimestamp_ == nullptr
        && return this->consumerGroupId_ == nullptr && return this->instanceId_ == nullptr && return this->maxTimestamp_ == nullptr && return this->minTimestamp_ == nullptr && return this->topicName_ == nullptr; };
    // consumeTimestamp Field Functions 
    bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
    void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
    inline int64_t consumeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(consumeTimestamp_, 0L) };
    inline GetConsumeTimespanResponseBodyData& setConsumeTimestamp(int64_t consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline GetConsumeTimespanResponseBodyData& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConsumeTimespanResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxTimestamp Field Functions 
    bool hasMaxTimestamp() const { return this->maxTimestamp_ != nullptr;};
    void deleteMaxTimestamp() { this->maxTimestamp_ = nullptr;};
    inline int64_t maxTimestamp() const { DARABONBA_PTR_GET_DEFAULT(maxTimestamp_, 0L) };
    inline GetConsumeTimespanResponseBodyData& setMaxTimestamp(int64_t maxTimestamp) { DARABONBA_PTR_SET_VALUE(maxTimestamp_, maxTimestamp) };


    // minTimestamp Field Functions 
    bool hasMinTimestamp() const { return this->minTimestamp_ != nullptr;};
    void deleteMinTimestamp() { this->minTimestamp_ = nullptr;};
    inline int64_t minTimestamp() const { DARABONBA_PTR_GET_DEFAULT(minTimestamp_, 0L) };
    inline GetConsumeTimespanResponseBodyData& setMinTimestamp(int64_t minTimestamp) { DARABONBA_PTR_SET_VALUE(minTimestamp_, minTimestamp) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetConsumeTimespanResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<int64_t> consumeTimestamp_ = nullptr;
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> maxTimestamp_ = nullptr;
    std::shared_ptr<int64_t> minTimestamp_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
