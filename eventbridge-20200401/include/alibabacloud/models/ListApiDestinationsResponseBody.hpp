// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListApiDestinationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDestinationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDestinationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApiDestinationsResponseBody() = default ;
    ListApiDestinationsResponseBody(const ListApiDestinationsResponseBody &) = default ;
    ListApiDestinationsResponseBody(ListApiDestinationsResponseBody &&) = default ;
    ListApiDestinationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDestinationsResponseBody() = default ;
    ListApiDestinationsResponseBody& operator=(const ListApiDestinationsResponseBody &) = default ;
    ListApiDestinationsResponseBody& operator=(ListApiDestinationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiDestinations, apiDestinations_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiDestinations, apiDestinations_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class ApiDestinations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiDestinations& obj) { 
          DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
          DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(HttpApiParameters, httpApiParameters_);
        };
        friend void from_json(const Darabonba::Json& j, ApiDestinations& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
          DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(HttpApiParameters, httpApiParameters_);
        };
        ApiDestinations() = default ;
        ApiDestinations(const ApiDestinations &) = default ;
        ApiDestinations(ApiDestinations &&) = default ;
        ApiDestinations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiDestinations() = default ;
        ApiDestinations& operator=(const ApiDestinations &) = default ;
        ApiDestinations& operator=(ApiDestinations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HttpApiParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpApiParameters& obj) { 
            DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(Method, method_);
          };
          friend void from_json(const Darabonba::Json& j, HttpApiParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
          };
          HttpApiParameters() = default ;
          HttpApiParameters(const HttpApiParameters &) = default ;
          HttpApiParameters(HttpApiParameters &&) = default ;
          HttpApiParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpApiParameters() = default ;
          HttpApiParameters& operator=(const HttpApiParameters &) = default ;
          HttpApiParameters& operator=(HttpApiParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->method_ == nullptr; };
          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline HttpApiParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline HttpApiParameters& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        protected:
          // The endpoint of the API destination.
          shared_ptr<string> endpoint_ {};
          // The HTTP request method. Valid values:
          // 
          // - POST
          // 
          // - GET
          // 
          // - DELETE
          // 
          // - PUT
          // 
          // - HEAD
          // 
          // - TRACE
          // 
          // - PATCH
          shared_ptr<string> method_ {};
        };

        virtual bool empty() const override { return this->apiDestinationName_ == nullptr
        && this->connectionName_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->httpApiParameters_ == nullptr; };
        // apiDestinationName Field Functions 
        bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
        void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
        inline string getApiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
        inline ApiDestinations& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


        // connectionName Field Functions 
        bool hasConnectionName() const { return this->connectionName_ != nullptr;};
        void deleteConnectionName() { this->connectionName_ = nullptr;};
        inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
        inline ApiDestinations& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiDestinations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline ApiDestinations& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // httpApiParameters Field Functions 
        bool hasHttpApiParameters() const { return this->httpApiParameters_ != nullptr;};
        void deleteHttpApiParameters() { this->httpApiParameters_ = nullptr;};
        inline const ApiDestinations::HttpApiParameters & getHttpApiParameters() const { DARABONBA_PTR_GET_CONST(httpApiParameters_, ApiDestinations::HttpApiParameters) };
        inline ApiDestinations::HttpApiParameters getHttpApiParameters() { DARABONBA_PTR_GET(httpApiParameters_, ApiDestinations::HttpApiParameters) };
        inline ApiDestinations& setHttpApiParameters(const ApiDestinations::HttpApiParameters & httpApiParameters) { DARABONBA_PTR_SET_VALUE(httpApiParameters_, httpApiParameters) };
        inline ApiDestinations& setHttpApiParameters(ApiDestinations::HttpApiParameters && httpApiParameters) { DARABONBA_PTR_SET_RVALUE(httpApiParameters_, httpApiParameters) };


      protected:
        // The name of the API destination.
        shared_ptr<string> apiDestinationName_ {};
        // The connection name.
        shared_ptr<string> connectionName_ {};
        // The description of the connection.
        shared_ptr<string> description_ {};
        // The time when the API destination was created.
        shared_ptr<int64_t> gmtCreate_ {};
        // The request parameters that are configured for the API destination.
        shared_ptr<ApiDestinations::HttpApiParameters> httpApiParameters_ {};
      };

      virtual bool empty() const override { return this->apiDestinations_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->total_ == nullptr; };
      // apiDestinations Field Functions 
      bool hasApiDestinations() const { return this->apiDestinations_ != nullptr;};
      void deleteApiDestinations() { this->apiDestinations_ = nullptr;};
      inline const vector<Data::ApiDestinations> & getApiDestinations() const { DARABONBA_PTR_GET_CONST(apiDestinations_, vector<Data::ApiDestinations>) };
      inline vector<Data::ApiDestinations> getApiDestinations() { DARABONBA_PTR_GET(apiDestinations_, vector<Data::ApiDestinations>) };
      inline Data& setApiDestinations(const vector<Data::ApiDestinations> & apiDestinations) { DARABONBA_PTR_SET_VALUE(apiDestinations_, apiDestinations) };
      inline Data& setApiDestinations(vector<Data::ApiDestinations> && apiDestinations) { DARABONBA_PTR_SET_RVALUE(apiDestinations_, apiDestinations) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline float getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0.0) };
      inline Data& setMaxResults(float maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline float getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
      inline Data& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The API destinations.
      shared_ptr<vector<Data::ApiDestinations>> apiDestinations_ {};
      // The maximum number of entries returned per page.
      shared_ptr<float> maxResults_ {};
      // If excess return values exist, this parameter is returned.
      shared_ptr<string> nextToken_ {};
      // The total number of entries returned.
      shared_ptr<float> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApiDestinationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListApiDestinationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListApiDestinationsResponseBody::Data) };
    inline ListApiDestinationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListApiDestinationsResponseBody::Data) };
    inline ListApiDestinationsResponseBody& setData(const ListApiDestinationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApiDestinationsResponseBody& setData(ListApiDestinationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApiDestinationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiDestinationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned response code. The value Success indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListApiDestinationsResponseBody::Data> data_ {};
    // The returned message. If the request is successful, success is returned. If the request failed, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
