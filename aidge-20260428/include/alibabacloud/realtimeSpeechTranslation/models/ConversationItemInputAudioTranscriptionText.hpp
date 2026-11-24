// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_CONVERSATIONITEMINPUTAUDIOTRANSCRIPTIONTEXT_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_CONVERSATIONITEMINPUTAUDIOTRANSCRIPTIONTEXT_HPP_
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
  class ConversationItemInputAudioTranscriptionText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConversationItemInputAudioTranscriptionText& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(content_index, contentIndex_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(stash, stash_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(emotion, emotion_);
    };
    friend void from_json(const Darabonba::Json& j, ConversationItemInputAudioTranscriptionText& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(content_index, contentIndex_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(stash, stash_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(emotion, emotion_);
    };
    ConversationItemInputAudioTranscriptionText() = default ;
    ConversationItemInputAudioTranscriptionText(const ConversationItemInputAudioTranscriptionText &) = default ;
    ConversationItemInputAudioTranscriptionText(ConversationItemInputAudioTranscriptionText &&) = default ;
    ConversationItemInputAudioTranscriptionText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConversationItemInputAudioTranscriptionText() = default ;
    ConversationItemInputAudioTranscriptionText& operator=(const ConversationItemInputAudioTranscriptionText &) = default ;
    ConversationItemInputAudioTranscriptionText& operator=(ConversationItemInputAudioTranscriptionText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->itemId_ == nullptr && this->contentIndex_ == nullptr && this->text_ == nullptr && this->stash_ == nullptr
        && this->language_ == nullptr && this->emotion_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConversationItemInputAudioTranscriptionText& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ConversationItemInputAudioTranscriptionText& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline ConversationItemInputAudioTranscriptionText& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // contentIndex Field Functions 
    bool hasContentIndex() const { return this->contentIndex_ != nullptr;};
    void deleteContentIndex() { this->contentIndex_ = nullptr;};
    inline int32_t getContentIndex() const { DARABONBA_PTR_GET_DEFAULT(contentIndex_, 0) };
    inline ConversationItemInputAudioTranscriptionText& setContentIndex(int32_t contentIndex) { DARABONBA_PTR_SET_VALUE(contentIndex_, contentIndex) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ConversationItemInputAudioTranscriptionText& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // stash Field Functions 
    bool hasStash() const { return this->stash_ != nullptr;};
    void deleteStash() { this->stash_ = nullptr;};
    inline string getStash() const { DARABONBA_PTR_GET_DEFAULT(stash_, "") };
    inline ConversationItemInputAudioTranscriptionText& setStash(string stash) { DARABONBA_PTR_SET_VALUE(stash_, stash) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ConversationItemInputAudioTranscriptionText& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline string getEmotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
    inline ConversationItemInputAudioTranscriptionText& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<int32_t> contentIndex_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> stash_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> emotion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
