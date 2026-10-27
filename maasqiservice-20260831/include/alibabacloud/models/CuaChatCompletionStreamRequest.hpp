// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUACHATCOMPLETIONSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUACHATCOMPLETIONSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
namespace Models
{
  class CuaChatCompletionStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CuaChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(streamOptions, streamOptions_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, CuaChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(streamOptions, streamOptions_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    CuaChatCompletionStreamRequest() = default ;
    CuaChatCompletionStreamRequest(const CuaChatCompletionStreamRequest &) = default ;
    CuaChatCompletionStreamRequest(CuaChatCompletionStreamRequest &&) = default ;
    CuaChatCompletionStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CuaChatCompletionStreamRequest() = default ;
    CuaChatCompletionStreamRequest& operator=(const CuaChatCompletionStreamRequest &) = default ;
    CuaChatCompletionStreamRequest& operator=(CuaChatCompletionStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamOptions& obj) { 
        DARABONBA_PTR_TO_JSON(includeUsage, includeUsage_);
      };
      friend void from_json(const Darabonba::Json& j, StreamOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(includeUsage, includeUsage_);
      };
      StreamOptions() = default ;
      StreamOptions(const StreamOptions &) = default ;
      StreamOptions(StreamOptions &&) = default ;
      StreamOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamOptions() = default ;
      StreamOptions& operator=(const StreamOptions &) = default ;
      StreamOptions& operator=(StreamOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->includeUsage_ == nullptr; };
      // includeUsage Field Functions 
      bool hasIncludeUsage() const { return this->includeUsage_ != nullptr;};
      void deleteIncludeUsage() { this->includeUsage_ = nullptr;};
      inline bool getIncludeUsage() const { DARABONBA_PTR_GET_DEFAULT(includeUsage_, false) };
      inline StreamOptions& setIncludeUsage(bool includeUsage) { DARABONBA_PTR_SET_VALUE(includeUsage_, includeUsage) };


    protected:
      shared_ptr<bool> includeUsage_ {};
    };

    class Metadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
        DARABONBA_PTR_TO_JSON(screenHeight, screenHeight_);
        DARABONBA_PTR_TO_JSON(screenWidth, screenWidth_);
      };
      friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
        DARABONBA_PTR_FROM_JSON(screenHeight, screenHeight_);
        DARABONBA_PTR_FROM_JSON(screenWidth, screenWidth_);
      };
      Metadata() = default ;
      Metadata(const Metadata &) = default ;
      Metadata(Metadata &&) = default ;
      Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metadata() = default ;
      Metadata& operator=(const Metadata &) = default ;
      Metadata& operator=(Metadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->screenHeight_ == nullptr
        && this->screenWidth_ == nullptr; };
      // screenHeight Field Functions 
      bool hasScreenHeight() const { return this->screenHeight_ != nullptr;};
      void deleteScreenHeight() { this->screenHeight_ = nullptr;};
      inline int32_t getScreenHeight() const { DARABONBA_PTR_GET_DEFAULT(screenHeight_, 0) };
      inline Metadata& setScreenHeight(int32_t screenHeight) { DARABONBA_PTR_SET_VALUE(screenHeight_, screenHeight) };


      // screenWidth Field Functions 
      bool hasScreenWidth() const { return this->screenWidth_ != nullptr;};
      void deleteScreenWidth() { this->screenWidth_ = nullptr;};
      inline int32_t getScreenWidth() const { DARABONBA_PTR_GET_DEFAULT(screenWidth_, 0) };
      inline Metadata& setScreenWidth(int32_t screenWidth) { DARABONBA_PTR_SET_VALUE(screenWidth_, screenWidth) };


    protected:
      shared_ptr<int32_t> screenHeight_ {};
      shared_ptr<int32_t> screenWidth_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(imageData, imageData_);
          DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(imageData, imageData_);
          DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ImageUrl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageUrl& obj) { 
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, ImageUrl& obj) { 
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          ImageUrl() = default ;
          ImageUrl(const ImageUrl &) = default ;
          ImageUrl(ImageUrl &&) = default ;
          ImageUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageUrl() = default ;
          ImageUrl& operator=(const ImageUrl &) = default ;
          ImageUrl& operator=(ImageUrl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->url_ == nullptr; };
          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline ImageUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // This parameter is required.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->imageData_ == nullptr
        && this->imageUrl_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
        // imageData Field Functions 
        bool hasImageData() const { return this->imageData_ != nullptr;};
        void deleteImageData() { this->imageData_ = nullptr;};
        inline string getImageData() const { DARABONBA_PTR_GET_DEFAULT(imageData_, "") };
        inline Content& setImageData(string imageData) { DARABONBA_PTR_SET_VALUE(imageData_, imageData) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline const Content::ImageUrl & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, Content::ImageUrl) };
        inline Content::ImageUrl getImageUrl() { DARABONBA_PTR_GET(imageUrl_, Content::ImageUrl) };
        inline Content& setImageUrl(const Content::ImageUrl & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
        inline Content& setImageUrl(Content::ImageUrl && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> imageData_ {};
        shared_ptr<Content::ImageUrl> imageUrl_ {};
        shared_ptr<string> text_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr && this->toolCallId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Messages::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Messages::Content>) };
      inline vector<Messages::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Messages::Content>) };
      inline Messages& setContent(const vector<Messages::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Messages& setContent(vector<Messages::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // toolCallId Field Functions 
      bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
      void deleteToolCallId() { this->toolCallId_ = nullptr;};
      inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
      inline Messages& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<Messages::Content>> content_ {};
      // This parameter is required.
      shared_ptr<string> role_ {};
      shared_ptr<string> toolCallId_ {};
    };

    virtual bool empty() const override { return this->messages_ == nullptr
        && this->metadata_ == nullptr && this->model_ == nullptr && this->stream_ == nullptr && this->streamOptions_ == nullptr && this->tools_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CuaChatCompletionStreamRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CuaChatCompletionStreamRequest::Messages>) };
    inline vector<CuaChatCompletionStreamRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<CuaChatCompletionStreamRequest::Messages>) };
    inline CuaChatCompletionStreamRequest& setMessages(const vector<CuaChatCompletionStreamRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CuaChatCompletionStreamRequest& setMessages(vector<CuaChatCompletionStreamRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const CuaChatCompletionStreamRequest::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, CuaChatCompletionStreamRequest::Metadata) };
    inline CuaChatCompletionStreamRequest::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, CuaChatCompletionStreamRequest::Metadata) };
    inline CuaChatCompletionStreamRequest& setMetadata(const CuaChatCompletionStreamRequest::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline CuaChatCompletionStreamRequest& setMetadata(CuaChatCompletionStreamRequest::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CuaChatCompletionStreamRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline CuaChatCompletionStreamRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // streamOptions Field Functions 
    bool hasStreamOptions() const { return this->streamOptions_ != nullptr;};
    void deleteStreamOptions() { this->streamOptions_ = nullptr;};
    inline const CuaChatCompletionStreamRequest::StreamOptions & getStreamOptions() const { DARABONBA_PTR_GET_CONST(streamOptions_, CuaChatCompletionStreamRequest::StreamOptions) };
    inline CuaChatCompletionStreamRequest::StreamOptions getStreamOptions() { DARABONBA_PTR_GET(streamOptions_, CuaChatCompletionStreamRequest::StreamOptions) };
    inline CuaChatCompletionStreamRequest& setStreamOptions(const CuaChatCompletionStreamRequest::StreamOptions & streamOptions) { DARABONBA_PTR_SET_VALUE(streamOptions_, streamOptions) };
    inline CuaChatCompletionStreamRequest& setStreamOptions(CuaChatCompletionStreamRequest::StreamOptions && streamOptions) { DARABONBA_PTR_SET_RVALUE(streamOptions_, streamOptions) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Darabonba::Json> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getTools() { DARABONBA_PTR_GET(tools_, vector<Darabonba::Json>) };
    inline CuaChatCompletionStreamRequest& setTools(const vector<Darabonba::Json> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CuaChatCompletionStreamRequest& setTools(vector<Darabonba::Json> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    // This parameter is required.
    shared_ptr<vector<CuaChatCompletionStreamRequest::Messages>> messages_ {};
    shared_ptr<CuaChatCompletionStreamRequest::Metadata> metadata_ {};
    shared_ptr<string> model_ {};
    // This parameter is required.
    shared_ptr<bool> stream_ {};
    shared_ptr<CuaChatCompletionStreamRequest::StreamOptions> streamOptions_ {};
    shared_ptr<vector<Darabonba::Json>> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
