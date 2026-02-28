// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVISITORCHATMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVISITORCHATMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListVisitorChatMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVisitorChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVisitorChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVisitorChatMessagesResponseBody() = default ;
    ListVisitorChatMessagesResponseBody(const ListVisitorChatMessagesResponseBody &) = default ;
    ListVisitorChatMessagesResponseBody(ListVisitorChatMessagesResponseBody &&) = default ;
    ListVisitorChatMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVisitorChatMessagesResponseBody() = default ;
    ListVisitorChatMessagesResponseBody& operator=(const ListVisitorChatMessagesResponseBody &) = default ;
    ListVisitorChatMessagesResponseBody& operator=(ListVisitorChatMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Messages, messages_);
        DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Messages, messages_);
        DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
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
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(SenderAvatarUrl, senderAvatarUrl_);
          DARABONBA_PTR_TO_JSON(SenderId, senderId_);
          DARABONBA_PTR_TO_JSON(SenderName, senderName_);
          DARABONBA_PTR_TO_JSON(SenderType, senderType_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(SenderAvatarUrl, senderAvatarUrl_);
          DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
          DARABONBA_PTR_FROM_JSON(SenderName, senderName_);
          DARABONBA_PTR_FROM_JSON(SenderType, senderType_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
        && this->jobId_ == nullptr && this->senderAvatarUrl_ == nullptr && this->senderId_ == nullptr && this->senderName_ == nullptr && this->senderType_ == nullptr
        && this->timestamp_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Messages& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // senderAvatarUrl Field Functions 
        bool hasSenderAvatarUrl() const { return this->senderAvatarUrl_ != nullptr;};
        void deleteSenderAvatarUrl() { this->senderAvatarUrl_ = nullptr;};
        inline string getSenderAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(senderAvatarUrl_, "") };
        inline Messages& setSenderAvatarUrl(string senderAvatarUrl) { DARABONBA_PTR_SET_VALUE(senderAvatarUrl_, senderAvatarUrl) };


        // senderId Field Functions 
        bool hasSenderId() const { return this->senderId_ != nullptr;};
        void deleteSenderId() { this->senderId_ = nullptr;};
        inline string getSenderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
        inline Messages& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


        // senderName Field Functions 
        bool hasSenderName() const { return this->senderName_ != nullptr;};
        void deleteSenderName() { this->senderName_ = nullptr;};
        inline string getSenderName() const { DARABONBA_PTR_GET_DEFAULT(senderName_, "") };
        inline Messages& setSenderName(string senderName) { DARABONBA_PTR_SET_VALUE(senderName_, senderName) };


        // senderType Field Functions 
        bool hasSenderType() const { return this->senderType_ != nullptr;};
        void deleteSenderType() { this->senderType_ = nullptr;};
        inline string getSenderType() const { DARABONBA_PTR_GET_DEFAULT(senderType_, "") };
        inline Messages& setSenderType(string senderType) { DARABONBA_PTR_SET_VALUE(senderType_, senderType) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Messages& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<string> senderAvatarUrl_ {};
        shared_ptr<string> senderId_ {};
        shared_ptr<string> senderName_ {};
        shared_ptr<string> senderType_ {};
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->messages_ == nullptr
        && this->nextPageToken_ == nullptr; };
      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // nextPageToken Field Functions 
      bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
      void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
      inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
      inline Data& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    protected:
      shared_ptr<vector<Data::Messages>> messages_ {};
      shared_ptr<string> nextPageToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVisitorChatMessagesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVisitorChatMessagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVisitorChatMessagesResponseBody::Data) };
    inline ListVisitorChatMessagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVisitorChatMessagesResponseBody::Data) };
    inline ListVisitorChatMessagesResponseBody& setData(const ListVisitorChatMessagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVisitorChatMessagesResponseBody& setData(ListVisitorChatMessagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVisitorChatMessagesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVisitorChatMessagesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVisitorChatMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListVisitorChatMessagesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
