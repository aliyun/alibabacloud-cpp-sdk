// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_CONVERSATIONITEMINPUTAUDIOTRANSCRIPTIONFAILED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_CONVERSATIONITEMINPUTAUDIOTRANSCRIPTIONFAILED_HPP_
#include <darabonba/Core.hpp>
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
  class ConversationItemInputAudioTranscriptionFailed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConversationItemInputAudioTranscriptionFailed& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(content_index, contentIndex_);
      DARABONBA_PTR_TO_JSON(error, error_);
    };
    friend void from_json(const Darabonba::Json& j, ConversationItemInputAudioTranscriptionFailed& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(content_index, contentIndex_);
      DARABONBA_PTR_FROM_JSON(error, error_);
    };
    ConversationItemInputAudioTranscriptionFailed() = default ;
    ConversationItemInputAudioTranscriptionFailed(const ConversationItemInputAudioTranscriptionFailed &) = default ;
    ConversationItemInputAudioTranscriptionFailed(ConversationItemInputAudioTranscriptionFailed &&) = default ;
    ConversationItemInputAudioTranscriptionFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConversationItemInputAudioTranscriptionFailed() = default ;
    ConversationItemInputAudioTranscriptionFailed& operator=(const ConversationItemInputAudioTranscriptionFailed &) = default ;
    ConversationItemInputAudioTranscriptionFailed& operator=(ConversationItemInputAudioTranscriptionFailed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(param, param_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(param, param_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->param_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline Error& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> param_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->itemId_ == nullptr && this->contentIndex_ == nullptr && this->error_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConversationItemInputAudioTranscriptionFailed& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ConversationItemInputAudioTranscriptionFailed& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline ConversationItemInputAudioTranscriptionFailed& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // contentIndex Field Functions 
    bool hasContentIndex() const { return this->contentIndex_ != nullptr;};
    void deleteContentIndex() { this->contentIndex_ = nullptr;};
    inline int32_t getContentIndex() const { DARABONBA_PTR_GET_DEFAULT(contentIndex_, 0) };
    inline ConversationItemInputAudioTranscriptionFailed& setContentIndex(int32_t contentIndex) { DARABONBA_PTR_SET_VALUE(contentIndex_, contentIndex) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const ConversationItemInputAudioTranscriptionFailed::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, ConversationItemInputAudioTranscriptionFailed::Error) };
    inline ConversationItemInputAudioTranscriptionFailed::Error getError() { DARABONBA_PTR_GET(error_, ConversationItemInputAudioTranscriptionFailed::Error) };
    inline ConversationItemInputAudioTranscriptionFailed& setError(const ConversationItemInputAudioTranscriptionFailed::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline ConversationItemInputAudioTranscriptionFailed& setError(ConversationItemInputAudioTranscriptionFailed::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<int32_t> contentIndex_ {};
    shared_ptr<ConversationItemInputAudioTranscriptionFailed::Error> error_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
