// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateModelRequest() = default ;
    UpdateModelRequest(const UpdateModelRequest &) = default ;
    UpdateModelRequest(UpdateModelRequest &&) = default ;
    UpdateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelRequest() = default ;
    UpdateModelRequest& operator=(const UpdateModelRequest &) = default ;
    UpdateModelRequest& operator=(UpdateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(contextSize, contextSize_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(contextSize, contextSize_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
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
        // Specifies whether the model supports audio input or output. A value of true indicates that it is supported. A value of false indicates that it is not supported.
        shared_ptr<bool> audio_ {};
        // Specifies whether the model supports document input. A value of true indicates that it is supported. A value of false indicates that it is not supported.
        shared_ptr<bool> document_ {};
        // Specifies whether the model supports invoking multiple tools in a single response. A value of true indicates that it is supported. A value of false indicates that it is not supported.
        shared_ptr<bool> multiToolCall_ {};
        // Specifies whether the model supports reasoning. A value of true indicates that it is supported. A value of false indicates that it is not supported. This field is a capability marker and is not used to set reasoning intensity or reasoning token budget.
        shared_ptr<bool> reasoning_ {};
        // Specifies whether the model supports streaming tool invocation. A value of true indicates that it is supported. A value of false indicates that it is not supported.
        shared_ptr<bool> streamToolCall_ {};
        // Specifies whether the model supports tool invocation. A value of true indicates that it is supported. A value of false indicates that it is not supported.
        shared_ptr<bool> toolCall_ {};
        // Specifies whether the model supports video input. A value of true indicates that it is supported. A value of false indicates that it is not supported.
        shared_ptr<bool> video_ {};
        // Specifies whether the model supports image input. A value of true indicates that it is supported. A value of false indicates that it is not supported.
        shared_ptr<bool> vision_ {};
      };

      virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->contextSize_ == nullptr && this->description_ == nullptr && this->maxTokens_ == nullptr; };
      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const Body::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, Body::Capabilities) };
      inline Body::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, Body::Capabilities) };
      inline Body& setCapabilities(const Body::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Body& setCapabilities(Body::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // contextSize Field Functions 
      bool hasContextSize() const { return this->contextSize_ != nullptr;};
      void deleteContextSize() { this->contextSize_ = nullptr;};
      inline int64_t getContextSize() const { DARABONBA_PTR_GET_DEFAULT(contextSize_, 0L) };
      inline Body& setContextSize(int64_t contextSize) { DARABONBA_PTR_SET_VALUE(contextSize_, contextSize) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maxTokens Field Functions 
      bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
      void deleteMaxTokens() { this->maxTokens_ = nullptr;};
      inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
      inline Body& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    protected:
      // The model capability configuration. When an object is provided, it replaces the existing capability configuration as a whole. Capability fields not included in the object are treated as false. Providing an empty object {} sets all capabilities to false. If this parameter is not provided or set to null, the original configuration is retained.
      shared_ptr<Body::Capabilities> capabilities_ {};
      // The context token limit of the model. The minimum value is 1000. The updated value must not be less than maxTokens. If maxTokens is not provided in this request, the existing value is used for validation. If this parameter is not provided or set to null, the original value is retained.
      shared_ptr<int64_t> contextSize_ {};
      // The model description. The maximum length is 255 characters after leading and trailing whitespace is removed. Providing an empty string clears the description. If this parameter is not provided or set to null, the original value is retained. Modifying only the description does not refresh the model configuration of associated Agents.
      shared_ptr<string> description_ {};
      // The maximum number of output tokens per generation. The value must be a positive integer. If contextSize is configured, the updated maxTokens must not exceed contextSize. If contextSize is not provided in this request, the existing value is used for validation. If this parameter is not provided or set to null, the original value is retained.
      shared_ptr<int64_t> maxTokens_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateModelRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateModelRequest::Body) };
    inline UpdateModelRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateModelRequest::Body) };
    inline UpdateModelRequest& setBody(const UpdateModelRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateModelRequest& setBody(UpdateModelRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateModelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The model update request body. At least one non-null parameter must be provided among description, contextSize, maxTokens, and capabilities.
    shared_ptr<UpdateModelRequest::Body> body_ {};
    // The client token for idempotency. Not currently supported.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
