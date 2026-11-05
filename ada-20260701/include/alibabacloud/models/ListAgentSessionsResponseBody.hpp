// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class ListAgentSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentSessionsResponseBody() = default ;
    ListAgentSessionsResponseBody(const ListAgentSessionsResponseBody &) = default ;
    ListAgentSessionsResponseBody(ListAgentSessionsResponseBody &&) = default ;
    ListAgentSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSessionsResponseBody() = default ;
    ListAgentSessionsResponseBody& operator=(const ListAgentSessionsResponseBody &) = default ;
    ListAgentSessionsResponseBody& operator=(ListAgentSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JsonRpcResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JsonRpcResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, JsonRpcResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      JsonRpcResponse() = default ;
      JsonRpcResponse(const JsonRpcResponse &) = default ;
      JsonRpcResponse(JsonRpcResponse &&) = default ;
      JsonRpcResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JsonRpcResponse() = default ;
      JsonRpcResponse& operator=(const JsonRpcResponse &) = default ;
      JsonRpcResponse& operator=(JsonRpcResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
          DARABONBA_ANY_TO_JSON(SessionList, sessionList_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
          DARABONBA_ANY_FROM_JSON(SessionList, sessionList_);
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
        virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->sessionList_ == nullptr; };
        // maxResults Field Functions 
        bool hasMaxResults() const { return this->maxResults_ != nullptr;};
        void deleteMaxResults() { this->maxResults_ = nullptr;};
        inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
        inline Result& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


        // nextToken Field Functions 
        bool hasNextToken() const { return this->nextToken_ != nullptr;};
        void deleteNextToken() { this->nextToken_ = nullptr;};
        inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
        inline Result& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


        // sessionList Field Functions 
        bool hasSessionList() const { return this->sessionList_ != nullptr;};
        void deleteSessionList() { this->sessionList_ = nullptr;};
        inline         const Darabonba::Json & getSessionList() const { DARABONBA_GET(sessionList_) };
        Darabonba::Json & getSessionList() { DARABONBA_GET(sessionList_) };
        inline Result& setSessionList(const Darabonba::Json & sessionList) { DARABONBA_SET_VALUE(sessionList_, sessionList) };
        inline Result& setSessionList(Darabonba::Json && sessionList) { DARABONBA_SET_RVALUE(sessionList_, sessionList) };


      protected:
        // The effective page size for the current page.
        shared_ptr<int32_t> maxResults_ {};
        // The credential to continue querying the next page. Pass it as is to Params.NextToken. Pagination ends when the token is not returned or is empty.
        shared_ptr<string> nextToken_ {};
        // The array of session summaries for the current page. If no matching records are found, an empty array [] is returned. The type is any. The fields of array elements retain the original backend names. For the structure, see the supplementary description of response parameters.
        Darabonba::Json sessionList_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->result_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline JsonRpcResponse& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jsonrpc Field Functions 
      bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
      void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
      inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
      inline JsonRpcResponse& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const JsonRpcResponse::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, JsonRpcResponse::Result) };
      inline JsonRpcResponse::Result getResult() { DARABONBA_PTR_GET(result_, JsonRpcResponse::Result) };
      inline JsonRpcResponse& setResult(const JsonRpcResponse::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline JsonRpcResponse& setResult(JsonRpcResponse::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // The Id from the request, echoed as is.
      shared_ptr<string> id_ {};
      // The fixed value `2.0`.
      shared_ptr<string> jsonrpc_ {};
      // The paginated result.
      shared_ptr<JsonRpcResponse::Result> result_ {};
    };

    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline const ListAgentSessionsResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, ListAgentSessionsResponseBody::JsonRpcResponse) };
    inline ListAgentSessionsResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, ListAgentSessionsResponseBody::JsonRpcResponse) };
    inline ListAgentSessionsResponseBody& setJsonRpcResponse(const ListAgentSessionsResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline ListAgentSessionsResponseBody& setJsonRpcResponse(ListAgentSessionsResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The JSON-RPC response object. The business result is located in Result.
    shared_ptr<ListAgentSessionsResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // The server-side request ID used to troubleshoot this call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
