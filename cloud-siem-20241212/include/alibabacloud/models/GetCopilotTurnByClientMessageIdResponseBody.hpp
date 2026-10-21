// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOPILOTTURNBYCLIENTMESSAGEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOPILOTTURNBYCLIENTMESSAGEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetCopilotTurnByClientMessageIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCopilotTurnByClientMessageIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Turn, turn_);
    };
    friend void from_json(const Darabonba::Json& j, GetCopilotTurnByClientMessageIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Turn, turn_);
    };
    GetCopilotTurnByClientMessageIdResponseBody() = default ;
    GetCopilotTurnByClientMessageIdResponseBody(const GetCopilotTurnByClientMessageIdResponseBody &) = default ;
    GetCopilotTurnByClientMessageIdResponseBody(GetCopilotTurnByClientMessageIdResponseBody &&) = default ;
    GetCopilotTurnByClientMessageIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCopilotTurnByClientMessageIdResponseBody() = default ;
    GetCopilotTurnByClientMessageIdResponseBody& operator=(const GetCopilotTurnByClientMessageIdResponseBody &) = default ;
    GetCopilotTurnByClientMessageIdResponseBody& operator=(GetCopilotTurnByClientMessageIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Turn : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Turn& obj) { 
        DARABONBA_PTR_TO_JSON(ClientMessageId, clientMessageId_);
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Feedback, feedback_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(ModelId, modelId_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_TO_JSON(RetryAllowed, retryAllowed_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TurnId, turnId_);
      };
      friend void from_json(const Darabonba::Json& j, Turn& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientMessageId, clientMessageId_);
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_FROM_JSON(RetryAllowed, retryAllowed_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TurnId, turnId_);
      };
      Turn() = default ;
      Turn(const Turn &) = default ;
      Turn(Turn &&) = default ;
      Turn(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Turn() = default ;
      Turn& operator=(const Turn &) = default ;
      Turn& operator=(Turn &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientMessageId_ == nullptr
        && this->conversationId_ == nullptr && this->createdAt_ == nullptr && this->feedback_ == nullptr && this->inputTokens_ == nullptr && this->modelId_ == nullptr
        && this->outputTokens_ == nullptr && this->reasoningTokens_ == nullptr && this->retryAllowed_ == nullptr && this->status_ == nullptr && this->turnId_ == nullptr; };
      // clientMessageId Field Functions 
      bool hasClientMessageId() const { return this->clientMessageId_ != nullptr;};
      void deleteClientMessageId() { this->clientMessageId_ = nullptr;};
      inline string getClientMessageId() const { DARABONBA_PTR_GET_DEFAULT(clientMessageId_, "") };
      inline Turn& setClientMessageId(string clientMessageId) { DARABONBA_PTR_SET_VALUE(clientMessageId_, clientMessageId) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Turn& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Turn& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // feedback Field Functions 
      bool hasFeedback() const { return this->feedback_ != nullptr;};
      void deleteFeedback() { this->feedback_ = nullptr;};
      inline int64_t getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, 0L) };
      inline Turn& setFeedback(int64_t feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
      inline Turn& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline Turn& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
      inline Turn& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // reasoningTokens Field Functions 
      bool hasReasoningTokens() const { return this->reasoningTokens_ != nullptr;};
      void deleteReasoningTokens() { this->reasoningTokens_ = nullptr;};
      inline int64_t getReasoningTokens() const { DARABONBA_PTR_GET_DEFAULT(reasoningTokens_, 0L) };
      inline Turn& setReasoningTokens(int64_t reasoningTokens) { DARABONBA_PTR_SET_VALUE(reasoningTokens_, reasoningTokens) };


      // retryAllowed Field Functions 
      bool hasRetryAllowed() const { return this->retryAllowed_ != nullptr;};
      void deleteRetryAllowed() { this->retryAllowed_ = nullptr;};
      inline bool getRetryAllowed() const { DARABONBA_PTR_GET_DEFAULT(retryAllowed_, false) };
      inline Turn& setRetryAllowed(bool retryAllowed) { DARABONBA_PTR_SET_VALUE(retryAllowed_, retryAllowed) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Turn& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // turnId Field Functions 
      bool hasTurnId() const { return this->turnId_ != nullptr;};
      void deleteTurnId() { this->turnId_ = nullptr;};
      inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
      inline Turn& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


    protected:
      // The client message ID.
      shared_ptr<string> clientMessageId_ {};
      // The conversation ID.
      shared_ptr<string> conversationId_ {};
      // The creation time. The format is YYYY-MM-DDTHH:mm:ss.
      shared_ptr<string> createdAt_ {};
      // The feedback.
      shared_ptr<int64_t> feedback_ {};
      // The number of input tokens.
      shared_ptr<int64_t> inputTokens_ {};
      // The model ID.
      shared_ptr<string> modelId_ {};
      // The number of output tokens.
      shared_ptr<int64_t> outputTokens_ {};
      // The number of reasoning tokens generated by the model.
      shared_ptr<int64_t> reasoningTokens_ {};
      // Specifies whether retries are allowed.
      shared_ptr<bool> retryAllowed_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The primary key ID.
      shared_ptr<string> turnId_ {};
    };

    virtual bool empty() const override { return this->apiVersion_ == nullptr
        && this->requestId_ == nullptr && this->turn_ == nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GetCopilotTurnByClientMessageIdResponseBody& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCopilotTurnByClientMessageIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // turn Field Functions 
    bool hasTurn() const { return this->turn_ != nullptr;};
    void deleteTurn() { this->turn_ = nullptr;};
    inline const GetCopilotTurnByClientMessageIdResponseBody::Turn & getTurn() const { DARABONBA_PTR_GET_CONST(turn_, GetCopilotTurnByClientMessageIdResponseBody::Turn) };
    inline GetCopilotTurnByClientMessageIdResponseBody::Turn getTurn() { DARABONBA_PTR_GET(turn_, GetCopilotTurnByClientMessageIdResponseBody::Turn) };
    inline GetCopilotTurnByClientMessageIdResponseBody& setTurn(const GetCopilotTurnByClientMessageIdResponseBody::Turn & turn) { DARABONBA_PTR_SET_VALUE(turn_, turn) };
    inline GetCopilotTurnByClientMessageIdResponseBody& setTurn(GetCopilotTurnByClientMessageIdResponseBody::Turn && turn) { DARABONBA_PTR_SET_RVALUE(turn_, turn) };


  protected:
    // The API version.
    shared_ptr<string> apiVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The security operations agent conversation turn.
    shared_ptr<GetCopilotTurnByClientMessageIdResponseBody::Turn> turn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
