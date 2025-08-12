// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveMessageGroupMessagesResponseBodyMessageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_TO_JSON(MessageList, messageList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveMessageGroupMessagesResponseBody() = default ;
    ListLiveMessageGroupMessagesResponseBody(const ListLiveMessageGroupMessagesResponseBody &) = default ;
    ListLiveMessageGroupMessagesResponseBody(ListLiveMessageGroupMessagesResponseBody &&) = default ;
    ListLiveMessageGroupMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupMessagesResponseBody() = default ;
    ListLiveMessageGroupMessagesResponseBody& operator=(const ListLiveMessageGroupMessagesResponseBody &) = default ;
    ListLiveMessageGroupMessagesResponseBody& operator=(ListLiveMessageGroupMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->hasmore_ != nullptr && this->messageList_ != nullptr && this->nextPageToken_ != nullptr && this->requestId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListLiveMessageGroupMessagesResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hasmore Field Functions 
    bool hasHasmore() const { return this->hasmore_ != nullptr;};
    void deleteHasmore() { this->hasmore_ = nullptr;};
    inline bool hasmore() const { DARABONBA_PTR_GET_DEFAULT(hasmore_, false) };
    inline ListLiveMessageGroupMessagesResponseBody& setHasmore(bool hasmore) { DARABONBA_PTR_SET_VALUE(hasmore_, hasmore) };


    // messageList Field Functions 
    bool hasMessageList() const { return this->messageList_ != nullptr;};
    void deleteMessageList() { this->messageList_ = nullptr;};
    inline const vector<ListLiveMessageGroupMessagesResponseBodyMessageList> & messageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<ListLiveMessageGroupMessagesResponseBodyMessageList>) };
    inline vector<ListLiveMessageGroupMessagesResponseBodyMessageList> messageList() { DARABONBA_PTR_GET(messageList_, vector<ListLiveMessageGroupMessagesResponseBodyMessageList>) };
    inline ListLiveMessageGroupMessagesResponseBody& setMessageList(const vector<ListLiveMessageGroupMessagesResponseBodyMessageList> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
    inline ListLiveMessageGroupMessagesResponseBody& setMessageList(vector<ListLiveMessageGroupMessagesResponseBodyMessageList> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageGroupMessagesResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageGroupMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the group queried.
    std::shared_ptr<string> groupId_ = nullptr;
    // Indicates whether the current page is followed by another page.
    std::shared_ptr<bool> hasmore_ = nullptr;
    // Details about the messages.
    std::shared_ptr<vector<ListLiveMessageGroupMessagesResponseBodyMessageList>> messageList_ = nullptr;
    // The starting page number for the next query. A value of 0 indicates that no further pages can be queried.
    std::shared_ptr<int64_t> nextPageToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
