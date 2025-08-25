// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMESKILLGROUPSTATESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMESKILLGROUPSTATESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListRealtimeSkillGroupStatesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeSkillGroupStatesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_TO_JSON(LongestWaitingTime, longestWaitingTime_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_TO_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_TO_JSON(WaitingCalls, waitingCalls_);
      DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeSkillGroupStatesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_FROM_JSON(LongestWaitingTime, longestWaitingTime_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_FROM_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_FROM_JSON(WaitingCalls, waitingCalls_);
      DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
    };
    ListRealtimeSkillGroupStatesResponseBodyDataList() = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataList(const ListRealtimeSkillGroupStatesResponseBodyDataList &) = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataList(ListRealtimeSkillGroupStatesResponseBodyDataList &&) = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeSkillGroupStatesResponseBodyDataList() = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataList& operator=(const ListRealtimeSkillGroupStatesResponseBodyDataList &) = default ;
    ListRealtimeSkillGroupStatesResponseBodyDataList& operator=(ListRealtimeSkillGroupStatesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->breakCodeDetailList_ != nullptr
        && this->breakingAgents_ != nullptr && this->instanceId_ != nullptr && this->loggedInAgents_ != nullptr && this->longestWaitingTime_ != nullptr && this->outboundScenarioReadyAgents_ != nullptr
        && this->readyAgents_ != nullptr && this->skillGroupId_ != nullptr && this->skillGroupName_ != nullptr && this->talkingAgents_ != nullptr && this->totalAgents_ != nullptr
        && this->waitingCalls_ != nullptr && this->workingAgents_ != nullptr; };
    // breakCodeDetailList Field Functions 
    bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
    void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
    inline const vector<Models::ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList> & breakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Models::ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList>) };
    inline vector<Models::ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList> breakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Models::ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList>) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setBreakCodeDetailList(const vector<Models::ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setBreakCodeDetailList(vector<Models::ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


    // breakingAgents Field Functions 
    bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
    void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
    inline int64_t breakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loggedInAgents Field Functions 
    bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
    void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
    inline int64_t loggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


    // longestWaitingTime Field Functions 
    bool hasLongestWaitingTime() const { return this->longestWaitingTime_ != nullptr;};
    void deleteLongestWaitingTime() { this->longestWaitingTime_ = nullptr;};
    inline int64_t longestWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(longestWaitingTime_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setLongestWaitingTime(int64_t longestWaitingTime) { DARABONBA_PTR_SET_VALUE(longestWaitingTime_, longestWaitingTime) };


    // outboundScenarioReadyAgents Field Functions 
    bool hasOutboundScenarioReadyAgents() const { return this->outboundScenarioReadyAgents_ != nullptr;};
    void deleteOutboundScenarioReadyAgents() { this->outboundScenarioReadyAgents_ = nullptr;};
    inline int64_t outboundScenarioReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioReadyAgents_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setOutboundScenarioReadyAgents(int64_t outboundScenarioReadyAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioReadyAgents_, outboundScenarioReadyAgents) };


    // readyAgents Field Functions 
    bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
    void deleteReadyAgents() { this->readyAgents_ = nullptr;};
    inline int64_t readyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // talkingAgents Field Functions 
    bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
    void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
    inline int64_t talkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


    // totalAgents Field Functions 
    bool hasTotalAgents() const { return this->totalAgents_ != nullptr;};
    void deleteTotalAgents() { this->totalAgents_ = nullptr;};
    inline int64_t totalAgents() const { DARABONBA_PTR_GET_DEFAULT(totalAgents_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setTotalAgents(int64_t totalAgents) { DARABONBA_PTR_SET_VALUE(totalAgents_, totalAgents) };


    // waitingCalls Field Functions 
    bool hasWaitingCalls() const { return this->waitingCalls_ != nullptr;};
    void deleteWaitingCalls() { this->waitingCalls_ = nullptr;};
    inline int64_t waitingCalls() const { DARABONBA_PTR_GET_DEFAULT(waitingCalls_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setWaitingCalls(int64_t waitingCalls) { DARABONBA_PTR_SET_VALUE(waitingCalls_, waitingCalls) };


    // workingAgents Field Functions 
    bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
    void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
    inline int64_t workingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
    inline ListRealtimeSkillGroupStatesResponseBodyDataList& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


  protected:
    std::shared_ptr<vector<Models::ListRealtimeSkillGroupStatesResponseBodyDataListBreakCodeDetailList>> breakCodeDetailList_ = nullptr;
    std::shared_ptr<int64_t> breakingAgents_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> loggedInAgents_ = nullptr;
    std::shared_ptr<int64_t> longestWaitingTime_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioReadyAgents_ = nullptr;
    std::shared_ptr<int64_t> readyAgents_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<int64_t> talkingAgents_ = nullptr;
    std::shared_ptr<int64_t> totalAgents_ = nullptr;
    std::shared_ptr<int64_t> waitingCalls_ = nullptr;
    std::shared_ptr<int64_t> workingAgents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
