// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSESSIONARTIFACTMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSESSIONARTIFACTMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAgentSessionArtifactMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSessionArtifactMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSessionArtifactMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAgentSessionArtifactMetaResponseBody() = default ;
    GetAgentSessionArtifactMetaResponseBody(const GetAgentSessionArtifactMetaResponseBody &) = default ;
    GetAgentSessionArtifactMetaResponseBody(GetAgentSessionArtifactMetaResponseBody &&) = default ;
    GetAgentSessionArtifactMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSessionArtifactMetaResponseBody() = default ;
    GetAgentSessionArtifactMetaResponseBody& operator=(const GetAgentSessionArtifactMetaResponseBody &) = default ;
    GetAgentSessionArtifactMetaResponseBody& operator=(GetAgentSessionArtifactMetaResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ArtifactContent, artifactContent_);
          DARABONBA_PTR_TO_JSON(ArtifactName, artifactName_);
          DARABONBA_PTR_TO_JSON(ArtifactPath, artifactPath_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(ArtifactContent, artifactContent_);
          DARABONBA_PTR_FROM_JSON(ArtifactName, artifactName_);
          DARABONBA_PTR_FROM_JSON(ArtifactPath, artifactPath_);
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
        virtual bool empty() const override { return this->artifactContent_ == nullptr
        && this->artifactName_ == nullptr && this->artifactPath_ == nullptr; };
        // artifactContent Field Functions 
        bool hasArtifactContent() const { return this->artifactContent_ != nullptr;};
        void deleteArtifactContent() { this->artifactContent_ = nullptr;};
        inline string getArtifactContent() const { DARABONBA_PTR_GET_DEFAULT(artifactContent_, "") };
        inline Result& setArtifactContent(string artifactContent) { DARABONBA_PTR_SET_VALUE(artifactContent_, artifactContent) };


        // artifactName Field Functions 
        bool hasArtifactName() const { return this->artifactName_ != nullptr;};
        void deleteArtifactName() { this->artifactName_ = nullptr;};
        inline string getArtifactName() const { DARABONBA_PTR_GET_DEFAULT(artifactName_, "") };
        inline Result& setArtifactName(string artifactName) { DARABONBA_PTR_SET_VALUE(artifactName_, artifactName) };


        // artifactPath Field Functions 
        bool hasArtifactPath() const { return this->artifactPath_ != nullptr;};
        void deleteArtifactPath() { this->artifactPath_ = nullptr;};
        inline string getArtifactPath() const { DARABONBA_PTR_GET_DEFAULT(artifactPath_, "") };
        inline Result& setArtifactPath(string artifactPath) { DARABONBA_PTR_SET_VALUE(artifactPath_, artifactPath) };


      protected:
        shared_ptr<string> artifactContent_ {};
        shared_ptr<string> artifactName_ {};
        shared_ptr<string> artifactPath_ {};
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
    inline const GetAgentSessionArtifactMetaResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, GetAgentSessionArtifactMetaResponseBody::JsonRpcResponse) };
    inline GetAgentSessionArtifactMetaResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, GetAgentSessionArtifactMetaResponseBody::JsonRpcResponse) };
    inline GetAgentSessionArtifactMetaResponseBody& setJsonRpcResponse(const GetAgentSessionArtifactMetaResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline GetAgentSessionArtifactMetaResponseBody& setJsonRpcResponse(GetAgentSessionArtifactMetaResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSessionArtifactMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAgentSessionArtifactMetaResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
