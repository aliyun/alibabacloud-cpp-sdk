// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSTATELOGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSTATELOGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAgentStateLogsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentStateLogsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StateCode, stateCode_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentStateLogsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StateCode, stateCode_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    ListAgentStateLogsResponseBodyData() = default ;
    ListAgentStateLogsResponseBodyData(const ListAgentStateLogsResponseBodyData &) = default ;
    ListAgentStateLogsResponseBodyData(ListAgentStateLogsResponseBodyData &&) = default ;
    ListAgentStateLogsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentStateLogsResponseBodyData() = default ;
    ListAgentStateLogsResponseBodyData& operator=(const ListAgentStateLogsResponseBodyData &) = default ;
    ListAgentStateLogsResponseBodyData& operator=(ListAgentStateLogsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->breakCode_ != nullptr
        && this->duration_ != nullptr && this->outboundScenario_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr && this->stateCode_ != nullptr
        && this->workMode_ != nullptr; };
    // breakCode Field Functions 
    bool hasBreakCode() const { return this->breakCode_ != nullptr;};
    void deleteBreakCode() { this->breakCode_ = nullptr;};
    inline string breakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
    inline ListAgentStateLogsResponseBodyData& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListAgentStateLogsResponseBodyData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // outboundScenario Field Functions 
    bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
    void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
    inline bool outboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
    inline ListAgentStateLogsResponseBodyData& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAgentStateLogsResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListAgentStateLogsResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // stateCode Field Functions 
    bool hasStateCode() const { return this->stateCode_ != nullptr;};
    void deleteStateCode() { this->stateCode_ = nullptr;};
    inline string stateCode() const { DARABONBA_PTR_GET_DEFAULT(stateCode_, "") };
    inline ListAgentStateLogsResponseBodyData& setStateCode(string stateCode) { DARABONBA_PTR_SET_VALUE(stateCode_, stateCode) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string workMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline ListAgentStateLogsResponseBodyData& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    std::shared_ptr<string> breakCode_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<bool> outboundScenario_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> stateCode_ = nullptr;
    std::shared_ptr<string> workMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
