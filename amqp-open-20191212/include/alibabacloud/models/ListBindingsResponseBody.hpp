// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDINGSRESPONSEBODY_HPP_
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
  class ListBindingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBindingsResponseBody() = default ;
    ListBindingsResponseBody(const ListBindingsResponseBody &) = default ;
    ListBindingsResponseBody(ListBindingsResponseBody &&) = default ;
    ListBindingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindingsResponseBody() = default ;
    ListBindingsResponseBody& operator=(const ListBindingsResponseBody &) = default ;
    ListBindingsResponseBody& operator=(ListBindingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bindings, bindings_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bindings, bindings_);
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
      class Bindings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Bindings& obj) { 
          DARABONBA_PTR_TO_JSON(Argument, argument_);
          DARABONBA_PTR_TO_JSON(BindingKey, bindingKey_);
          DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
          DARABONBA_PTR_TO_JSON(DestinationName, destinationName_);
          DARABONBA_PTR_TO_JSON(SourceExchange, sourceExchange_);
        };
        friend void from_json(const Darabonba::Json& j, Bindings& obj) { 
          DARABONBA_PTR_FROM_JSON(Argument, argument_);
          DARABONBA_PTR_FROM_JSON(BindingKey, bindingKey_);
          DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
          DARABONBA_PTR_FROM_JSON(DestinationName, destinationName_);
          DARABONBA_PTR_FROM_JSON(SourceExchange, sourceExchange_);
        };
        Bindings() = default ;
        Bindings(const Bindings &) = default ;
        Bindings(Bindings &&) = default ;
        Bindings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Bindings() = default ;
        Bindings& operator=(const Bindings &) = default ;
        Bindings& operator=(Bindings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->argument_ == nullptr
        && this->bindingKey_ == nullptr && this->bindingType_ == nullptr && this->destinationName_ == nullptr && this->sourceExchange_ == nullptr; };
        // argument Field Functions 
        bool hasArgument() const { return this->argument_ != nullptr;};
        void deleteArgument() { this->argument_ = nullptr;};
        inline string getArgument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
        inline Bindings& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


        // bindingKey Field Functions 
        bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
        void deleteBindingKey() { this->bindingKey_ = nullptr;};
        inline string getBindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
        inline Bindings& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


        // bindingType Field Functions 
        bool hasBindingType() const { return this->bindingType_ != nullptr;};
        void deleteBindingType() { this->bindingType_ = nullptr;};
        inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
        inline Bindings& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


        // destinationName Field Functions 
        bool hasDestinationName() const { return this->destinationName_ != nullptr;};
        void deleteDestinationName() { this->destinationName_ = nullptr;};
        inline string getDestinationName() const { DARABONBA_PTR_GET_DEFAULT(destinationName_, "") };
        inline Bindings& setDestinationName(string destinationName) { DARABONBA_PTR_SET_VALUE(destinationName_, destinationName) };


        // sourceExchange Field Functions 
        bool hasSourceExchange() const { return this->sourceExchange_ != nullptr;};
        void deleteSourceExchange() { this->sourceExchange_ = nullptr;};
        inline string getSourceExchange() const { DARABONBA_PTR_GET_DEFAULT(sourceExchange_, "") };
        inline Bindings& setSourceExchange(string sourceExchange) { DARABONBA_PTR_SET_VALUE(sourceExchange_, sourceExchange) };


      protected:
        // The x-match attribute. Valid values:
        // 
        // *   **all:** A headers exchange routes a message to a queue only if all binding attributes of the queue except for x-match match the headers attributes of the message. This value is the default value.
        // *   **any:** A headers exchange routes a message to a queue if one or more binding attributes of the queue except for x-match match the headers attributes of the message.
        // 
        // This parameter is available only for headers exchanges.
        shared_ptr<string> argument_ {};
        // The binding key.
        // 
        // *   If the source exchange is not a topic exchange, the binding key must meet the following conventions:
        // 
        //     *   The binding key can contain only letters, digits, hyphens (-), underscores (_), periods (.), forward slashes (/), and at signs (@).
        //     *   The binding key must be 1 to 255 characters in length.
        // 
        // *   If the source exchange is a topic exchange, the binding key must meet the following conventions:
        // 
        //     *   The binding key can contain letters, digits, hyphens (-), underscores (_), asterisks (\\*), periods (.), number signs (#), forward slashes (/), and at signs (@).
        //     *   The binding key cannot start or end with a period (.). If a binding key starts with a number sign (#) or an asterisk (\\*), the number sign (#) or asterisk (\\*) must be followed by a period (.). If the binding key ends with a number sign (#) or an asterisk (\\*), the number sign (#) or asterisk (\\*) must be preceded by a period (.). If a number sign (#) or an asterisk (\\*) is used in the middle of a binding key, the number sign (#) or asterisk (\\*) must be preceded and followed by a period (.).
        //     *   The binding key must be 1 to 255 characters in length.
        shared_ptr<string> bindingKey_ {};
        // The type of the object to which the source exchange is bound. Valid values:
        // 
        // *   **QUEUE**
        // *   **EXCHANGE**
        shared_ptr<string> bindingType_ {};
        // The name of the object to which the source exchange is bound.
        shared_ptr<string> destinationName_ {};
        // The name of the source exchange.
        shared_ptr<string> sourceExchange_ {};
      };

      virtual bool empty() const override { return this->bindings_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // bindings Field Functions 
      bool hasBindings() const { return this->bindings_ != nullptr;};
      void deleteBindings() { this->bindings_ = nullptr;};
      inline const vector<Data::Bindings> & getBindings() const { DARABONBA_PTR_GET_CONST(bindings_, vector<Data::Bindings>) };
      inline vector<Data::Bindings> getBindings() { DARABONBA_PTR_GET(bindings_, vector<Data::Bindings>) };
      inline Data& setBindings(const vector<Data::Bindings> & bindings) { DARABONBA_PTR_SET_VALUE(bindings_, bindings) };
      inline Data& setBindings(vector<Data::Bindings> && bindings) { DARABONBA_PTR_SET_RVALUE(bindings_, bindings) };


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
      // The bindings.
      shared_ptr<vector<Data::Bindings>> bindings_ {};
      // The maximum number of entries returned.
      shared_ptr<int32_t> maxResults_ {};
      // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListBindingsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListBindingsResponseBody::Data) };
    inline ListBindingsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListBindingsResponseBody::Data) };
    inline ListBindingsResponseBody& setData(const ListBindingsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBindingsResponseBody& setData(ListBindingsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBindingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListBindingsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
