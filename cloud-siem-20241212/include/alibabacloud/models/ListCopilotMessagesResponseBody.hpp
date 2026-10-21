// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOPILOTMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOPILOTMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListCopilotMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCopilotMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCopilotMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCopilotMessagesResponseBody() = default ;
    ListCopilotMessagesResponseBody(const ListCopilotMessagesResponseBody &) = default ;
    ListCopilotMessagesResponseBody(ListCopilotMessagesResponseBody &&) = default ;
    ListCopilotMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCopilotMessagesResponseBody() = default ;
    ListCopilotMessagesResponseBody& operator=(const ListCopilotMessagesResponseBody &) = default ;
    ListCopilotMessagesResponseBody& operator=(ListCopilotMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ClientMessageId, clientMessageId_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_PTR_TO_JSON(MessageSequence, messageSequence_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TurnId, turnId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientMessageId, clientMessageId_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_PTR_FROM_JSON(MessageSequence, messageSequence_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TurnId, turnId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientMessageId_ == nullptr
        && this->content_ == nullptr && this->createdAt_ == nullptr && this->messageId_ == nullptr && this->messageSequence_ == nullptr && this->role_ == nullptr
        && this->status_ == nullptr && this->turnId_ == nullptr; };
      // clientMessageId Field Functions 
      bool hasClientMessageId() const { return this->clientMessageId_ != nullptr;};
      void deleteClientMessageId() { this->clientMessageId_ = nullptr;};
      inline string getClientMessageId() const { DARABONBA_PTR_GET_DEFAULT(clientMessageId_, "") };
      inline Items& setClientMessageId(string clientMessageId) { DARABONBA_PTR_SET_VALUE(clientMessageId_, clientMessageId) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Items& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // messageSequence Field Functions 
      bool hasMessageSequence() const { return this->messageSequence_ != nullptr;};
      void deleteMessageSequence() { this->messageSequence_ = nullptr;};
      inline int64_t getMessageSequence() const { DARABONBA_PTR_GET_DEFAULT(messageSequence_, 0L) };
      inline Items& setMessageSequence(int64_t messageSequence) { DARABONBA_PTR_SET_VALUE(messageSequence_, messageSequence) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Items& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // turnId Field Functions 
      bool hasTurnId() const { return this->turnId_ != nullptr;};
      void deleteTurnId() { this->turnId_ = nullptr;};
      inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
      inline Items& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


    protected:
      // The client message ID.
      shared_ptr<string> clientMessageId_ {};
      // The sent content.
      shared_ptr<string> content_ {};
      // The creation time.
      shared_ptr<string> createdAt_ {};
      // The message ID.
      shared_ptr<string> messageId_ {};
      // The message sequence number.
      shared_ptr<int64_t> messageSequence_ {};
      // The message role.
      shared_ptr<string> role_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The primary key ID.
      shared_ptr<string> turnId_ {};
    };

    virtual bool empty() const override { return this->apiVersion_ == nullptr
        && this->items_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline ListCopilotMessagesResponseBody& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListCopilotMessagesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListCopilotMessagesResponseBody::Items>) };
    inline vector<ListCopilotMessagesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListCopilotMessagesResponseBody::Items>) };
    inline ListCopilotMessagesResponseBody& setItems(const vector<ListCopilotMessagesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListCopilotMessagesResponseBody& setItems(vector<ListCopilotMessagesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCopilotMessagesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCopilotMessagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCopilotMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API version.
    // >You can call the [DescribeGroupProductions](~~DescribeGroupProductions~~) operation to obtain this parameter.
    shared_ptr<string> apiVersion_ {};
    // The list of conversation messages.
    shared_ptr<vector<ListCopilotMessagesResponseBody::Items>> items_ {};
    // The maximum amount of data read in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
