// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODYMESSAGELISTSENDER_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESRESPONSEBODYMESSAGELISTSENDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupMessagesResponseBodyMessageListSender : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupMessagesResponseBodyMessageListSender& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupMessagesResponseBodyMessageListSender& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListLiveMessageGroupMessagesResponseBodyMessageListSender() = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageListSender(const ListLiveMessageGroupMessagesResponseBodyMessageListSender &) = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageListSender(ListLiveMessageGroupMessagesResponseBodyMessageListSender &&) = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageListSender(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupMessagesResponseBodyMessageListSender() = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageListSender& operator=(const ListLiveMessageGroupMessagesResponseBodyMessageListSender &) = default ;
    ListLiveMessageGroupMessagesResponseBodyMessageListSender& operator=(ListLiveMessageGroupMessagesResponseBodyMessageListSender &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr
        && return this->userInfo_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListLiveMessageGroupMessagesResponseBodyMessageListSender& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline string userInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
    inline ListLiveMessageGroupMessagesResponseBodyMessageListSender& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


  protected:
    // The ID of the user who sent the message.
    std::shared_ptr<string> userId_ = nullptr;
    // The additional information about the user who sent the message.
    std::shared_ptr<string> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
