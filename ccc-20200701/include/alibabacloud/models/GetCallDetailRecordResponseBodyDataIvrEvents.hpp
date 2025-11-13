// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAIVREVENTS_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAIVREVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataIvrEventsEventSequence.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataIvrEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataIvrEvents& obj) { 
      DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataIvrEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
    };
    GetCallDetailRecordResponseBodyDataIvrEvents() = default ;
    GetCallDetailRecordResponseBodyDataIvrEvents(const GetCallDetailRecordResponseBodyDataIvrEvents &) = default ;
    GetCallDetailRecordResponseBodyDataIvrEvents(GetCallDetailRecordResponseBodyDataIvrEvents &&) = default ;
    GetCallDetailRecordResponseBodyDataIvrEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataIvrEvents() = default ;
    GetCallDetailRecordResponseBodyDataIvrEvents& operator=(const GetCallDetailRecordResponseBodyDataIvrEvents &) = default ;
    GetCallDetailRecordResponseBodyDataIvrEvents& operator=(GetCallDetailRecordResponseBodyDataIvrEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventSequence_ == nullptr
        && return this->flowId_ == nullptr && return this->flowType_ == nullptr; };
    // eventSequence Field Functions 
    bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
    void deleteEventSequence() { this->eventSequence_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataIvrEventsEventSequence> & eventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataIvrEventsEventSequence>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataIvrEventsEventSequence> eventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataIvrEventsEventSequence>) };
    inline GetCallDetailRecordResponseBodyDataIvrEvents& setEventSequence(const vector<Models::GetCallDetailRecordResponseBodyDataIvrEventsEventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
    inline GetCallDetailRecordResponseBodyDataIvrEvents& setEventSequence(vector<Models::GetCallDetailRecordResponseBodyDataIvrEventsEventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetCallDetailRecordResponseBodyDataIvrEvents& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string flowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline GetCallDetailRecordResponseBodyDataIvrEvents& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


  protected:
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataIvrEventsEventSequence>> eventSequence_ = nullptr;
    std::shared_ptr<string> flowId_ = nullptr;
    std::shared_ptr<string> flowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
