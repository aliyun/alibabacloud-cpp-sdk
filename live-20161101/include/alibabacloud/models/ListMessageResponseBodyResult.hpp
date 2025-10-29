// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageResponseBodyResultMessageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(MessageList, messageList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
    };
    ListMessageResponseBodyResult() = default ;
    ListMessageResponseBodyResult(const ListMessageResponseBodyResult &) = default ;
    ListMessageResponseBodyResult(ListMessageResponseBodyResult &&) = default ;
    ListMessageResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyResult() = default ;
    ListMessageResponseBodyResult& operator=(const ListMessageResponseBodyResult &) = default ;
    ListMessageResponseBodyResult& operator=(ListMessageResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasMore_ == nullptr
        && return this->messageList_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMessageResponseBodyResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // messageList Field Functions 
    bool hasMessageList() const { return this->messageList_ != nullptr;};
    void deleteMessageList() { this->messageList_ = nullptr;};
    inline const vector<Models::ListMessageResponseBodyResultMessageList> & messageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<Models::ListMessageResponseBodyResultMessageList>) };
    inline vector<Models::ListMessageResponseBodyResultMessageList> messageList() { DARABONBA_PTR_GET(messageList_, vector<Models::ListMessageResponseBodyResultMessageList>) };
    inline ListMessageResponseBodyResult& setMessageList(const vector<Models::ListMessageResponseBodyResultMessageList> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
    inline ListMessageResponseBodyResult& setMessageList(vector<Models::ListMessageResponseBodyResultMessageList> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


  protected:
    // Indicates whether the current page is followed by another page. Valid values:
    // 
    // *   true: The current page is followed by another page.
    // *   false: The current page is not followed by another page.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // Details about the messages.
    std::shared_ptr<vector<Models::ListMessageResponseBodyResultMessageList>> messageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
