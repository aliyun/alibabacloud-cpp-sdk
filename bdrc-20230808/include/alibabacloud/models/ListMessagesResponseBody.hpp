// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class ListMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMessagesResponseBody() = default ;
    ListMessagesResponseBody(const ListMessagesResponseBody &) = default ;
    ListMessagesResponseBody(ListMessagesResponseBody &&) = default ;
    ListMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessagesResponseBody() = default ;
    ListMessagesResponseBody& operator=(const ListMessagesResponseBody &) = default ;
    ListMessagesResponseBody& operator=(ListMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          DARABONBA_PTR_TO_JSON(MessageLevel, messageLevel_);
          DARABONBA_PTR_TO_JSON(MessageName, messageName_);
          DARABONBA_PTR_TO_JSON(MessageSourceId, messageSourceId_);
          DARABONBA_PTR_TO_JSON(MessageSourceRegionId, messageSourceRegionId_);
          DARABONBA_PTR_TO_JSON(MessageSourceType, messageSourceType_);
          DARABONBA_PTR_TO_JSON(MessageTime, messageTime_);
          DARABONBA_PTR_TO_JSON(MessageType, messageType_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          DARABONBA_PTR_FROM_JSON(MessageLevel, messageLevel_);
          DARABONBA_PTR_FROM_JSON(MessageName, messageName_);
          DARABONBA_PTR_FROM_JSON(MessageSourceId, messageSourceId_);
          DARABONBA_PTR_FROM_JSON(MessageSourceRegionId, messageSourceRegionId_);
          DARABONBA_PTR_FROM_JSON(MessageSourceType, messageSourceType_);
          DARABONBA_PTR_FROM_JSON(MessageTime, messageTime_);
          DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->messageId_ == nullptr
        && this->messageLevel_ == nullptr && this->messageName_ == nullptr && this->messageSourceId_ == nullptr && this->messageSourceRegionId_ == nullptr && this->messageSourceType_ == nullptr
        && this->messageTime_ == nullptr && this->messageType_ == nullptr; };
        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline Content& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // messageLevel Field Functions 
        bool hasMessageLevel() const { return this->messageLevel_ != nullptr;};
        void deleteMessageLevel() { this->messageLevel_ = nullptr;};
        inline string getMessageLevel() const { DARABONBA_PTR_GET_DEFAULT(messageLevel_, "") };
        inline Content& setMessageLevel(string messageLevel) { DARABONBA_PTR_SET_VALUE(messageLevel_, messageLevel) };


        // messageName Field Functions 
        bool hasMessageName() const { return this->messageName_ != nullptr;};
        void deleteMessageName() { this->messageName_ = nullptr;};
        inline string getMessageName() const { DARABONBA_PTR_GET_DEFAULT(messageName_, "") };
        inline Content& setMessageName(string messageName) { DARABONBA_PTR_SET_VALUE(messageName_, messageName) };


        // messageSourceId Field Functions 
        bool hasMessageSourceId() const { return this->messageSourceId_ != nullptr;};
        void deleteMessageSourceId() { this->messageSourceId_ = nullptr;};
        inline string getMessageSourceId() const { DARABONBA_PTR_GET_DEFAULT(messageSourceId_, "") };
        inline Content& setMessageSourceId(string messageSourceId) { DARABONBA_PTR_SET_VALUE(messageSourceId_, messageSourceId) };


        // messageSourceRegionId Field Functions 
        bool hasMessageSourceRegionId() const { return this->messageSourceRegionId_ != nullptr;};
        void deleteMessageSourceRegionId() { this->messageSourceRegionId_ = nullptr;};
        inline string getMessageSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(messageSourceRegionId_, "") };
        inline Content& setMessageSourceRegionId(string messageSourceRegionId) { DARABONBA_PTR_SET_VALUE(messageSourceRegionId_, messageSourceRegionId) };


        // messageSourceType Field Functions 
        bool hasMessageSourceType() const { return this->messageSourceType_ != nullptr;};
        void deleteMessageSourceType() { this->messageSourceType_ = nullptr;};
        inline string getMessageSourceType() const { DARABONBA_PTR_GET_DEFAULT(messageSourceType_, "") };
        inline Content& setMessageSourceType(string messageSourceType) { DARABONBA_PTR_SET_VALUE(messageSourceType_, messageSourceType) };


        // messageTime Field Functions 
        bool hasMessageTime() const { return this->messageTime_ != nullptr;};
        void deleteMessageTime() { this->messageTime_ = nullptr;};
        inline int64_t getMessageTime() const { DARABONBA_PTR_GET_DEFAULT(messageTime_, 0L) };
        inline Content& setMessageTime(int64_t messageTime) { DARABONBA_PTR_SET_VALUE(messageTime_, messageTime) };


        // messageType Field Functions 
        bool hasMessageType() const { return this->messageType_ != nullptr;};
        void deleteMessageType() { this->messageType_ = nullptr;};
        inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
        inline Content& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      protected:
        // Message ID.
        shared_ptr<string> messageId_ {};
        // Message level.
        shared_ptr<string> messageLevel_ {};
        // Message name.
        shared_ptr<string> messageName_ {};
        // Message source ID.
        shared_ptr<string> messageSourceId_ {};
        // Message source region ID.
        shared_ptr<string> messageSourceRegionId_ {};
        // Message source type.
        shared_ptr<string> messageSourceType_ {};
        // Message time.
        shared_ptr<int64_t> messageTime_ {};
        // Message type.
        shared_ptr<string> messageType_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Response parameters.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of results requested.
      shared_ptr<int32_t> maxResults_ {};
      // The pagination token.
      shared_ptr<string> nextToken_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMessagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMessagesResponseBody::Data) };
    inline ListMessagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMessagesResponseBody::Data) };
    inline ListMessagesResponseBody& setData(const ListMessagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMessagesResponseBody& setData(ListMessagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ListMessagesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
