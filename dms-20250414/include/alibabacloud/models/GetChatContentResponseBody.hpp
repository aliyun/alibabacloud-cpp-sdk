// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetChatContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(content_type, contentType_);
      DARABONBA_PTR_TO_JSON(event_type, eventType_);
      DARABONBA_PTR_TO_JSON(level, level_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(content_type, contentType_);
      DARABONBA_PTR_FROM_JSON(event_type, eventType_);
      DARABONBA_PTR_FROM_JSON(level, level_);
    };
    GetChatContentResponseBody() = default ;
    GetChatContentResponseBody(const GetChatContentResponseBody &) = default ;
    GetChatContentResponseBody(GetChatContentResponseBody &&) = default ;
    GetChatContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatContentResponseBody() = default ;
    GetChatContentResponseBody& operator=(const GetChatContentResponseBody &) = default ;
    GetChatContentResponseBody& operator=(GetChatContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->checkpoint_ == nullptr && this->content_ == nullptr && this->contentType_ == nullptr && this->eventType_ == nullptr && this->level_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetChatContentResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline int64_t getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, 0L) };
    inline GetChatContentResponseBody& setCheckpoint(int64_t checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetChatContentResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetChatContentResponseBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline GetChatContentResponseBody& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline GetChatContentResponseBody& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    shared_ptr<string> category_ {};
    shared_ptr<int64_t> checkpoint_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> contentType_ {};
    shared_ptr<string> eventType_ {};
    shared_ptr<int64_t> level_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
