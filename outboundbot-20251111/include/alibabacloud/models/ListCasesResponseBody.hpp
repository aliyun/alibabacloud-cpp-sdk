// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCASESRESPONSEBODY_HPP_
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
  class ListCasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCasesResponseBody() = default ;
    ListCasesResponseBody(const ListCasesResponseBody &) = default ;
    ListCasesResponseBody(ListCasesResponseBody &&) = default ;
    ListCasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCasesResponseBody() = default ;
    ListCasesResponseBody& operator=(const ListCasesResponseBody &) = default ;
    ListCasesResponseBody& operator=(ListCasesResponseBody &&) = default ;
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
        friend void from_json(const Darabonba::Json& j, List& obj) { 
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
          // The candidate values of the label.
          shared_ptr<vector<string>> candidateValues_ {};
          // Indicates whether the item is collected.
          shared_ptr<bool> collected_ {};
          // The description of the label.
          shared_ptr<string> description_ {};
          // The matched value of the label.
          shared_ptr<string> matchedValue_ {};
          // The name of the label.
          shared_ptr<string> name_ {};
          // The system label.
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
        inline List& setAttemptedCount(int32_t attemptedCount) { DARABONBA_PTR_SET_VALUE(attemptedCount_, attemptedCount) };


        // callerNumber Field Functions 
        bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
        void deleteCallerNumber() { this->callerNumber_ = nullptr;};
        inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
        inline List& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


        // campaignId Field Functions 
        bool hasCampaignId() const { return this->campaignId_ != nullptr;};
        void deleteCampaignId() { this->campaignId_ = nullptr;};
        inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
        inline List& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


        // campaignName Field Functions 
        bool hasCampaignName() const { return this->campaignName_ != nullptr;};
        void deleteCampaignName() { this->campaignName_ = nullptr;};
        inline string getCampaignName() const { DARABONBA_PTR_GET_DEFAULT(campaignName_, "") };
        inline List& setCampaignName(string campaignName) { DARABONBA_PTR_SET_VALUE(campaignName_, campaignName) };


        // caseId Field Functions 
        bool hasCaseId() const { return this->caseId_ != nullptr;};
        void deleteCaseId() { this->caseId_ = nullptr;};
        inline string getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
        inline List& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline List& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // customVariables Field Functions 
        bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
        void deleteCustomVariables() { this->customVariables_ = nullptr;};
        inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
        inline List& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


        // dialingTime Field Functions 
        bool hasDialingTime() const { return this->dialingTime_ != nullptr;};
        void deleteDialingTime() { this->dialingTime_ = nullptr;};
        inline int64_t getDialingTime() const { DARABONBA_PTR_GET_DEFAULT(dialingTime_, 0L) };
        inline List& setDialingTime(int64_t dialingTime) { DARABONBA_PTR_SET_VALUE(dialingTime_, dialingTime) };


        // dispositionCode Field Functions 
        bool hasDispositionCode() const { return this->dispositionCode_ != nullptr;};
        void deleteDispositionCode() { this->dispositionCode_ = nullptr;};
        inline string getDispositionCode() const { DARABONBA_PTR_GET_DEFAULT(dispositionCode_, "") };
        inline List& setDispositionCode(string dispositionCode) { DARABONBA_PTR_SET_VALUE(dispositionCode_, dispositionCode) };


        // dispositionReason Field Functions 
        bool hasDispositionReason() const { return this->dispositionReason_ != nullptr;};
        void deleteDispositionReason() { this->dispositionReason_ = nullptr;};
        inline string getDispositionReason() const { DARABONBA_PTR_GET_DEFAULT(dispositionReason_, "") };
        inline List& setDispositionReason(string dispositionReason) { DARABONBA_PTR_SET_VALUE(dispositionReason_, dispositionReason) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const vector<List::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<List::Labels>) };
        inline vector<List::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<List::Labels>) };
        inline List& setLabels(const vector<List::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline List& setLabels(vector<List::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // lastAttemptedTime Field Functions 
        bool hasLastAttemptedTime() const { return this->lastAttemptedTime_ != nullptr;};
        void deleteLastAttemptedTime() { this->lastAttemptedTime_ = nullptr;};
        inline int64_t getLastAttemptedTime() const { DARABONBA_PTR_GET_DEFAULT(lastAttemptedTime_, 0L) };
        inline List& setLastAttemptedTime(int64_t lastAttemptedTime) { DARABONBA_PTR_SET_VALUE(lastAttemptedTime_, lastAttemptedTime) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline List& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline List& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // referenceId Field Functions 
        bool hasReferenceId() const { return this->referenceId_ != nullptr;};
        void deleteReferenceId() { this->referenceId_ = nullptr;};
        inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
        inline List& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


        // ringingDuration Field Functions 
        bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
        void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
        inline int64_t getRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
        inline List& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


        // ringingTime Field Functions 
        bool hasRingingTime() const { return this->ringingTime_ != nullptr;};
        void deleteRingingTime() { this->ringingTime_ = nullptr;};
        inline int64_t getRingingTime() const { DARABONBA_PTR_GET_DEFAULT(ringingTime_, 0L) };
        inline List& setRingingTime(int64_t ringingTime) { DARABONBA_PTR_SET_VALUE(ringingTime_, ringingTime) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline List& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline List& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline List& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // talkTime Field Functions 
        bool hasTalkTime() const { return this->talkTime_ != nullptr;};
        void deleteTalkTime() { this->talkTime_ = nullptr;};
        inline int64_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
        inline List& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


      protected:
        // The number of dial attempts.
        shared_ptr<int32_t> attemptedCount_ {};
        // The caller number.
        shared_ptr<string> callerNumber_ {};
        // The outbound campaign ID.
        shared_ptr<string> campaignId_ {};
        // The name of the outbound campaign.
        shared_ptr<string> campaignName_ {};
        // The case ID.
        shared_ptr<string> caseId_ {};
        // The time when the case was created.
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
        shared_ptr<vector<List::Labels>> labels_ {};
        // The time of the last dial attempt.
        shared_ptr<int64_t> lastAttemptedTime_ {};
        // The called number.
        shared_ptr<string> phoneNumber_ {};
        // The priority of the case.
        shared_ptr<int32_t> priority_ {};
        // The reference ID.
        shared_ptr<string> referenceId_ {};
        // The ringing duration.
        shared_ptr<int64_t> ringingDuration_ {};
        // The ringing time.
        shared_ptr<int64_t> ringingTime_ {};
        // The script ID.
        shared_ptr<string> scriptId_ {};
        // The name of the script.
        shared_ptr<string> scriptName_ {};
        // The session ID of the last call.
        shared_ptr<string> sessionId_ {};
        // The case state.
        shared_ptr<string> state_ {};
        // The talk time.
        shared_ptr<int64_t> talkTime_ {};
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
      // The list of cases.
      shared_ptr<vector<Data::List>> list_ {};
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCasesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCasesResponseBody::Data) };
    inline ListCasesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCasesResponseBody::Data) };
    inline ListCasesResponseBody& setData(const ListCasesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCasesResponseBody& setData(ListCasesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCasesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListCasesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListCasesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCasesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The paged data.
    shared_ptr<ListCasesResponseBody::Data> data_ {};
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
