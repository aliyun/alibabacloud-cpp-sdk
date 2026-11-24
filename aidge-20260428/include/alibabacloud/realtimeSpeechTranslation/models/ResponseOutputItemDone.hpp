// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_RESPONSEOUTPUTITEMDONE_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_RESPONSEOUTPUTITEMDONE_HPP_
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
  class ResponseOutputItemDone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResponseOutputItemDone& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(response_id, responseId_);
      DARABONBA_PTR_TO_JSON(output_index, outputIndex_);
      DARABONBA_PTR_TO_JSON(item, item_);
    };
    friend void from_json(const Darabonba::Json& j, ResponseOutputItemDone& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(response_id, responseId_);
      DARABONBA_PTR_FROM_JSON(output_index, outputIndex_);
      DARABONBA_PTR_FROM_JSON(item, item_);
    };
    ResponseOutputItemDone() = default ;
    ResponseOutputItemDone(const ResponseOutputItemDone &) = default ;
    ResponseOutputItemDone(ResponseOutputItemDone &&) = default ;
    ResponseOutputItemDone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResponseOutputItemDone() = default ;
    ResponseOutputItemDone& operator=(const ResponseOutputItemDone &) = default ;
    ResponseOutputItemDone& operator=(ResponseOutputItemDone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Item : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Item& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(object, object_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(content, content_);
      };
      friend void from_json(const Darabonba::Json& j, Item& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(object, object_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(content, content_);
      };
      Item() = default ;
      Item(const Item &) = default ;
      Item(Item &&) = default ;
      Item(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Item() = default ;
      Item& operator=(const Item &) = default ;
      Item& operator=(Item &&) = default ;
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
      inline Item& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Item& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Item& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Item& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Item& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Item::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Item::Content>) };
      inline vector<Item::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Item::Content>) };
      inline Item& setContent(const vector<Item::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Item& setContent(vector<Item::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> object_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> role_ {};
      shared_ptr<vector<Item::Content>> content_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->responseId_ == nullptr && this->outputIndex_ == nullptr && this->item_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ResponseOutputItemDone& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ResponseOutputItemDone& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // responseId Field Functions 
    bool hasResponseId() const { return this->responseId_ != nullptr;};
    void deleteResponseId() { this->responseId_ = nullptr;};
    inline string getResponseId() const { DARABONBA_PTR_GET_DEFAULT(responseId_, "") };
    inline ResponseOutputItemDone& setResponseId(string responseId) { DARABONBA_PTR_SET_VALUE(responseId_, responseId) };


    // outputIndex Field Functions 
    bool hasOutputIndex() const { return this->outputIndex_ != nullptr;};
    void deleteOutputIndex() { this->outputIndex_ = nullptr;};
    inline int32_t getOutputIndex() const { DARABONBA_PTR_GET_DEFAULT(outputIndex_, 0) };
    inline ResponseOutputItemDone& setOutputIndex(int32_t outputIndex) { DARABONBA_PTR_SET_VALUE(outputIndex_, outputIndex) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const ResponseOutputItemDone::Item & getItem() const { DARABONBA_PTR_GET_CONST(item_, ResponseOutputItemDone::Item) };
    inline ResponseOutputItemDone::Item getItem() { DARABONBA_PTR_GET(item_, ResponseOutputItemDone::Item) };
    inline ResponseOutputItemDone& setItem(const ResponseOutputItemDone::Item & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline ResponseOutputItemDone& setItem(ResponseOutputItemDone::Item && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> responseId_ {};
    shared_ptr<int32_t> outputIndex_ {};
    shared_ptr<ResponseOutputItemDone::Item> item_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
