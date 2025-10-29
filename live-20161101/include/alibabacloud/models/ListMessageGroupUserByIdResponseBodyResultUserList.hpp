// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDRESPONSEBODYRESULTUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDRESPONSEBODYRESULTUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupUserByIdResponseBodyResultUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupUserByIdResponseBodyResultUserList& obj) { 
      DARABONBA_PTR_TO_JSON(IsMute, isMute_);
      DARABONBA_PTR_TO_JSON(MuteBy, muteBy_);
      DARABONBA_PTR_TO_JSON(UserAvatar, userAvatar_);
      DARABONBA_PTR_TO_JSON(UserExtension, userExtension_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupUserByIdResponseBodyResultUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(IsMute, isMute_);
      DARABONBA_PTR_FROM_JSON(MuteBy, muteBy_);
      DARABONBA_PTR_FROM_JSON(UserAvatar, userAvatar_);
      DARABONBA_PTR_FROM_JSON(UserExtension, userExtension_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    ListMessageGroupUserByIdResponseBodyResultUserList() = default ;
    ListMessageGroupUserByIdResponseBodyResultUserList(const ListMessageGroupUserByIdResponseBodyResultUserList &) = default ;
    ListMessageGroupUserByIdResponseBodyResultUserList(ListMessageGroupUserByIdResponseBodyResultUserList &&) = default ;
    ListMessageGroupUserByIdResponseBodyResultUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupUserByIdResponseBodyResultUserList() = default ;
    ListMessageGroupUserByIdResponseBodyResultUserList& operator=(const ListMessageGroupUserByIdResponseBodyResultUserList &) = default ;
    ListMessageGroupUserByIdResponseBodyResultUserList& operator=(ListMessageGroupUserByIdResponseBodyResultUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isMute_ == nullptr
        && return this->muteBy_ == nullptr && return this->userAvatar_ == nullptr && return this->userExtension_ == nullptr && return this->userId_ == nullptr && return this->userNick_ == nullptr; };
    // isMute Field Functions 
    bool hasIsMute() const { return this->isMute_ != nullptr;};
    void deleteIsMute() { this->isMute_ = nullptr;};
    inline bool isMute() const { DARABONBA_PTR_GET_DEFAULT(isMute_, false) };
    inline ListMessageGroupUserByIdResponseBodyResultUserList& setIsMute(bool isMute) { DARABONBA_PTR_SET_VALUE(isMute_, isMute) };


    // muteBy Field Functions 
    bool hasMuteBy() const { return this->muteBy_ != nullptr;};
    void deleteMuteBy() { this->muteBy_ = nullptr;};
    inline const vector<string> & muteBy() const { DARABONBA_PTR_GET_CONST(muteBy_, vector<string>) };
    inline vector<string> muteBy() { DARABONBA_PTR_GET(muteBy_, vector<string>) };
    inline ListMessageGroupUserByIdResponseBodyResultUserList& setMuteBy(const vector<string> & muteBy) { DARABONBA_PTR_SET_VALUE(muteBy_, muteBy) };
    inline ListMessageGroupUserByIdResponseBodyResultUserList& setMuteBy(vector<string> && muteBy) { DARABONBA_PTR_SET_RVALUE(muteBy_, muteBy) };


    // userAvatar Field Functions 
    bool hasUserAvatar() const { return this->userAvatar_ != nullptr;};
    void deleteUserAvatar() { this->userAvatar_ = nullptr;};
    inline string userAvatar() const { DARABONBA_PTR_GET_DEFAULT(userAvatar_, "") };
    inline ListMessageGroupUserByIdResponseBodyResultUserList& setUserAvatar(string userAvatar) { DARABONBA_PTR_SET_VALUE(userAvatar_, userAvatar) };


    // userExtension Field Functions 
    bool hasUserExtension() const { return this->userExtension_ != nullptr;};
    void deleteUserExtension() { this->userExtension_ = nullptr;};
    inline string userExtension() const { DARABONBA_PTR_GET_DEFAULT(userExtension_, "") };
    inline ListMessageGroupUserByIdResponseBodyResultUserList& setUserExtension(string userExtension) { DARABONBA_PTR_SET_VALUE(userExtension_, userExtension) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListMessageGroupUserByIdResponseBodyResultUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline ListMessageGroupUserByIdResponseBodyResultUserList& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // Indicates whether the user is muted. Valid values:
    // 
    // *   true: The user is muted.
    // *   false: The user is not muted.
    std::shared_ptr<bool> isMute_ = nullptr;
    // The type of the mute. Valid values:
    // 
    // *   group: All members in the message group are muted.
    // *   user: Specific members in the message group are muted.
    std::shared_ptr<vector<string>> muteBy_ = nullptr;
    // The URL of the profile picture of the user.
    std::shared_ptr<string> userAvatar_ = nullptr;
    // The custom information about the user.
    std::shared_ptr<string> userExtension_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
