// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAMERACHATCOMPLETIONSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CAMERACHATCOMPLETIONSTREAMREQUEST_HPP_
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
  class CameraChatCompletionStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CameraChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(sceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, CameraChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(sceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
    };
    CameraChatCompletionStreamRequest() = default ;
    CameraChatCompletionStreamRequest(const CameraChatCompletionStreamRequest &) = default ;
    CameraChatCompletionStreamRequest(CameraChatCompletionStreamRequest &&) = default ;
    CameraChatCompletionStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CameraChatCompletionStreamRequest() = default ;
    CameraChatCompletionStreamRequest& operator=(const CameraChatCompletionStreamRequest &) = default ;
    CameraChatCompletionStreamRequest& operator=(CameraChatCompletionStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
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
          DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
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
          // A publicly accessible HTTPS URL or a complete Base64 image data URL. Signed links must remain valid during execution. Both the image and the request body are subject to size limits. Use URLs for large images.
          // 
          // This parameter is required.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->type_ == nullptr; };
        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline const Content::ImageUrl & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, Content::ImageUrl) };
        inline Content::ImageUrl getImageUrl() { DARABONBA_PTR_GET(imageUrl_, Content::ImageUrl) };
        inline Content& setImageUrl(const Content::ImageUrl & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
        inline Content& setImageUrl(Content::ImageUrl && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The HTTP JSON key is image_url. Required. Contains the url field for the image address.
        // 
        // This parameter is required.
        shared_ptr<Content::ImageUrl> imageUrl_ {};
        // Required. Fixed to image_url.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
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


    protected:
      // Required. Contains one image_url image. Do not include custom recognition prompts here.
      // 
      // This parameter is required.
      shared_ptr<vector<Messages::Content>> content_ {};
      // Required. Fixed to user.
      // 
      // This parameter is required.
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->messages_ == nullptr
        && this->sceneId_ == nullptr && this->stream_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CameraChatCompletionStreamRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CameraChatCompletionStreamRequest::Messages>) };
    inline vector<CameraChatCompletionStreamRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<CameraChatCompletionStreamRequest::Messages>) };
    inline CameraChatCompletionStreamRequest& setMessages(const vector<CameraChatCompletionStreamRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CameraChatCompletionStreamRequest& setMessages(vector<CameraChatCompletionStreamRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CameraChatCompletionStreamRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline CameraChatCompletionStreamRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // Required. Provide only one role=user message and one image. Multiple images, custom text, videos, and tool invocations are not supported.
    // 
    // This parameter is required.
    shared_ptr<vector<CameraChatCompletionStreamRequest::Messages>> messages_ {};
    // The HTTP JSON key is scene_id. Required for person recognition. The value must be non-empty, contain no leading or trailing whitespace, and be up to 50 characters in length. Reuse the same scene ID for person recognition. Omit this field for food recognition.
    shared_ptr<string> sceneId_ {};
    // If set to true, an SSE response is returned. If set to false or omitted, a complete JSON detection result is returned. SSE transmits the final result and does not output token by token.
    shared_ptr<bool> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
