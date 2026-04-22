// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSESSIONTOKENUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSESSIONTOKENUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAgentSessionTokenUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSessionTokenUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSessionTokenUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAgentSessionTokenUsageResponseBody() = default ;
    GetAgentSessionTokenUsageResponseBody(const GetAgentSessionTokenUsageResponseBody &) = default ;
    GetAgentSessionTokenUsageResponseBody(GetAgentSessionTokenUsageResponseBody &&) = default ;
    GetAgentSessionTokenUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSessionTokenUsageResponseBody() = default ;
    GetAgentSessionTokenUsageResponseBody& operator=(const GetAgentSessionTokenUsageResponseBody &) = default ;
    GetAgentSessionTokenUsageResponseBody& operator=(GetAgentSessionTokenUsageResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CachedTokens, cachedTokens_);
          DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
          DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
          DARABONBA_PTR_TO_JSON(ThoughtsTokens, thoughtsTokens_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(CachedTokens, cachedTokens_);
          DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
          DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
          DARABONBA_PTR_FROM_JSON(ThoughtsTokens, thoughtsTokens_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
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
        virtual bool empty() const override { return this->cachedTokens_ == nullptr
        && this->completionTokens_ == nullptr && this->promptTokens_ == nullptr && this->thoughtsTokens_ == nullptr && this->totalTokens_ == nullptr; };
        // cachedTokens Field Functions 
        bool hasCachedTokens() const { return this->cachedTokens_ != nullptr;};
        void deleteCachedTokens() { this->cachedTokens_ = nullptr;};
        inline int64_t getCachedTokens() const { DARABONBA_PTR_GET_DEFAULT(cachedTokens_, 0L) };
        inline Result& setCachedTokens(int64_t cachedTokens) { DARABONBA_PTR_SET_VALUE(cachedTokens_, cachedTokens) };


        // completionTokens Field Functions 
        bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
        void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
        inline int64_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0L) };
        inline Result& setCompletionTokens(int64_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


        // promptTokens Field Functions 
        bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
        void deletePromptTokens() { this->promptTokens_ = nullptr;};
        inline int64_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0L) };
        inline Result& setPromptTokens(int64_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


        // thoughtsTokens Field Functions 
        bool hasThoughtsTokens() const { return this->thoughtsTokens_ != nullptr;};
        void deleteThoughtsTokens() { this->thoughtsTokens_ = nullptr;};
        inline int64_t getThoughtsTokens() const { DARABONBA_PTR_GET_DEFAULT(thoughtsTokens_, 0L) };
        inline Result& setThoughtsTokens(int64_t thoughtsTokens) { DARABONBA_PTR_SET_VALUE(thoughtsTokens_, thoughtsTokens) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
        inline Result& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        shared_ptr<int64_t> cachedTokens_ {};
        shared_ptr<int64_t> completionTokens_ {};
        shared_ptr<int64_t> promptTokens_ {};
        shared_ptr<int64_t> thoughtsTokens_ {};
        shared_ptr<int64_t> totalTokens_ {};
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
    inline const GetAgentSessionTokenUsageResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, GetAgentSessionTokenUsageResponseBody::JsonRpcResponse) };
    inline GetAgentSessionTokenUsageResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, GetAgentSessionTokenUsageResponseBody::JsonRpcResponse) };
    inline GetAgentSessionTokenUsageResponseBody& setJsonRpcResponse(const GetAgentSessionTokenUsageResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline GetAgentSessionTokenUsageResponseBody& setJsonRpcResponse(GetAgentSessionTokenUsageResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSessionTokenUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAgentSessionTokenUsageResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
