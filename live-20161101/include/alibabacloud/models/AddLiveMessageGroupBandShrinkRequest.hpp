// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEMESSAGEGROUPBANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEMESSAGEGROUPBANDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveMessageGroupBandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveMessageGroupBandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BannedUsers, bannedUsersShrink_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveMessageGroupBandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BannedUsers, bannedUsersShrink_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    AddLiveMessageGroupBandShrinkRequest() = default ;
    AddLiveMessageGroupBandShrinkRequest(const AddLiveMessageGroupBandShrinkRequest &) = default ;
    AddLiveMessageGroupBandShrinkRequest(AddLiveMessageGroupBandShrinkRequest &&) = default ;
    AddLiveMessageGroupBandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveMessageGroupBandShrinkRequest() = default ;
    AddLiveMessageGroupBandShrinkRequest& operator=(const AddLiveMessageGroupBandShrinkRequest &) = default ;
    AddLiveMessageGroupBandShrinkRequest& operator=(AddLiveMessageGroupBandShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->bannedUsersShrink_ == nullptr && this->dataCenter_ == nullptr && this->groupId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AddLiveMessageGroupBandShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bannedUsersShrink Field Functions 
    bool hasBannedUsersShrink() const { return this->bannedUsersShrink_ != nullptr;};
    void deleteBannedUsersShrink() { this->bannedUsersShrink_ = nullptr;};
    inline string getBannedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(bannedUsersShrink_, "") };
    inline AddLiveMessageGroupBandShrinkRequest& setBannedUsersShrink(string bannedUsersShrink) { DARABONBA_PTR_SET_VALUE(bannedUsersShrink_, bannedUsersShrink) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline AddLiveMessageGroupBandShrinkRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AddLiveMessageGroupBandShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The users whom you want to mute.
    // 
    // This parameter is required.
    shared_ptr<string> bannedUsersShrink_ {};
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application.
    // 
    // >  Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
    // The group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
