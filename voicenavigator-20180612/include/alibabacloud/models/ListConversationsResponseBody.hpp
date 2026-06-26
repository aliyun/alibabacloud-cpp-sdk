// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONVERSATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONVERSATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ListConversationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConversationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Conversations, conversations_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListConversationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Conversations, conversations_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListConversationsResponseBody() = default ;
    ListConversationsResponseBody(const ListConversationsResponseBody &) = default ;
    ListConversationsResponseBody(ListConversationsResponseBody &&) = default ;
    ListConversationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConversationsResponseBody() = default ;
    ListConversationsResponseBody& operator=(const ListConversationsResponseBody &) = default ;
    ListConversationsResponseBody& operator=(ListConversationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Conversations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conversations& obj) { 
        DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
        DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(DsReport, dsReport_);
        DARABONBA_PTR_TO_JSON(DsReportTitles, dsReportTitles_);
        DARABONBA_PTR_TO_JSON(EndReason, endReason_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
        DARABONBA_PTR_TO_JSON(HasToAgent, hasToAgent_);
        DARABONBA_PTR_TO_JSON(Rounds, rounds_);
        DARABONBA_PTR_TO_JSON(SandBox, sandBox_);
        DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Conversations& obj) { 
        DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
        DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(DsReport, dsReport_);
        DARABONBA_PTR_FROM_JSON(DsReportTitles, dsReportTitles_);
        DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
        DARABONBA_PTR_FROM_JSON(HasToAgent, hasToAgent_);
        DARABONBA_PTR_FROM_JSON(Rounds, rounds_);
        DARABONBA_PTR_FROM_JSON(SandBox, sandBox_);
        DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Conversations() = default ;
      Conversations(const Conversations &) = default ;
      Conversations(Conversations &&) = default ;
      Conversations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conversations() = default ;
      Conversations& operator=(const Conversations &) = default ;
      Conversations& operator=(Conversations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->calledNumber_ == nullptr
        && this->callingNumber_ == nullptr && this->conversationId_ == nullptr && this->dsReport_ == nullptr && this->dsReportTitles_ == nullptr && this->endReason_ == nullptr
        && this->endTime_ == nullptr && this->hasLastPlaybackCompleted_ == nullptr && this->hasToAgent_ == nullptr && this->rounds_ == nullptr && this->sandBox_ == nullptr
        && this->skillGroup_ == nullptr && this->startTime_ == nullptr; };
      // calledNumber Field Functions 
      bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
      void deleteCalledNumber() { this->calledNumber_ = nullptr;};
      inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
      inline Conversations& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


      // callingNumber Field Functions 
      bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
      void deleteCallingNumber() { this->callingNumber_ = nullptr;};
      inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
      inline Conversations& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Conversations& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // dsReport Field Functions 
      bool hasDsReport() const { return this->dsReport_ != nullptr;};
      void deleteDsReport() { this->dsReport_ = nullptr;};
      inline string getDsReport() const { DARABONBA_PTR_GET_DEFAULT(dsReport_, "") };
      inline Conversations& setDsReport(string dsReport) { DARABONBA_PTR_SET_VALUE(dsReport_, dsReport) };


      // dsReportTitles Field Functions 
      bool hasDsReportTitles() const { return this->dsReportTitles_ != nullptr;};
      void deleteDsReportTitles() { this->dsReportTitles_ = nullptr;};
      inline const vector<string> & getDsReportTitles() const { DARABONBA_PTR_GET_CONST(dsReportTitles_, vector<string>) };
      inline vector<string> getDsReportTitles() { DARABONBA_PTR_GET(dsReportTitles_, vector<string>) };
      inline Conversations& setDsReportTitles(const vector<string> & dsReportTitles) { DARABONBA_PTR_SET_VALUE(dsReportTitles_, dsReportTitles) };
      inline Conversations& setDsReportTitles(vector<string> && dsReportTitles) { DARABONBA_PTR_SET_RVALUE(dsReportTitles_, dsReportTitles) };


      // endReason Field Functions 
      bool hasEndReason() const { return this->endReason_ != nullptr;};
      void deleteEndReason() { this->endReason_ = nullptr;};
      inline int32_t getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, 0) };
      inline Conversations& setEndReason(int32_t endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Conversations& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // hasLastPlaybackCompleted Field Functions 
      bool hasHasLastPlaybackCompleted() const { return this->hasLastPlaybackCompleted_ != nullptr;};
      void deleteHasLastPlaybackCompleted() { this->hasLastPlaybackCompleted_ = nullptr;};
      inline bool getHasLastPlaybackCompleted() const { DARABONBA_PTR_GET_DEFAULT(hasLastPlaybackCompleted_, false) };
      inline Conversations& setHasLastPlaybackCompleted(bool hasLastPlaybackCompleted) { DARABONBA_PTR_SET_VALUE(hasLastPlaybackCompleted_, hasLastPlaybackCompleted) };


      // hasToAgent Field Functions 
      bool hasHasToAgent() const { return this->hasToAgent_ != nullptr;};
      void deleteHasToAgent() { this->hasToAgent_ = nullptr;};
      inline bool getHasToAgent() const { DARABONBA_PTR_GET_DEFAULT(hasToAgent_, false) };
      inline Conversations& setHasToAgent(bool hasToAgent) { DARABONBA_PTR_SET_VALUE(hasToAgent_, hasToAgent) };


      // rounds Field Functions 
      bool hasRounds() const { return this->rounds_ != nullptr;};
      void deleteRounds() { this->rounds_ = nullptr;};
      inline int32_t getRounds() const { DARABONBA_PTR_GET_DEFAULT(rounds_, 0) };
      inline Conversations& setRounds(int32_t rounds) { DARABONBA_PTR_SET_VALUE(rounds_, rounds) };


      // sandBox Field Functions 
      bool hasSandBox() const { return this->sandBox_ != nullptr;};
      void deleteSandBox() { this->sandBox_ = nullptr;};
      inline bool getSandBox() const { DARABONBA_PTR_GET_DEFAULT(sandBox_, false) };
      inline Conversations& setSandBox(bool sandBox) { DARABONBA_PTR_SET_VALUE(sandBox_, sandBox) };


      // skillGroup Field Functions 
      bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
      void deleteSkillGroup() { this->skillGroup_ = nullptr;};
      inline string getSkillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, "") };
      inline Conversations& setSkillGroup(string skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Conversations& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The called number.
      shared_ptr<string> calledNumber_ {};
      // The calling number.
      shared_ptr<string> callingNumber_ {};
      // The unique ID of the conversation.
      shared_ptr<string> conversationId_ {};
      shared_ptr<string> dsReport_ {};
      shared_ptr<vector<string>> dsReportTitles_ {};
      // The reason that the conversation ended. Valid values:<br>1: The conversation completed normally.<br>2: The bot hung up after a recognition failure.<br>3: The call was disconnected due to a silence timeout.<br>4: The user hung up after a recognition failure.<br>5: The user hung up for an unknown reason.<br>6: The call was transferred to an agent because an intent was matched.<br>7: The call was transferred to an agent due to a recognition failure.<br>8: No interaction from the user.<br>9: The call was interrupted by a system error.<br>10: The call was transferred to an IVR system because an intent was matched.<br>11: The call was transferred to an IVR system due to a recognition failure.<br><br><br><br><br><br><br><br><br><br><br>
      shared_ptr<int32_t> endReason_ {};
      // The end time of the conversation, represented as a Unix timestamp in milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // Indicates whether the final audio playback was completed before the call was disconnected.
      shared_ptr<bool> hasLastPlaybackCompleted_ {};
      // Indicates whether the conversation was transferred to an agent.
      shared_ptr<bool> hasToAgent_ {};
      // The number of rounds in the conversation.
      shared_ptr<int32_t> rounds_ {};
      // Indicates whether the conversation was run in a sandbox environment.
      shared_ptr<bool> sandBox_ {};
      // The ID of the skill group.
      shared_ptr<string> skillGroup_ {};
      // The start time of the conversation, represented as a Unix timestamp in milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->conversations_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // conversations Field Functions 
    bool hasConversations() const { return this->conversations_ != nullptr;};
    void deleteConversations() { this->conversations_ = nullptr;};
    inline const vector<ListConversationsResponseBody::Conversations> & getConversations() const { DARABONBA_PTR_GET_CONST(conversations_, vector<ListConversationsResponseBody::Conversations>) };
    inline vector<ListConversationsResponseBody::Conversations> getConversations() { DARABONBA_PTR_GET(conversations_, vector<ListConversationsResponseBody::Conversations>) };
    inline ListConversationsResponseBody& setConversations(const vector<ListConversationsResponseBody::Conversations> & conversations) { DARABONBA_PTR_SET_VALUE(conversations_, conversations) };
    inline ListConversationsResponseBody& setConversations(vector<ListConversationsResponseBody::Conversations> && conversations) { DARABONBA_PTR_SET_RVALUE(conversations_, conversations) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConversationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConversationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConversationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListConversationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of conversation objects.
    shared_ptr<vector<ListConversationsResponseBody::Conversations>> conversations_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of conversations.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
