// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTraceResponseBodyDataConsumerInfosDeadLetterInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceResponseBodyDataConsumerInfosRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataConsumerInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataConsumerInfos& obj) { 
      DARABONBA_PTR_TO_JSON(consumeStatus, consumeStatus_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(deadLetterInfo, deadLetterInfo_);
      DARABONBA_PTR_TO_JSON(deadMessage, deadMessage_);
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataConsumerInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(consumeStatus, consumeStatus_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(deadLetterInfo, deadLetterInfo_);
      DARABONBA_PTR_FROM_JSON(deadMessage, deadMessage_);
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    GetTraceResponseBodyDataConsumerInfos() = default ;
    GetTraceResponseBodyDataConsumerInfos(const GetTraceResponseBodyDataConsumerInfos &) = default ;
    GetTraceResponseBodyDataConsumerInfos(GetTraceResponseBodyDataConsumerInfos &&) = default ;
    GetTraceResponseBodyDataConsumerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataConsumerInfos() = default ;
    GetTraceResponseBodyDataConsumerInfos& operator=(const GetTraceResponseBodyDataConsumerInfos &) = default ;
    GetTraceResponseBodyDataConsumerInfos& operator=(GetTraceResponseBodyDataConsumerInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumeStatus_ == nullptr
        && return this->consumerGroupId_ == nullptr && return this->deadLetterInfo_ == nullptr && return this->deadMessage_ == nullptr && return this->records_ == nullptr; };
    // consumeStatus Field Functions 
    bool hasConsumeStatus() const { return this->consumeStatus_ != nullptr;};
    void deleteConsumeStatus() { this->consumeStatus_ = nullptr;};
    inline string consumeStatus() const { DARABONBA_PTR_GET_DEFAULT(consumeStatus_, "") };
    inline GetTraceResponseBodyDataConsumerInfos& setConsumeStatus(string consumeStatus) { DARABONBA_PTR_SET_VALUE(consumeStatus_, consumeStatus) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline GetTraceResponseBodyDataConsumerInfos& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // deadLetterInfo Field Functions 
    bool hasDeadLetterInfo() const { return this->deadLetterInfo_ != nullptr;};
    void deleteDeadLetterInfo() { this->deadLetterInfo_ = nullptr;};
    inline const Models::GetTraceResponseBodyDataConsumerInfosDeadLetterInfo & deadLetterInfo() const { DARABONBA_PTR_GET_CONST(deadLetterInfo_, Models::GetTraceResponseBodyDataConsumerInfosDeadLetterInfo) };
    inline Models::GetTraceResponseBodyDataConsumerInfosDeadLetterInfo deadLetterInfo() { DARABONBA_PTR_GET(deadLetterInfo_, Models::GetTraceResponseBodyDataConsumerInfosDeadLetterInfo) };
    inline GetTraceResponseBodyDataConsumerInfos& setDeadLetterInfo(const Models::GetTraceResponseBodyDataConsumerInfosDeadLetterInfo & deadLetterInfo) { DARABONBA_PTR_SET_VALUE(deadLetterInfo_, deadLetterInfo) };
    inline GetTraceResponseBodyDataConsumerInfos& setDeadLetterInfo(Models::GetTraceResponseBodyDataConsumerInfosDeadLetterInfo && deadLetterInfo) { DARABONBA_PTR_SET_RVALUE(deadLetterInfo_, deadLetterInfo) };


    // deadMessage Field Functions 
    bool hasDeadMessage() const { return this->deadMessage_ != nullptr;};
    void deleteDeadMessage() { this->deadMessage_ = nullptr;};
    inline bool deadMessage() const { DARABONBA_PTR_GET_DEFAULT(deadMessage_, false) };
    inline GetTraceResponseBodyDataConsumerInfos& setDeadMessage(bool deadMessage) { DARABONBA_PTR_SET_VALUE(deadMessage_, deadMessage) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::GetTraceResponseBodyDataConsumerInfosRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::GetTraceResponseBodyDataConsumerInfosRecords>) };
    inline vector<Models::GetTraceResponseBodyDataConsumerInfosRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::GetTraceResponseBodyDataConsumerInfosRecords>) };
    inline GetTraceResponseBodyDataConsumerInfos& setRecords(const vector<Models::GetTraceResponseBodyDataConsumerInfosRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetTraceResponseBodyDataConsumerInfos& setRecords(vector<Models::GetTraceResponseBodyDataConsumerInfosRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    // Consume status.
    std::shared_ptr<string> consumeStatus_ = nullptr;
    // The consumer group ID.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // Dead letter info.
    std::shared_ptr<Models::GetTraceResponseBodyDataConsumerInfosDeadLetterInfo> deadLetterInfo_ = nullptr;
    // Whether it is a dead letter message.
    std::shared_ptr<bool> deadMessage_ = nullptr;
    // Consumer record list.
    std::shared_ptr<vector<Models::GetTraceResponseBodyDataConsumerInfosRecords>> records_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
