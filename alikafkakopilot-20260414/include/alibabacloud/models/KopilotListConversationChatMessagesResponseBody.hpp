// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONCHATMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONCHATMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotListConversationChatMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotListConversationChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotListConversationChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    KopilotListConversationChatMessagesResponseBody() = default ;
    KopilotListConversationChatMessagesResponseBody(const KopilotListConversationChatMessagesResponseBody &) = default ;
    KopilotListConversationChatMessagesResponseBody(KopilotListConversationChatMessagesResponseBody &&) = default ;
    KopilotListConversationChatMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotListConversationChatMessagesResponseBody() = default ;
    KopilotListConversationChatMessagesResponseBody& operator=(const KopilotListConversationChatMessagesResponseBody &) = default ;
    KopilotListConversationChatMessagesResponseBody& operator=(KopilotListConversationChatMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(Messages, messages_);
        DARABONBA_PTR_TO_JSON(NextBeforeTurnId, nextBeforeTurnId_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(TotalTurns, totalTurns_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(Messages, messages_);
        DARABONBA_PTR_FROM_JSON(NextBeforeTurnId, nextBeforeTurnId_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(TotalTurns, totalTurns_);
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
      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Feedback, feedback_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(TurnId, turnId_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(TurnId, turnId_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->feedback_ == nullptr && this->role_ == nullptr && this->turnId_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Messages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // feedback Field Functions 
        bool hasFeedback() const { return this->feedback_ != nullptr;};
        void deleteFeedback() { this->feedback_ = nullptr;};
        inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
        inline Messages& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // turnId Field Functions 
        bool hasTurnId() const { return this->turnId_ != nullptr;};
        void deleteTurnId() { this->turnId_ = nullptr;};
        inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
        inline Messages& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> feedback_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> turnId_ {};
      };

      virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->messages_ == nullptr && this->nextBeforeTurnId_ == nullptr && this->sessionId_ == nullptr && this->totalTurns_ == nullptr; };
      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Data& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // nextBeforeTurnId Field Functions 
      bool hasNextBeforeTurnId() const { return this->nextBeforeTurnId_ != nullptr;};
      void deleteNextBeforeTurnId() { this->nextBeforeTurnId_ = nullptr;};
      inline int64_t getNextBeforeTurnId() const { DARABONBA_PTR_GET_DEFAULT(nextBeforeTurnId_, 0L) };
      inline Data& setNextBeforeTurnId(int64_t nextBeforeTurnId) { DARABONBA_PTR_SET_VALUE(nextBeforeTurnId_, nextBeforeTurnId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // totalTurns Field Functions 
      bool hasTotalTurns() const { return this->totalTurns_ != nullptr;};
      void deleteTotalTurns() { this->totalTurns_ = nullptr;};
      inline int64_t getTotalTurns() const { DARABONBA_PTR_GET_DEFAULT(totalTurns_, 0L) };
      inline Data& setTotalTurns(int64_t totalTurns) { DARABONBA_PTR_SET_VALUE(totalTurns_, totalTurns) };


    protected:
      shared_ptr<bool> hasMore_ {};
      shared_ptr<vector<Data::Messages>> messages_ {};
      shared_ptr<int64_t> nextBeforeTurnId_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<int64_t> totalTurns_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline KopilotListConversationChatMessagesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const KopilotListConversationChatMessagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, KopilotListConversationChatMessagesResponseBody::Data) };
    inline KopilotListConversationChatMessagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, KopilotListConversationChatMessagesResponseBody::Data) };
    inline KopilotListConversationChatMessagesResponseBody& setData(const KopilotListConversationChatMessagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline KopilotListConversationChatMessagesResponseBody& setData(KopilotListConversationChatMessagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KopilotListConversationChatMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline KopilotListConversationChatMessagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<KopilotListConversationChatMessagesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
