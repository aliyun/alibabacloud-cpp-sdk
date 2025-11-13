// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport.hpp>
#include <alibabacloud/models/ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsV2ResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsV2ResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelName, accessChannelName_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(AccessChannelUserId, accessChannelUserId_);
      DARABONBA_PTR_TO_JSON(AccessChannelUserName, accessChannelUserName_);
      DARABONBA_PTR_TO_JSON(AdditionalBroker, additionalBroker_);
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(AgentNames, agentNames_);
      DARABONBA_PTR_TO_JSON(AnalyticsReport, analyticsReport_);
      DARABONBA_PTR_TO_JSON(AnalyticsReportReady, analyticsReportReady_);
      DARABONBA_PTR_TO_JSON(Broker, broker_);
      DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_TO_JSON(CallIds, callIds_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalleeLocation, calleeLocation_);
      DARABONBA_PTR_TO_JSON(CallerLocation, callerLocation_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ClientAppName, clientAppName_);
      DARABONBA_PTR_TO_JSON(ClientIpAddress, clientIpAddress_);
      DARABONBA_PTR_TO_JSON(ClientLocation, clientLocation_);
      DARABONBA_PTR_TO_JSON(ClientUserAgent, clientUserAgent_);
      DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(DialingTime, dialingTime_);
      DARABONBA_PTR_TO_JSON(EarlyMediaState, earlyMediaState_);
      DARABONBA_PTR_TO_JSON(EarlyMediaText, earlyMediaText_);
      DARABONBA_PTR_TO_JSON(EstablishedTime, establishedTime_);
      DARABONBA_PTR_TO_JSON(FirstResponseTime, firstResponseTime_);
      DARABONBA_PTR_TO_JSON(HeldTime, heldTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IvrTime, ivrTime_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(MessagesSent, messagesSent_);
      DARABONBA_PTR_TO_JSON(MessagesSentByAgent, messagesSentByAgent_);
      DARABONBA_PTR_TO_JSON(MessagesSentByCustomer, messagesSentByCustomer_);
      DARABONBA_PTR_TO_JSON(OffSiteAgentIds, offSiteAgentIds_);
      DARABONBA_PTR_TO_JSON(OffsiteAgentDestinationNumbers, offsiteAgentDestinationNumbers_);
      DARABONBA_PTR_TO_JSON(OffsiteAgentOriginatorNumbers, offsiteAgentOriginatorNumbers_);
      DARABONBA_PTR_TO_JSON(OffsiteAgentReleaseReason, offsiteAgentReleaseReason_);
      DARABONBA_PTR_TO_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
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
      DARABONBA_PTR_TO_JSON(SummaryIndex, summaryIndex_);
      DARABONBA_PTR_TO_JSON(TalkTime, talkTime_);
      DARABONBA_PTR_TO_JSON(TransferCount, transferCount_);
      DARABONBA_PTR_TO_JSON(VoicebotDestinationNumber, voicebotDestinationNumber_);
      DARABONBA_PTR_TO_JSON(VoicebotOriginatorNumber, voicebotOriginatorNumber_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsV2ResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelName, accessChannelName_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(AccessChannelUserId, accessChannelUserId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelUserName, accessChannelUserName_);
      DARABONBA_PTR_FROM_JSON(AdditionalBroker, additionalBroker_);
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(AgentNames, agentNames_);
      DARABONBA_PTR_FROM_JSON(AnalyticsReport, analyticsReport_);
      DARABONBA_PTR_FROM_JSON(AnalyticsReportReady, analyticsReportReady_);
      DARABONBA_PTR_FROM_JSON(Broker, broker_);
      DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_FROM_JSON(CallIds, callIds_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalleeLocation, calleeLocation_);
      DARABONBA_PTR_FROM_JSON(CallerLocation, callerLocation_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ClientAppName, clientAppName_);
      DARABONBA_PTR_FROM_JSON(ClientIpAddress, clientIpAddress_);
      DARABONBA_PTR_FROM_JSON(ClientLocation, clientLocation_);
      DARABONBA_PTR_FROM_JSON(ClientUserAgent, clientUserAgent_);
      DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(DialingTime, dialingTime_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaState, earlyMediaState_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaText, earlyMediaText_);
      DARABONBA_PTR_FROM_JSON(EstablishedTime, establishedTime_);
      DARABONBA_PTR_FROM_JSON(FirstResponseTime, firstResponseTime_);
      DARABONBA_PTR_FROM_JSON(HeldTime, heldTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IvrTime, ivrTime_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(MessagesSent, messagesSent_);
      DARABONBA_PTR_FROM_JSON(MessagesSentByAgent, messagesSentByAgent_);
      DARABONBA_PTR_FROM_JSON(MessagesSentByCustomer, messagesSentByCustomer_);
      DARABONBA_PTR_FROM_JSON(OffSiteAgentIds, offSiteAgentIds_);
      DARABONBA_PTR_FROM_JSON(OffsiteAgentDestinationNumbers, offsiteAgentDestinationNumbers_);
      DARABONBA_PTR_FROM_JSON(OffsiteAgentOriginatorNumbers, offsiteAgentOriginatorNumbers_);
      DARABONBA_PTR_FROM_JSON(OffsiteAgentReleaseReason, offsiteAgentReleaseReason_);
      DARABONBA_PTR_FROM_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
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
      DARABONBA_PTR_FROM_JSON(SummaryIndex, summaryIndex_);
      DARABONBA_PTR_FROM_JSON(TalkTime, talkTime_);
      DARABONBA_PTR_FROM_JSON(TransferCount, transferCount_);
      DARABONBA_PTR_FROM_JSON(VoicebotDestinationNumber, voicebotDestinationNumber_);
      DARABONBA_PTR_FROM_JSON(VoicebotOriginatorNumber, voicebotOriginatorNumber_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    ListCallDetailRecordsV2ResponseBodyDataList() = default ;
    ListCallDetailRecordsV2ResponseBodyDataList(const ListCallDetailRecordsV2ResponseBodyDataList &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataList(ListCallDetailRecordsV2ResponseBodyDataList &&) = default ;
    ListCallDetailRecordsV2ResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsV2ResponseBodyDataList() = default ;
    ListCallDetailRecordsV2ResponseBodyDataList& operator=(const ListCallDetailRecordsV2ResponseBodyDataList &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataList& operator=(ListCallDetailRecordsV2ResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelName_ == nullptr
        && return this->accessChannelType_ == nullptr && return this->accessChannelUserId_ == nullptr && return this->accessChannelUserName_ == nullptr && return this->additionalBroker_ == nullptr && return this->agentIds_ == nullptr
        && return this->agentNames_ == nullptr && return this->analyticsReport_ == nullptr && return this->analyticsReportReady_ == nullptr && return this->broker_ == nullptr && return this->callDuration_ == nullptr
        && return this->callIds_ == nullptr && return this->calledNumber_ == nullptr && return this->calleeLocation_ == nullptr && return this->callerLocation_ == nullptr && return this->callingNumber_ == nullptr
        && return this->clientAppName_ == nullptr && return this->clientIpAddress_ == nullptr && return this->clientLocation_ == nullptr && return this->clientUserAgent_ == nullptr && return this->contactDisposition_ == nullptr
        && return this->contactId_ == nullptr && return this->contactType_ == nullptr && return this->dialingTime_ == nullptr && return this->earlyMediaState_ == nullptr && return this->earlyMediaText_ == nullptr
        && return this->establishedTime_ == nullptr && return this->firstResponseTime_ == nullptr && return this->heldTime_ == nullptr && return this->instanceId_ == nullptr && return this->ivrTime_ == nullptr
        && return this->mediaType_ == nullptr && return this->messagesSent_ == nullptr && return this->messagesSentByAgent_ == nullptr && return this->messagesSentByCustomer_ == nullptr && return this->offSiteAgentIds_ == nullptr
        && return this->offsiteAgentDestinationNumbers_ == nullptr && return this->offsiteAgentOriginatorNumbers_ == nullptr && return this->offsiteAgentReleaseReason_ == nullptr && return this->outsideNumberReleaseReason_ == nullptr && return this->queueTime_ == nullptr
        && return this->recordingDuration_ == nullptr && return this->recordingReady_ == nullptr && return this->releaseInitiator_ == nullptr && return this->releaseReason_ == nullptr && return this->releaseTime_ == nullptr
        && return this->ringTime_ == nullptr && return this->satisfactionDescription_ == nullptr && return this->satisfactionIndex_ == nullptr && return this->satisfactionSurveyChannel_ == nullptr && return this->satisfactionSurveyOffered_ == nullptr
        && return this->skillGroupIds_ == nullptr && return this->skillGroupNames_ == nullptr && return this->startTime_ == nullptr && return this->summaryIndex_ == nullptr && return this->talkTime_ == nullptr
        && return this->transferCount_ == nullptr && return this->voicebotDestinationNumber_ == nullptr && return this->voicebotOriginatorNumber_ == nullptr && return this->waitTime_ == nullptr; };
    // accessChannelName Field Functions 
    bool hasAccessChannelName() const { return this->accessChannelName_ != nullptr;};
    void deleteAccessChannelName() { this->accessChannelName_ = nullptr;};
    inline string accessChannelName() const { DARABONBA_PTR_GET_DEFAULT(accessChannelName_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAccessChannelName(string accessChannelName) { DARABONBA_PTR_SET_VALUE(accessChannelName_, accessChannelName) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string accessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // accessChannelUserId Field Functions 
    bool hasAccessChannelUserId() const { return this->accessChannelUserId_ != nullptr;};
    void deleteAccessChannelUserId() { this->accessChannelUserId_ = nullptr;};
    inline string accessChannelUserId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelUserId_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAccessChannelUserId(string accessChannelUserId) { DARABONBA_PTR_SET_VALUE(accessChannelUserId_, accessChannelUserId) };


    // accessChannelUserName Field Functions 
    bool hasAccessChannelUserName() const { return this->accessChannelUserName_ != nullptr;};
    void deleteAccessChannelUserName() { this->accessChannelUserName_ = nullptr;};
    inline string accessChannelUserName() const { DARABONBA_PTR_GET_DEFAULT(accessChannelUserName_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAccessChannelUserName(string accessChannelUserName) { DARABONBA_PTR_SET_VALUE(accessChannelUserName_, accessChannelUserName) };


    // additionalBroker Field Functions 
    bool hasAdditionalBroker() const { return this->additionalBroker_ != nullptr;};
    void deleteAdditionalBroker() { this->additionalBroker_ = nullptr;};
    inline string additionalBroker() const { DARABONBA_PTR_GET_DEFAULT(additionalBroker_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAdditionalBroker(string additionalBroker) { DARABONBA_PTR_SET_VALUE(additionalBroker_, additionalBroker) };


    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline string agentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


    // agentNames Field Functions 
    bool hasAgentNames() const { return this->agentNames_ != nullptr;};
    void deleteAgentNames() { this->agentNames_ = nullptr;};
    inline string agentNames() const { DARABONBA_PTR_GET_DEFAULT(agentNames_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAgentNames(string agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };


    // analyticsReport Field Functions 
    bool hasAnalyticsReport() const { return this->analyticsReport_ != nullptr;};
    void deleteAnalyticsReport() { this->analyticsReport_ = nullptr;};
    inline const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport & analyticsReport() const { DARABONBA_PTR_GET_CONST(analyticsReport_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport) };
    inline Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport analyticsReport() { DARABONBA_PTR_GET(analyticsReport_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAnalyticsReport(const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport & analyticsReport) { DARABONBA_PTR_SET_VALUE(analyticsReport_, analyticsReport) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAnalyticsReport(Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport && analyticsReport) { DARABONBA_PTR_SET_RVALUE(analyticsReport_, analyticsReport) };


    // analyticsReportReady Field Functions 
    bool hasAnalyticsReportReady() const { return this->analyticsReportReady_ != nullptr;};
    void deleteAnalyticsReportReady() { this->analyticsReportReady_ = nullptr;};
    inline bool analyticsReportReady() const { DARABONBA_PTR_GET_DEFAULT(analyticsReportReady_, false) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setAnalyticsReportReady(bool analyticsReportReady) { DARABONBA_PTR_SET_VALUE(analyticsReportReady_, analyticsReportReady) };


    // broker Field Functions 
    bool hasBroker() const { return this->broker_ != nullptr;};
    void deleteBroker() { this->broker_ = nullptr;};
    inline string broker() const { DARABONBA_PTR_GET_DEFAULT(broker_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setBroker(string broker) { DARABONBA_PTR_SET_VALUE(broker_, broker) };


    // callDuration Field Functions 
    bool hasCallDuration() const { return this->callDuration_ != nullptr;};
    void deleteCallDuration() { this->callDuration_ = nullptr;};
    inline string callDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setCallDuration(string callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


    // callIds Field Functions 
    bool hasCallIds() const { return this->callIds_ != nullptr;};
    void deleteCallIds() { this->callIds_ = nullptr;};
    inline string callIds() const { DARABONBA_PTR_GET_DEFAULT(callIds_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setCallIds(string callIds) { DARABONBA_PTR_SET_VALUE(callIds_, callIds) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calleeLocation Field Functions 
    bool hasCalleeLocation() const { return this->calleeLocation_ != nullptr;};
    void deleteCalleeLocation() { this->calleeLocation_ = nullptr;};
    inline string calleeLocation() const { DARABONBA_PTR_GET_DEFAULT(calleeLocation_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setCalleeLocation(string calleeLocation) { DARABONBA_PTR_SET_VALUE(calleeLocation_, calleeLocation) };


    // callerLocation Field Functions 
    bool hasCallerLocation() const { return this->callerLocation_ != nullptr;};
    void deleteCallerLocation() { this->callerLocation_ = nullptr;};
    inline string callerLocation() const { DARABONBA_PTR_GET_DEFAULT(callerLocation_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setCallerLocation(string callerLocation) { DARABONBA_PTR_SET_VALUE(callerLocation_, callerLocation) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // clientAppName Field Functions 
    bool hasClientAppName() const { return this->clientAppName_ != nullptr;};
    void deleteClientAppName() { this->clientAppName_ = nullptr;};
    inline string clientAppName() const { DARABONBA_PTR_GET_DEFAULT(clientAppName_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setClientAppName(string clientAppName) { DARABONBA_PTR_SET_VALUE(clientAppName_, clientAppName) };


    // clientIpAddress Field Functions 
    bool hasClientIpAddress() const { return this->clientIpAddress_ != nullptr;};
    void deleteClientIpAddress() { this->clientIpAddress_ = nullptr;};
    inline string clientIpAddress() const { DARABONBA_PTR_GET_DEFAULT(clientIpAddress_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setClientIpAddress(string clientIpAddress) { DARABONBA_PTR_SET_VALUE(clientIpAddress_, clientIpAddress) };


    // clientLocation Field Functions 
    bool hasClientLocation() const { return this->clientLocation_ != nullptr;};
    void deleteClientLocation() { this->clientLocation_ = nullptr;};
    inline string clientLocation() const { DARABONBA_PTR_GET_DEFAULT(clientLocation_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setClientLocation(string clientLocation) { DARABONBA_PTR_SET_VALUE(clientLocation_, clientLocation) };


    // clientUserAgent Field Functions 
    bool hasClientUserAgent() const { return this->clientUserAgent_ != nullptr;};
    void deleteClientUserAgent() { this->clientUserAgent_ = nullptr;};
    inline string clientUserAgent() const { DARABONBA_PTR_GET_DEFAULT(clientUserAgent_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setClientUserAgent(string clientUserAgent) { DARABONBA_PTR_SET_VALUE(clientUserAgent_, clientUserAgent) };


    // contactDisposition Field Functions 
    bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
    void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
    inline string contactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // dialingTime Field Functions 
    bool hasDialingTime() const { return this->dialingTime_ != nullptr;};
    void deleteDialingTime() { this->dialingTime_ = nullptr;};
    inline int64_t dialingTime() const { DARABONBA_PTR_GET_DEFAULT(dialingTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setDialingTime(int64_t dialingTime) { DARABONBA_PTR_SET_VALUE(dialingTime_, dialingTime) };


    // earlyMediaState Field Functions 
    bool hasEarlyMediaState() const { return this->earlyMediaState_ != nullptr;};
    void deleteEarlyMediaState() { this->earlyMediaState_ = nullptr;};
    inline string earlyMediaState() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaState_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setEarlyMediaState(string earlyMediaState) { DARABONBA_PTR_SET_VALUE(earlyMediaState_, earlyMediaState) };


    // earlyMediaText Field Functions 
    bool hasEarlyMediaText() const { return this->earlyMediaText_ != nullptr;};
    void deleteEarlyMediaText() { this->earlyMediaText_ = nullptr;};
    inline string earlyMediaText() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaText_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setEarlyMediaText(string earlyMediaText) { DARABONBA_PTR_SET_VALUE(earlyMediaText_, earlyMediaText) };


    // establishedTime Field Functions 
    bool hasEstablishedTime() const { return this->establishedTime_ != nullptr;};
    void deleteEstablishedTime() { this->establishedTime_ = nullptr;};
    inline int64_t establishedTime() const { DARABONBA_PTR_GET_DEFAULT(establishedTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setEstablishedTime(int64_t establishedTime) { DARABONBA_PTR_SET_VALUE(establishedTime_, establishedTime) };


    // firstResponseTime Field Functions 
    bool hasFirstResponseTime() const { return this->firstResponseTime_ != nullptr;};
    void deleteFirstResponseTime() { this->firstResponseTime_ = nullptr;};
    inline int64_t firstResponseTime() const { DARABONBA_PTR_GET_DEFAULT(firstResponseTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setFirstResponseTime(int64_t firstResponseTime) { DARABONBA_PTR_SET_VALUE(firstResponseTime_, firstResponseTime) };


    // heldTime Field Functions 
    bool hasHeldTime() const { return this->heldTime_ != nullptr;};
    void deleteHeldTime() { this->heldTime_ = nullptr;};
    inline int64_t heldTime() const { DARABONBA_PTR_GET_DEFAULT(heldTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setHeldTime(int64_t heldTime) { DARABONBA_PTR_SET_VALUE(heldTime_, heldTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ivrTime Field Functions 
    bool hasIvrTime() const { return this->ivrTime_ != nullptr;};
    void deleteIvrTime() { this->ivrTime_ = nullptr;};
    inline int64_t ivrTime() const { DARABONBA_PTR_GET_DEFAULT(ivrTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setIvrTime(int64_t ivrTime) { DARABONBA_PTR_SET_VALUE(ivrTime_, ivrTime) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // messagesSent Field Functions 
    bool hasMessagesSent() const { return this->messagesSent_ != nullptr;};
    void deleteMessagesSent() { this->messagesSent_ = nullptr;};
    inline int64_t messagesSent() const { DARABONBA_PTR_GET_DEFAULT(messagesSent_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setMessagesSent(int64_t messagesSent) { DARABONBA_PTR_SET_VALUE(messagesSent_, messagesSent) };


    // messagesSentByAgent Field Functions 
    bool hasMessagesSentByAgent() const { return this->messagesSentByAgent_ != nullptr;};
    void deleteMessagesSentByAgent() { this->messagesSentByAgent_ = nullptr;};
    inline int64_t messagesSentByAgent() const { DARABONBA_PTR_GET_DEFAULT(messagesSentByAgent_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setMessagesSentByAgent(int64_t messagesSentByAgent) { DARABONBA_PTR_SET_VALUE(messagesSentByAgent_, messagesSentByAgent) };


    // messagesSentByCustomer Field Functions 
    bool hasMessagesSentByCustomer() const { return this->messagesSentByCustomer_ != nullptr;};
    void deleteMessagesSentByCustomer() { this->messagesSentByCustomer_ = nullptr;};
    inline int64_t messagesSentByCustomer() const { DARABONBA_PTR_GET_DEFAULT(messagesSentByCustomer_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setMessagesSentByCustomer(int64_t messagesSentByCustomer) { DARABONBA_PTR_SET_VALUE(messagesSentByCustomer_, messagesSentByCustomer) };


    // offSiteAgentIds Field Functions 
    bool hasOffSiteAgentIds() const { return this->offSiteAgentIds_ != nullptr;};
    void deleteOffSiteAgentIds() { this->offSiteAgentIds_ = nullptr;};
    inline string offSiteAgentIds() const { DARABONBA_PTR_GET_DEFAULT(offSiteAgentIds_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setOffSiteAgentIds(string offSiteAgentIds) { DARABONBA_PTR_SET_VALUE(offSiteAgentIds_, offSiteAgentIds) };


    // offsiteAgentDestinationNumbers Field Functions 
    bool hasOffsiteAgentDestinationNumbers() const { return this->offsiteAgentDestinationNumbers_ != nullptr;};
    void deleteOffsiteAgentDestinationNumbers() { this->offsiteAgentDestinationNumbers_ = nullptr;};
    inline string offsiteAgentDestinationNumbers() const { DARABONBA_PTR_GET_DEFAULT(offsiteAgentDestinationNumbers_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setOffsiteAgentDestinationNumbers(string offsiteAgentDestinationNumbers) { DARABONBA_PTR_SET_VALUE(offsiteAgentDestinationNumbers_, offsiteAgentDestinationNumbers) };


    // offsiteAgentOriginatorNumbers Field Functions 
    bool hasOffsiteAgentOriginatorNumbers() const { return this->offsiteAgentOriginatorNumbers_ != nullptr;};
    void deleteOffsiteAgentOriginatorNumbers() { this->offsiteAgentOriginatorNumbers_ = nullptr;};
    inline string offsiteAgentOriginatorNumbers() const { DARABONBA_PTR_GET_DEFAULT(offsiteAgentOriginatorNumbers_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setOffsiteAgentOriginatorNumbers(string offsiteAgentOriginatorNumbers) { DARABONBA_PTR_SET_VALUE(offsiteAgentOriginatorNumbers_, offsiteAgentOriginatorNumbers) };


    // offsiteAgentReleaseReason Field Functions 
    bool hasOffsiteAgentReleaseReason() const { return this->offsiteAgentReleaseReason_ != nullptr;};
    void deleteOffsiteAgentReleaseReason() { this->offsiteAgentReleaseReason_ = nullptr;};
    inline string offsiteAgentReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(offsiteAgentReleaseReason_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setOffsiteAgentReleaseReason(string offsiteAgentReleaseReason) { DARABONBA_PTR_SET_VALUE(offsiteAgentReleaseReason_, offsiteAgentReleaseReason) };


    // outsideNumberReleaseReason Field Functions 
    bool hasOutsideNumberReleaseReason() const { return this->outsideNumberReleaseReason_ != nullptr;};
    void deleteOutsideNumberReleaseReason() { this->outsideNumberReleaseReason_ = nullptr;};
    inline string outsideNumberReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(outsideNumberReleaseReason_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setOutsideNumberReleaseReason(string outsideNumberReleaseReason) { DARABONBA_PTR_SET_VALUE(outsideNumberReleaseReason_, outsideNumberReleaseReason) };


    // queueTime Field Functions 
    bool hasQueueTime() const { return this->queueTime_ != nullptr;};
    void deleteQueueTime() { this->queueTime_ = nullptr;};
    inline int64_t queueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int64_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setRecordingDuration(int64_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // recordingReady Field Functions 
    bool hasRecordingReady() const { return this->recordingReady_ != nullptr;};
    void deleteRecordingReady() { this->recordingReady_ = nullptr;};
    inline bool recordingReady() const { DARABONBA_PTR_GET_DEFAULT(recordingReady_, false) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setRecordingReady(bool recordingReady) { DARABONBA_PTR_SET_VALUE(recordingReady_, recordingReady) };


    // releaseInitiator Field Functions 
    bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
    void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
    inline string releaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


    // releaseReason Field Functions 
    bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
    void deleteReleaseReason() { this->releaseReason_ = nullptr;};
    inline string releaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // ringTime Field Functions 
    bool hasRingTime() const { return this->ringTime_ != nullptr;};
    void deleteRingTime() { this->ringTime_ = nullptr;};
    inline int64_t ringTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


    // satisfactionDescription Field Functions 
    bool hasSatisfactionDescription() const { return this->satisfactionDescription_ != nullptr;};
    void deleteSatisfactionDescription() { this->satisfactionDescription_ = nullptr;};
    inline string satisfactionDescription() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescription_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSatisfactionDescription(string satisfactionDescription) { DARABONBA_PTR_SET_VALUE(satisfactionDescription_, satisfactionDescription) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline int32_t satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSatisfactionIndex(int32_t satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionSurveyChannel Field Functions 
    bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
    void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
    inline string satisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


    // satisfactionSurveyOffered Field Functions 
    bool hasSatisfactionSurveyOffered() const { return this->satisfactionSurveyOffered_ != nullptr;};
    void deleteSatisfactionSurveyOffered() { this->satisfactionSurveyOffered_ = nullptr;};
    inline bool satisfactionSurveyOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyOffered_, false) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSatisfactionSurveyOffered(bool satisfactionSurveyOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyOffered_, satisfactionSurveyOffered) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline string skillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


    // skillGroupNames Field Functions 
    bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
    void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
    inline string skillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // summaryIndex Field Functions 
    bool hasSummaryIndex() const { return this->summaryIndex_ != nullptr;};
    void deleteSummaryIndex() { this->summaryIndex_ = nullptr;};
    inline const Models::ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex & summaryIndex() const { DARABONBA_PTR_GET_CONST(summaryIndex_, Models::ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex) };
    inline Models::ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex summaryIndex() { DARABONBA_PTR_GET(summaryIndex_, Models::ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSummaryIndex(const Models::ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex & summaryIndex) { DARABONBA_PTR_SET_VALUE(summaryIndex_, summaryIndex) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setSummaryIndex(Models::ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex && summaryIndex) { DARABONBA_PTR_SET_RVALUE(summaryIndex_, summaryIndex) };


    // talkTime Field Functions 
    bool hasTalkTime() const { return this->talkTime_ != nullptr;};
    void deleteTalkTime() { this->talkTime_ = nullptr;};
    inline int64_t talkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


    // transferCount Field Functions 
    bool hasTransferCount() const { return this->transferCount_ != nullptr;};
    void deleteTransferCount() { this->transferCount_ = nullptr;};
    inline int64_t transferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setTransferCount(int64_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


    // voicebotDestinationNumber Field Functions 
    bool hasVoicebotDestinationNumber() const { return this->voicebotDestinationNumber_ != nullptr;};
    void deleteVoicebotDestinationNumber() { this->voicebotDestinationNumber_ = nullptr;};
    inline string voicebotDestinationNumber() const { DARABONBA_PTR_GET_DEFAULT(voicebotDestinationNumber_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setVoicebotDestinationNumber(string voicebotDestinationNumber) { DARABONBA_PTR_SET_VALUE(voicebotDestinationNumber_, voicebotDestinationNumber) };


    // voicebotOriginatorNumber Field Functions 
    bool hasVoicebotOriginatorNumber() const { return this->voicebotOriginatorNumber_ != nullptr;};
    void deleteVoicebotOriginatorNumber() { this->voicebotOriginatorNumber_ = nullptr;};
    inline string voicebotOriginatorNumber() const { DARABONBA_PTR_GET_DEFAULT(voicebotOriginatorNumber_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setVoicebotOriginatorNumber(string voicebotOriginatorNumber) { DARABONBA_PTR_SET_VALUE(voicebotOriginatorNumber_, voicebotOriginatorNumber) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline int64_t waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0L) };
    inline ListCallDetailRecordsV2ResponseBodyDataList& setWaitTime(int64_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    std::shared_ptr<string> accessChannelName_ = nullptr;
    std::shared_ptr<string> accessChannelType_ = nullptr;
    std::shared_ptr<string> accessChannelUserId_ = nullptr;
    std::shared_ptr<string> accessChannelUserName_ = nullptr;
    std::shared_ptr<string> additionalBroker_ = nullptr;
    std::shared_ptr<string> agentIds_ = nullptr;
    std::shared_ptr<string> agentNames_ = nullptr;
    std::shared_ptr<Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport> analyticsReport_ = nullptr;
    std::shared_ptr<bool> analyticsReportReady_ = nullptr;
    std::shared_ptr<string> broker_ = nullptr;
    std::shared_ptr<string> callDuration_ = nullptr;
    std::shared_ptr<string> callIds_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> calleeLocation_ = nullptr;
    std::shared_ptr<string> callerLocation_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> clientAppName_ = nullptr;
    std::shared_ptr<string> clientIpAddress_ = nullptr;
    std::shared_ptr<string> clientLocation_ = nullptr;
    std::shared_ptr<string> clientUserAgent_ = nullptr;
    std::shared_ptr<string> contactDisposition_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> contactType_ = nullptr;
    std::shared_ptr<int64_t> dialingTime_ = nullptr;
    std::shared_ptr<string> earlyMediaState_ = nullptr;
    std::shared_ptr<string> earlyMediaText_ = nullptr;
    std::shared_ptr<int64_t> establishedTime_ = nullptr;
    std::shared_ptr<int64_t> firstResponseTime_ = nullptr;
    std::shared_ptr<int64_t> heldTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ivrTime_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<int64_t> messagesSent_ = nullptr;
    std::shared_ptr<int64_t> messagesSentByAgent_ = nullptr;
    std::shared_ptr<int64_t> messagesSentByCustomer_ = nullptr;
    std::shared_ptr<string> offSiteAgentIds_ = nullptr;
    std::shared_ptr<string> offsiteAgentDestinationNumbers_ = nullptr;
    std::shared_ptr<string> offsiteAgentOriginatorNumbers_ = nullptr;
    std::shared_ptr<string> offsiteAgentReleaseReason_ = nullptr;
    std::shared_ptr<string> outsideNumberReleaseReason_ = nullptr;
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
    std::shared_ptr<Models::ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex> summaryIndex_ = nullptr;
    std::shared_ptr<int64_t> talkTime_ = nullptr;
    std::shared_ptr<int64_t> transferCount_ = nullptr;
    std::shared_ptr<string> voicebotDestinationNumber_ = nullptr;
    std::shared_ptr<string> voicebotOriginatorNumber_ = nullptr;
    std::shared_ptr<int64_t> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
