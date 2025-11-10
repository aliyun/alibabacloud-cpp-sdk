// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOSDEADLETTERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOSDEADLETTERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataConsumerInfosDeadLetterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataConsumerInfosDeadLetterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(toDlqTime, toDlqTime_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataConsumerInfosDeadLetterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(toDlqTime, toDlqTime_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    GetTraceResponseBodyDataConsumerInfosDeadLetterInfo() = default ;
    GetTraceResponseBodyDataConsumerInfosDeadLetterInfo(const GetTraceResponseBodyDataConsumerInfosDeadLetterInfo &) = default ;
    GetTraceResponseBodyDataConsumerInfosDeadLetterInfo(GetTraceResponseBodyDataConsumerInfosDeadLetterInfo &&) = default ;
    GetTraceResponseBodyDataConsumerInfosDeadLetterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataConsumerInfosDeadLetterInfo() = default ;
    GetTraceResponseBodyDataConsumerInfosDeadLetterInfo& operator=(const GetTraceResponseBodyDataConsumerInfosDeadLetterInfo &) = default ;
    GetTraceResponseBodyDataConsumerInfosDeadLetterInfo& operator=(GetTraceResponseBodyDataConsumerInfosDeadLetterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr
        && return this->toDlqTime_ == nullptr && return this->topicName_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetTraceResponseBodyDataConsumerInfosDeadLetterInfo& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // toDlqTime Field Functions 
    bool hasToDlqTime() const { return this->toDlqTime_ != nullptr;};
    void deleteToDlqTime() { this->toDlqTime_ = nullptr;};
    inline string toDlqTime() const { DARABONBA_PTR_GET_DEFAULT(toDlqTime_, "") };
    inline GetTraceResponseBodyDataConsumerInfosDeadLetterInfo& setToDlqTime(string toDlqTime) { DARABONBA_PTR_SET_VALUE(toDlqTime_, toDlqTime) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTraceResponseBodyDataConsumerInfosDeadLetterInfo& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // MessageId.
    std::shared_ptr<string> messageId_ = nullptr;
    // Arrival time in the dead letter queue.
    std::shared_ptr<string> toDlqTime_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
