// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_RESPONSECREATED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_RESPONSECREATED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class ResponseCreated : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResponseCreated& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(response, response_);
    };
    friend void from_json(const Darabonba::Json& j, ResponseCreated& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(response, response_);
    };
    ResponseCreated() = default ;
    ResponseCreated(const ResponseCreated &) = default ;
    ResponseCreated(ResponseCreated &&) = default ;
    ResponseCreated(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResponseCreated() = default ;
    ResponseCreated& operator=(const ResponseCreated &) = default ;
    ResponseCreated& operator=(ResponseCreated &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Response : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Response& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(object, object_);
        DARABONBA_PTR_TO_JSON(conversation_id, conversationId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(modalities, modalities_);
        DARABONBA_PTR_TO_JSON(voice, voice_);
        DARABONBA_PTR_TO_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_TO_JSON(output, output_);
      };
      friend void from_json(const Darabonba::Json& j, Response& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(object, object_);
        DARABONBA_PTR_FROM_JSON(conversation_id, conversationId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(modalities, modalities_);
        DARABONBA_PTR_FROM_JSON(voice, voice_);
        DARABONBA_PTR_FROM_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_FROM_JSON(output, output_);
      };
      Response() = default ;
      Response(const Response &) = default ;
      Response(Response &&) = default ;
      Response(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Response() = default ;
      Response& operator=(const Response &) = default ;
      Response& operator=(Response &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(object, object_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(content, content_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(object, object_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(content, content_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(text, text_);
            DARABONBA_PTR_TO_JSON(transcript, transcript_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(text, text_);
            DARABONBA_PTR_FROM_JSON(transcript, transcript_);
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
          virtual bool empty() const override { return this->type_ == nullptr
        && this->text_ == nullptr && this->transcript_ == nullptr; };
          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // transcript Field Functions 
          bool hasTranscript() const { return this->transcript_ != nullptr;};
          void deleteTranscript() { this->transcript_ = nullptr;};
          inline string getTranscript() const { DARABONBA_PTR_GET_DEFAULT(transcript_, "") };
          inline Content& setTranscript(string transcript) { DARABONBA_PTR_SET_VALUE(transcript_, transcript) };


        protected:
          shared_ptr<string> type_ {};
          shared_ptr<string> text_ {};
          shared_ptr<string> transcript_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->object_ == nullptr && this->type_ == nullptr && this->status_ == nullptr && this->role_ == nullptr && this->content_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Output& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // object Field Functions 
        bool hasObject() const { return this->object_ != nullptr;};
        void deleteObject() { this->object_ = nullptr;};
        inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
        inline Output& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Output& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Output& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const vector<Output::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Output::Content>) };
        inline vector<Output::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Output::Content>) };
        inline Output& setContent(const vector<Output::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Output& setContent(vector<Output::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> object_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> role_ {};
        shared_ptr<vector<Output::Content>> content_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->object_ == nullptr && this->conversationId_ == nullptr && this->status_ == nullptr && this->modalities_ == nullptr && this->voice_ == nullptr
        && this->outputAudioFormat_ == nullptr && this->output_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Response& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Response& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Response& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Response& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // modalities Field Functions 
      bool hasModalities() const { return this->modalities_ != nullptr;};
      void deleteModalities() { this->modalities_ = nullptr;};
      inline const vector<string> & getModalities() const { DARABONBA_PTR_GET_CONST(modalities_, vector<string>) };
      inline vector<string> getModalities() { DARABONBA_PTR_GET(modalities_, vector<string>) };
      inline Response& setModalities(const vector<string> & modalities) { DARABONBA_PTR_SET_VALUE(modalities_, modalities) };
      inline Response& setModalities(vector<string> && modalities) { DARABONBA_PTR_SET_RVALUE(modalities_, modalities) };


      // voice Field Functions 
      bool hasVoice() const { return this->voice_ != nullptr;};
      void deleteVoice() { this->voice_ = nullptr;};
      inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
      inline Response& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


      // outputAudioFormat Field Functions 
      bool hasOutputAudioFormat() const { return this->outputAudioFormat_ != nullptr;};
      void deleteOutputAudioFormat() { this->outputAudioFormat_ = nullptr;};
      inline string getOutputAudioFormat() const { DARABONBA_PTR_GET_DEFAULT(outputAudioFormat_, "") };
      inline Response& setOutputAudioFormat(string outputAudioFormat) { DARABONBA_PTR_SET_VALUE(outputAudioFormat_, outputAudioFormat) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const vector<Response::Output> & getOutput() const { DARABONBA_PTR_GET_CONST(output_, vector<Response::Output>) };
      inline vector<Response::Output> getOutput() { DARABONBA_PTR_GET(output_, vector<Response::Output>) };
      inline Response& setOutput(const vector<Response::Output> & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Response& setOutput(vector<Response::Output> && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> object_ {};
      shared_ptr<string> conversationId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<string>> modalities_ {};
      shared_ptr<string> voice_ {};
      shared_ptr<string> outputAudioFormat_ {};
      shared_ptr<vector<Response::Output>> output_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->response_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ResponseCreated& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ResponseCreated& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const ResponseCreated::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, ResponseCreated::Response) };
    inline ResponseCreated::Response getResponse() { DARABONBA_PTR_GET(response_, ResponseCreated::Response) };
    inline ResponseCreated& setResponse(const ResponseCreated::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline ResponseCreated& setResponse(ResponseCreated::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<ResponseCreated::Response> response_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
