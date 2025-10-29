// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERBYIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupUserByIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupUserByIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupUserByIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdListShrink_);
    };
    ListMessageGroupUserByIdShrinkRequest() = default ;
    ListMessageGroupUserByIdShrinkRequest(const ListMessageGroupUserByIdShrinkRequest &) = default ;
    ListMessageGroupUserByIdShrinkRequest(ListMessageGroupUserByIdShrinkRequest &&) = default ;
    ListMessageGroupUserByIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupUserByIdShrinkRequest() = default ;
    ListMessageGroupUserByIdShrinkRequest& operator=(const ListMessageGroupUserByIdShrinkRequest &) = default ;
    ListMessageGroupUserByIdShrinkRequest& operator=(ListMessageGroupUserByIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->groupId_ == nullptr && return this->userIdListShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMessageGroupUserByIdShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListMessageGroupUserByIdShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // userIdListShrink Field Functions 
    bool hasUserIdListShrink() const { return this->userIdListShrink_ != nullptr;};
    void deleteUserIdListShrink() { this->userIdListShrink_ = nullptr;};
    inline string userIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdListShrink_, "") };
    inline ListMessageGroupUserByIdShrinkRequest& setUserIdListShrink(string userIdListShrink) { DARABONBA_PTR_SET_VALUE(userIdListShrink_, userIdListShrink) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the message group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The list of users.
    // 
    // This parameter is required.
    std::shared_ptr<string> userIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
