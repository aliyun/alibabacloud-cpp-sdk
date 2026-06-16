// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QACHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QACHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{
namespace Models
{
  class QaChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QaChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_ANY_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, QaChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_ANY_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    QaChatRequest() = default ;
    QaChatRequest(const QaChatRequest &) = default ;
    QaChatRequest(QaChatRequest &&) = default ;
    QaChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QaChatRequest() = default ;
    QaChatRequest& operator=(const QaChatRequest &) = default ;
    QaChatRequest& operator=(QaChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Message : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Message& obj) { 
        DARABONBA_PTR_TO_JSON(parts, parts_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Message& obj) { 
        DARABONBA_PTR_FROM_JSON(parts, parts_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      Message() = default ;
      Message(const Message &) = default ;
      Message(Message &&) = default ;
      Message(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Message() = default ;
      Message& operator=(const Message &) = default ;
      Message& operator=(Message &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Parts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parts& obj) { 
          DARABONBA_ANY_TO_JSON(data, data_);
          DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Parts& obj) { 
          DARABONBA_ANY_FROM_JSON(data, data_);
          DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Parts() = default ;
        Parts(const Parts &) = default ;
        Parts(Parts &&) = default ;
        Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parts() = default ;
        Parts& operator=(const Parts &) = default ;
        Parts& operator=(Parts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->mediaType_ == nullptr && this->text_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline         const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
        Darabonba::Json & getData() { DARABONBA_GET(data_) };
        inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
        inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Parts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // Required when type = "data". The data object structure is as follows:
        // 
        // - type: String type, required, indicates the data subtype. Currently supported value is "template", indicating a video template.
        // - videoId: String type, conditionally required. Only required when type = "template", indicating the video template ID; can be ignored or set to null for other types.
        Darabonba::Json data_ {};
        // Required when `type="file"`.
        // 
        // * Media type, currently only supports image formats JPG/PNG/WEBP/JPEG, maximum 5
        shared_ptr<string> mediaType_ {};
        // Required when `type="text"`.
        // 
        // * Text content, maximum 1024 characters
        shared_ptr<string> text_ {};
        // Fixed content block type, only supports `"text"` / `"file"` / `"data"`
        shared_ptr<string> type_ {};
        // Required when `type="file"`. Supports the following two types, with format support for JPG/PNG/WEBP/JPEG:
        // 
        // • Media resource CDN URL, currently supports images, maximum 5;
        // • Image encoding, upload image files using base64 encoded strings (supports bitmap formats), maximum 5
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->parts_ == nullptr
        && this->role_ == nullptr; };
      // parts Field Functions 
      bool hasParts() const { return this->parts_ != nullptr;};
      void deleteParts() { this->parts_ = nullptr;};
      inline const vector<Message::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Message::Parts>) };
      inline vector<Message::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<Message::Parts>) };
      inline Message& setParts(const vector<Message::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
      inline Message& setParts(vector<Message::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      // Individual content block, differentiated by `type`
      shared_ptr<vector<Message::Parts>> parts_ {};
      // Message role, currently only supports the `"user"` role
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->message_ == nullptr && this->options_ == nullptr && this->sessionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QaChatRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const QaChatRequest::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, QaChatRequest::Message) };
    inline QaChatRequest::Message getMessage() { DARABONBA_PTR_GET(message_, QaChatRequest::Message) };
    inline QaChatRequest& setMessage(const QaChatRequest::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline QaChatRequest& setMessage(QaChatRequest::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline     const Darabonba::Json & getOptions() const { DARABONBA_GET(options_) };
    Darabonba::Json & getOptions() { DARABONBA_GET(options_) };
    inline QaChatRequest& setOptions(const Darabonba::Json & options) { DARABONBA_SET_VALUE(options_, options) };
    inline QaChatRequest& setOptions(Darabonba::Json && options) { DARABONBA_SET_RVALUE(options_, options) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline QaChatRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // Application ID
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // User message object containing role and multimodal content.
    // 
    // This parameter is required.
    shared_ptr<QaChatRequest::Message> message_ {};
    // No input required
    Darabonba::Json options_ {};
    // Q&A session ID, used to track multiple Q&A interactions from the same user.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417
#endif
