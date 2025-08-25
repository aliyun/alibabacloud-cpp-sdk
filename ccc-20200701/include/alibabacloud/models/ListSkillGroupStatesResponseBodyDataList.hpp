// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPSTATESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPSTATESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillGroupStatesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupStatesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AverageWaitingTime, averageWaitingTime_);
      DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_TO_JSON(InboundTalkingAgents, inboundTalkingAgents_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_TO_JSON(LongestCall, longestCall_);
      DARABONBA_PTR_TO_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_TO_JSON(OutboundTalkingAgents, outboundTalkingAgents_);
      DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_TO_JSON(WaitingCalls, waitingCalls_);
      DARABONBA_PTR_TO_JSON(WaitingCallsLevel10, waitingCallsLevel10_);
      DARABONBA_PTR_TO_JSON(WaitingCallsLevel20, waitingCallsLevel20_);
      DARABONBA_PTR_TO_JSON(WaitingCallsLevel30, waitingCallsLevel30_);
      DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupStatesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageWaitingTime, averageWaitingTime_);
      DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
      DARABONBA_PTR_FROM_JSON(InboundTalkingAgents, inboundTalkingAgents_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
      DARABONBA_PTR_FROM_JSON(LongestCall, longestCall_);
      DARABONBA_PTR_FROM_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
      DARABONBA_PTR_FROM_JSON(OutboundTalkingAgents, outboundTalkingAgents_);
      DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
      DARABONBA_PTR_FROM_JSON(WaitingCalls, waitingCalls_);
      DARABONBA_PTR_FROM_JSON(WaitingCallsLevel10, waitingCallsLevel10_);
      DARABONBA_PTR_FROM_JSON(WaitingCallsLevel20, waitingCallsLevel20_);
      DARABONBA_PTR_FROM_JSON(WaitingCallsLevel30, waitingCallsLevel30_);
      DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
    };
    ListSkillGroupStatesResponseBodyDataList() = default ;
    ListSkillGroupStatesResponseBodyDataList(const ListSkillGroupStatesResponseBodyDataList &) = default ;
    ListSkillGroupStatesResponseBodyDataList(ListSkillGroupStatesResponseBodyDataList &&) = default ;
    ListSkillGroupStatesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupStatesResponseBodyDataList() = default ;
    ListSkillGroupStatesResponseBodyDataList& operator=(const ListSkillGroupStatesResponseBodyDataList &) = default ;
    ListSkillGroupStatesResponseBodyDataList& operator=(ListSkillGroupStatesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageWaitingTime_ != nullptr
        && this->breakingAgents_ != nullptr && this->inboundTalkingAgents_ != nullptr && this->instanceId_ != nullptr && this->loggedInAgents_ != nullptr && this->longestCall_ != nullptr
        && this->outboundScenarioReadyAgents_ != nullptr && this->outboundTalkingAgents_ != nullptr && this->readyAgents_ != nullptr && this->skillGroupId_ != nullptr && this->skillGroupName_ != nullptr
        && this->talkingAgents_ != nullptr && this->waitingCalls_ != nullptr && this->waitingCallsLevel10_ != nullptr && this->waitingCallsLevel20_ != nullptr && this->waitingCallsLevel30_ != nullptr
        && this->workingAgents_ != nullptr; };
    // averageWaitingTime Field Functions 
    bool hasAverageWaitingTime() const { return this->averageWaitingTime_ != nullptr;};
    void deleteAverageWaitingTime() { this->averageWaitingTime_ = nullptr;};
    inline int64_t averageWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(averageWaitingTime_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setAverageWaitingTime(int64_t averageWaitingTime) { DARABONBA_PTR_SET_VALUE(averageWaitingTime_, averageWaitingTime) };


    // breakingAgents Field Functions 
    bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
    void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
    inline int64_t breakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


    // inboundTalkingAgents Field Functions 
    bool hasInboundTalkingAgents() const { return this->inboundTalkingAgents_ != nullptr;};
    void deleteInboundTalkingAgents() { this->inboundTalkingAgents_ = nullptr;};
    inline int64_t inboundTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(inboundTalkingAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setInboundTalkingAgents(int64_t inboundTalkingAgents) { DARABONBA_PTR_SET_VALUE(inboundTalkingAgents_, inboundTalkingAgents) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSkillGroupStatesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loggedInAgents Field Functions 
    bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
    void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
    inline int64_t loggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


    // longestCall Field Functions 
    bool hasLongestCall() const { return this->longestCall_ != nullptr;};
    void deleteLongestCall() { this->longestCall_ = nullptr;};
    inline int64_t longestCall() const { DARABONBA_PTR_GET_DEFAULT(longestCall_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setLongestCall(int64_t longestCall) { DARABONBA_PTR_SET_VALUE(longestCall_, longestCall) };


    // outboundScenarioReadyAgents Field Functions 
    bool hasOutboundScenarioReadyAgents() const { return this->outboundScenarioReadyAgents_ != nullptr;};
    void deleteOutboundScenarioReadyAgents() { this->outboundScenarioReadyAgents_ = nullptr;};
    inline int64_t outboundScenarioReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioReadyAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setOutboundScenarioReadyAgents(int64_t outboundScenarioReadyAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioReadyAgents_, outboundScenarioReadyAgents) };


    // outboundTalkingAgents Field Functions 
    bool hasOutboundTalkingAgents() const { return this->outboundTalkingAgents_ != nullptr;};
    void deleteOutboundTalkingAgents() { this->outboundTalkingAgents_ = nullptr;};
    inline int64_t outboundTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundTalkingAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setOutboundTalkingAgents(int64_t outboundTalkingAgents) { DARABONBA_PTR_SET_VALUE(outboundTalkingAgents_, outboundTalkingAgents) };


    // readyAgents Field Functions 
    bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
    void deleteReadyAgents() { this->readyAgents_ = nullptr;};
    inline int64_t readyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListSkillGroupStatesResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListSkillGroupStatesResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // talkingAgents Field Functions 
    bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
    void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
    inline int64_t talkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


    // waitingCalls Field Functions 
    bool hasWaitingCalls() const { return this->waitingCalls_ != nullptr;};
    void deleteWaitingCalls() { this->waitingCalls_ = nullptr;};
    inline int64_t waitingCalls() const { DARABONBA_PTR_GET_DEFAULT(waitingCalls_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setWaitingCalls(int64_t waitingCalls) { DARABONBA_PTR_SET_VALUE(waitingCalls_, waitingCalls) };


    // waitingCallsLevel10 Field Functions 
    bool hasWaitingCallsLevel10() const { return this->waitingCallsLevel10_ != nullptr;};
    void deleteWaitingCallsLevel10() { this->waitingCallsLevel10_ = nullptr;};
    inline int64_t waitingCallsLevel10() const { DARABONBA_PTR_GET_DEFAULT(waitingCallsLevel10_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setWaitingCallsLevel10(int64_t waitingCallsLevel10) { DARABONBA_PTR_SET_VALUE(waitingCallsLevel10_, waitingCallsLevel10) };


    // waitingCallsLevel20 Field Functions 
    bool hasWaitingCallsLevel20() const { return this->waitingCallsLevel20_ != nullptr;};
    void deleteWaitingCallsLevel20() { this->waitingCallsLevel20_ = nullptr;};
    inline int64_t waitingCallsLevel20() const { DARABONBA_PTR_GET_DEFAULT(waitingCallsLevel20_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setWaitingCallsLevel20(int64_t waitingCallsLevel20) { DARABONBA_PTR_SET_VALUE(waitingCallsLevel20_, waitingCallsLevel20) };


    // waitingCallsLevel30 Field Functions 
    bool hasWaitingCallsLevel30() const { return this->waitingCallsLevel30_ != nullptr;};
    void deleteWaitingCallsLevel30() { this->waitingCallsLevel30_ = nullptr;};
    inline int64_t waitingCallsLevel30() const { DARABONBA_PTR_GET_DEFAULT(waitingCallsLevel30_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setWaitingCallsLevel30(int64_t waitingCallsLevel30) { DARABONBA_PTR_SET_VALUE(waitingCallsLevel30_, waitingCallsLevel30) };


    // workingAgents Field Functions 
    bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
    void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
    inline int64_t workingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
    inline ListSkillGroupStatesResponseBodyDataList& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


  protected:
    std::shared_ptr<int64_t> averageWaitingTime_ = nullptr;
    std::shared_ptr<int64_t> breakingAgents_ = nullptr;
    std::shared_ptr<int64_t> inboundTalkingAgents_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> loggedInAgents_ = nullptr;
    std::shared_ptr<int64_t> longestCall_ = nullptr;
    std::shared_ptr<int64_t> outboundScenarioReadyAgents_ = nullptr;
    std::shared_ptr<int64_t> outboundTalkingAgents_ = nullptr;
    std::shared_ptr<int64_t> readyAgents_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<int64_t> talkingAgents_ = nullptr;
    std::shared_ptr<int64_t> waitingCalls_ = nullptr;
    std::shared_ptr<int64_t> waitingCallsLevel10_ = nullptr;
    std::shared_ptr<int64_t> waitingCallsLevel20_ = nullptr;
    std::shared_ptr<int64_t> waitingCallsLevel30_ = nullptr;
    std::shared_ptr<int64_t> workingAgents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
