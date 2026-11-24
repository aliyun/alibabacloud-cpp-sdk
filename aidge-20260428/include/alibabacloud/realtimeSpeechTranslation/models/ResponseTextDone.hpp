// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_RESPONSETEXTDONE_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_RESPONSETEXTDONE_HPP_
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
  class ResponseTextDone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResponseTextDone& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(response_id, responseId_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(output_index, outputIndex_);
      DARABONBA_PTR_TO_JSON(content_index, contentIndex_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ResponseTextDone& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(response_id, responseId_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(output_index, outputIndex_);
      DARABONBA_PTR_FROM_JSON(content_index, contentIndex_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    ResponseTextDone() = default ;
    ResponseTextDone(const ResponseTextDone &) = default ;
    ResponseTextDone(ResponseTextDone &&) = default ;
    ResponseTextDone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResponseTextDone() = default ;
    ResponseTextDone& operator=(const ResponseTextDone &) = default ;
    ResponseTextDone& operator=(ResponseTextDone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->responseId_ == nullptr && this->itemId_ == nullptr && this->outputIndex_ == nullptr && this->contentIndex_ == nullptr
        && this->text_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ResponseTextDone& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ResponseTextDone& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // responseId Field Functions 
    bool hasResponseId() const { return this->responseId_ != nullptr;};
    void deleteResponseId() { this->responseId_ = nullptr;};
    inline string getResponseId() const { DARABONBA_PTR_GET_DEFAULT(responseId_, "") };
    inline ResponseTextDone& setResponseId(string responseId) { DARABONBA_PTR_SET_VALUE(responseId_, responseId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline ResponseTextDone& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // outputIndex Field Functions 
    bool hasOutputIndex() const { return this->outputIndex_ != nullptr;};
    void deleteOutputIndex() { this->outputIndex_ = nullptr;};
    inline int32_t getOutputIndex() const { DARABONBA_PTR_GET_DEFAULT(outputIndex_, 0) };
    inline ResponseTextDone& setOutputIndex(int32_t outputIndex) { DARABONBA_PTR_SET_VALUE(outputIndex_, outputIndex) };


    // contentIndex Field Functions 
    bool hasContentIndex() const { return this->contentIndex_ != nullptr;};
    void deleteContentIndex() { this->contentIndex_ = nullptr;};
    inline int32_t getContentIndex() const { DARABONBA_PTR_GET_DEFAULT(contentIndex_, 0) };
    inline ResponseTextDone& setContentIndex(int32_t contentIndex) { DARABONBA_PTR_SET_VALUE(contentIndex_, contentIndex) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ResponseTextDone& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> responseId_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<int32_t> outputIndex_ {};
    shared_ptr<int32_t> contentIndex_ {};
    shared_ptr<string> text_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
