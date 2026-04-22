// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSESSIONARTIFACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSESSIONARTIFACTSRESPONSEBODY_HPP_
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
  class ListAgentSessionArtifactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSessionArtifactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSessionArtifactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentSessionArtifactsResponseBody() = default ;
    ListAgentSessionArtifactsResponseBody(const ListAgentSessionArtifactsResponseBody &) = default ;
    ListAgentSessionArtifactsResponseBody(ListAgentSessionArtifactsResponseBody &&) = default ;
    ListAgentSessionArtifactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSessionArtifactsResponseBody() = default ;
    ListAgentSessionArtifactsResponseBody& operator=(const ListAgentSessionArtifactsResponseBody &) = default ;
    ListAgentSessionArtifactsResponseBody& operator=(ListAgentSessionArtifactsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
          DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
          DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
          DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
        class Artifacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
            DARABONBA_PTR_TO_JSON(ArtifactName, artifactName_);
            DARABONBA_PTR_TO_JSON(ArtifactPath, artifactPath_);
            DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
          };
          friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
            DARABONBA_PTR_FROM_JSON(ArtifactName, artifactName_);
            DARABONBA_PTR_FROM_JSON(ArtifactPath, artifactPath_);
            DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
          };
          Artifacts() = default ;
          Artifacts(const Artifacts &) = default ;
          Artifacts(Artifacts &&) = default ;
          Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Artifacts() = default ;
          Artifacts& operator=(const Artifacts &) = default ;
          Artifacts& operator=(Artifacts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->artifactName_ == nullptr
        && this->artifactPath_ == nullptr && this->artifactType_ == nullptr; };
          // artifactName Field Functions 
          bool hasArtifactName() const { return this->artifactName_ != nullptr;};
          void deleteArtifactName() { this->artifactName_ = nullptr;};
          inline string getArtifactName() const { DARABONBA_PTR_GET_DEFAULT(artifactName_, "") };
          inline Artifacts& setArtifactName(string artifactName) { DARABONBA_PTR_SET_VALUE(artifactName_, artifactName) };


          // artifactPath Field Functions 
          bool hasArtifactPath() const { return this->artifactPath_ != nullptr;};
          void deleteArtifactPath() { this->artifactPath_ = nullptr;};
          inline string getArtifactPath() const { DARABONBA_PTR_GET_DEFAULT(artifactPath_, "") };
          inline Artifacts& setArtifactPath(string artifactPath) { DARABONBA_PTR_SET_VALUE(artifactPath_, artifactPath) };


          // artifactType Field Functions 
          bool hasArtifactType() const { return this->artifactType_ != nullptr;};
          void deleteArtifactType() { this->artifactType_ = nullptr;};
          inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
          inline Artifacts& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


        protected:
          shared_ptr<string> artifactName_ {};
          shared_ptr<string> artifactPath_ {};
          shared_ptr<string> artifactType_ {};
        };

        virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
        // artifacts Field Functions 
        bool hasArtifacts() const { return this->artifacts_ != nullptr;};
        void deleteArtifacts() { this->artifacts_ = nullptr;};
        inline const vector<Result::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<Result::Artifacts>) };
        inline vector<Result::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<Result::Artifacts>) };
        inline Result& setArtifacts(const vector<Result::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
        inline Result& setArtifacts(vector<Result::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


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


      protected:
        shared_ptr<vector<Result::Artifacts>> artifacts_ {};
        shared_ptr<int32_t> maxResults_ {};
        shared_ptr<string> nextToken_ {};
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
    inline const ListAgentSessionArtifactsResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, ListAgentSessionArtifactsResponseBody::JsonRpcResponse) };
    inline ListAgentSessionArtifactsResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, ListAgentSessionArtifactsResponseBody::JsonRpcResponse) };
    inline ListAgentSessionArtifactsResponseBody& setJsonRpcResponse(const ListAgentSessionArtifactsResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline ListAgentSessionArtifactsResponseBody& setJsonRpcResponse(ListAgentSessionArtifactsResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentSessionArtifactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListAgentSessionArtifactsResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
