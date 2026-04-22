// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentsResponseBody() = default ;
    ListAgentsResponseBody(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody(ListAgentsResponseBody &&) = default ;
    ListAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsResponseBody() = default ;
    ListAgentsResponseBody& operator=(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody& operator=(ListAgentsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Agents, agents_);
          DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Agents, agents_);
          DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        class Agents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Agents& obj) { 
            DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          };
          friend void from_json(const Darabonba::Json& j, Agents& obj) { 
            DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          };
          Agents() = default ;
          Agents(const Agents &) = default ;
          Agents(Agents &&) = default ;
          Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Agents() = default ;
          Agents& operator=(const Agents &) = default ;
          Agents& operator=(Agents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agentName_ == nullptr; };
          // agentName Field Functions 
          bool hasAgentName() const { return this->agentName_ != nullptr;};
          void deleteAgentName() { this->agentName_ = nullptr;};
          inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
          inline Agents& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        protected:
          shared_ptr<string> agentName_ {};
        };

        virtual bool empty() const override { return this->agents_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
        // agents Field Functions 
        bool hasAgents() const { return this->agents_ != nullptr;};
        void deleteAgents() { this->agents_ = nullptr;};
        inline const vector<Result::Agents> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<Result::Agents>) };
        inline vector<Result::Agents> getAgents() { DARABONBA_PTR_GET(agents_, vector<Result::Agents>) };
        inline Result& setAgents(const vector<Result::Agents> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
        inline Result& setAgents(vector<Result::Agents> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


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


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Result& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<vector<Result::Agents>> agents_ {};
        shared_ptr<int32_t> maxResults_ {};
        shared_ptr<string> nextToken_ {};
        shared_ptr<int32_t> totalCount_ {};
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
      shared_ptr<string> id_ {};
      shared_ptr<string> jsonrpc_ {};
      shared_ptr<JsonRpcResponse::Result> result_ {};
    };

    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline const ListAgentsResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, ListAgentsResponseBody::JsonRpcResponse) };
    inline ListAgentsResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, ListAgentsResponseBody::JsonRpcResponse) };
    inline ListAgentsResponseBody& setJsonRpcResponse(const ListAgentsResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline ListAgentsResponseBody& setJsonRpcResponse(ListAgentsResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListAgentsResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
