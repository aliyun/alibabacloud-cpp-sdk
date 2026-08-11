// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNAPALSTREAMMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNAPALSTREAMMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class SendNapalStreamMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNapalStreamMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, SendNapalStreamMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
    };
    SendNapalStreamMessageRequest() = default ;
    SendNapalStreamMessageRequest(const SendNapalStreamMessageRequest &) = default ;
    SendNapalStreamMessageRequest(SendNapalStreamMessageRequest &&) = default ;
    SendNapalStreamMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNapalStreamMessageRequest() = default ;
    SendNapalStreamMessageRequest& operator=(const SendNapalStreamMessageRequest &) = default ;
    SendNapalStreamMessageRequest& operator=(SendNapalStreamMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Message : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Message& obj) { 
        DARABONBA_PTR_TO_JSON(ContextId, contextId_);
        DARABONBA_PTR_TO_JSON(Extensions, extensions_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Parts, parts_);
        DARABONBA_PTR_TO_JSON(ReferenceTaskIds, referenceTaskIds_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Message& obj) { 
        DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
        DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Parts, parts_);
        DARABONBA_PTR_FROM_JSON(ReferenceTaskIds, referenceTaskIds_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
          DARABONBA_ANY_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Filename, filename_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
          DARABONBA_PTR_TO_JSON(Raw, raw_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Parts& obj) { 
          DARABONBA_ANY_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Filename, filename_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
          DARABONBA_PTR_FROM_JSON(Raw, raw_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
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
        && this->filename_ == nullptr && this->mediaType_ == nullptr && this->raw_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline         const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
        Darabonba::Json & getData() { DARABONBA_GET(data_) };
        inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
        inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


        // filename Field Functions 
        bool hasFilename() const { return this->filename_ != nullptr;};
        void deleteFilename() { this->filename_ = nullptr;};
        inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
        inline Parts& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // raw Field Functions 
        bool hasRaw() const { return this->raw_ != nullptr;};
        void deleteRaw() { this->raw_ = nullptr;};
        inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
        inline Parts& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The structured data, used to pass JSON-formatted structured content.
        Darabonba::Json data_ {};
        // The file name.
        shared_ptr<string> filename_ {};
        // The media type.
        shared_ptr<string> mediaType_ {};
        // The raw content, used to pass non-text data.
        shared_ptr<string> raw_ {};
        // The text content. The natural language instruction entered by the user, such as a diagnostic request or question consultation.
        shared_ptr<string> text_ {};
        // The file URL, used to pass file-type content.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->contextId_ == nullptr
        && this->extensions_ == nullptr && this->messageId_ == nullptr && this->metadata_ == nullptr && this->parts_ == nullptr && this->referenceTaskIds_ == nullptr
        && this->role_ == nullptr && this->taskId_ == nullptr; };
      // contextId Field Functions 
      bool hasContextId() const { return this->contextId_ != nullptr;};
      void deleteContextId() { this->contextId_ = nullptr;};
      inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
      inline Message& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


      // extensions Field Functions 
      bool hasExtensions() const { return this->extensions_ != nullptr;};
      void deleteExtensions() { this->extensions_ = nullptr;};
      inline const vector<string> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<string>) };
      inline vector<string> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<string>) };
      inline Message& setExtensions(const vector<string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
      inline Message& setExtensions(vector<string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Message& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Message& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Message& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // parts Field Functions 
      bool hasParts() const { return this->parts_ != nullptr;};
      void deleteParts() { this->parts_ = nullptr;};
      inline const vector<Message::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Message::Parts>) };
      inline vector<Message::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<Message::Parts>) };
      inline Message& setParts(const vector<Message::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
      inline Message& setParts(vector<Message::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


      // referenceTaskIds Field Functions 
      bool hasReferenceTaskIds() const { return this->referenceTaskIds_ != nullptr;};
      void deleteReferenceTaskIds() { this->referenceTaskIds_ = nullptr;};
      inline const vector<string> & getReferenceTaskIds() const { DARABONBA_PTR_GET_CONST(referenceTaskIds_, vector<string>) };
      inline vector<string> getReferenceTaskIds() { DARABONBA_PTR_GET(referenceTaskIds_, vector<string>) };
      inline Message& setReferenceTaskIds(const vector<string> & referenceTaskIds) { DARABONBA_PTR_SET_VALUE(referenceTaskIds_, referenceTaskIds) };
      inline Message& setReferenceTaskIds(vector<string> && referenceTaskIds) { DARABONBA_PTR_SET_RVALUE(referenceTaskIds_, referenceTaskIds) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Message& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The session context ID. Do not specify this parameter for the first conversation. The server creates a new session. For multi-turn conversations, pass the contextId from the previous response to maintain context continuity.
      shared_ptr<string> contextId_ {};
      // The list of extension information.
      shared_ptr<vector<string>> extensions_ {};
      // The message ID. If not specified, the server automatically generates one.
      shared_ptr<string> messageId_ {};
      // The extended metadata, used to pass additional context information.
      Darabonba::Json metadata_ {};
      // The list of message content parts. Multiple parts are supported.
      shared_ptr<vector<Message::Parts>> parts_ {};
      // The list of referenced historical task IDs, used for context association.
      shared_ptr<vector<string>> referenceTaskIds_ {};
      // The message role.
      shared_ptr<string> role_ {};
      // The task ID. Pass the ID of the previous task in follow-up conversation scenarios.
      shared_ptr<string> taskId_ {};
    };

    class Configuration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
        DARABONBA_PTR_TO_JSON(AcceptedOutputModes, acceptedOutputModes_);
        DARABONBA_PTR_TO_JSON(HistoryLength, historyLength_);
        DARABONBA_PTR_TO_JSON(ReturnImmediately, returnImmediately_);
      };
      friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceptedOutputModes, acceptedOutputModes_);
        DARABONBA_PTR_FROM_JSON(HistoryLength, historyLength_);
        DARABONBA_PTR_FROM_JSON(ReturnImmediately, returnImmediately_);
      };
      Configuration() = default ;
      Configuration(const Configuration &) = default ;
      Configuration(Configuration &&) = default ;
      Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configuration() = default ;
      Configuration& operator=(const Configuration &) = default ;
      Configuration& operator=(Configuration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acceptedOutputModes_ == nullptr
        && this->historyLength_ == nullptr && this->returnImmediately_ == nullptr; };
      // acceptedOutputModes Field Functions 
      bool hasAcceptedOutputModes() const { return this->acceptedOutputModes_ != nullptr;};
      void deleteAcceptedOutputModes() { this->acceptedOutputModes_ = nullptr;};
      inline const vector<string> & getAcceptedOutputModes() const { DARABONBA_PTR_GET_CONST(acceptedOutputModes_, vector<string>) };
      inline vector<string> getAcceptedOutputModes() { DARABONBA_PTR_GET(acceptedOutputModes_, vector<string>) };
      inline Configuration& setAcceptedOutputModes(const vector<string> & acceptedOutputModes) { DARABONBA_PTR_SET_VALUE(acceptedOutputModes_, acceptedOutputModes) };
      inline Configuration& setAcceptedOutputModes(vector<string> && acceptedOutputModes) { DARABONBA_PTR_SET_RVALUE(acceptedOutputModes_, acceptedOutputModes) };


      // historyLength Field Functions 
      bool hasHistoryLength() const { return this->historyLength_ != nullptr;};
      void deleteHistoryLength() { this->historyLength_ = nullptr;};
      inline int32_t getHistoryLength() const { DARABONBA_PTR_GET_DEFAULT(historyLength_, 0) };
      inline Configuration& setHistoryLength(int32_t historyLength) { DARABONBA_PTR_SET_VALUE(historyLength_, historyLength) };


      // returnImmediately Field Functions 
      bool hasReturnImmediately() const { return this->returnImmediately_ != nullptr;};
      void deleteReturnImmediately() { this->returnImmediately_ = nullptr;};
      inline bool getReturnImmediately() const { DARABONBA_PTR_GET_DEFAULT(returnImmediately_, false) };
      inline Configuration& setReturnImmediately(bool returnImmediately) { DARABONBA_PTR_SET_VALUE(returnImmediately_, returnImmediately) };


    protected:
      // The accepted output modes. Default value: ["text/event-stream"], which indicates that SSE streaming responses are accepted.
      shared_ptr<vector<string>> acceptedOutputModes_ {};
      // The history message length. Controls the number of historical messages carried in multi-turn conversations. Default value: 20.
      shared_ptr<int32_t> historyLength_ {};
      // Specifies whether to return immediately. Valid values:
      // 
      // - false (default): Returns responses in streaming mode.
      // - true: Returns the task ID immediately and processes the request asynchronously.
      shared_ptr<bool> returnImmediately_ {};
    };

    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->message_ == nullptr && this->metadata_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const SendNapalStreamMessageRequest::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, SendNapalStreamMessageRequest::Configuration) };
    inline SendNapalStreamMessageRequest::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, SendNapalStreamMessageRequest::Configuration) };
    inline SendNapalStreamMessageRequest& setConfiguration(const SendNapalStreamMessageRequest::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline SendNapalStreamMessageRequest& setConfiguration(SendNapalStreamMessageRequest::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const SendNapalStreamMessageRequest::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, SendNapalStreamMessageRequest::Message) };
    inline SendNapalStreamMessageRequest::Message getMessage() { DARABONBA_PTR_GET(message_, SendNapalStreamMessageRequest::Message) };
    inline SendNapalStreamMessageRequest& setMessage(const SendNapalStreamMessageRequest::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline SendNapalStreamMessageRequest& setMessage(SendNapalStreamMessageRequest::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline SendNapalStreamMessageRequest& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline SendNapalStreamMessageRequest& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


  protected:
    // The request configuration object.
    shared_ptr<SendNapalStreamMessageRequest::Configuration> configuration_ {};
    // The message object that contains user input and session context information.
    shared_ptr<SendNapalStreamMessageRequest::Message> message_ {};
    // The additional request information.
    shared_ptr<map<string, string>> metadata_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
