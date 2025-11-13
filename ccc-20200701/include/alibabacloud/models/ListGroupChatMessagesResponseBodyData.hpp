// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPCHATMESSAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPCHATMESSAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGroupChatMessagesResponseBodyDataMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListGroupChatMessagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupChatMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupChatMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
    };
    ListGroupChatMessagesResponseBodyData() = default ;
    ListGroupChatMessagesResponseBodyData(const ListGroupChatMessagesResponseBodyData &) = default ;
    ListGroupChatMessagesResponseBodyData(ListGroupChatMessagesResponseBodyData &&) = default ;
    ListGroupChatMessagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupChatMessagesResponseBodyData() = default ;
    ListGroupChatMessagesResponseBodyData& operator=(const ListGroupChatMessagesResponseBodyData &) = default ;
    ListGroupChatMessagesResponseBodyData& operator=(ListGroupChatMessagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr
        && return this->nextPageToken_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::ListGroupChatMessagesResponseBodyDataMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::ListGroupChatMessagesResponseBodyDataMessages>) };
    inline vector<Models::ListGroupChatMessagesResponseBodyDataMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::ListGroupChatMessagesResponseBodyDataMessages>) };
    inline ListGroupChatMessagesResponseBodyData& setMessages(const vector<Models::ListGroupChatMessagesResponseBodyDataMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListGroupChatMessagesResponseBodyData& setMessages(vector<Models::ListGroupChatMessagesResponseBodyDataMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListGroupChatMessagesResponseBodyData& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


  protected:
    std::shared_ptr<vector<Models::ListGroupChatMessagesResponseBodyDataMessages>> messages_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
