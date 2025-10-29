// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KICKLIVEMESSAGEGROUPUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KICKLIVEMESSAGEGROUPUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class KickLiveMessageGroupUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KickLiveMessageGroupUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(KickoffUser, kickoffUser_);
    };
    friend void from_json(const Darabonba::Json& j, KickLiveMessageGroupUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(KickoffUser, kickoffUser_);
    };
    KickLiveMessageGroupUserRequest() = default ;
    KickLiveMessageGroupUserRequest(const KickLiveMessageGroupUserRequest &) = default ;
    KickLiveMessageGroupUserRequest(KickLiveMessageGroupUserRequest &&) = default ;
    KickLiveMessageGroupUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KickLiveMessageGroupUserRequest() = default ;
    KickLiveMessageGroupUserRequest& operator=(const KickLiveMessageGroupUserRequest &) = default ;
    KickLiveMessageGroupUserRequest& operator=(KickLiveMessageGroupUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->dataCenter_ == nullptr && return this->groupId_ == nullptr && return this->kickoffUser_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline KickLiveMessageGroupUserRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline KickLiveMessageGroupUserRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline KickLiveMessageGroupUserRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // kickoffUser Field Functions 
    bool hasKickoffUser() const { return this->kickoffUser_ != nullptr;};
    void deleteKickoffUser() { this->kickoffUser_ = nullptr;};
    inline string kickoffUser() const { DARABONBA_PTR_GET_DEFAULT(kickoffUser_, "") };
    inline KickLiveMessageGroupUserRequest& setKickoffUser(string kickoffUser) { DARABONBA_PTR_SET_VALUE(kickoffUser_, kickoffUser) };


  protected:
    // The ID of the interactive messaging application to which the interactive messaging group belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The ID of the interactive messaging group from which you want to remove the user.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The user that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<string> kickoffUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
