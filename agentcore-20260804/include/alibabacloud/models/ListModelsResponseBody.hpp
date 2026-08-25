// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListModelsResponseBody() = default ;
    ListModelsResponseBody(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody(ListModelsResponseBody &&) = default ;
    ListModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBody() = default ;
    ListModelsResponseBody& operator=(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody& operator=(ListModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(connectionId, connectionId_);
        DARABONBA_PTR_TO_JSON(contextSize, contextSize_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(connectionId, connectionId_);
        DARABONBA_PTR_FROM_JSON(contextSize, contextSize_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Capabilities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Capabilities& obj) { 
          DARABONBA_PTR_TO_JSON(audio, audio_);
          DARABONBA_PTR_TO_JSON(document, document_);
          DARABONBA_PTR_TO_JSON(multiToolCall, multiToolCall_);
          DARABONBA_PTR_TO_JSON(reasoning, reasoning_);
          DARABONBA_PTR_TO_JSON(streamToolCall, streamToolCall_);
          DARABONBA_PTR_TO_JSON(toolCall, toolCall_);
          DARABONBA_PTR_TO_JSON(video, video_);
          DARABONBA_PTR_TO_JSON(vision, vision_);
        };
        friend void from_json(const Darabonba::Json& j, Capabilities& obj) { 
          DARABONBA_PTR_FROM_JSON(audio, audio_);
          DARABONBA_PTR_FROM_JSON(document, document_);
          DARABONBA_PTR_FROM_JSON(multiToolCall, multiToolCall_);
          DARABONBA_PTR_FROM_JSON(reasoning, reasoning_);
          DARABONBA_PTR_FROM_JSON(streamToolCall, streamToolCall_);
          DARABONBA_PTR_FROM_JSON(toolCall, toolCall_);
          DARABONBA_PTR_FROM_JSON(video, video_);
          DARABONBA_PTR_FROM_JSON(vision, vision_);
        };
        Capabilities() = default ;
        Capabilities(const Capabilities &) = default ;
        Capabilities(Capabilities &&) = default ;
        Capabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Capabilities() = default ;
        Capabilities& operator=(const Capabilities &) = default ;
        Capabilities& operator=(Capabilities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audio_ == nullptr
        && this->document_ == nullptr && this->multiToolCall_ == nullptr && this->reasoning_ == nullptr && this->streamToolCall_ == nullptr && this->toolCall_ == nullptr
        && this->video_ == nullptr && this->vision_ == nullptr; };
        // audio Field Functions 
        bool hasAudio() const { return this->audio_ != nullptr;};
        void deleteAudio() { this->audio_ = nullptr;};
        inline bool getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, false) };
        inline Capabilities& setAudio(bool audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


        // document Field Functions 
        bool hasDocument() const { return this->document_ != nullptr;};
        void deleteDocument() { this->document_ = nullptr;};
        inline bool getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, false) };
        inline Capabilities& setDocument(bool document) { DARABONBA_PTR_SET_VALUE(document_, document) };


        // multiToolCall Field Functions 
        bool hasMultiToolCall() const { return this->multiToolCall_ != nullptr;};
        void deleteMultiToolCall() { this->multiToolCall_ = nullptr;};
        inline bool getMultiToolCall() const { DARABONBA_PTR_GET_DEFAULT(multiToolCall_, false) };
        inline Capabilities& setMultiToolCall(bool multiToolCall) { DARABONBA_PTR_SET_VALUE(multiToolCall_, multiToolCall) };


        // reasoning Field Functions 
        bool hasReasoning() const { return this->reasoning_ != nullptr;};
        void deleteReasoning() { this->reasoning_ = nullptr;};
        inline bool getReasoning() const { DARABONBA_PTR_GET_DEFAULT(reasoning_, false) };
        inline Capabilities& setReasoning(bool reasoning) { DARABONBA_PTR_SET_VALUE(reasoning_, reasoning) };


        // streamToolCall Field Functions 
        bool hasStreamToolCall() const { return this->streamToolCall_ != nullptr;};
        void deleteStreamToolCall() { this->streamToolCall_ = nullptr;};
        inline bool getStreamToolCall() const { DARABONBA_PTR_GET_DEFAULT(streamToolCall_, false) };
        inline Capabilities& setStreamToolCall(bool streamToolCall) { DARABONBA_PTR_SET_VALUE(streamToolCall_, streamToolCall) };


        // toolCall Field Functions 
        bool hasToolCall() const { return this->toolCall_ != nullptr;};
        void deleteToolCall() { this->toolCall_ = nullptr;};
        inline bool getToolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
        inline Capabilities& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


        // video Field Functions 
        bool hasVideo() const { return this->video_ != nullptr;};
        void deleteVideo() { this->video_ = nullptr;};
        inline bool getVideo() const { DARABONBA_PTR_GET_DEFAULT(video_, false) };
        inline Capabilities& setVideo(bool video) { DARABONBA_PTR_SET_VALUE(video_, video) };


        // vision Field Functions 
        bool hasVision() const { return this->vision_ != nullptr;};
        void deleteVision() { this->vision_ = nullptr;};
        inline bool getVision() const { DARABONBA_PTR_GET_DEFAULT(vision_, false) };
        inline Capabilities& setVision(bool vision) { DARABONBA_PTR_SET_VALUE(vision_, vision) };


      protected:
        // Indicates whether the model supports audio input or output.
        shared_ptr<bool> audio_ {};
        // Indicates whether the model supports document input.
        shared_ptr<bool> document_ {};
        // Indicates whether the model supports invoking multiple tools in a single response.
        shared_ptr<bool> multiToolCall_ {};
        // Indicates whether the model supports reasoning capabilities.
        shared_ptr<bool> reasoning_ {};
        // Indicates whether the model supports streaming tool calling.
        shared_ptr<bool> streamToolCall_ {};
        // Indicates whether the model supports tool calling.
        shared_ptr<bool> toolCall_ {};
        // Indicates whether the model supports video input.
        shared_ptr<bool> video_ {};
        // Indicates whether the model supports image input.
        shared_ptr<bool> vision_ {};
      };

      virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->connectionId_ == nullptr && this->contextSize_ == nullptr && this->createdAt_ == nullptr && this->description_ == nullptr && this->maxTokens_ == nullptr
        && this->modelId_ == nullptr && this->modelName_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const Items::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, Items::Capabilities) };
      inline Items::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, Items::Capabilities) };
      inline Items& setCapabilities(const Items::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Items& setCapabilities(Items::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // connectionId Field Functions 
      bool hasConnectionId() const { return this->connectionId_ != nullptr;};
      void deleteConnectionId() { this->connectionId_ = nullptr;};
      inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
      inline Items& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


      // contextSize Field Functions 
      bool hasContextSize() const { return this->contextSize_ != nullptr;};
      void deleteContextSize() { this->contextSize_ = nullptr;};
      inline int64_t getContextSize() const { DARABONBA_PTR_GET_DEFAULT(contextSize_, 0L) };
      inline Items& setContextSize(int64_t contextSize) { DARABONBA_PTR_SET_VALUE(contextSize_, contextSize) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maxTokens Field Functions 
      bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
      void deleteMaxTokens() { this->maxTokens_ = nullptr;};
      inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
      inline Items& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline Items& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Items& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The model capability configuration.
      shared_ptr<Items::Capabilities> capabilities_ {};
      // The model connection ID.
      shared_ptr<string> connectionId_ {};
      // The model context window size, in tokens. The value must be a positive integer.
      shared_ptr<int64_t> contextSize_ {};
      // The time when the resource was created, in RFC 3339 UTC format.
      shared_ptr<string> createdAt_ {};
      // The model description. Maximum length: 255 characters.
      shared_ptr<string> description_ {};
      // The maximum number of output tokens supported by the model in a single generation.
      shared_ptr<int64_t> maxTokens_ {};
      // The model ID.
      shared_ptr<string> modelId_ {};
      // The upstream model name.
      shared_ptr<string> modelName_ {};
      // The time when the resource was last updated, in RFC 3339 UTC format.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListModelsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListModelsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListModelsResponseBody::Items>) };
    inline vector<ListModelsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListModelsResponseBody::Items>) };
    inline ListModelsResponseBody& setItems(const vector<ListModelsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListModelsResponseBody& setItems(vector<ListModelsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListModelsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListModelsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListModelsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code. A value of SUCCESS indicates success.
    shared_ptr<string> code_ {};
    // The HTTP status code. A value of 200 indicates success.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of models.
    shared_ptr<vector<ListModelsResponseBody::Items>> items_ {};
    // The number of results per page. Valid values: 0 to 100. If this parameter is not set or set to 0, the default value 10 is used.
    shared_ptr<int32_t> maxResults_ {};
    // The message of the request processing result.
    shared_ptr<string> message_ {};
    // The pagination token. Pass the token returned from the previous query. An empty response indicates that no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of resources that match the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
