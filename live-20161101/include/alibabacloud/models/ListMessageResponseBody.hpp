// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListMessageResponseBody() = default ;
    ListMessageResponseBody(const ListMessageResponseBody &) = default ;
    ListMessageResponseBody(ListMessageResponseBody &&) = default ;
    ListMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBody() = default ;
    ListMessageResponseBody& operator=(const ListMessageResponseBody &) = default ;
    ListMessageResponseBody& operator=(ListMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(MessageList, messageList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MessageList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MessageList& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          DARABONBA_PTR_TO_JSON(SenderId, senderId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, MessageList& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        MessageList() = default ;
        MessageList(const MessageList &) = default ;
        MessageList(MessageList &&) = default ;
        MessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MessageList() = default ;
        MessageList& operator=(const MessageList &) = default ;
        MessageList& operator=(MessageList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->groupId_ == nullptr && this->messageId_ == nullptr && this->senderId_ == nullptr && this->type_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
        inline MessageList& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline MessageList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline MessageList& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // senderId Field Functions 
        bool hasSenderId() const { return this->senderId_ != nullptr;};
        void deleteSenderId() { this->senderId_ = nullptr;};
        inline string getSenderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
        inline MessageList& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline MessageList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The message body. The value is a JSON string.
        shared_ptr<string> data_ {};
        // The ID of the message group.
        shared_ptr<string> groupId_ {};
        // The ID of the message.
        shared_ptr<string> messageId_ {};
        // The ID of the user who sent the message.
        shared_ptr<string> senderId_ {};
        // The type of the message.
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->messageList_ == nullptr; };
      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline Result& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // messageList Field Functions 
      bool hasMessageList() const { return this->messageList_ != nullptr;};
      void deleteMessageList() { this->messageList_ = nullptr;};
      inline const vector<Result::MessageList> & getMessageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<Result::MessageList>) };
      inline vector<Result::MessageList> getMessageList() { DARABONBA_PTR_GET(messageList_, vector<Result::MessageList>) };
      inline Result& setMessageList(const vector<Result::MessageList> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
      inline Result& setMessageList(vector<Result::MessageList> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


    protected:
      // Indicates whether the current page is followed by another page. Valid values:
      // 
      // *   true: The current page is followed by another page.
      // *   false: The current page is not followed by another page.
      shared_ptr<bool> hasMore_ {};
      // Details about the messages.
      shared_ptr<vector<Result::MessageList>> messageList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListMessageResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListMessageResponseBody::Result) };
    inline ListMessageResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListMessageResponseBody::Result) };
    inline ListMessageResponseBody& setResult(const ListMessageResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListMessageResponseBody& setResult(ListMessageResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<ListMessageResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
