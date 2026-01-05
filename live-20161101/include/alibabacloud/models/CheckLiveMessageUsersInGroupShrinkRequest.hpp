// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSINGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSINGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CheckLiveMessageUsersInGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLiveMessageUsersInGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(UserIds, userIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLiveMessageUsersInGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIdsShrink_);
    };
    CheckLiveMessageUsersInGroupShrinkRequest() = default ;
    CheckLiveMessageUsersInGroupShrinkRequest(const CheckLiveMessageUsersInGroupShrinkRequest &) = default ;
    CheckLiveMessageUsersInGroupShrinkRequest(CheckLiveMessageUsersInGroupShrinkRequest &&) = default ;
    CheckLiveMessageUsersInGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLiveMessageUsersInGroupShrinkRequest() = default ;
    CheckLiveMessageUsersInGroupShrinkRequest& operator=(const CheckLiveMessageUsersInGroupShrinkRequest &) = default ;
    CheckLiveMessageUsersInGroupShrinkRequest& operator=(CheckLiveMessageUsersInGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->dataCenter_ == nullptr && this->groupId_ == nullptr && this->userIdsShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CheckLiveMessageUsersInGroupShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CheckLiveMessageUsersInGroupShrinkRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CheckLiveMessageUsersInGroupShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string getUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline CheckLiveMessageUsersInGroupShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
    // The group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The list of users that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> userIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
