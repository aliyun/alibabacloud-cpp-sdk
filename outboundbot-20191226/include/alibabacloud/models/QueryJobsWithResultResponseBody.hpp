// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsWithResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(VariableNames, variableNames_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(VariableNames, variableNames_);
    };
    QueryJobsWithResultResponseBody() = default ;
    QueryJobsWithResultResponseBody(const QueryJobsWithResultResponseBody &) = default ;
    QueryJobsWithResultResponseBody(QueryJobsWithResultResponseBody &&) = default ;
    QueryJobsWithResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultResponseBody() = default ;
    QueryJobsWithResultResponseBody& operator=(const QueryJobsWithResultResponseBody &) = default ;
    QueryJobsWithResultResponseBody& operator=(QueryJobsWithResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ValueList, valueList_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->valueList_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Labels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // valueList Field Functions 
      bool hasValueList() const { return this->valueList_ != nullptr;};
      void deleteValueList() { this->valueList_ = nullptr;};
      inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
      inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
      inline Labels& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
      inline Labels& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> valueList_ {};
    };

    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      };
      Jobs() = default ;
      Jobs(const Jobs &) = default ;
      Jobs(Jobs &&) = default ;
      Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Jobs() = default ;
      Jobs& operator=(const Jobs &) = default ;
      Jobs& operator=(Jobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JobFailureReason, jobFailureReason_);
          DARABONBA_PTR_TO_JSON(LatestTask, latestTask_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusName, statusName_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JobFailureReason, jobFailureReason_);
          DARABONBA_PTR_FROM_JSON(LatestTask, latestTask_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
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
        class LatestTask : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LatestTask& obj) { 
            DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
            DARABONBA_PTR_TO_JSON(CallDurationDisplay, callDurationDisplay_);
            DARABONBA_PTR_TO_JSON(CallTime, callTime_);
            DARABONBA_PTR_TO_JSON(Contact, contact_);
            DARABONBA_PTR_TO_JSON(DialExceptionCodes, dialExceptionCodes_);
            DARABONBA_PTR_TO_JSON(Extras, extras_);
            DARABONBA_PTR_TO_JSON(HasAnswered, hasAnswered_);
            DARABONBA_PTR_TO_JSON(HasHangUpByRejection, hasHangUpByRejection_);
            DARABONBA_PTR_TO_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
            DARABONBA_PTR_TO_JSON(HasReachedEndOfFlow, hasReachedEndOfFlow_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StatusName, statusName_);
            DARABONBA_PTR_TO_JSON(TagHits, tagHits_);
            DARABONBA_PTR_TO_JSON(TaskEndReason, taskEndReason_);
          };
          friend void from_json(const Darabonba::Json& j, LatestTask& obj) { 
            DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
            DARABONBA_PTR_FROM_JSON(CallDurationDisplay, callDurationDisplay_);
            DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
            DARABONBA_PTR_FROM_JSON(Contact, contact_);
            DARABONBA_PTR_FROM_JSON(DialExceptionCodes, dialExceptionCodes_);
            DARABONBA_PTR_FROM_JSON(Extras, extras_);
            DARABONBA_PTR_FROM_JSON(HasAnswered, hasAnswered_);
            DARABONBA_PTR_FROM_JSON(HasHangUpByRejection, hasHangUpByRejection_);
            DARABONBA_PTR_FROM_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
            DARABONBA_PTR_FROM_JSON(HasReachedEndOfFlow, hasReachedEndOfFlow_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
            DARABONBA_PTR_FROM_JSON(TagHits, tagHits_);
            DARABONBA_PTR_FROM_JSON(TaskEndReason, taskEndReason_);
          };
          LatestTask() = default ;
          LatestTask(const LatestTask &) = default ;
          LatestTask(LatestTask &&) = default ;
          LatestTask(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LatestTask() = default ;
          LatestTask& operator=(const LatestTask &) = default ;
          LatestTask& operator=(LatestTask &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagHits : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagHits& obj) { 
              DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
              DARABONBA_PTR_TO_JSON(TagName, tagName_);
            };
            friend void from_json(const Darabonba::Json& j, TagHits& obj) { 
              DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
              DARABONBA_PTR_FROM_JSON(TagName, tagName_);
            };
            TagHits() = default ;
            TagHits(const TagHits &) = default ;
            TagHits(TagHits &&) = default ;
            TagHits(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagHits() = default ;
            TagHits& operator=(const TagHits &) = default ;
            TagHits& operator=(TagHits &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagGroup_ == nullptr
        && this->tagName_ == nullptr; };
            // tagGroup Field Functions 
            bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
            void deleteTagGroup() { this->tagGroup_ = nullptr;};
            inline string getTagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
            inline TagHits& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


            // tagName Field Functions 
            bool hasTagName() const { return this->tagName_ != nullptr;};
            void deleteTagName() { this->tagName_ = nullptr;};
            inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
            inline TagHits& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


          protected:
            shared_ptr<string> tagGroup_ {};
            shared_ptr<string> tagName_ {};
          };

          class Extras : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Extras& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Extras& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Extras() = default ;
            Extras(const Extras &) = default ;
            Extras(Extras &&) = default ;
            Extras(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Extras() = default ;
            Extras& operator=(const Extras &) = default ;
            Extras& operator=(Extras &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Extras& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Extras& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // Key
            shared_ptr<string> key_ {};
            // Value
            shared_ptr<string> value_ {};
          };

          class DialExceptionCodes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DialExceptionCodes& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Hint, hint_);
            };
            friend void from_json(const Darabonba::Json& j, DialExceptionCodes& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Hint, hint_);
            };
            DialExceptionCodes() = default ;
            DialExceptionCodes(const DialExceptionCodes &) = default ;
            DialExceptionCodes(DialExceptionCodes &&) = default ;
            DialExceptionCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DialExceptionCodes() = default ;
            DialExceptionCodes& operator=(const DialExceptionCodes &) = default ;
            DialExceptionCodes& operator=(DialExceptionCodes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->hint_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline DialExceptionCodes& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // hint Field Functions 
            bool hasHint() const { return this->hint_ != nullptr;};
            void deleteHint() { this->hint_ = nullptr;};
            inline string getHint() const { DARABONBA_PTR_GET_DEFAULT(hint_, "") };
            inline DialExceptionCodes& setHint(string hint) { DARABONBA_PTR_SET_VALUE(hint_, hint) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> hint_ {};
          };

          class Contact : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Contact& obj) { 
              DARABONBA_PTR_TO_JSON(Honorific, honorific_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(JobUuid, jobUuid_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
              DARABONBA_PTR_TO_JSON(PreferredPhoneNumber, preferredPhoneNumber_);
              DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
              DARABONBA_PTR_TO_JSON(Role, role_);
              DARABONBA_PTR_TO_JSON(Round, round_);
              DARABONBA_PTR_TO_JSON(State, state_);
            };
            friend void from_json(const Darabonba::Json& j, Contact& obj) { 
              DARABONBA_PTR_FROM_JSON(Honorific, honorific_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(JobUuid, jobUuid_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
              DARABONBA_PTR_FROM_JSON(PreferredPhoneNumber, preferredPhoneNumber_);
              DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
              DARABONBA_PTR_FROM_JSON(Round, round_);
              DARABONBA_PTR_FROM_JSON(State, state_);
            };
            Contact() = default ;
            Contact(const Contact &) = default ;
            Contact(Contact &&) = default ;
            Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Contact() = default ;
            Contact& operator=(const Contact &) = default ;
            Contact& operator=(Contact &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->honorific_ == nullptr
        && this->id_ == nullptr && this->jobUuid_ == nullptr && this->name_ == nullptr && this->phoneNumber_ == nullptr && this->preferredPhoneNumber_ == nullptr
        && this->referenceId_ == nullptr && this->role_ == nullptr && this->round_ == nullptr && this->state_ == nullptr; };
            // honorific Field Functions 
            bool hasHonorific() const { return this->honorific_ != nullptr;};
            void deleteHonorific() { this->honorific_ = nullptr;};
            inline string getHonorific() const { DARABONBA_PTR_GET_DEFAULT(honorific_, "") };
            inline Contact& setHonorific(string honorific) { DARABONBA_PTR_SET_VALUE(honorific_, honorific) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Contact& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // jobUuid Field Functions 
            bool hasJobUuid() const { return this->jobUuid_ != nullptr;};
            void deleteJobUuid() { this->jobUuid_ = nullptr;};
            inline string getJobUuid() const { DARABONBA_PTR_GET_DEFAULT(jobUuid_, "") };
            inline Contact& setJobUuid(string jobUuid) { DARABONBA_PTR_SET_VALUE(jobUuid_, jobUuid) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Contact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // phoneNumber Field Functions 
            bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
            void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
            inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
            inline Contact& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


            // preferredPhoneNumber Field Functions 
            bool hasPreferredPhoneNumber() const { return this->preferredPhoneNumber_ != nullptr;};
            void deletePreferredPhoneNumber() { this->preferredPhoneNumber_ = nullptr;};
            inline string getPreferredPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(preferredPhoneNumber_, "") };
            inline Contact& setPreferredPhoneNumber(string preferredPhoneNumber) { DARABONBA_PTR_SET_VALUE(preferredPhoneNumber_, preferredPhoneNumber) };


            // referenceId Field Functions 
            bool hasReferenceId() const { return this->referenceId_ != nullptr;};
            void deleteReferenceId() { this->referenceId_ = nullptr;};
            inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
            inline Contact& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline Contact& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // round Field Functions 
            bool hasRound() const { return this->round_ != nullptr;};
            void deleteRound() { this->round_ = nullptr;};
            inline int32_t getRound() const { DARABONBA_PTR_GET_DEFAULT(round_, 0) };
            inline Contact& setRound(int32_t round) { DARABONBA_PTR_SET_VALUE(round_, round) };


            // state Field Functions 
            bool hasState() const { return this->state_ != nullptr;};
            void deleteState() { this->state_ = nullptr;};
            inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
            inline Contact& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          protected:
            shared_ptr<string> honorific_ {};
            shared_ptr<string> id_ {};
            shared_ptr<string> jobUuid_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> phoneNumber_ {};
            shared_ptr<string> preferredPhoneNumber_ {};
            shared_ptr<string> referenceId_ {};
            shared_ptr<string> role_ {};
            shared_ptr<int32_t> round_ {};
            shared_ptr<string> state_ {};
          };

          virtual bool empty() const override { return this->callDuration_ == nullptr
        && this->callDurationDisplay_ == nullptr && this->callTime_ == nullptr && this->contact_ == nullptr && this->dialExceptionCodes_ == nullptr && this->extras_ == nullptr
        && this->hasAnswered_ == nullptr && this->hasHangUpByRejection_ == nullptr && this->hasLastPlaybackCompleted_ == nullptr && this->hasReachedEndOfFlow_ == nullptr && this->status_ == nullptr
        && this->statusName_ == nullptr && this->tagHits_ == nullptr && this->taskEndReason_ == nullptr; };
          // callDuration Field Functions 
          bool hasCallDuration() const { return this->callDuration_ != nullptr;};
          void deleteCallDuration() { this->callDuration_ = nullptr;};
          inline int32_t getCallDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, 0) };
          inline LatestTask& setCallDuration(int32_t callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


          // callDurationDisplay Field Functions 
          bool hasCallDurationDisplay() const { return this->callDurationDisplay_ != nullptr;};
          void deleteCallDurationDisplay() { this->callDurationDisplay_ = nullptr;};
          inline string getCallDurationDisplay() const { DARABONBA_PTR_GET_DEFAULT(callDurationDisplay_, "") };
          inline LatestTask& setCallDurationDisplay(string callDurationDisplay) { DARABONBA_PTR_SET_VALUE(callDurationDisplay_, callDurationDisplay) };


          // callTime Field Functions 
          bool hasCallTime() const { return this->callTime_ != nullptr;};
          void deleteCallTime() { this->callTime_ = nullptr;};
          inline int64_t getCallTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, 0L) };
          inline LatestTask& setCallTime(int64_t callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


          // contact Field Functions 
          bool hasContact() const { return this->contact_ != nullptr;};
          void deleteContact() { this->contact_ = nullptr;};
          inline const LatestTask::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, LatestTask::Contact) };
          inline LatestTask::Contact getContact() { DARABONBA_PTR_GET(contact_, LatestTask::Contact) };
          inline LatestTask& setContact(const LatestTask::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
          inline LatestTask& setContact(LatestTask::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


          // dialExceptionCodes Field Functions 
          bool hasDialExceptionCodes() const { return this->dialExceptionCodes_ != nullptr;};
          void deleteDialExceptionCodes() { this->dialExceptionCodes_ = nullptr;};
          inline const vector<LatestTask::DialExceptionCodes> & getDialExceptionCodes() const { DARABONBA_PTR_GET_CONST(dialExceptionCodes_, vector<LatestTask::DialExceptionCodes>) };
          inline vector<LatestTask::DialExceptionCodes> getDialExceptionCodes() { DARABONBA_PTR_GET(dialExceptionCodes_, vector<LatestTask::DialExceptionCodes>) };
          inline LatestTask& setDialExceptionCodes(const vector<LatestTask::DialExceptionCodes> & dialExceptionCodes) { DARABONBA_PTR_SET_VALUE(dialExceptionCodes_, dialExceptionCodes) };
          inline LatestTask& setDialExceptionCodes(vector<LatestTask::DialExceptionCodes> && dialExceptionCodes) { DARABONBA_PTR_SET_RVALUE(dialExceptionCodes_, dialExceptionCodes) };


          // extras Field Functions 
          bool hasExtras() const { return this->extras_ != nullptr;};
          void deleteExtras() { this->extras_ = nullptr;};
          inline const vector<LatestTask::Extras> & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, vector<LatestTask::Extras>) };
          inline vector<LatestTask::Extras> getExtras() { DARABONBA_PTR_GET(extras_, vector<LatestTask::Extras>) };
          inline LatestTask& setExtras(const vector<LatestTask::Extras> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
          inline LatestTask& setExtras(vector<LatestTask::Extras> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


          // hasAnswered Field Functions 
          bool hasHasAnswered() const { return this->hasAnswered_ != nullptr;};
          void deleteHasAnswered() { this->hasAnswered_ = nullptr;};
          inline bool getHasAnswered() const { DARABONBA_PTR_GET_DEFAULT(hasAnswered_, false) };
          inline LatestTask& setHasAnswered(bool hasAnswered) { DARABONBA_PTR_SET_VALUE(hasAnswered_, hasAnswered) };


          // hasHangUpByRejection Field Functions 
          bool hasHasHangUpByRejection() const { return this->hasHangUpByRejection_ != nullptr;};
          void deleteHasHangUpByRejection() { this->hasHangUpByRejection_ = nullptr;};
          inline bool getHasHangUpByRejection() const { DARABONBA_PTR_GET_DEFAULT(hasHangUpByRejection_, false) };
          inline LatestTask& setHasHangUpByRejection(bool hasHangUpByRejection) { DARABONBA_PTR_SET_VALUE(hasHangUpByRejection_, hasHangUpByRejection) };


          // hasLastPlaybackCompleted Field Functions 
          bool hasHasLastPlaybackCompleted() const { return this->hasLastPlaybackCompleted_ != nullptr;};
          void deleteHasLastPlaybackCompleted() { this->hasLastPlaybackCompleted_ = nullptr;};
          inline bool getHasLastPlaybackCompleted() const { DARABONBA_PTR_GET_DEFAULT(hasLastPlaybackCompleted_, false) };
          inline LatestTask& setHasLastPlaybackCompleted(bool hasLastPlaybackCompleted) { DARABONBA_PTR_SET_VALUE(hasLastPlaybackCompleted_, hasLastPlaybackCompleted) };


          // hasReachedEndOfFlow Field Functions 
          bool hasHasReachedEndOfFlow() const { return this->hasReachedEndOfFlow_ != nullptr;};
          void deleteHasReachedEndOfFlow() { this->hasReachedEndOfFlow_ = nullptr;};
          inline bool getHasReachedEndOfFlow() const { DARABONBA_PTR_GET_DEFAULT(hasReachedEndOfFlow_, false) };
          inline LatestTask& setHasReachedEndOfFlow(bool hasReachedEndOfFlow) { DARABONBA_PTR_SET_VALUE(hasReachedEndOfFlow_, hasReachedEndOfFlow) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline LatestTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusName Field Functions 
          bool hasStatusName() const { return this->statusName_ != nullptr;};
          void deleteStatusName() { this->statusName_ = nullptr;};
          inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
          inline LatestTask& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


          // tagHits Field Functions 
          bool hasTagHits() const { return this->tagHits_ != nullptr;};
          void deleteTagHits() { this->tagHits_ = nullptr;};
          inline const vector<LatestTask::TagHits> & getTagHits() const { DARABONBA_PTR_GET_CONST(tagHits_, vector<LatestTask::TagHits>) };
          inline vector<LatestTask::TagHits> getTagHits() { DARABONBA_PTR_GET(tagHits_, vector<LatestTask::TagHits>) };
          inline LatestTask& setTagHits(const vector<LatestTask::TagHits> & tagHits) { DARABONBA_PTR_SET_VALUE(tagHits_, tagHits) };
          inline LatestTask& setTagHits(vector<LatestTask::TagHits> && tagHits) { DARABONBA_PTR_SET_RVALUE(tagHits_, tagHits) };


          // taskEndReason Field Functions 
          bool hasTaskEndReason() const { return this->taskEndReason_ != nullptr;};
          void deleteTaskEndReason() { this->taskEndReason_ = nullptr;};
          inline string getTaskEndReason() const { DARABONBA_PTR_GET_DEFAULT(taskEndReason_, "") };
          inline LatestTask& setTaskEndReason(string taskEndReason) { DARABONBA_PTR_SET_VALUE(taskEndReason_, taskEndReason) };


        protected:
          shared_ptr<int32_t> callDuration_ {};
          shared_ptr<string> callDurationDisplay_ {};
          shared_ptr<int64_t> callTime_ {};
          shared_ptr<LatestTask::Contact> contact_ {};
          shared_ptr<vector<LatestTask::DialExceptionCodes>> dialExceptionCodes_ {};
          shared_ptr<vector<LatestTask::Extras>> extras_ {};
          shared_ptr<bool> hasAnswered_ {};
          shared_ptr<bool> hasHangUpByRejection_ {};
          shared_ptr<bool> hasLastPlaybackCompleted_ {};
          shared_ptr<bool> hasReachedEndOfFlow_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> statusName_ {};
          shared_ptr<vector<LatestTask::TagHits>> tagHits_ {};
          shared_ptr<string> taskEndReason_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->jobFailureReason_ == nullptr && this->latestTask_ == nullptr && this->status_ == nullptr && this->statusName_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jobFailureReason Field Functions 
        bool hasJobFailureReason() const { return this->jobFailureReason_ != nullptr;};
        void deleteJobFailureReason() { this->jobFailureReason_ = nullptr;};
        inline string getJobFailureReason() const { DARABONBA_PTR_GET_DEFAULT(jobFailureReason_, "") };
        inline List& setJobFailureReason(string jobFailureReason) { DARABONBA_PTR_SET_VALUE(jobFailureReason_, jobFailureReason) };


        // latestTask Field Functions 
        bool hasLatestTask() const { return this->latestTask_ != nullptr;};
        void deleteLatestTask() { this->latestTask_ = nullptr;};
        inline const List::LatestTask & getLatestTask() const { DARABONBA_PTR_GET_CONST(latestTask_, List::LatestTask) };
        inline List::LatestTask getLatestTask() { DARABONBA_PTR_GET(latestTask_, List::LatestTask) };
        inline List& setLatestTask(const List::LatestTask & latestTask) { DARABONBA_PTR_SET_VALUE(latestTask_, latestTask) };
        inline List& setLatestTask(List::LatestTask && latestTask) { DARABONBA_PTR_SET_RVALUE(latestTask_, latestTask) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusName Field Functions 
        bool hasStatusName() const { return this->statusName_ != nullptr;};
        void deleteStatusName() { this->statusName_ = nullptr;};
        inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
        inline List& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> jobFailureReason_ {};
        shared_ptr<List::LatestTask> latestTask_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> statusName_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageCount_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->rowCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Jobs::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Jobs::List>) };
      inline vector<Jobs::List> getList() { DARABONBA_PTR_GET(list_, vector<Jobs::List>) };
      inline Jobs& setList(const vector<Jobs::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Jobs& setList(vector<Jobs::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline Jobs& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Jobs& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Jobs& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // rowCount Field Functions 
      bool hasRowCount() const { return this->rowCount_ != nullptr;};
      void deleteRowCount() { this->rowCount_ = nullptr;};
      inline int32_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0) };
      inline Jobs& setRowCount(int32_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    protected:
      shared_ptr<vector<Jobs::List>> list_ {};
      shared_ptr<int32_t> pageCount_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> rowCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobs_ == nullptr && this->labels_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->variableNames_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryJobsWithResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryJobsWithResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const QueryJobsWithResultResponseBody::Jobs & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, QueryJobsWithResultResponseBody::Jobs) };
    inline QueryJobsWithResultResponseBody::Jobs getJobs() { DARABONBA_PTR_GET(jobs_, QueryJobsWithResultResponseBody::Jobs) };
    inline QueryJobsWithResultResponseBody& setJobs(const QueryJobsWithResultResponseBody::Jobs & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline QueryJobsWithResultResponseBody& setJobs(QueryJobsWithResultResponseBody::Jobs && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<QueryJobsWithResultResponseBody::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<QueryJobsWithResultResponseBody::Labels>) };
    inline vector<QueryJobsWithResultResponseBody::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<QueryJobsWithResultResponseBody::Labels>) };
    inline QueryJobsWithResultResponseBody& setLabels(const vector<QueryJobsWithResultResponseBody::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline QueryJobsWithResultResponseBody& setLabels(vector<QueryJobsWithResultResponseBody::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryJobsWithResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryJobsWithResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryJobsWithResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // variableNames Field Functions 
    bool hasVariableNames() const { return this->variableNames_ != nullptr;};
    void deleteVariableNames() { this->variableNames_ = nullptr;};
    inline const vector<string> & getVariableNames() const { DARABONBA_PTR_GET_CONST(variableNames_, vector<string>) };
    inline vector<string> getVariableNames() { DARABONBA_PTR_GET(variableNames_, vector<string>) };
    inline QueryJobsWithResultResponseBody& setVariableNames(const vector<string> & variableNames) { DARABONBA_PTR_SET_VALUE(variableNames_, variableNames) };
    inline QueryJobsWithResultResponseBody& setVariableNames(vector<string> && variableNames) { DARABONBA_PTR_SET_RVALUE(variableNames_, variableNames) };


  protected:
    // Code
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<QueryJobsWithResultResponseBody::Jobs> jobs_ {};
    shared_ptr<vector<QueryJobsWithResultResponseBody::Labels>> labels_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<string>> variableNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
