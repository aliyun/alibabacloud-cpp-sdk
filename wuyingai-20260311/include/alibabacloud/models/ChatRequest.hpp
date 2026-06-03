// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{
namespace Models
{
  class ChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
      DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(StreamOptions, streamOptions_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(StreamOptions, streamOptions_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ChatRequest() = default ;
    ChatRequest(const ChatRequest &) = default ;
    ChatRequest(ChatRequest &&) = default ;
    ChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatRequest() = default ;
    ChatRequest& operator=(const ChatRequest &) = default ;
    ChatRequest& operator=(ChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamOptions& obj) { 
        DARABONBA_PTR_TO_JSON(IncludeReasoning, includeReasoning_);
        DARABONBA_PTR_TO_JSON(IncludeToolCalls, includeToolCalls_);
      };
      friend void from_json(const Darabonba::Json& j, StreamOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(IncludeReasoning, includeReasoning_);
        DARABONBA_PTR_FROM_JSON(IncludeToolCalls, includeToolCalls_);
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
      virtual bool empty() const override { return this->includeReasoning_ == nullptr
        && this->includeToolCalls_ == nullptr; };
      // includeReasoning Field Functions 
      bool hasIncludeReasoning() const { return this->includeReasoning_ != nullptr;};
      void deleteIncludeReasoning() { this->includeReasoning_ = nullptr;};
      inline bool getIncludeReasoning() const { DARABONBA_PTR_GET_DEFAULT(includeReasoning_, false) };
      inline StreamOptions& setIncludeReasoning(bool includeReasoning) { DARABONBA_PTR_SET_VALUE(includeReasoning_, includeReasoning) };


      // includeToolCalls Field Functions 
      bool hasIncludeToolCalls() const { return this->includeToolCalls_ != nullptr;};
      void deleteIncludeToolCalls() { this->includeToolCalls_ = nullptr;};
      inline bool getIncludeToolCalls() const { DARABONBA_PTR_GET_DEFAULT(includeToolCalls_, false) };
      inline StreamOptions& setIncludeToolCalls(bool includeToolCalls) { DARABONBA_PTR_SET_VALUE(includeToolCalls_, includeToolCalls) };


    protected:
      shared_ptr<bool> includeReasoning_ {};
      shared_ptr<bool> includeToolCalls_ {};
    };

    class Settings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Settings& obj) { 
        DARABONBA_PTR_TO_JSON(OutputFileMode, outputFileMode_);
      };
      friend void from_json(const Darabonba::Json& j, Settings& obj) { 
        DARABONBA_PTR_FROM_JSON(OutputFileMode, outputFileMode_);
      };
      Settings() = default ;
      Settings(const Settings &) = default ;
      Settings(Settings &&) = default ;
      Settings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Settings() = default ;
      Settings& operator=(const Settings &) = default ;
      Settings& operator=(Settings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->outputFileMode_ == nullptr; };
      // outputFileMode Field Functions 
      bool hasOutputFileMode() const { return this->outputFileMode_ != nullptr;};
      void deleteOutputFileMode() { this->outputFileMode_ = nullptr;};
      inline string getOutputFileMode() const { DARABONBA_PTR_GET_DEFAULT(outputFileMode_, "") };
      inline Settings& setOutputFileMode(string outputFileMode) { DARABONBA_PTR_SET_VALUE(outputFileMode_, outputFileMode) };


    protected:
      shared_ptr<string> outputFileMode_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileUrl_ == nullptr && this->imageUrl_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Content& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline Content& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Content& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


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
        shared_ptr<string> fileName_ {};
        shared_ptr<string> fileUrl_ {};
        shared_ptr<string> imageUrl_ {};
        shared_ptr<string> text_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Input::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Input::Content>) };
      inline vector<Input::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Input::Content>) };
      inline Input& setContent(const vector<Input::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Input& setContent(vector<Input::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Input& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<vector<Input::Content>> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->authorization_ == nullptr
        && this->externalUserId_ == nullptr && this->input_ == nullptr && this->routingKey_ == nullptr && this->sessionId_ == nullptr && this->settings_ == nullptr
        && this->streamOptions_ == nullptr && this->templateId_ == nullptr; };
    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string getAuthorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline ChatRequest& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline ChatRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const vector<ChatRequest::Input> & getInput() const { DARABONBA_PTR_GET_CONST(input_, vector<ChatRequest::Input>) };
    inline vector<ChatRequest::Input> getInput() { DARABONBA_PTR_GET(input_, vector<ChatRequest::Input>) };
    inline ChatRequest& setInput(const vector<ChatRequest::Input> & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline ChatRequest& setInput(vector<ChatRequest::Input> && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline string getRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(routingKey_, "") };
    inline ChatRequest& setRoutingKey(string routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const ChatRequest::Settings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, ChatRequest::Settings) };
    inline ChatRequest::Settings getSettings() { DARABONBA_PTR_GET(settings_, ChatRequest::Settings) };
    inline ChatRequest& setSettings(const ChatRequest::Settings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline ChatRequest& setSettings(ChatRequest::Settings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // streamOptions Field Functions 
    bool hasStreamOptions() const { return this->streamOptions_ != nullptr;};
    void deleteStreamOptions() { this->streamOptions_ = nullptr;};
    inline const ChatRequest::StreamOptions & getStreamOptions() const { DARABONBA_PTR_GET_CONST(streamOptions_, ChatRequest::StreamOptions) };
    inline ChatRequest::StreamOptions getStreamOptions() { DARABONBA_PTR_GET(streamOptions_, ChatRequest::StreamOptions) };
    inline ChatRequest& setStreamOptions(const ChatRequest::StreamOptions & streamOptions) { DARABONBA_PTR_SET_VALUE(streamOptions_, streamOptions) };
    inline ChatRequest& setStreamOptions(ChatRequest::StreamOptions && streamOptions) { DARABONBA_PTR_SET_RVALUE(streamOptions_, streamOptions) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ChatRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<string> authorization_ {};
    shared_ptr<string> externalUserId_ {};
    shared_ptr<vector<ChatRequest::Input>> input_ {};
    shared_ptr<string> routingKey_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<ChatRequest::Settings> settings_ {};
    shared_ptr<ChatRequest::StreamOptions> streamOptions_ {};
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingAI20260311
#endif
