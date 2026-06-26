// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERSATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERSATIONSRESPONSEBODY_HPP_
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
  class QueryConversationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConversationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Conversations, conversations_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConversationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Conversations, conversations_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryConversationsResponseBody() = default ;
    QueryConversationsResponseBody(const QueryConversationsResponseBody &) = default ;
    QueryConversationsResponseBody(QueryConversationsResponseBody &&) = default ;
    QueryConversationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConversationsResponseBody() = default ;
    QueryConversationsResponseBody& operator=(const QueryConversationsResponseBody &) = default ;
    QueryConversationsResponseBody& operator=(QueryConversationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Conversations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conversations& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(EffectiveAnswerCount, effectiveAnswerCount_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_TO_JSON(TransferredToAgent, transferredToAgent_);
        DARABONBA_PTR_TO_JSON(UserUtteranceCount, userUtteranceCount_);
      };
      friend void from_json(const Darabonba::Json& j, Conversations& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(EffectiveAnswerCount, effectiveAnswerCount_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_FROM_JSON(TransferredToAgent, transferredToAgent_);
        DARABONBA_PTR_FROM_JSON(UserUtteranceCount, userUtteranceCount_);
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
      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->callingNumber_ == nullptr && this->conversationId_ == nullptr && this->effectiveAnswerCount_ == nullptr && this->endTime_ == nullptr && this->skillGroupId_ == nullptr
        && this->transferredToAgent_ == nullptr && this->userUtteranceCount_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Conversations& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


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


      // effectiveAnswerCount Field Functions 
      bool hasEffectiveAnswerCount() const { return this->effectiveAnswerCount_ != nullptr;};
      void deleteEffectiveAnswerCount() { this->effectiveAnswerCount_ = nullptr;};
      inline int32_t getEffectiveAnswerCount() const { DARABONBA_PTR_GET_DEFAULT(effectiveAnswerCount_, 0) };
      inline Conversations& setEffectiveAnswerCount(int32_t effectiveAnswerCount) { DARABONBA_PTR_SET_VALUE(effectiveAnswerCount_, effectiveAnswerCount) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Conversations& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // skillGroupId Field Functions 
      bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
      void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
      inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
      inline Conversations& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


      // transferredToAgent Field Functions 
      bool hasTransferredToAgent() const { return this->transferredToAgent_ != nullptr;};
      void deleteTransferredToAgent() { this->transferredToAgent_ = nullptr;};
      inline bool getTransferredToAgent() const { DARABONBA_PTR_GET_DEFAULT(transferredToAgent_, false) };
      inline Conversations& setTransferredToAgent(bool transferredToAgent) { DARABONBA_PTR_SET_VALUE(transferredToAgent_, transferredToAgent) };


      // userUtteranceCount Field Functions 
      bool hasUserUtteranceCount() const { return this->userUtteranceCount_ != nullptr;};
      void deleteUserUtteranceCount() { this->userUtteranceCount_ = nullptr;};
      inline int32_t getUserUtteranceCount() const { DARABONBA_PTR_GET_DEFAULT(userUtteranceCount_, 0) };
      inline Conversations& setUserUtteranceCount(int32_t userUtteranceCount) { DARABONBA_PTR_SET_VALUE(userUtteranceCount_, userUtteranceCount) };


    protected:
      // The start time. This value is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> beginTime_ {};
      // The calling number.
      shared_ptr<string> callingNumber_ {};
      // The conversation ID.
      shared_ptr<string> conversationId_ {};
      // The effective answer count.
      shared_ptr<int32_t> effectiveAnswerCount_ {};
      // The end time. This value is a Unix timestamp in milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The ID of the skill group.
      shared_ptr<string> skillGroupId_ {};
      // Whether the conversation was transferred to an agent.
      shared_ptr<bool> transferredToAgent_ {};
      // The user utterance count.
      shared_ptr<int32_t> userUtteranceCount_ {};
    };

    virtual bool empty() const override { return this->conversations_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // conversations Field Functions 
    bool hasConversations() const { return this->conversations_ != nullptr;};
    void deleteConversations() { this->conversations_ = nullptr;};
    inline const vector<QueryConversationsResponseBody::Conversations> & getConversations() const { DARABONBA_PTR_GET_CONST(conversations_, vector<QueryConversationsResponseBody::Conversations>) };
    inline vector<QueryConversationsResponseBody::Conversations> getConversations() { DARABONBA_PTR_GET(conversations_, vector<QueryConversationsResponseBody::Conversations>) };
    inline QueryConversationsResponseBody& setConversations(const vector<QueryConversationsResponseBody::Conversations> & conversations) { DARABONBA_PTR_SET_VALUE(conversations_, conversations) };
    inline QueryConversationsResponseBody& setConversations(vector<QueryConversationsResponseBody::Conversations> && conversations) { DARABONBA_PTR_SET_RVALUE(conversations_, conversations) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryConversationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryConversationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConversationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryConversationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The conversation list.
    shared_ptr<vector<QueryConversationsResponseBody::Conversations>> conversations_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total count of conversation records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
