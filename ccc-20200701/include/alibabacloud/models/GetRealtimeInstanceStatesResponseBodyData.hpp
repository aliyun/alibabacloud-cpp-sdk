// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetRealtimeInstanceStatesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeInstanceStatesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InteractiveCalls, interactiveCalls_);
      DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_TO_JSON(LongestWaitingTime, longestWaitingTime_);
      DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_TO_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_TO_JSON(WaitingCalls, waitingCalls_);
      DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeInstanceStatesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InteractiveCalls, interactiveCalls_);
      DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_FROM_JSON(LongestWaitingTime, longestWaitingTime_);
      DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_FROM_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_FROM_JSON(WaitingCalls, waitingCalls_);
      DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
    };
    GetRealtimeInstanceStatesResponseBodyData() = default ;
    GetRealtimeInstanceStatesResponseBodyData(const GetRealtimeInstanceStatesResponseBodyData &) = default ;
    GetRealtimeInstanceStatesResponseBodyData(GetRealtimeInstanceStatesResponseBodyData &&) = default ;
    GetRealtimeInstanceStatesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeInstanceStatesResponseBodyData() = default ;
    GetRealtimeInstanceStatesResponseBodyData& operator=(const GetRealtimeInstanceStatesResponseBodyData &) = default ;
    GetRealtimeInstanceStatesResponseBodyData& operator=(GetRealtimeInstanceStatesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->breakCodeDetailList_ != nullptr
        && this->breakingAgents_ != nullptr && this->instanceId_ != nullptr && this->interactiveCalls_ != nullptr && this->loggedInAgents_ != nullptr && this->longestWaitingTime_ != nullptr
        && this->readyAgents_ != nullptr && this->talkingAgents_ != nullptr && this->totalAgents_ != nullptr && this->waitingCalls_ != nullptr && this->workingAgents_ != nullptr; };
    // breakCodeDetailList Field Functions 
    bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
    void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
    inline const vector<Models::GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList> & breakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Models::GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList>) };
    inline vector<Models::GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList> breakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Models::GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList>) };
    inline GetRealtimeInstanceStatesResponseBodyData& setBreakCodeDetailList(const vector<Models::GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
    inline GetRealtimeInstanceStatesResponseBodyData& setBreakCodeDetailList(vector<Models::GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


    // breakingAgents Field Functions 
    bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
    void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
    inline int64_t breakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRealtimeInstanceStatesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interactiveCalls Field Functions 
    bool hasInteractiveCalls() const { return this->interactiveCalls_ != nullptr;};
    void deleteInteractiveCalls() { this->interactiveCalls_ = nullptr;};
    inline int64_t interactiveCalls() const { DARABONBA_PTR_GET_DEFAULT(interactiveCalls_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setInteractiveCalls(int64_t interactiveCalls) { DARABONBA_PTR_SET_VALUE(interactiveCalls_, interactiveCalls) };


    // loggedInAgents Field Functions 
    bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
    void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
    inline int64_t loggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


    // longestWaitingTime Field Functions 
    bool hasLongestWaitingTime() const { return this->longestWaitingTime_ != nullptr;};
    void deleteLongestWaitingTime() { this->longestWaitingTime_ = nullptr;};
    inline int64_t longestWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(longestWaitingTime_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setLongestWaitingTime(int64_t longestWaitingTime) { DARABONBA_PTR_SET_VALUE(longestWaitingTime_, longestWaitingTime) };


    // readyAgents Field Functions 
    bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
    void deleteReadyAgents() { this->readyAgents_ = nullptr;};
    inline int64_t readyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


    // talkingAgents Field Functions 
    bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
    void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
    inline int64_t talkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


    // totalAgents Field Functions 
    bool hasTotalAgents() const { return this->totalAgents_ != nullptr;};
    void deleteTotalAgents() { this->totalAgents_ = nullptr;};
    inline int64_t totalAgents() const { DARABONBA_PTR_GET_DEFAULT(totalAgents_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setTotalAgents(int64_t totalAgents) { DARABONBA_PTR_SET_VALUE(totalAgents_, totalAgents) };


    // waitingCalls Field Functions 
    bool hasWaitingCalls() const { return this->waitingCalls_ != nullptr;};
    void deleteWaitingCalls() { this->waitingCalls_ = nullptr;};
    inline int64_t waitingCalls() const { DARABONBA_PTR_GET_DEFAULT(waitingCalls_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setWaitingCalls(int64_t waitingCalls) { DARABONBA_PTR_SET_VALUE(waitingCalls_, waitingCalls) };


    // workingAgents Field Functions 
    bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
    void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
    inline int64_t workingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyData& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


  protected:
    std::shared_ptr<vector<Models::GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList>> breakCodeDetailList_ = nullptr;
    std::shared_ptr<int64_t> breakingAgents_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> interactiveCalls_ = nullptr;
    std::shared_ptr<int64_t> loggedInAgents_ = nullptr;
    std::shared_ptr<int64_t> longestWaitingTime_ = nullptr;
    std::shared_ptr<int64_t> readyAgents_ = nullptr;
    std::shared_ptr<int64_t> talkingAgents_ = nullptr;
    std::shared_ptr<int64_t> totalAgents_ = nullptr;
    std::shared_ptr<int64_t> waitingCalls_ = nullptr;
    std::shared_ptr<int64_t> workingAgents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
