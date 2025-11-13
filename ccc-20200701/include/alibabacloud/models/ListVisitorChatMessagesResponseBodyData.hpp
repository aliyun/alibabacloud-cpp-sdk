// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVISITORCHATMESSAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVISITORCHATMESSAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVisitorChatMessagesResponseBodyDataMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListVisitorChatMessagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVisitorChatMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListVisitorChatMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
    };
    ListVisitorChatMessagesResponseBodyData() = default ;
    ListVisitorChatMessagesResponseBodyData(const ListVisitorChatMessagesResponseBodyData &) = default ;
    ListVisitorChatMessagesResponseBodyData(ListVisitorChatMessagesResponseBodyData &&) = default ;
    ListVisitorChatMessagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVisitorChatMessagesResponseBodyData() = default ;
    ListVisitorChatMessagesResponseBodyData& operator=(const ListVisitorChatMessagesResponseBodyData &) = default ;
    ListVisitorChatMessagesResponseBodyData& operator=(ListVisitorChatMessagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr
        && return this->nextPageToken_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::ListVisitorChatMessagesResponseBodyDataMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::ListVisitorChatMessagesResponseBodyDataMessages>) };
    inline vector<Models::ListVisitorChatMessagesResponseBodyDataMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::ListVisitorChatMessagesResponseBodyDataMessages>) };
    inline ListVisitorChatMessagesResponseBodyData& setMessages(const vector<Models::ListVisitorChatMessagesResponseBodyDataMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListVisitorChatMessagesResponseBodyData& setMessages(vector<Models::ListVisitorChatMessagesResponseBodyDataMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListVisitorChatMessagesResponseBodyData& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


  protected:
    std::shared_ptr<vector<Models::ListVisitorChatMessagesResponseBodyDataMessages>> messages_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
