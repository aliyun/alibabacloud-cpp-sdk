// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUECONSUMERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueueConsumersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueConsumersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueConsumersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListQueueConsumersResponseBody() = default ;
    ListQueueConsumersResponseBody(const ListQueueConsumersResponseBody &) = default ;
    ListQueueConsumersResponseBody(ListQueueConsumersResponseBody &&) = default ;
    ListQueueConsumersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueConsumersResponseBody() = default ;
    ListQueueConsumersResponseBody& operator=(const ListQueueConsumersResponseBody &) = default ;
    ListQueueConsumersResponseBody& operator=(ListQueueConsumersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Consumers, consumers_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Consumers, consumers_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class Consumers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Consumers& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumerTag, consumerTag_);
        };
        friend void from_json(const Darabonba::Json& j, Consumers& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumerTag, consumerTag_);
        };
        Consumers() = default ;
        Consumers(const Consumers &) = default ;
        Consumers(Consumers &&) = default ;
        Consumers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Consumers() = default ;
        Consumers& operator=(const Consumers &) = default ;
        Consumers& operator=(Consumers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerTag_ == nullptr; };
        // consumerTag Field Functions 
        bool hasConsumerTag() const { return this->consumerTag_ != nullptr;};
        void deleteConsumerTag() { this->consumerTag_ = nullptr;};
        inline string getConsumerTag() const { DARABONBA_PTR_GET_DEFAULT(consumerTag_, "") };
        inline Consumers& setConsumerTag(string consumerTag) { DARABONBA_PTR_SET_VALUE(consumerTag_, consumerTag) };


      protected:
        // The consumer tag.
        shared_ptr<string> consumerTag_ {};
      };

      virtual bool empty() const override { return this->consumers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // consumers Field Functions 
      bool hasConsumers() const { return this->consumers_ != nullptr;};
      void deleteConsumers() { this->consumers_ = nullptr;};
      inline const vector<Data::Consumers> & getConsumers() const { DARABONBA_PTR_GET_CONST(consumers_, vector<Data::Consumers>) };
      inline vector<Data::Consumers> getConsumers() { DARABONBA_PTR_GET(consumers_, vector<Data::Consumers>) };
      inline Data& setConsumers(const vector<Data::Consumers> & consumers) { DARABONBA_PTR_SET_VALUE(consumers_, consumers) };
      inline Data& setConsumers(vector<Data::Consumers> && consumers) { DARABONBA_PTR_SET_RVALUE(consumers_, consumers) };


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


    protected:
      // The consumer information.
      shared_ptr<vector<Data::Consumers>> consumers_ {};
      // The maximum number of results.
      shared_ptr<int32_t> maxResults_ {};
      // The token to retrieve the next page of results. An empty value indicates that all results have been returned.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQueueConsumersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListQueueConsumersResponseBody::Data) };
    inline ListQueueConsumersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListQueueConsumersResponseBody::Data) };
    inline ListQueueConsumersResponseBody& setData(const ListQueueConsumersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQueueConsumersResponseBody& setData(ListQueueConsumersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueueConsumersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListQueueConsumersResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
