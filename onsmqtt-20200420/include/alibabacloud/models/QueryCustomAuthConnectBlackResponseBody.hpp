// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHCONNECTBLACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHCONNECTBLACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryCustomAuthConnectBlackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomAuthConnectBlackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomAuthConnectBlackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCustomAuthConnectBlackResponseBody() = default ;
    QueryCustomAuthConnectBlackResponseBody(const QueryCustomAuthConnectBlackResponseBody &) = default ;
    QueryCustomAuthConnectBlackResponseBody(QueryCustomAuthConnectBlackResponseBody &&) = default ;
    QueryCustomAuthConnectBlackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomAuthConnectBlackResponseBody() = default ;
    QueryCustomAuthConnectBlackResponseBody& operator=(const QueryCustomAuthConnectBlackResponseBody &) = default ;
    QueryCustomAuthConnectBlackResponseBody& operator=(QueryCustomAuthConnectBlackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(ClientId, clientId_);
          DARABONBA_PTR_TO_JSON(Effect, effect_);
          DARABONBA_PTR_TO_JSON(PermitAction, permitAction_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(Effect, effect_);
          DARABONBA_PTR_FROM_JSON(PermitAction, permitAction_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientId_ == nullptr
        && this->effect_ == nullptr && this->permitAction_ == nullptr; };
        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline Results& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline Results& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // permitAction Field Functions 
        bool hasPermitAction() const { return this->permitAction_ != nullptr;};
        void deletePermitAction() { this->permitAction_ = nullptr;};
        inline string getPermitAction() const { DARABONBA_PTR_GET_DEFAULT(permitAction_, "") };
        inline Results& setPermitAction(string permitAction) { DARABONBA_PTR_SET_VALUE(permitAction_, permitAction) };


      protected:
        // The client ID.
        shared_ptr<string> clientId_ {};
        // Indicates whether to allow or deny access.
        shared_ptr<string> effect_ {};
        // The authorized permissions.
        shared_ptr<string> permitAction_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->results_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      // The pagination token that is used in the next request to retrieve a new page of results.
      shared_ptr<string> nextToken_ {};
      // The returned results.
      shared_ptr<vector<Data::Results>> results_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryCustomAuthConnectBlackResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCustomAuthConnectBlackResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCustomAuthConnectBlackResponseBody::Data) };
    inline QueryCustomAuthConnectBlackResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCustomAuthConnectBlackResponseBody::Data) };
    inline QueryCustomAuthConnectBlackResponseBody& setData(const QueryCustomAuthConnectBlackResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCustomAuthConnectBlackResponseBody& setData(QueryCustomAuthConnectBlackResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCustomAuthConnectBlackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCustomAuthConnectBlackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCustomAuthConnectBlackResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request is successful. Other status codes indicate that the request failed. For a list of error codes, see Error codes.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<QueryCustomAuthConnectBlackResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
