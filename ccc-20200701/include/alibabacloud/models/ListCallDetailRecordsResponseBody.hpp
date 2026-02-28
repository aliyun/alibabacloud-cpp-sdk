// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCallDetailRecordsResponseBody() = default ;
    ListCallDetailRecordsResponseBody(const ListCallDetailRecordsResponseBody &) = default ;
    ListCallDetailRecordsResponseBody(ListCallDetailRecordsResponseBody &&) = default ;
    ListCallDetailRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsResponseBody() = default ;
    ListCallDetailRecordsResponseBody& operator=(const ListCallDetailRecordsResponseBody &) = default ;
    ListCallDetailRecordsResponseBody& operator=(ListCallDetailRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
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
        friend void from_json(const Darabonba::Json& j, List& obj) { 
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
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->additionalBroker_ == nullptr
        && this->agentIds_ == nullptr && this->agentNames_ == nullptr && this->broker_ == nullptr && this->callDuration_ == nullptr && this->callIds_ == nullptr
        && this->calledNumber_ == nullptr && this->calleeLocation_ == nullptr && this->callerLocation_ == nullptr && this->callingNumber_ == nullptr && this->contactDisposition_ == nullptr
        && this->contactId_ == nullptr && this->contactType_ == nullptr && this->dialingTime_ == nullptr && this->earlyMediaState_ == nullptr && this->establishedTime_ == nullptr
        && this->heldTime_ == nullptr && this->instanceId_ == nullptr && this->ivrTime_ == nullptr && this->queueTime_ == nullptr && this->recordingDuration_ == nullptr
        && this->recordingReady_ == nullptr && this->releaseInitiator_ == nullptr && this->releaseReason_ == nullptr && this->releaseTime_ == nullptr && this->ringTime_ == nullptr
        && this->satisfactionDescription_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionSurveyChannel_ == nullptr && this->satisfactionSurveyOffered_ == nullptr && this->skillGroupIds_ == nullptr
        && this->skillGroupNames_ == nullptr && this->startTime_ == nullptr && this->talkTime_ == nullptr && this->waitTime_ == nullptr; };
        // additionalBroker Field Functions 
        bool hasAdditionalBroker() const { return this->additionalBroker_ != nullptr;};
        void deleteAdditionalBroker() { this->additionalBroker_ = nullptr;};
        inline string getAdditionalBroker() const { DARABONBA_PTR_GET_DEFAULT(additionalBroker_, "") };
        inline List& setAdditionalBroker(string additionalBroker) { DARABONBA_PTR_SET_VALUE(additionalBroker_, additionalBroker) };


        // agentIds Field Functions 
        bool hasAgentIds() const { return this->agentIds_ != nullptr;};
        void deleteAgentIds() { this->agentIds_ = nullptr;};
        inline string getAgentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
        inline List& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


        // agentNames Field Functions 
        bool hasAgentNames() const { return this->agentNames_ != nullptr;};
        void deleteAgentNames() { this->agentNames_ = nullptr;};
        inline string getAgentNames() const { DARABONBA_PTR_GET_DEFAULT(agentNames_, "") };
        inline List& setAgentNames(string agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };


        // broker Field Functions 
        bool hasBroker() const { return this->broker_ != nullptr;};
        void deleteBroker() { this->broker_ = nullptr;};
        inline string getBroker() const { DARABONBA_PTR_GET_DEFAULT(broker_, "") };
        inline List& setBroker(string broker) { DARABONBA_PTR_SET_VALUE(broker_, broker) };


        // callDuration Field Functions 
        bool hasCallDuration() const { return this->callDuration_ != nullptr;};
        void deleteCallDuration() { this->callDuration_ = nullptr;};
        inline string getCallDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, "") };
        inline List& setCallDuration(string callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


        // callIds Field Functions 
        bool hasCallIds() const { return this->callIds_ != nullptr;};
        void deleteCallIds() { this->callIds_ = nullptr;};
        inline string getCallIds() const { DARABONBA_PTR_GET_DEFAULT(callIds_, "") };
        inline List& setCallIds(string callIds) { DARABONBA_PTR_SET_VALUE(callIds_, callIds) };


        // calledNumber Field Functions 
        bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
        void deleteCalledNumber() { this->calledNumber_ = nullptr;};
        inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
        inline List& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


        // calleeLocation Field Functions 
        bool hasCalleeLocation() const { return this->calleeLocation_ != nullptr;};
        void deleteCalleeLocation() { this->calleeLocation_ = nullptr;};
        inline string getCalleeLocation() const { DARABONBA_PTR_GET_DEFAULT(calleeLocation_, "") };
        inline List& setCalleeLocation(string calleeLocation) { DARABONBA_PTR_SET_VALUE(calleeLocation_, calleeLocation) };


        // callerLocation Field Functions 
        bool hasCallerLocation() const { return this->callerLocation_ != nullptr;};
        void deleteCallerLocation() { this->callerLocation_ = nullptr;};
        inline string getCallerLocation() const { DARABONBA_PTR_GET_DEFAULT(callerLocation_, "") };
        inline List& setCallerLocation(string callerLocation) { DARABONBA_PTR_SET_VALUE(callerLocation_, callerLocation) };


        // callingNumber Field Functions 
        bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
        void deleteCallingNumber() { this->callingNumber_ = nullptr;};
        inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
        inline List& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


        // contactDisposition Field Functions 
        bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
        void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
        inline string getContactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
        inline List& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
        inline List& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // contactType Field Functions 
        bool hasContactType() const { return this->contactType_ != nullptr;};
        void deleteContactType() { this->contactType_ = nullptr;};
        inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
        inline List& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


        // dialingTime Field Functions 
        bool hasDialingTime() const { return this->dialingTime_ != nullptr;};
        void deleteDialingTime() { this->dialingTime_ = nullptr;};
        inline int64_t getDialingTime() const { DARABONBA_PTR_GET_DEFAULT(dialingTime_, 0L) };
        inline List& setDialingTime(int64_t dialingTime) { DARABONBA_PTR_SET_VALUE(dialingTime_, dialingTime) };


        // earlyMediaState Field Functions 
        bool hasEarlyMediaState() const { return this->earlyMediaState_ != nullptr;};
        void deleteEarlyMediaState() { this->earlyMediaState_ = nullptr;};
        inline string getEarlyMediaState() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaState_, "") };
        inline List& setEarlyMediaState(string earlyMediaState) { DARABONBA_PTR_SET_VALUE(earlyMediaState_, earlyMediaState) };


        // establishedTime Field Functions 
        bool hasEstablishedTime() const { return this->establishedTime_ != nullptr;};
        void deleteEstablishedTime() { this->establishedTime_ = nullptr;};
        inline int64_t getEstablishedTime() const { DARABONBA_PTR_GET_DEFAULT(establishedTime_, 0L) };
        inline List& setEstablishedTime(int64_t establishedTime) { DARABONBA_PTR_SET_VALUE(establishedTime_, establishedTime) };


        // heldTime Field Functions 
        bool hasHeldTime() const { return this->heldTime_ != nullptr;};
        void deleteHeldTime() { this->heldTime_ = nullptr;};
        inline int64_t getHeldTime() const { DARABONBA_PTR_GET_DEFAULT(heldTime_, 0L) };
        inline List& setHeldTime(int64_t heldTime) { DARABONBA_PTR_SET_VALUE(heldTime_, heldTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ivrTime Field Functions 
        bool hasIvrTime() const { return this->ivrTime_ != nullptr;};
        void deleteIvrTime() { this->ivrTime_ = nullptr;};
        inline int64_t getIvrTime() const { DARABONBA_PTR_GET_DEFAULT(ivrTime_, 0L) };
        inline List& setIvrTime(int64_t ivrTime) { DARABONBA_PTR_SET_VALUE(ivrTime_, ivrTime) };


        // queueTime Field Functions 
        bool hasQueueTime() const { return this->queueTime_ != nullptr;};
        void deleteQueueTime() { this->queueTime_ = nullptr;};
        inline int64_t getQueueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
        inline List& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


        // recordingDuration Field Functions 
        bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
        void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
        inline int64_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0L) };
        inline List& setRecordingDuration(int64_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


        // recordingReady Field Functions 
        bool hasRecordingReady() const { return this->recordingReady_ != nullptr;};
        void deleteRecordingReady() { this->recordingReady_ = nullptr;};
        inline bool getRecordingReady() const { DARABONBA_PTR_GET_DEFAULT(recordingReady_, false) };
        inline List& setRecordingReady(bool recordingReady) { DARABONBA_PTR_SET_VALUE(recordingReady_, recordingReady) };


        // releaseInitiator Field Functions 
        bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
        void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
        inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
        inline List& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


        // releaseReason Field Functions 
        bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
        void deleteReleaseReason() { this->releaseReason_ = nullptr;};
        inline string getReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
        inline List& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
        inline List& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // ringTime Field Functions 
        bool hasRingTime() const { return this->ringTime_ != nullptr;};
        void deleteRingTime() { this->ringTime_ = nullptr;};
        inline int64_t getRingTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
        inline List& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


        // satisfactionDescription Field Functions 
        bool hasSatisfactionDescription() const { return this->satisfactionDescription_ != nullptr;};
        void deleteSatisfactionDescription() { this->satisfactionDescription_ = nullptr;};
        inline string getSatisfactionDescription() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescription_, "") };
        inline List& setSatisfactionDescription(string satisfactionDescription) { DARABONBA_PTR_SET_VALUE(satisfactionDescription_, satisfactionDescription) };


        // satisfactionIndex Field Functions 
        bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
        void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
        inline int32_t getSatisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0) };
        inline List& setSatisfactionIndex(int32_t satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


        // satisfactionSurveyChannel Field Functions 
        bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
        void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
        inline string getSatisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
        inline List& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


        // satisfactionSurveyOffered Field Functions 
        bool hasSatisfactionSurveyOffered() const { return this->satisfactionSurveyOffered_ != nullptr;};
        void deleteSatisfactionSurveyOffered() { this->satisfactionSurveyOffered_ = nullptr;};
        inline bool getSatisfactionSurveyOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyOffered_, false) };
        inline List& setSatisfactionSurveyOffered(bool satisfactionSurveyOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyOffered_, satisfactionSurveyOffered) };


        // skillGroupIds Field Functions 
        bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
        void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
        inline string getSkillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
        inline List& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


        // skillGroupNames Field Functions 
        bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
        void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
        inline string getSkillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
        inline List& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // talkTime Field Functions 
        bool hasTalkTime() const { return this->talkTime_ != nullptr;};
        void deleteTalkTime() { this->talkTime_ = nullptr;};
        inline int64_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
        inline List& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


        // waitTime Field Functions 
        bool hasWaitTime() const { return this->waitTime_ != nullptr;};
        void deleteWaitTime() { this->waitTime_ = nullptr;};
        inline int64_t getWaitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0L) };
        inline List& setWaitTime(int64_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


      protected:
        shared_ptr<string> additionalBroker_ {};
        shared_ptr<string> agentIds_ {};
        shared_ptr<string> agentNames_ {};
        shared_ptr<string> broker_ {};
        shared_ptr<string> callDuration_ {};
        shared_ptr<string> callIds_ {};
        shared_ptr<string> calledNumber_ {};
        shared_ptr<string> calleeLocation_ {};
        shared_ptr<string> callerLocation_ {};
        shared_ptr<string> callingNumber_ {};
        shared_ptr<string> contactDisposition_ {};
        shared_ptr<string> contactId_ {};
        shared_ptr<string> contactType_ {};
        shared_ptr<int64_t> dialingTime_ {};
        shared_ptr<string> earlyMediaState_ {};
        shared_ptr<int64_t> establishedTime_ {};
        shared_ptr<int64_t> heldTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> ivrTime_ {};
        shared_ptr<int64_t> queueTime_ {};
        shared_ptr<int64_t> recordingDuration_ {};
        shared_ptr<bool> recordingReady_ {};
        shared_ptr<string> releaseInitiator_ {};
        shared_ptr<string> releaseReason_ {};
        shared_ptr<int64_t> releaseTime_ {};
        shared_ptr<int64_t> ringTime_ {};
        shared_ptr<string> satisfactionDescription_ {};
        shared_ptr<int32_t> satisfactionIndex_ {};
        shared_ptr<string> satisfactionSurveyChannel_ {};
        shared_ptr<bool> satisfactionSurveyOffered_ {};
        shared_ptr<string> skillGroupIds_ {};
        shared_ptr<string> skillGroupNames_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<int64_t> talkTime_ {};
        shared_ptr<int64_t> waitTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCallDetailRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCallDetailRecordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCallDetailRecordsResponseBody::Data) };
    inline ListCallDetailRecordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCallDetailRecordsResponseBody::Data) };
    inline ListCallDetailRecordsResponseBody& setData(const ListCallDetailRecordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCallDetailRecordsResponseBody& setData(ListCallDetailRecordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCallDetailRecordsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCallDetailRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCallDetailRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCallDetailRecordsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
