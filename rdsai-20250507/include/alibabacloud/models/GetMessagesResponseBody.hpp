// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessagesResponseBody() = default ;
    GetMessagesResponseBody(const GetMessagesResponseBody &) = default ;
    GetMessagesResponseBody(GetMessagesResponseBody &&) = default ;
    GetMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessagesResponseBody() = default ;
    GetMessagesResponseBody& operator=(const GetMessagesResponseBody &) = default ;
    GetMessagesResponseBody& operator=(GetMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Answer, answer_);
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Events, events_);
        DARABONBA_PTR_TO_JSON(Feedback, feedback_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Query, query_);
        DARABONBA_PTR_TO_JSON(RetrieverResources, retrieverResources_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Answer, answer_);
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Events, events_);
        DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
        DARABONBA_PTR_FROM_JSON(RetrieverResources, retrieverResources_);
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
      class Events : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Events& obj) { 
          DARABONBA_PTR_TO_JSON(answer, answer_);
          DARABONBA_PTR_TO_JSON(event, event_);
        };
        friend void from_json(const Darabonba::Json& j, Events& obj) { 
          DARABONBA_PTR_FROM_JSON(answer, answer_);
          DARABONBA_PTR_FROM_JSON(event, event_);
        };
        Events() = default ;
        Events(const Events &) = default ;
        Events(Events &&) = default ;
        Events(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Events() = default ;
        Events& operator=(const Events &) = default ;
        Events& operator=(Events &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answer_ == nullptr
        && this->event_ == nullptr; };
        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline Events& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // event Field Functions 
        bool hasEvent() const { return this->event_ != nullptr;};
        void deleteEvent() { this->event_ = nullptr;};
        inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
        inline Events& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      protected:
        shared_ptr<string> answer_ {};
        shared_ptr<string> event_ {};
      };

      virtual bool empty() const override { return this->answer_ == nullptr
        && this->conversationId_ == nullptr && this->createdAt_ == nullptr && this->events_ == nullptr && this->feedback_ == nullptr && this->id_ == nullptr
        && this->query_ == nullptr && this->retrieverResources_ == nullptr; };
      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
      inline Data& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Data& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // events Field Functions 
      bool hasEvents() const { return this->events_ != nullptr;};
      void deleteEvents() { this->events_ = nullptr;};
      inline const vector<Data::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Data::Events>) };
      inline vector<Data::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<Data::Events>) };
      inline Data& setEvents(const vector<Data::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
      inline Data& setEvents(vector<Data::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


      // feedback Field Functions 
      bool hasFeedback() const { return this->feedback_ != nullptr;};
      void deleteFeedback() { this->feedback_ = nullptr;};
      inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
      inline Data& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline Data& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // retrieverResources Field Functions 
      bool hasRetrieverResources() const { return this->retrieverResources_ != nullptr;};
      void deleteRetrieverResources() { this->retrieverResources_ = nullptr;};
      inline const vector<Darabonba::Json> & getRetrieverResources() const { DARABONBA_PTR_GET_CONST(retrieverResources_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getRetrieverResources() { DARABONBA_PTR_GET(retrieverResources_, vector<Darabonba::Json>) };
      inline Data& setRetrieverResources(const vector<Darabonba::Json> & retrieverResources) { DARABONBA_PTR_SET_VALUE(retrieverResources_, retrieverResources) };
      inline Data& setRetrieverResources(vector<Darabonba::Json> && retrieverResources) { DARABONBA_PTR_SET_RVALUE(retrieverResources_, retrieverResources) };


    protected:
      // The response to the query.
      shared_ptr<string> answer_ {};
      // The ID of the conversation.
      shared_ptr<string> conversationId_ {};
      // The creation time of the conversation.
      shared_ptr<string> createdAt_ {};
      shared_ptr<vector<Data::Events>> events_ {};
      // The feedback.
      shared_ptr<string> feedback_ {};
      // The message ID.
      shared_ptr<string> id_ {};
      // The query statement.
      shared_ptr<string> query_ {};
      // The retriever resources.
      shared_ptr<vector<Darabonba::Json>> retrieverResources_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->hasMore_ == nullptr && this->limit_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetMessagesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetMessagesResponseBody::Data>) };
    inline vector<GetMessagesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetMessagesResponseBody::Data>) };
    inline GetMessagesResponseBody& setData(const vector<GetMessagesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMessagesResponseBody& setData(vector<GetMessagesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline GetMessagesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetMessagesResponseBody& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<vector<GetMessagesResponseBody::Data>> data_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> hasMore_ {};
    // The maximum number of entries to return.
    shared_ptr<int64_t> limit_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
