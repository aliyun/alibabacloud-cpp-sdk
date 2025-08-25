// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalBroker, additionalBroker_);
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(AgentNames, agentNames_);
      DARABONBA_PTR_TO_JSON(Broker, broker_);
      DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_TO_JSON(CallIds, callIds_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalleeLocation, calleeLocation_);
      DARABONBA_PTR_TO_JSON(CallerLocation, callerLocation_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(DialingTime, dialingTime_);
      DARABONBA_PTR_TO_JSON(EarlyMediaState, earlyMediaState_);
      DARABONBA_PTR_TO_JSON(EstablishedTime, establishedTime_);
      DARABONBA_PTR_TO_JSON(HeldTime, heldTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IvrTime, ivrTime_);
      DARABONBA_PTR_TO_JSON(QueueTime, queueTime_);
      DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_TO_JSON(RecordingReady, recordingReady_);
      DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(RingTime, ringTime_);
      DARABONBA_PTR_TO_JSON(SatisfactionDescription, satisfactionDescription_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
      DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TalkTime, talkTime_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalBroker, additionalBroker_);
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(AgentNames, agentNames_);
      DARABONBA_PTR_FROM_JSON(Broker, broker_);
      DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_FROM_JSON(CallIds, callIds_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalleeLocation, calleeLocation_);
      DARABONBA_PTR_FROM_JSON(CallerLocation, callerLocation_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(DialingTime, dialingTime_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaState, earlyMediaState_);
      DARABONBA_PTR_FROM_JSON(EstablishedTime, establishedTime_);
      DARABONBA_PTR_FROM_JSON(HeldTime, heldTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IvrTime, ivrTime_);
      DARABONBA_PTR_FROM_JSON(QueueTime, queueTime_);
      DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_FROM_JSON(RecordingReady, recordingReady_);
      DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(RingTime, ringTime_);
      DARABONBA_PTR_FROM_JSON(SatisfactionDescription, satisfactionDescription_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TalkTime, talkTime_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    ListCallDetailRecordsResponseBodyDataList() = default ;
    ListCallDetailRecordsResponseBodyDataList(const ListCallDetailRecordsResponseBodyDataList &) = default ;
    ListCallDetailRecordsResponseBodyDataList(ListCallDetailRecordsResponseBodyDataList &&) = default ;
    ListCallDetailRecordsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsResponseBodyDataList() = default ;
    ListCallDetailRecordsResponseBodyDataList& operator=(const ListCallDetailRecordsResponseBodyDataList &) = default ;
    ListCallDetailRecordsResponseBodyDataList& operator=(ListCallDetailRecordsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalBroker_ != nullptr
        && this->agentIds_ != nullptr && this->agentNames_ != nullptr && this->broker_ != nullptr && this->callDuration_ != nullptr && this->callIds_ != nullptr
        && this->calledNumber_ != nullptr && this->calleeLocation_ != nullptr && this->callerLocation_ != nullptr && this->callingNumber_ != nullptr && this->contactDisposition_ != nullptr
        && this->contactId_ != nullptr && this->contactType_ != nullptr && this->dialingTime_ != nullptr && this->earlyMediaState_ != nullptr && this->establishedTime_ != nullptr
        && this->heldTime_ != nullptr && this->instanceId_ != nullptr && this->ivrTime_ != nullptr && this->queueTime_ != nullptr && this->recordingDuration_ != nullptr
        && this->recordingReady_ != nullptr && this->releaseInitiator_ != nullptr && this->releaseReason_ != nullptr && this->releaseTime_ != nullptr && this->ringTime_ != nullptr
        && this->satisfactionDescription_ != nullptr && this->satisfactionIndex_ != nullptr && this->satisfactionSurveyChannel_ != nullptr && this->satisfactionSurveyOffered_ != nullptr && this->skillGroupIds_ != nullptr
        && this->skillGroupNames_ != nullptr && this->startTime_ != nullptr && this->talkTime_ != nullptr && this->waitTime_ != nullptr; };
    // additionalBroker Field Functions 
    bool hasAdditionalBroker() const { return this->additionalBroker_ != nullptr;};
    void deleteAdditionalBroker() { this->additionalBroker_ = nullptr;};
    inline string additionalBroker() const { DARABONBA_PTR_GET_DEFAULT(additionalBroker_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setAdditionalBroker(string additionalBroker) { DARABONBA_PTR_SET_VALUE(additionalBroker_, additionalBroker) };


    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline string agentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


    // agentNames Field Functions 
    bool hasAgentNames() const { return this->agentNames_ != nullptr;};
    void deleteAgentNames() { this->agentNames_ = nullptr;};
    inline string agentNames() const { DARABONBA_PTR_GET_DEFAULT(agentNames_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setAgentNames(string agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };


    // broker Field Functions 
    bool hasBroker() const { return this->broker_ != nullptr;};
    void deleteBroker() { this->broker_ = nullptr;};
    inline string broker() const { DARABONBA_PTR_GET_DEFAULT(broker_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setBroker(string broker) { DARABONBA_PTR_SET_VALUE(broker_, broker) };


    // callDuration Field Functions 
    bool hasCallDuration() const { return this->callDuration_ != nullptr;};
    void deleteCallDuration() { this->callDuration_ = nullptr;};
    inline string callDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setCallDuration(string callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


    // callIds Field Functions 
    bool hasCallIds() const { return this->callIds_ != nullptr;};
    void deleteCallIds() { this->callIds_ = nullptr;};
    inline string callIds() const { DARABONBA_PTR_GET_DEFAULT(callIds_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setCallIds(string callIds) { DARABONBA_PTR_SET_VALUE(callIds_, callIds) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calleeLocation Field Functions 
    bool hasCalleeLocation() const { return this->calleeLocation_ != nullptr;};
    void deleteCalleeLocation() { this->calleeLocation_ = nullptr;};
    inline string calleeLocation() const { DARABONBA_PTR_GET_DEFAULT(calleeLocation_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setCalleeLocation(string calleeLocation) { DARABONBA_PTR_SET_VALUE(calleeLocation_, calleeLocation) };


    // callerLocation Field Functions 
    bool hasCallerLocation() const { return this->callerLocation_ != nullptr;};
    void deleteCallerLocation() { this->callerLocation_ = nullptr;};
    inline string callerLocation() const { DARABONBA_PTR_GET_DEFAULT(callerLocation_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setCallerLocation(string callerLocation) { DARABONBA_PTR_SET_VALUE(callerLocation_, callerLocation) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // contactDisposition Field Functions 
    bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
    void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
    inline string contactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // dialingTime Field Functions 
    bool hasDialingTime() const { return this->dialingTime_ != nullptr;};
    void deleteDialingTime() { this->dialingTime_ = nullptr;};
    inline int64_t dialingTime() const { DARABONBA_PTR_GET_DEFAULT(dialingTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setDialingTime(int64_t dialingTime) { DARABONBA_PTR_SET_VALUE(dialingTime_, dialingTime) };


    // earlyMediaState Field Functions 
    bool hasEarlyMediaState() const { return this->earlyMediaState_ != nullptr;};
    void deleteEarlyMediaState() { this->earlyMediaState_ = nullptr;};
    inline string earlyMediaState() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaState_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setEarlyMediaState(string earlyMediaState) { DARABONBA_PTR_SET_VALUE(earlyMediaState_, earlyMediaState) };


    // establishedTime Field Functions 
    bool hasEstablishedTime() const { return this->establishedTime_ != nullptr;};
    void deleteEstablishedTime() { this->establishedTime_ = nullptr;};
    inline int64_t establishedTime() const { DARABONBA_PTR_GET_DEFAULT(establishedTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setEstablishedTime(int64_t establishedTime) { DARABONBA_PTR_SET_VALUE(establishedTime_, establishedTime) };


    // heldTime Field Functions 
    bool hasHeldTime() const { return this->heldTime_ != nullptr;};
    void deleteHeldTime() { this->heldTime_ = nullptr;};
    inline int64_t heldTime() const { DARABONBA_PTR_GET_DEFAULT(heldTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setHeldTime(int64_t heldTime) { DARABONBA_PTR_SET_VALUE(heldTime_, heldTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ivrTime Field Functions 
    bool hasIvrTime() const { return this->ivrTime_ != nullptr;};
    void deleteIvrTime() { this->ivrTime_ = nullptr;};
    inline int64_t ivrTime() const { DARABONBA_PTR_GET_DEFAULT(ivrTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setIvrTime(int64_t ivrTime) { DARABONBA_PTR_SET_VALUE(ivrTime_, ivrTime) };


    // queueTime Field Functions 
    bool hasQueueTime() const { return this->queueTime_ != nullptr;};
    void deleteQueueTime() { this->queueTime_ = nullptr;};
    inline int64_t queueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int64_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setRecordingDuration(int64_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingReady Field Functions 
    bool hasRecordingReady() const { return this->recordingReady_ != nullptr;};
    void deleteRecordingReady() { this->recordingReady_ = nullptr;};
    inline bool recordingReady() const { DARABONBA_PTR_GET_DEFAULT(recordingReady_, false) };
    inline ListCallDetailRecordsResponseBodyDataList& setRecordingReady(bool recordingReady) { DARABONBA_PTR_SET_VALUE(recordingReady_, recordingReady) };


    // releaseInitiator Field Functions 
    bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
    void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
    inline string releaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


    // releaseReason Field Functions 
    bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
    void deleteReleaseReason() { this->releaseReason_ = nullptr;};
    inline string releaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // ringTime Field Functions 
    bool hasRingTime() const { return this->ringTime_ != nullptr;};
    void deleteRingTime() { this->ringTime_ = nullptr;};
    inline int64_t ringTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


    // satisfactionDescription Field Functions 
    bool hasSatisfactionDescription() const { return this->satisfactionDescription_ != nullptr;};
    void deleteSatisfactionDescription() { this->satisfactionDescription_ = nullptr;};
    inline string satisfactionDescription() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescription_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setSatisfactionDescription(string satisfactionDescription) { DARABONBA_PTR_SET_VALUE(satisfactionDescription_, satisfactionDescription) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline int32_t satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0) };
    inline ListCallDetailRecordsResponseBodyDataList& setSatisfactionIndex(int32_t satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionSurveyChannel Field Functions 
    bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
    void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
    inline string satisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


    // satisfactionSurveyOffered Field Functions 
    bool hasSatisfactionSurveyOffered() const { return this->satisfactionSurveyOffered_ != nullptr;};
    void deleteSatisfactionSurveyOffered() { this->satisfactionSurveyOffered_ = nullptr;};
    inline bool satisfactionSurveyOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyOffered_, false) };
    inline ListCallDetailRecordsResponseBodyDataList& setSatisfactionSurveyOffered(bool satisfactionSurveyOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyOffered_, satisfactionSurveyOffered) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline string skillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


    // skillGroupNames Field Functions 
    bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
    void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
    inline string skillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
    inline ListCallDetailRecordsResponseBodyDataList& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // talkTime Field Functions 
    bool hasTalkTime() const { return this->talkTime_ != nullptr;};
    void deleteTalkTime() { this->talkTime_ = nullptr;};
    inline int64_t talkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline int64_t waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0L) };
    inline ListCallDetailRecordsResponseBodyDataList& setWaitTime(int64_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    std::shared_ptr<string> additionalBroker_ = nullptr;
    std::shared_ptr<string> agentIds_ = nullptr;
    std::shared_ptr<string> agentNames_ = nullptr;
    std::shared_ptr<string> broker_ = nullptr;
    std::shared_ptr<string> callDuration_ = nullptr;
    std::shared_ptr<string> callIds_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> calleeLocation_ = nullptr;
    std::shared_ptr<string> callerLocation_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> contactDisposition_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> contactType_ = nullptr;
    std::shared_ptr<int64_t> dialingTime_ = nullptr;
    std::shared_ptr<string> earlyMediaState_ = nullptr;
    std::shared_ptr<int64_t> establishedTime_ = nullptr;
    std::shared_ptr<int64_t> heldTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ivrTime_ = nullptr;
    std::shared_ptr<int64_t> queueTime_ = nullptr;
    std::shared_ptr<int64_t> recordingDuration_ = nullptr;
    std::shared_ptr<bool> recordingReady_ = nullptr;
    std::shared_ptr<string> releaseInitiator_ = nullptr;
    std::shared_ptr<string> releaseReason_ = nullptr;
    std::shared_ptr<int64_t> releaseTime_ = nullptr;
    std::shared_ptr<int64_t> ringTime_ = nullptr;
    std::shared_ptr<string> satisfactionDescription_ = nullptr;
    std::shared_ptr<int32_t> satisfactionIndex_ = nullptr;
    std::shared_ptr<string> satisfactionSurveyChannel_ = nullptr;
    std::shared_ptr<bool> satisfactionSurveyOffered_ = nullptr;
    std::shared_ptr<string> skillGroupIds_ = nullptr;
    std::shared_ptr<string> skillGroupNames_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> talkTime_ = nullptr;
    std::shared_ptr<int64_t> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
