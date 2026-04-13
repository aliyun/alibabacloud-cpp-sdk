// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Chat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class ListChatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Chats, chats_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Chats, chats_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChatsResponseBody() = default ;
    ListChatsResponseBody(const ListChatsResponseBody &) = default ;
    ListChatsResponseBody(ListChatsResponseBody &&) = default ;
    ListChatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatsResponseBody() = default ;
    ListChatsResponseBody& operator=(const ListChatsResponseBody &) = default ;
    ListChatsResponseBody& operator=(ListChatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chats_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // chats Field Functions 
    bool hasChats() const { return this->chats_ != nullptr;};
    void deleteChats() { this->chats_ = nullptr;};
    inline const vector<Chat> & getChats() const { DARABONBA_PTR_GET_CONST(chats_, vector<Chat>) };
    inline vector<Chat> getChats() { DARABONBA_PTR_GET(chats_, vector<Chat>) };
    inline ListChatsResponseBody& setChats(const vector<Chat> & chats) { DARABONBA_PTR_SET_VALUE(chats_, chats) };
    inline ListChatsResponseBody& setChats(vector<Chat> && chats) { DARABONBA_PTR_SET_RVALUE(chats_, chats) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListChatsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<Chat>> chats_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
