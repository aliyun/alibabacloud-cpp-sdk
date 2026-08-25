// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREDEFINEDMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREDEFINEDMODELSRESPONSEBODY_HPP_
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
  class ListPredefinedModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPredefinedModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPredefinedModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListPredefinedModelsResponseBody() = default ;
    ListPredefinedModelsResponseBody(const ListPredefinedModelsResponseBody &) = default ;
    ListPredefinedModelsResponseBody(ListPredefinedModelsResponseBody &&) = default ;
    ListPredefinedModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPredefinedModelsResponseBody() = default ;
    ListPredefinedModelsResponseBody& operator=(const ListPredefinedModelsResponseBody &) = default ;
    ListPredefinedModelsResponseBody& operator=(ListPredefinedModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(contextSize, contextSize_);
        DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(releaseDate, releaseDate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(contextSize, contextSize_);
        DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(releaseDate, releaseDate_);
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
        // Indicates whether the model is able to invoke multiple tool calling requests in a single response.
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
        && this->contextSize_ == nullptr && this->maxTokens_ == nullptr && this->modelName_ == nullptr && this->releaseDate_ == nullptr; };
      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const Data::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, Data::Capabilities) };
      inline Data::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, Data::Capabilities) };
      inline Data& setCapabilities(const Data::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Data& setCapabilities(Data::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // contextSize Field Functions 
      bool hasContextSize() const { return this->contextSize_ != nullptr;};
      void deleteContextSize() { this->contextSize_ = nullptr;};
      inline int64_t getContextSize() const { DARABONBA_PTR_GET_DEFAULT(contextSize_, 0L) };
      inline Data& setContextSize(int64_t contextSize) { DARABONBA_PTR_SET_VALUE(contextSize_, contextSize) };


      // maxTokens Field Functions 
      bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
      void deleteMaxTokens() { this->maxTokens_ = nullptr;};
      inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
      inline Data& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Data& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // releaseDate Field Functions 
      bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
      void deleteReleaseDate() { this->releaseDate_ = nullptr;};
      inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
      inline Data& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


    protected:
      // The model capability configuration.
      shared_ptr<Data::Capabilities> capabilities_ {};
      // The model context window size in tokens. The value must be a positive integer.
      shared_ptr<int64_t> contextSize_ {};
      // The maximum number of output tokens supported by the model in a single generation.
      shared_ptr<int64_t> maxTokens_ {};
      // The upstream model name.
      shared_ptr<string> modelName_ {};
      // The model release date in the format of YYYY-MM-DD.
      shared_ptr<string> releaseDate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPredefinedModelsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListPredefinedModelsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListPredefinedModelsResponseBody::Data>) };
    inline vector<ListPredefinedModelsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListPredefinedModelsResponseBody::Data>) };
    inline ListPredefinedModelsResponseBody& setData(const vector<ListPredefinedModelsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPredefinedModelsResponseBody& setData(vector<ListPredefinedModelsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPredefinedModelsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPredefinedModelsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPredefinedModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPredefinedModelsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. The value SUCCESS indicates success.
    shared_ptr<string> code_ {};
    // The list of predefined models.
    shared_ptr<vector<ListPredefinedModelsResponseBody::Data>> data_ {};
    // The HTTP status code. The value 200 indicates success.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request processing result message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
