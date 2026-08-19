// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCASEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCASEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class GetCaseDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaseDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaseDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCaseDetailResponseBody() = default ;
    GetCaseDetailResponseBody(const GetCaseDetailResponseBody &) = default ;
    GetCaseDetailResponseBody(GetCaseDetailResponseBody &&) = default ;
    GetCaseDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaseDetailResponseBody() = default ;
    GetCaseDetailResponseBody& operator=(const GetCaseDetailResponseBody &) = default ;
    GetCaseDetailResponseBody& operator=(GetCaseDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallDetailRecords, callDetailRecords_);
        DARABONBA_PTR_TO_JSON(Case, case_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallDetailRecords, callDetailRecords_);
        DARABONBA_PTR_FROM_JSON(Case, case_);
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
      class Case : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Case& obj) { 
          DARABONBA_PTR_TO_JSON(AttemptedCount, attemptedCount_);
          DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
          DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
          DARABONBA_PTR_TO_JSON(CampaignName, campaignName_);
          DARABONBA_PTR_TO_JSON(CaseId, caseId_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
          DARABONBA_PTR_TO_JSON(DialingTime, dialingTime_);
          DARABONBA_PTR_TO_JSON(DispositionCode, dispositionCode_);
          DARABONBA_PTR_TO_JSON(DispositionReason, dispositionReason_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(LastAttemptedTime, lastAttemptedTime_);
          DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
          DARABONBA_PTR_TO_JSON(RingingTime, ringingTime_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TalkTime, talkTime_);
        };
        friend void from_json(const Darabonba::Json& j, Case& obj) { 
          DARABONBA_PTR_FROM_JSON(AttemptedCount, attemptedCount_);
          DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
          DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
          DARABONBA_PTR_FROM_JSON(CampaignName, campaignName_);
          DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
          DARABONBA_PTR_FROM_JSON(DialingTime, dialingTime_);
          DARABONBA_PTR_FROM_JSON(DispositionCode, dispositionCode_);
          DARABONBA_PTR_FROM_JSON(DispositionReason, dispositionReason_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(LastAttemptedTime, lastAttemptedTime_);
          DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
          DARABONBA_PTR_FROM_JSON(RingingTime, ringingTime_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TalkTime, talkTime_);
        };
        Case() = default ;
        Case(const Case &) = default ;
        Case(Case &&) = default ;
        Case(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Case() = default ;
        Case& operator=(const Case &) = default ;
        Case& operator=(Case &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Labels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Labels& obj) { 
            DARABONBA_PTR_TO_JSON(CandidateValues, candidateValues_);
            DARABONBA_PTR_TO_JSON(Collected, collected_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(MatchedValue, matchedValue_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(System, system_);
          };
          friend void from_json(const Darabonba::Json& j, Labels& obj) { 
            DARABONBA_PTR_FROM_JSON(CandidateValues, candidateValues_);
            DARABONBA_PTR_FROM_JSON(Collected, collected_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(MatchedValue, matchedValue_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(System, system_);
          };
          Labels() = default ;
          Labels(const Labels &) = default ;
          Labels(Labels &&) = default ;
          Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Labels() = default ;
          Labels& operator=(const Labels &) = default ;
          Labels& operator=(Labels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->candidateValues_ == nullptr
        && this->collected_ == nullptr && this->description_ == nullptr && this->matchedValue_ == nullptr && this->name_ == nullptr && this->system_ == nullptr; };
          // candidateValues Field Functions 
          bool hasCandidateValues() const { return this->candidateValues_ != nullptr;};
          void deleteCandidateValues() { this->candidateValues_ = nullptr;};
          inline const vector<string> & getCandidateValues() const { DARABONBA_PTR_GET_CONST(candidateValues_, vector<string>) };
          inline vector<string> getCandidateValues() { DARABONBA_PTR_GET(candidateValues_, vector<string>) };
          inline Labels& setCandidateValues(const vector<string> & candidateValues) { DARABONBA_PTR_SET_VALUE(candidateValues_, candidateValues) };
          inline Labels& setCandidateValues(vector<string> && candidateValues) { DARABONBA_PTR_SET_RVALUE(candidateValues_, candidateValues) };


          // collected Field Functions 
          bool hasCollected() const { return this->collected_ != nullptr;};
          void deleteCollected() { this->collected_ = nullptr;};
          inline bool getCollected() const { DARABONBA_PTR_GET_DEFAULT(collected_, false) };
          inline Labels& setCollected(bool collected) { DARABONBA_PTR_SET_VALUE(collected_, collected) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Labels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // matchedValue Field Functions 
          bool hasMatchedValue() const { return this->matchedValue_ != nullptr;};
          void deleteMatchedValue() { this->matchedValue_ = nullptr;};
          inline string getMatchedValue() const { DARABONBA_PTR_GET_DEFAULT(matchedValue_, "") };
          inline Labels& setMatchedValue(string matchedValue) { DARABONBA_PTR_SET_VALUE(matchedValue_, matchedValue) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Labels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // system Field Functions 
          bool hasSystem() const { return this->system_ != nullptr;};
          void deleteSystem() { this->system_ = nullptr;};
          inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
          inline Labels& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


        protected:
          // The set of candidate values for the label.
          shared_ptr<vector<string>> candidateValues_ {};
          // Indicates whether the label was collected.
          shared_ptr<bool> collected_ {};
          // The label description.
          shared_ptr<string> description_ {};
          // The matched value of the label.
          shared_ptr<string> matchedValue_ {};
          // The label name.
          shared_ptr<string> name_ {};
          // Indicates whether the label is a system label.
          shared_ptr<bool> system_ {};
        };

        virtual bool empty() const override { return this->attemptedCount_ == nullptr
        && this->callerNumber_ == nullptr && this->campaignId_ == nullptr && this->campaignName_ == nullptr && this->caseId_ == nullptr && this->createdTime_ == nullptr
        && this->customVariables_ == nullptr && this->dialingTime_ == nullptr && this->dispositionCode_ == nullptr && this->dispositionReason_ == nullptr && this->instanceId_ == nullptr
        && this->labels_ == nullptr && this->lastAttemptedTime_ == nullptr && this->phoneNumber_ == nullptr && this->priority_ == nullptr && this->referenceId_ == nullptr
        && this->ringingDuration_ == nullptr && this->ringingTime_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->sessionId_ == nullptr
        && this->state_ == nullptr && this->talkTime_ == nullptr; };
        // attemptedCount Field Functions 
        bool hasAttemptedCount() const { return this->attemptedCount_ != nullptr;};
        void deleteAttemptedCount() { this->attemptedCount_ = nullptr;};
        inline int32_t getAttemptedCount() const { DARABONBA_PTR_GET_DEFAULT(attemptedCount_, 0) };
        inline Case& setAttemptedCount(int32_t attemptedCount) { DARABONBA_PTR_SET_VALUE(attemptedCount_, attemptedCount) };


        // callerNumber Field Functions 
        bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
        void deleteCallerNumber() { this->callerNumber_ = nullptr;};
        inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
        inline Case& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


        // campaignId Field Functions 
        bool hasCampaignId() const { return this->campaignId_ != nullptr;};
        void deleteCampaignId() { this->campaignId_ = nullptr;};
        inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
        inline Case& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


        // campaignName Field Functions 
        bool hasCampaignName() const { return this->campaignName_ != nullptr;};
        void deleteCampaignName() { this->campaignName_ = nullptr;};
        inline string getCampaignName() const { DARABONBA_PTR_GET_DEFAULT(campaignName_, "") };
        inline Case& setCampaignName(string campaignName) { DARABONBA_PTR_SET_VALUE(campaignName_, campaignName) };


        // caseId Field Functions 
        bool hasCaseId() const { return this->caseId_ != nullptr;};
        void deleteCaseId() { this->caseId_ = nullptr;};
        inline string getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
        inline Case& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline Case& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // customVariables Field Functions 
        bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
        void deleteCustomVariables() { this->customVariables_ = nullptr;};
        inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
        inline Case& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


        // dialingTime Field Functions 
        bool hasDialingTime() const { return this->dialingTime_ != nullptr;};
        void deleteDialingTime() { this->dialingTime_ = nullptr;};
        inline int64_t getDialingTime() const { DARABONBA_PTR_GET_DEFAULT(dialingTime_, 0L) };
        inline Case& setDialingTime(int64_t dialingTime) { DARABONBA_PTR_SET_VALUE(dialingTime_, dialingTime) };


        // dispositionCode Field Functions 
        bool hasDispositionCode() const { return this->dispositionCode_ != nullptr;};
        void deleteDispositionCode() { this->dispositionCode_ = nullptr;};
        inline string getDispositionCode() const { DARABONBA_PTR_GET_DEFAULT(dispositionCode_, "") };
        inline Case& setDispositionCode(string dispositionCode) { DARABONBA_PTR_SET_VALUE(dispositionCode_, dispositionCode) };


        // dispositionReason Field Functions 
        bool hasDispositionReason() const { return this->dispositionReason_ != nullptr;};
        void deleteDispositionReason() { this->dispositionReason_ = nullptr;};
        inline string getDispositionReason() const { DARABONBA_PTR_GET_DEFAULT(dispositionReason_, "") };
        inline Case& setDispositionReason(string dispositionReason) { DARABONBA_PTR_SET_VALUE(dispositionReason_, dispositionReason) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Case& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const vector<Case::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Case::Labels>) };
        inline vector<Case::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Case::Labels>) };
        inline Case& setLabels(const vector<Case::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline Case& setLabels(vector<Case::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // lastAttemptedTime Field Functions 
        bool hasLastAttemptedTime() const { return this->lastAttemptedTime_ != nullptr;};
        void deleteLastAttemptedTime() { this->lastAttemptedTime_ = nullptr;};
        inline int64_t getLastAttemptedTime() const { DARABONBA_PTR_GET_DEFAULT(lastAttemptedTime_, 0L) };
        inline Case& setLastAttemptedTime(int64_t lastAttemptedTime) { DARABONBA_PTR_SET_VALUE(lastAttemptedTime_, lastAttemptedTime) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline Case& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Case& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // referenceId Field Functions 
        bool hasReferenceId() const { return this->referenceId_ != nullptr;};
        void deleteReferenceId() { this->referenceId_ = nullptr;};
        inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
        inline Case& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


        // ringingDuration Field Functions 
        bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
        void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
        inline int64_t getRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
        inline Case& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


        // ringingTime Field Functions 
        bool hasRingingTime() const { return this->ringingTime_ != nullptr;};
        void deleteRingingTime() { this->ringingTime_ = nullptr;};
        inline int64_t getRingingTime() const { DARABONBA_PTR_GET_DEFAULT(ringingTime_, 0L) };
        inline Case& setRingingTime(int64_t ringingTime) { DARABONBA_PTR_SET_VALUE(ringingTime_, ringingTime) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline Case& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline Case& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Case& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Case& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // talkTime Field Functions 
        bool hasTalkTime() const { return this->talkTime_ != nullptr;};
        void deleteTalkTime() { this->talkTime_ = nullptr;};
        inline int64_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
        inline Case& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


      protected:
        // The number of call attempts.
        shared_ptr<int32_t> attemptedCount_ {};
        // The caller number.
        shared_ptr<string> callerNumber_ {};
        // The ID of the outbound campaign.
        shared_ptr<string> campaignId_ {};
        // The name of the outbound campaign.
        shared_ptr<string> campaignName_ {};
        // The case ID.
        shared_ptr<string> caseId_ {};
        // The creation time.
        shared_ptr<int64_t> createdTime_ {};
        // The custom variables in JSON string format.
        shared_ptr<string> customVariables_ {};
        // The dialing time.
        shared_ptr<int64_t> dialingTime_ {};
        // The disposition code.
        shared_ptr<string> dispositionCode_ {};
        // The disposition reason.
        shared_ptr<string> dispositionReason_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The list of labels.
        shared_ptr<vector<Case::Labels>> labels_ {};
        // The time of the last call attempt.
        shared_ptr<int64_t> lastAttemptedTime_ {};
        // The called number.
        shared_ptr<string> phoneNumber_ {};
        // The priority.
        shared_ptr<int32_t> priority_ {};
        // The reference ID.
        shared_ptr<string> referenceId_ {};
        // The ringing duration.
        shared_ptr<int64_t> ringingDuration_ {};
        // The ringing time.
        shared_ptr<int64_t> ringingTime_ {};
        // The script ID.
        shared_ptr<string> scriptId_ {};
        // The script name.
        shared_ptr<string> scriptName_ {};
        // The session ID of the last call.
        shared_ptr<string> sessionId_ {};
        // The case state.
        shared_ptr<string> state_ {};
        // The talk time.
        shared_ptr<int64_t> talkTime_ {};
      };

      class CallDetailRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallDetailRecords& obj) { 
          DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
          DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
          DARABONBA_PTR_TO_JSON(Callee, callee_);
          DARABONBA_PTR_TO_JSON(Caller, caller_);
          DARABONBA_PTR_TO_JSON(DispositionCode, dispositionCode_);
          DARABONBA_PTR_TO_JSON(DispositionReason, dispositionReason_);
          DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TalkTime, talkTime_);
          DARABONBA_PTR_TO_JSON(TalkTurns, talkTurns_);
          DARABONBA_PTR_TO_JSON(TransferTarget, transferTarget_);
          DARABONBA_PTR_TO_JSON(TransferType, transferType_);
        };
        friend void from_json(const Darabonba::Json& j, CallDetailRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
          DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
          DARABONBA_PTR_FROM_JSON(Callee, callee_);
          DARABONBA_PTR_FROM_JSON(Caller, caller_);
          DARABONBA_PTR_FROM_JSON(DispositionCode, dispositionCode_);
          DARABONBA_PTR_FROM_JSON(DispositionReason, dispositionReason_);
          DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TalkTime, talkTime_);
          DARABONBA_PTR_FROM_JSON(TalkTurns, talkTurns_);
          DARABONBA_PTR_FROM_JSON(TransferTarget, transferTarget_);
          DARABONBA_PTR_FROM_JSON(TransferType, transferType_);
        };
        CallDetailRecords() = default ;
        CallDetailRecords(const CallDetailRecords &) = default ;
        CallDetailRecords(CallDetailRecords &&) = default ;
        CallDetailRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallDetailRecords() = default ;
        CallDetailRecords& operator=(const CallDetailRecords &) = default ;
        CallDetailRecords& operator=(CallDetailRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->callee_ == nullptr && this->caller_ == nullptr && this->dispositionCode_ == nullptr && this->dispositionReason_ == nullptr
        && this->draftVersion_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr && this->releaseInitiator_ == nullptr && this->sessionId_ == nullptr
        && this->startTime_ == nullptr && this->talkTime_ == nullptr && this->talkTurns_ == nullptr && this->transferTarget_ == nullptr && this->transferType_ == nullptr; };
        // accessChannelId Field Functions 
        bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
        void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
        inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
        inline CallDetailRecords& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


        // accessChannelType Field Functions 
        bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
        void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
        inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
        inline CallDetailRecords& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


        // callee Field Functions 
        bool hasCallee() const { return this->callee_ != nullptr;};
        void deleteCallee() { this->callee_ = nullptr;};
        inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
        inline CallDetailRecords& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


        // caller Field Functions 
        bool hasCaller() const { return this->caller_ != nullptr;};
        void deleteCaller() { this->caller_ = nullptr;};
        inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
        inline CallDetailRecords& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


        // dispositionCode Field Functions 
        bool hasDispositionCode() const { return this->dispositionCode_ != nullptr;};
        void deleteDispositionCode() { this->dispositionCode_ = nullptr;};
        inline string getDispositionCode() const { DARABONBA_PTR_GET_DEFAULT(dispositionCode_, "") };
        inline CallDetailRecords& setDispositionCode(string dispositionCode) { DARABONBA_PTR_SET_VALUE(dispositionCode_, dispositionCode) };


        // dispositionReason Field Functions 
        bool hasDispositionReason() const { return this->dispositionReason_ != nullptr;};
        void deleteDispositionReason() { this->dispositionReason_ = nullptr;};
        inline string getDispositionReason() const { DARABONBA_PTR_GET_DEFAULT(dispositionReason_, "") };
        inline CallDetailRecords& setDispositionReason(string dispositionReason) { DARABONBA_PTR_SET_VALUE(dispositionReason_, dispositionReason) };


        // draftVersion Field Functions 
        bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
        void deleteDraftVersion() { this->draftVersion_ = nullptr;};
        inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
        inline CallDetailRecords& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline CallDetailRecords& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CallDetailRecords& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // releaseInitiator Field Functions 
        bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
        void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
        inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
        inline CallDetailRecords& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline CallDetailRecords& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CallDetailRecords& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // talkTime Field Functions 
        bool hasTalkTime() const { return this->talkTime_ != nullptr;};
        void deleteTalkTime() { this->talkTime_ = nullptr;};
        inline int64_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
        inline CallDetailRecords& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


        // talkTurns Field Functions 
        bool hasTalkTurns() const { return this->talkTurns_ != nullptr;};
        void deleteTalkTurns() { this->talkTurns_ = nullptr;};
        inline int64_t getTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(talkTurns_, 0L) };
        inline CallDetailRecords& setTalkTurns(int64_t talkTurns) { DARABONBA_PTR_SET_VALUE(talkTurns_, talkTurns) };


        // transferTarget Field Functions 
        bool hasTransferTarget() const { return this->transferTarget_ != nullptr;};
        void deleteTransferTarget() { this->transferTarget_ = nullptr;};
        inline string getTransferTarget() const { DARABONBA_PTR_GET_DEFAULT(transferTarget_, "") };
        inline CallDetailRecords& setTransferTarget(string transferTarget) { DARABONBA_PTR_SET_VALUE(transferTarget_, transferTarget) };


        // transferType Field Functions 
        bool hasTransferType() const { return this->transferType_ != nullptr;};
        void deleteTransferType() { this->transferType_ = nullptr;};
        inline string getTransferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
        inline CallDetailRecords& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


      protected:
        // The access channel ID.
        shared_ptr<string> accessChannelId_ {};
        // The access channel type.
        shared_ptr<string> accessChannelType_ {};
        // The called number.
        shared_ptr<string> callee_ {};
        // The caller number.
        shared_ptr<string> caller_ {};
        // The disposition code.
        shared_ptr<string> dispositionCode_ {};
        // The disposition reason.
        shared_ptr<string> dispositionReason_ {};
        // Indicates whether the version is a draft version.
        shared_ptr<bool> draftVersion_ {};
        // The total duration.
        shared_ptr<int64_t> duration_ {};
        // The time when the call ended.
        shared_ptr<int64_t> endTime_ {};
        // The party that initiated the hangup.
        shared_ptr<string> releaseInitiator_ {};
        // The call session ID.
        shared_ptr<string> sessionId_ {};
        // The time when the call started.
        shared_ptr<int64_t> startTime_ {};
        // The talk time.
        shared_ptr<int64_t> talkTime_ {};
        // The number of conversation turns.
        shared_ptr<int64_t> talkTurns_ {};
        // The transfer target.
        shared_ptr<string> transferTarget_ {};
        // The transfer type.
        shared_ptr<string> transferType_ {};
      };

      virtual bool empty() const override { return this->callDetailRecords_ == nullptr
        && this->case_ == nullptr; };
      // callDetailRecords Field Functions 
      bool hasCallDetailRecords() const { return this->callDetailRecords_ != nullptr;};
      void deleteCallDetailRecords() { this->callDetailRecords_ = nullptr;};
      inline const vector<Data::CallDetailRecords> & getCallDetailRecords() const { DARABONBA_PTR_GET_CONST(callDetailRecords_, vector<Data::CallDetailRecords>) };
      inline vector<Data::CallDetailRecords> getCallDetailRecords() { DARABONBA_PTR_GET(callDetailRecords_, vector<Data::CallDetailRecords>) };
      inline Data& setCallDetailRecords(const vector<Data::CallDetailRecords> & callDetailRecords) { DARABONBA_PTR_SET_VALUE(callDetailRecords_, callDetailRecords) };
      inline Data& setCallDetailRecords(vector<Data::CallDetailRecords> && callDetailRecords) { DARABONBA_PTR_SET_RVALUE(callDetailRecords_, callDetailRecords) };


      // case Field Functions 
      bool hasCase() const { return this->case_ != nullptr;};
      void deleteCase() { this->case_ = nullptr;};
      inline const Data::Case & getCase() const { DARABONBA_PTR_GET_CONST(case_, Data::Case) };
      inline Data::Case getCase() { DARABONBA_PTR_GET(case_, Data::Case) };
      inline Data& setCase(const Data::Case & _case) { DARABONBA_PTR_SET_VALUE(case_, _case) };
      inline Data& setCase(Data::Case && _case) { DARABONBA_PTR_SET_RVALUE(case_, _case) };


    protected:
      // The list of associated call detail records.
      shared_ptr<vector<Data::CallDetailRecords>> callDetailRecords_ {};
      // The case information.
      shared_ptr<Data::Case> case_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCaseDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCaseDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCaseDetailResponseBody::Data) };
    inline GetCaseDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCaseDetailResponseBody::Data) };
    inline GetCaseDetailResponseBody& setData(const GetCaseDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCaseDetailResponseBody& setData(GetCaseDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCaseDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCaseDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetCaseDetailResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetCaseDetailResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCaseDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCaseDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The case details data.
    shared_ptr<GetCaseDetailResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The pass-through parameters.
    shared_ptr<vector<string>> params_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
