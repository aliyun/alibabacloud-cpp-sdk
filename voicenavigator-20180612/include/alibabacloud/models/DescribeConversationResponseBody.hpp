// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(EffectiveAnswerCount, effectiveAnswerCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(TransferredToAgent, transferredToAgent_);
      DARABONBA_PTR_TO_JSON(UserUtteranceCount, userUtteranceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(EffectiveAnswerCount, effectiveAnswerCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(TransferredToAgent, transferredToAgent_);
      DARABONBA_PTR_FROM_JSON(UserUtteranceCount, userUtteranceCount_);
    };
    DescribeConversationResponseBody() = default ;
    DescribeConversationResponseBody(const DescribeConversationResponseBody &) = default ;
    DescribeConversationResponseBody(DescribeConversationResponseBody &&) = default ;
    DescribeConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConversationResponseBody() = default ;
    DescribeConversationResponseBody& operator=(const DescribeConversationResponseBody &) = default ;
    DescribeConversationResponseBody& operator=(DescribeConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->callingNumber_ == nullptr && this->conversationId_ == nullptr && this->effectiveAnswerCount_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr
        && this->skillGroupId_ == nullptr && this->transferredToAgent_ == nullptr && this->userUtteranceCount_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeConversationResponseBody& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline DescribeConversationResponseBody& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline DescribeConversationResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // effectiveAnswerCount Field Functions 
    bool hasEffectiveAnswerCount() const { return this->effectiveAnswerCount_ != nullptr;};
    void deleteEffectiveAnswerCount() { this->effectiveAnswerCount_ = nullptr;};
    inline int32_t getEffectiveAnswerCount() const { DARABONBA_PTR_GET_DEFAULT(effectiveAnswerCount_, 0) };
    inline DescribeConversationResponseBody& setEffectiveAnswerCount(int32_t effectiveAnswerCount) { DARABONBA_PTR_SET_VALUE(effectiveAnswerCount_, effectiveAnswerCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeConversationResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConversationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline DescribeConversationResponseBody& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // transferredToAgent Field Functions 
    bool hasTransferredToAgent() const { return this->transferredToAgent_ != nullptr;};
    void deleteTransferredToAgent() { this->transferredToAgent_ = nullptr;};
    inline bool getTransferredToAgent() const { DARABONBA_PTR_GET_DEFAULT(transferredToAgent_, false) };
    inline DescribeConversationResponseBody& setTransferredToAgent(bool transferredToAgent) { DARABONBA_PTR_SET_VALUE(transferredToAgent_, transferredToAgent) };


    // userUtteranceCount Field Functions 
    bool hasUserUtteranceCount() const { return this->userUtteranceCount_ != nullptr;};
    void deleteUserUtteranceCount() { this->userUtteranceCount_ = nullptr;};
    inline int32_t getUserUtteranceCount() const { DARABONBA_PTR_GET_DEFAULT(userUtteranceCount_, 0) };
    inline DescribeConversationResponseBody& setUserUtteranceCount(int32_t userUtteranceCount) { DARABONBA_PTR_SET_VALUE(userUtteranceCount_, userUtteranceCount) };


  protected:
    // The start time.
    shared_ptr<int64_t> beginTime_ {};
    // The calling number.
    shared_ptr<string> callingNumber_ {};
    // The conversation ID.
    shared_ptr<string> conversationId_ {};
    // The number of effective Q&A pairs.
    shared_ptr<int32_t> effectiveAnswerCount_ {};
    // The end time.
    shared_ptr<int64_t> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill group ID.
    shared_ptr<string> skillGroupId_ {};
    // Indicates whether the conversation was transferred to a human agent.
    shared_ptr<bool> transferredToAgent_ {};
    // The number of user utterances.
    shared_ptr<int32_t> userUtteranceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
