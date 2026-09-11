// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALIDINGGROUPCHATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALIDINGGROUPCHATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SearchAliDingGroupChatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAliDingGroupChatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAliDingGroupChatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SearchAliDingGroupChatsResponseBody() = default ;
    SearchAliDingGroupChatsResponseBody(const SearchAliDingGroupChatsResponseBody &) = default ;
    SearchAliDingGroupChatsResponseBody(SearchAliDingGroupChatsResponseBody &&) = default ;
    SearchAliDingGroupChatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAliDingGroupChatsResponseBody() = default ;
    SearchAliDingGroupChatsResponseBody& operator=(const SearchAliDingGroupChatsResponseBody &) = default ;
    SearchAliDingGroupChatsResponseBody& operator=(SearchAliDingGroupChatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(chatId, chatId_);
        DARABONBA_PTR_TO_JSON(conversationType, conversationType_);
        DARABONBA_PTR_TO_JSON(muted, muted_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(chatId, chatId_);
        DARABONBA_PTR_FROM_JSON(conversationType, conversationType_);
        DARABONBA_PTR_FROM_JSON(muted, muted_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chatId_ == nullptr
        && this->conversationType_ == nullptr && this->muted_ == nullptr && this->title_ == nullptr; };
      // chatId Field Functions 
      bool hasChatId() const { return this->chatId_ != nullptr;};
      void deleteChatId() { this->chatId_ = nullptr;};
      inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
      inline Items& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


      // conversationType Field Functions 
      bool hasConversationType() const { return this->conversationType_ != nullptr;};
      void deleteConversationType() { this->conversationType_ = nullptr;};
      inline string getConversationType() const { DARABONBA_PTR_GET_DEFAULT(conversationType_, "") };
      inline Items& setConversationType(string conversationType) { DARABONBA_PTR_SET_VALUE(conversationType_, conversationType) };


      // muted Field Functions 
      bool hasMuted() const { return this->muted_ != nullptr;};
      void deleteMuted() { this->muted_ = nullptr;};
      inline bool getMuted() const { DARABONBA_PTR_GET_DEFAULT(muted_, false) };
      inline Items& setMuted(bool muted) { DARABONBA_PTR_SET_VALUE(muted_, muted) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // 阿里钉群聊 ID
      shared_ptr<string> chatId_ {};
      // 会话类型
      shared_ptr<string> conversationType_ {};
      // 当前用户是否开启免打扰
      shared_ptr<bool> muted_ {};
      // 群聊标题
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->nextCursor_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchAliDingGroupChatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline SearchAliDingGroupChatsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<SearchAliDingGroupChatsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<SearchAliDingGroupChatsResponseBody::Items>) };
    inline vector<SearchAliDingGroupChatsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<SearchAliDingGroupChatsResponseBody::Items>) };
    inline SearchAliDingGroupChatsResponseBody& setItems(const vector<SearchAliDingGroupChatsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline SearchAliDingGroupChatsResponseBody& setItems(vector<SearchAliDingGroupChatsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchAliDingGroupChatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline string getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, "") };
    inline SearchAliDingGroupChatsResponseBody& setNextCursor(string nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAliDingGroupChatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 业务状态码
    shared_ptr<string> code_ {};
    // 是否还有下一页
    shared_ptr<bool> hasMore_ {};
    shared_ptr<vector<SearchAliDingGroupChatsResponseBody::Items>> items_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 下一页分页游标，末页为空
    shared_ptr<string> nextCursor_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
