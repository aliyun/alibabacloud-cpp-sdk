// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAQUEUEEVENTS_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAQUEUEEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataQueueEventsEventSequence.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataQueueEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataQueueEvents& obj) { 
      DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(QueueType, queueType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataQueueEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
    };
    GetCallDetailRecordResponseBodyDataQueueEvents() = default ;
    GetCallDetailRecordResponseBodyDataQueueEvents(const GetCallDetailRecordResponseBodyDataQueueEvents &) = default ;
    GetCallDetailRecordResponseBodyDataQueueEvents(GetCallDetailRecordResponseBodyDataQueueEvents &&) = default ;
    GetCallDetailRecordResponseBodyDataQueueEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataQueueEvents() = default ;
    GetCallDetailRecordResponseBodyDataQueueEvents& operator=(const GetCallDetailRecordResponseBodyDataQueueEvents &) = default ;
    GetCallDetailRecordResponseBodyDataQueueEvents& operator=(GetCallDetailRecordResponseBodyDataQueueEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventSequence_ == nullptr
        && return this->flowId_ == nullptr && return this->queueId_ == nullptr && return this->queueName_ == nullptr && return this->queueType_ == nullptr; };
    // eventSequence Field Functions 
    bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
    void deleteEventSequence() { this->eventSequence_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataQueueEventsEventSequence> & eventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataQueueEventsEventSequence>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataQueueEventsEventSequence> eventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataQueueEventsEventSequence>) };
    inline GetCallDetailRecordResponseBodyDataQueueEvents& setEventSequence(const vector<Models::GetCallDetailRecordResponseBodyDataQueueEventsEventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
    inline GetCallDetailRecordResponseBodyDataQueueEvents& setEventSequence(vector<Models::GetCallDetailRecordResponseBodyDataQueueEventsEventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetCallDetailRecordResponseBodyDataQueueEvents& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline GetCallDetailRecordResponseBodyDataQueueEvents& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetCallDetailRecordResponseBodyDataQueueEvents& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline int32_t queueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, 0) };
    inline GetCallDetailRecordResponseBodyDataQueueEvents& setQueueType(int32_t queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


  protected:
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataQueueEventsEventSequence>> eventSequence_ = nullptr;
    std::shared_ptr<string> flowId_ = nullptr;
    std::shared_ptr<string> queueId_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<int32_t> queueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
