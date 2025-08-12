// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINERESPONSEBODYUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINERESPONSEBODYUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CheckLiveMessageUsersOnlineResponseBodyUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLiveMessageUsersOnlineResponseBodyUserList& obj) { 
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLiveMessageUsersOnlineResponseBodyUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CheckLiveMessageUsersOnlineResponseBodyUserList() = default ;
    CheckLiveMessageUsersOnlineResponseBodyUserList(const CheckLiveMessageUsersOnlineResponseBodyUserList &) = default ;
    CheckLiveMessageUsersOnlineResponseBodyUserList(CheckLiveMessageUsersOnlineResponseBodyUserList &&) = default ;
    CheckLiveMessageUsersOnlineResponseBodyUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLiveMessageUsersOnlineResponseBodyUserList() = default ;
    CheckLiveMessageUsersOnlineResponseBodyUserList& operator=(const CheckLiveMessageUsersOnlineResponseBodyUserList &) = default ;
    CheckLiveMessageUsersOnlineResponseBodyUserList& operator=(CheckLiveMessageUsersOnlineResponseBodyUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->online_ != nullptr
        && this->userId_ != nullptr; };
    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline CheckLiveMessageUsersOnlineResponseBodyUserList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CheckLiveMessageUsersOnlineResponseBodyUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Indicates whether the user is online.
    std::shared_ptr<bool> online_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
