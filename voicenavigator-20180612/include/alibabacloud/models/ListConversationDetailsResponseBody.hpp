// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONVERSATIONDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONVERSATIONDETAILSRESPONSEBODY_HPP_
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
  class ListConversationDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConversationDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationDetails, conversationDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConversationDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationDetails, conversationDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConversationDetailsResponseBody() = default ;
    ListConversationDetailsResponseBody(const ListConversationDetailsResponseBody &) = default ;
    ListConversationDetailsResponseBody(ListConversationDetailsResponseBody &&) = default ;
    ListConversationDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConversationDetailsResponseBody() = default ;
    ListConversationDetailsResponseBody& operator=(const ListConversationDetailsResponseBody &) = default ;
    ListConversationDetailsResponseBody& operator=(ListConversationDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConversationDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversationDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(SequenceId, sequenceId_);
        DARABONBA_PTR_TO_JSON(Speaker, speaker_);
        DARABONBA_PTR_TO_JSON(Utterance, utterance_);
      };
      friend void from_json(const Darabonba::Json& j, ConversationDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(SequenceId, sequenceId_);
        DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
        DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
      };
      ConversationDetails() = default ;
      ConversationDetails(const ConversationDetails &) = default ;
      ConversationDetails(ConversationDetails &&) = default ;
      ConversationDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversationDetails() = default ;
      ConversationDetails& operator=(const ConversationDetails &) = default ;
      ConversationDetails& operator=(ConversationDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionParams_ == nullptr && this->conversationId_ == nullptr && this->createTime_ == nullptr && this->sequenceId_ == nullptr && this->speaker_ == nullptr
        && this->utterance_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ConversationDetails& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionParams Field Functions 
      bool hasActionParams() const { return this->actionParams_ != nullptr;};
      void deleteActionParams() { this->actionParams_ = nullptr;};
      inline string getActionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
      inline ConversationDetails& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline ConversationDetails& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ConversationDetails& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // sequenceId Field Functions 
      bool hasSequenceId() const { return this->sequenceId_ != nullptr;};
      void deleteSequenceId() { this->sequenceId_ = nullptr;};
      inline string getSequenceId() const { DARABONBA_PTR_GET_DEFAULT(sequenceId_, "") };
      inline ConversationDetails& setSequenceId(string sequenceId) { DARABONBA_PTR_SET_VALUE(sequenceId_, sequenceId) };


      // speaker Field Functions 
      bool hasSpeaker() const { return this->speaker_ != nullptr;};
      void deleteSpeaker() { this->speaker_ = nullptr;};
      inline string getSpeaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
      inline ConversationDetails& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


      // utterance Field Functions 
      bool hasUtterance() const { return this->utterance_ != nullptr;};
      void deleteUtterance() { this->utterance_ = nullptr;};
      inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
      inline ConversationDetails& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


    protected:
      // The action performed during the turn.
      shared_ptr<string> action_ {};
      // The action parameters.
      shared_ptr<string> actionParams_ {};
      // The conversation ID.
      shared_ptr<string> conversationId_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The sequence ID of the conversational turn.
      shared_ptr<string> sequenceId_ {};
      // The speaker. Valid values: `customer` and `chatbot`.
      shared_ptr<string> speaker_ {};
      // The speaker\\"s utterance.
      shared_ptr<string> utterance_ {};
    };

    virtual bool empty() const override { return this->conversationDetails_ == nullptr
        && this->requestId_ == nullptr; };
    // conversationDetails Field Functions 
    bool hasConversationDetails() const { return this->conversationDetails_ != nullptr;};
    void deleteConversationDetails() { this->conversationDetails_ = nullptr;};
    inline const vector<ListConversationDetailsResponseBody::ConversationDetails> & getConversationDetails() const { DARABONBA_PTR_GET_CONST(conversationDetails_, vector<ListConversationDetailsResponseBody::ConversationDetails>) };
    inline vector<ListConversationDetailsResponseBody::ConversationDetails> getConversationDetails() { DARABONBA_PTR_GET(conversationDetails_, vector<ListConversationDetailsResponseBody::ConversationDetails>) };
    inline ListConversationDetailsResponseBody& setConversationDetails(const vector<ListConversationDetailsResponseBody::ConversationDetails> & conversationDetails) { DARABONBA_PTR_SET_VALUE(conversationDetails_, conversationDetails) };
    inline ListConversationDetailsResponseBody& setConversationDetails(vector<ListConversationDetailsResponseBody::ConversationDetails> && conversationDetails) { DARABONBA_PTR_SET_RVALUE(conversationDetails_, conversationDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConversationDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of conversation details.
    shared_ptr<vector<ListConversationDetailsResponseBody::ConversationDetails>> conversationDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
