// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOSRECORDSOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOSRECORDSOPERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataConsumerInfosRecordsOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataConsumerInfosRecordsOperations& obj) { 
      DARABONBA_PTR_TO_JSON(deadMessage, deadMessage_);
      DARABONBA_PTR_TO_JSON(invisibleTime, invisibleTime_);
      DARABONBA_PTR_TO_JSON(operateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataConsumerInfosRecordsOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(deadMessage, deadMessage_);
      DARABONBA_PTR_FROM_JSON(invisibleTime, invisibleTime_);
      DARABONBA_PTR_FROM_JSON(operateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
    };
    GetTraceResponseBodyDataConsumerInfosRecordsOperations() = default ;
    GetTraceResponseBodyDataConsumerInfosRecordsOperations(const GetTraceResponseBodyDataConsumerInfosRecordsOperations &) = default ;
    GetTraceResponseBodyDataConsumerInfosRecordsOperations(GetTraceResponseBodyDataConsumerInfosRecordsOperations &&) = default ;
    GetTraceResponseBodyDataConsumerInfosRecordsOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataConsumerInfosRecordsOperations() = default ;
    GetTraceResponseBodyDataConsumerInfosRecordsOperations& operator=(const GetTraceResponseBodyDataConsumerInfosRecordsOperations &) = default ;
    GetTraceResponseBodyDataConsumerInfosRecordsOperations& operator=(GetTraceResponseBodyDataConsumerInfosRecordsOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deadMessage_ == nullptr
        && return this->invisibleTime_ == nullptr && return this->operateTime_ == nullptr && return this->operateType_ == nullptr; };
    // deadMessage Field Functions 
    bool hasDeadMessage() const { return this->deadMessage_ != nullptr;};
    void deleteDeadMessage() { this->deadMessage_ = nullptr;};
    inline bool deadMessage() const { DARABONBA_PTR_GET_DEFAULT(deadMessage_, false) };
    inline GetTraceResponseBodyDataConsumerInfosRecordsOperations& setDeadMessage(bool deadMessage) { DARABONBA_PTR_SET_VALUE(deadMessage_, deadMessage) };


    // invisibleTime Field Functions 
    bool hasInvisibleTime() const { return this->invisibleTime_ != nullptr;};
    void deleteInvisibleTime() { this->invisibleTime_ = nullptr;};
    inline int64_t invisibleTime() const { DARABONBA_PTR_GET_DEFAULT(invisibleTime_, 0L) };
    inline GetTraceResponseBodyDataConsumerInfosRecordsOperations& setInvisibleTime(int64_t invisibleTime) { DARABONBA_PTR_SET_VALUE(invisibleTime_, invisibleTime) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline GetTraceResponseBodyDataConsumerInfosRecordsOperations& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline GetTraceResponseBodyDataConsumerInfosRecordsOperations& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


  protected:
    // Whether it is a dead letter message.
    std::shared_ptr<bool> deadMessage_ = nullptr;
    // Invisible time, milliseconds.
    std::shared_ptr<int64_t> invisibleTime_ = nullptr;
    // Operation time.
    std::shared_ptr<string> operateTime_ = nullptr;
    // Operation type.
    std::shared_ptr<string> operateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
