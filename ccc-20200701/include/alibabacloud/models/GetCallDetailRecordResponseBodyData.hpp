// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataAgentEvents.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataAnalyticsReport.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataCustomerEvents.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataIvrEvents.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataQueueEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentEvents, agentEvents_);
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(AgentNames, agentNames_);
      DARABONBA_PTR_TO_JSON(AnalyticsReport, analyticsReport_);
      DARABONBA_PTR_TO_JSON(AnalyticsReportReady, analyticsReportReady_);
      DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalleeLocation, calleeLocation_);
      DARABONBA_PTR_TO_JSON(CallerLocation, callerLocation_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(CustomerEvents, customerEvents_);
      DARABONBA_PTR_TO_JSON(EarlyMediaState, earlyMediaState_);
      DARABONBA_PTR_TO_JSON(EstablishedTime, establishedTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IvrEvents, ivrEvents_);
      DARABONBA_PTR_TO_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
      DARABONBA_PTR_TO_JSON(QueueEvents, queueEvents_);
      DARABONBA_PTR_TO_JSON(RecordingReady, recordingReady_);
      DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(Satisfaction, satisfaction_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
      DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentEvents, agentEvents_);
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(AgentNames, agentNames_);
      DARABONBA_PTR_FROM_JSON(AnalyticsReport, analyticsReport_);
      DARABONBA_PTR_FROM_JSON(AnalyticsReportReady, analyticsReportReady_);
      DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalleeLocation, calleeLocation_);
      DARABONBA_PTR_FROM_JSON(CallerLocation, callerLocation_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(CustomerEvents, customerEvents_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaState, earlyMediaState_);
      DARABONBA_PTR_FROM_JSON(EstablishedTime, establishedTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IvrEvents, ivrEvents_);
      DARABONBA_PTR_FROM_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
      DARABONBA_PTR_FROM_JSON(QueueEvents, queueEvents_);
      DARABONBA_PTR_FROM_JSON(RecordingReady, recordingReady_);
      DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(Satisfaction, satisfaction_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
      DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetCallDetailRecordResponseBodyData() = default ;
    GetCallDetailRecordResponseBodyData(const GetCallDetailRecordResponseBodyData &) = default ;
    GetCallDetailRecordResponseBodyData(GetCallDetailRecordResponseBodyData &&) = default ;
    GetCallDetailRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyData() = default ;
    GetCallDetailRecordResponseBodyData& operator=(const GetCallDetailRecordResponseBodyData &) = default ;
    GetCallDetailRecordResponseBodyData& operator=(GetCallDetailRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentEvents_ != nullptr
        && this->agentIds_ != nullptr && this->agentNames_ != nullptr && this->analyticsReport_ != nullptr && this->analyticsReportReady_ != nullptr && this->callDuration_ != nullptr
        && this->calledNumber_ != nullptr && this->calleeLocation_ != nullptr && this->callerLocation_ != nullptr && this->callingNumber_ != nullptr && this->contactDisposition_ != nullptr
        && this->contactId_ != nullptr && this->contactType_ != nullptr && this->customerEvents_ != nullptr && this->earlyMediaState_ != nullptr && this->establishedTime_ != nullptr
        && this->instanceId_ != nullptr && this->ivrEvents_ != nullptr && this->outsideNumberReleaseReason_ != nullptr && this->queueEvents_ != nullptr && this->recordingReady_ != nullptr
        && this->releaseInitiator_ != nullptr && this->releaseReason_ != nullptr && this->releaseTime_ != nullptr && this->satisfaction_ != nullptr && this->satisfactionSurveyChannel_ != nullptr
        && this->satisfactionSurveyOffered_ != nullptr && this->skillGroupIds_ != nullptr && this->skillGroupNames_ != nullptr && this->startTime_ != nullptr; };
    // agentEvents Field Functions 
    bool hasAgentEvents() const { return this->agentEvents_ != nullptr;};
    void deleteAgentEvents() { this->agentEvents_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataAgentEvents> & agentEvents() const { DARABONBA_PTR_GET_CONST(agentEvents_, vector<Models::GetCallDetailRecordResponseBodyDataAgentEvents>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataAgentEvents> agentEvents() { DARABONBA_PTR_GET(agentEvents_, vector<Models::GetCallDetailRecordResponseBodyDataAgentEvents>) };
    inline GetCallDetailRecordResponseBodyData& setAgentEvents(const vector<Models::GetCallDetailRecordResponseBodyDataAgentEvents> & agentEvents) { DARABONBA_PTR_SET_VALUE(agentEvents_, agentEvents) };
    inline GetCallDetailRecordResponseBodyData& setAgentEvents(vector<Models::GetCallDetailRecordResponseBodyDataAgentEvents> && agentEvents) { DARABONBA_PTR_SET_RVALUE(agentEvents_, agentEvents) };


    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline string agentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
    inline GetCallDetailRecordResponseBodyData& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


    // agentNames Field Functions 
    bool hasAgentNames() const { return this->agentNames_ != nullptr;};
    void deleteAgentNames() { this->agentNames_ = nullptr;};
    inline string agentNames() const { DARABONBA_PTR_GET_DEFAULT(agentNames_, "") };
    inline GetCallDetailRecordResponseBodyData& setAgentNames(string agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };


    // analyticsReport Field Functions 
    bool hasAnalyticsReport() const { return this->analyticsReport_ != nullptr;};
    void deleteAnalyticsReport() { this->analyticsReport_ = nullptr;};
    inline const Models::GetCallDetailRecordResponseBodyDataAnalyticsReport & analyticsReport() const { DARABONBA_PTR_GET_CONST(analyticsReport_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReport) };
    inline Models::GetCallDetailRecordResponseBodyDataAnalyticsReport analyticsReport() { DARABONBA_PTR_GET(analyticsReport_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReport) };
    inline GetCallDetailRecordResponseBodyData& setAnalyticsReport(const Models::GetCallDetailRecordResponseBodyDataAnalyticsReport & analyticsReport) { DARABONBA_PTR_SET_VALUE(analyticsReport_, analyticsReport) };
    inline GetCallDetailRecordResponseBodyData& setAnalyticsReport(Models::GetCallDetailRecordResponseBodyDataAnalyticsReport && analyticsReport) { DARABONBA_PTR_SET_RVALUE(analyticsReport_, analyticsReport) };


    // analyticsReportReady Field Functions 
    bool hasAnalyticsReportReady() const { return this->analyticsReportReady_ != nullptr;};
    void deleteAnalyticsReportReady() { this->analyticsReportReady_ = nullptr;};
    inline bool analyticsReportReady() const { DARABONBA_PTR_GET_DEFAULT(analyticsReportReady_, false) };
    inline GetCallDetailRecordResponseBodyData& setAnalyticsReportReady(bool analyticsReportReady) { DARABONBA_PTR_SET_VALUE(analyticsReportReady_, analyticsReportReady) };


    // callDuration Field Functions 
    bool hasCallDuration() const { return this->callDuration_ != nullptr;};
    void deleteCallDuration() { this->callDuration_ = nullptr;};
    inline int64_t callDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, 0L) };
    inline GetCallDetailRecordResponseBodyData& setCallDuration(int64_t callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline GetCallDetailRecordResponseBodyData& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calleeLocation Field Functions 
    bool hasCalleeLocation() const { return this->calleeLocation_ != nullptr;};
    void deleteCalleeLocation() { this->calleeLocation_ = nullptr;};
    inline string calleeLocation() const { DARABONBA_PTR_GET_DEFAULT(calleeLocation_, "") };
    inline GetCallDetailRecordResponseBodyData& setCalleeLocation(string calleeLocation) { DARABONBA_PTR_SET_VALUE(calleeLocation_, calleeLocation) };


    // callerLocation Field Functions 
    bool hasCallerLocation() const { return this->callerLocation_ != nullptr;};
    void deleteCallerLocation() { this->callerLocation_ = nullptr;};
    inline string callerLocation() const { DARABONBA_PTR_GET_DEFAULT(callerLocation_, "") };
    inline GetCallDetailRecordResponseBodyData& setCallerLocation(string callerLocation) { DARABONBA_PTR_SET_VALUE(callerLocation_, callerLocation) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline GetCallDetailRecordResponseBodyData& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // contactDisposition Field Functions 
    bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
    void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
    inline string contactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
    inline GetCallDetailRecordResponseBodyData& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline GetCallDetailRecordResponseBodyData& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline GetCallDetailRecordResponseBodyData& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // customerEvents Field Functions 
    bool hasCustomerEvents() const { return this->customerEvents_ != nullptr;};
    void deleteCustomerEvents() { this->customerEvents_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataCustomerEvents> & customerEvents() const { DARABONBA_PTR_GET_CONST(customerEvents_, vector<Models::GetCallDetailRecordResponseBodyDataCustomerEvents>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataCustomerEvents> customerEvents() { DARABONBA_PTR_GET(customerEvents_, vector<Models::GetCallDetailRecordResponseBodyDataCustomerEvents>) };
    inline GetCallDetailRecordResponseBodyData& setCustomerEvents(const vector<Models::GetCallDetailRecordResponseBodyDataCustomerEvents> & customerEvents) { DARABONBA_PTR_SET_VALUE(customerEvents_, customerEvents) };
    inline GetCallDetailRecordResponseBodyData& setCustomerEvents(vector<Models::GetCallDetailRecordResponseBodyDataCustomerEvents> && customerEvents) { DARABONBA_PTR_SET_RVALUE(customerEvents_, customerEvents) };


    // earlyMediaState Field Functions 
    bool hasEarlyMediaState() const { return this->earlyMediaState_ != nullptr;};
    void deleteEarlyMediaState() { this->earlyMediaState_ = nullptr;};
    inline string earlyMediaState() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaState_, "") };
    inline GetCallDetailRecordResponseBodyData& setEarlyMediaState(string earlyMediaState) { DARABONBA_PTR_SET_VALUE(earlyMediaState_, earlyMediaState) };


    // establishedTime Field Functions 
    bool hasEstablishedTime() const { return this->establishedTime_ != nullptr;};
    void deleteEstablishedTime() { this->establishedTime_ = nullptr;};
    inline int64_t establishedTime() const { DARABONBA_PTR_GET_DEFAULT(establishedTime_, 0L) };
    inline GetCallDetailRecordResponseBodyData& setEstablishedTime(int64_t establishedTime) { DARABONBA_PTR_SET_VALUE(establishedTime_, establishedTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCallDetailRecordResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ivrEvents Field Functions 
    bool hasIvrEvents() const { return this->ivrEvents_ != nullptr;};
    void deleteIvrEvents() { this->ivrEvents_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataIvrEvents> & ivrEvents() const { DARABONBA_PTR_GET_CONST(ivrEvents_, vector<Models::GetCallDetailRecordResponseBodyDataIvrEvents>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataIvrEvents> ivrEvents() { DARABONBA_PTR_GET(ivrEvents_, vector<Models::GetCallDetailRecordResponseBodyDataIvrEvents>) };
    inline GetCallDetailRecordResponseBodyData& setIvrEvents(const vector<Models::GetCallDetailRecordResponseBodyDataIvrEvents> & ivrEvents) { DARABONBA_PTR_SET_VALUE(ivrEvents_, ivrEvents) };
    inline GetCallDetailRecordResponseBodyData& setIvrEvents(vector<Models::GetCallDetailRecordResponseBodyDataIvrEvents> && ivrEvents) { DARABONBA_PTR_SET_RVALUE(ivrEvents_, ivrEvents) };


    // outsideNumberReleaseReason Field Functions 
    bool hasOutsideNumberReleaseReason() const { return this->outsideNumberReleaseReason_ != nullptr;};
    void deleteOutsideNumberReleaseReason() { this->outsideNumberReleaseReason_ = nullptr;};
    inline string outsideNumberReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(outsideNumberReleaseReason_, "") };
    inline GetCallDetailRecordResponseBodyData& setOutsideNumberReleaseReason(string outsideNumberReleaseReason) { DARABONBA_PTR_SET_VALUE(outsideNumberReleaseReason_, outsideNumberReleaseReason) };


    // queueEvents Field Functions 
    bool hasQueueEvents() const { return this->queueEvents_ != nullptr;};
    void deleteQueueEvents() { this->queueEvents_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataQueueEvents> & queueEvents() const { DARABONBA_PTR_GET_CONST(queueEvents_, vector<Models::GetCallDetailRecordResponseBodyDataQueueEvents>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataQueueEvents> queueEvents() { DARABONBA_PTR_GET(queueEvents_, vector<Models::GetCallDetailRecordResponseBodyDataQueueEvents>) };
    inline GetCallDetailRecordResponseBodyData& setQueueEvents(const vector<Models::GetCallDetailRecordResponseBodyDataQueueEvents> & queueEvents) { DARABONBA_PTR_SET_VALUE(queueEvents_, queueEvents) };
    inline GetCallDetailRecordResponseBodyData& setQueueEvents(vector<Models::GetCallDetailRecordResponseBodyDataQueueEvents> && queueEvents) { DARABONBA_PTR_SET_RVALUE(queueEvents_, queueEvents) };


    // recordingReady Field Functions 
    bool hasRecordingReady() const { return this->recordingReady_ != nullptr;};
    void deleteRecordingReady() { this->recordingReady_ = nullptr;};
    inline bool recordingReady() const { DARABONBA_PTR_GET_DEFAULT(recordingReady_, false) };
    inline GetCallDetailRecordResponseBodyData& setRecordingReady(bool recordingReady) { DARABONBA_PTR_SET_VALUE(recordingReady_, recordingReady) };


    // releaseInitiator Field Functions 
    bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
    void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
    inline string releaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
    inline GetCallDetailRecordResponseBodyData& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


    // releaseReason Field Functions 
    bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
    void deleteReleaseReason() { this->releaseReason_ = nullptr;};
    inline string releaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
    inline GetCallDetailRecordResponseBodyData& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline GetCallDetailRecordResponseBodyData& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // satisfaction Field Functions 
    bool hasSatisfaction() const { return this->satisfaction_ != nullptr;};
    void deleteSatisfaction() { this->satisfaction_ = nullptr;};
    inline int32_t satisfaction() const { DARABONBA_PTR_GET_DEFAULT(satisfaction_, 0) };
    inline GetCallDetailRecordResponseBodyData& setSatisfaction(int32_t satisfaction) { DARABONBA_PTR_SET_VALUE(satisfaction_, satisfaction) };


    // satisfactionSurveyChannel Field Functions 
    bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
    void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
    inline string satisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
    inline GetCallDetailRecordResponseBodyData& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


    // satisfactionSurveyOffered Field Functions 
    bool hasSatisfactionSurveyOffered() const { return this->satisfactionSurveyOffered_ != nullptr;};
    void deleteSatisfactionSurveyOffered() { this->satisfactionSurveyOffered_ = nullptr;};
    inline bool satisfactionSurveyOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyOffered_, false) };
    inline GetCallDetailRecordResponseBodyData& setSatisfactionSurveyOffered(bool satisfactionSurveyOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyOffered_, satisfactionSurveyOffered) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline string skillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
    inline GetCallDetailRecordResponseBodyData& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


    // skillGroupNames Field Functions 
    bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
    void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
    inline string skillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
    inline GetCallDetailRecordResponseBodyData& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetCallDetailRecordResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataAgentEvents>> agentEvents_ = nullptr;
    std::shared_ptr<string> agentIds_ = nullptr;
    std::shared_ptr<string> agentNames_ = nullptr;
    std::shared_ptr<Models::GetCallDetailRecordResponseBodyDataAnalyticsReport> analyticsReport_ = nullptr;
    std::shared_ptr<bool> analyticsReportReady_ = nullptr;
    std::shared_ptr<int64_t> callDuration_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> calleeLocation_ = nullptr;
    std::shared_ptr<string> callerLocation_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> contactDisposition_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> contactType_ = nullptr;
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataCustomerEvents>> customerEvents_ = nullptr;
    std::shared_ptr<string> earlyMediaState_ = nullptr;
    std::shared_ptr<int64_t> establishedTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataIvrEvents>> ivrEvents_ = nullptr;
    std::shared_ptr<string> outsideNumberReleaseReason_ = nullptr;
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataQueueEvents>> queueEvents_ = nullptr;
    std::shared_ptr<bool> recordingReady_ = nullptr;
    std::shared_ptr<string> releaseInitiator_ = nullptr;
    std::shared_ptr<string> releaseReason_ = nullptr;
    std::shared_ptr<int64_t> releaseTime_ = nullptr;
    std::shared_ptr<int32_t> satisfaction_ = nullptr;
    std::shared_ptr<string> satisfactionSurveyChannel_ = nullptr;
    std::shared_ptr<bool> satisfactionSurveyOffered_ = nullptr;
    std::shared_ptr<string> skillGroupIds_ = nullptr;
    std::shared_ptr<string> skillGroupNames_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
