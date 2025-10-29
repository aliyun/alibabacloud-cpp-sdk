// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPBANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPBANDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageGroupBandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageGroupBandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BannedAll, bannedAll_);
      DARABONBA_PTR_TO_JSON(BannnedUsers, bannnedUsersShrink_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(ExceptUsers, exceptUsersShrink_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageGroupBandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BannedAll, bannedAll_);
      DARABONBA_PTR_FROM_JSON(BannnedUsers, bannnedUsersShrink_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(ExceptUsers, exceptUsersShrink_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    ModifyLiveMessageGroupBandShrinkRequest() = default ;
    ModifyLiveMessageGroupBandShrinkRequest(const ModifyLiveMessageGroupBandShrinkRequest &) = default ;
    ModifyLiveMessageGroupBandShrinkRequest(ModifyLiveMessageGroupBandShrinkRequest &&) = default ;
    ModifyLiveMessageGroupBandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageGroupBandShrinkRequest() = default ;
    ModifyLiveMessageGroupBandShrinkRequest& operator=(const ModifyLiveMessageGroupBandShrinkRequest &) = default ;
    ModifyLiveMessageGroupBandShrinkRequest& operator=(ModifyLiveMessageGroupBandShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->bannedAll_ == nullptr && return this->bannnedUsersShrink_ == nullptr && return this->dataCenter_ == nullptr && return this->exceptUsersShrink_ == nullptr && return this->groupId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageGroupBandShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bannedAll Field Functions 
    bool hasBannedAll() const { return this->bannedAll_ != nullptr;};
    void deleteBannedAll() { this->bannedAll_ = nullptr;};
    inline bool bannedAll() const { DARABONBA_PTR_GET_DEFAULT(bannedAll_, false) };
    inline ModifyLiveMessageGroupBandShrinkRequest& setBannedAll(bool bannedAll) { DARABONBA_PTR_SET_VALUE(bannedAll_, bannedAll) };


    // bannnedUsersShrink Field Functions 
    bool hasBannnedUsersShrink() const { return this->bannnedUsersShrink_ != nullptr;};
    void deleteBannnedUsersShrink() { this->bannnedUsersShrink_ = nullptr;};
    inline string bannnedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(bannnedUsersShrink_, "") };
    inline ModifyLiveMessageGroupBandShrinkRequest& setBannnedUsersShrink(string bannnedUsersShrink) { DARABONBA_PTR_SET_VALUE(bannnedUsersShrink_, bannnedUsersShrink) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageGroupBandShrinkRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // exceptUsersShrink Field Functions 
    bool hasExceptUsersShrink() const { return this->exceptUsersShrink_ != nullptr;};
    void deleteExceptUsersShrink() { this->exceptUsersShrink_ = nullptr;};
    inline string exceptUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(exceptUsersShrink_, "") };
    inline ModifyLiveMessageGroupBandShrinkRequest& setExceptUsersShrink(string exceptUsersShrink) { DARABONBA_PTR_SET_VALUE(exceptUsersShrink_, exceptUsersShrink) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyLiveMessageGroupBandShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to mute all users.
    std::shared_ptr<bool> bannedAll_ = nullptr;
    // The ID of the user whom you want to mute. Separate multiple user IDs with commas (,). You can specify up to 30 users IDs.
    std::shared_ptr<string> bannnedUsersShrink_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The ID of the user whom you do not want to mute when you set the BannedAll parameter to true. Separate multiple user IDs with commas (,). You can specify up to 30 users IDs.
    std::shared_ptr<string> exceptUsersShrink_ = nullptr;
    // The group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
