// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEGROUPUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MUTEGROUPUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class MuteGroupUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteGroupUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MuteTime, muteTime_);
      DARABONBA_PTR_TO_JSON(MuteUserList, muteUserListShrink_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
    };
    friend void from_json(const Darabonba::Json& j, MuteGroupUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MuteTime, muteTime_);
      DARABONBA_PTR_FROM_JSON(MuteUserList, muteUserListShrink_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
    };
    MuteGroupUserShrinkRequest() = default ;
    MuteGroupUserShrinkRequest(const MuteGroupUserShrinkRequest &) = default ;
    MuteGroupUserShrinkRequest(MuteGroupUserShrinkRequest &&) = default ;
    MuteGroupUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteGroupUserShrinkRequest() = default ;
    MuteGroupUserShrinkRequest& operator=(const MuteGroupUserShrinkRequest &) = default ;
    MuteGroupUserShrinkRequest& operator=(MuteGroupUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->broadCastType_ != nullptr && this->groupId_ != nullptr && this->muteTime_ != nullptr && this->muteUserListShrink_ != nullptr && this->operatorUserId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline MuteGroupUserShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // broadCastType Field Functions 
    bool hasBroadCastType() const { return this->broadCastType_ != nullptr;};
    void deleteBroadCastType() { this->broadCastType_ = nullptr;};
    inline int32_t broadCastType() const { DARABONBA_PTR_GET_DEFAULT(broadCastType_, 0) };
    inline MuteGroupUserShrinkRequest& setBroadCastType(int32_t broadCastType) { DARABONBA_PTR_SET_VALUE(broadCastType_, broadCastType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline MuteGroupUserShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // muteTime Field Functions 
    bool hasMuteTime() const { return this->muteTime_ != nullptr;};
    void deleteMuteTime() { this->muteTime_ = nullptr;};
    inline int32_t muteTime() const { DARABONBA_PTR_GET_DEFAULT(muteTime_, 0) };
    inline MuteGroupUserShrinkRequest& setMuteTime(int32_t muteTime) { DARABONBA_PTR_SET_VALUE(muteTime_, muteTime) };


    // muteUserListShrink Field Functions 
    bool hasMuteUserListShrink() const { return this->muteUserListShrink_ != nullptr;};
    void deleteMuteUserListShrink() { this->muteUserListShrink_ = nullptr;};
    inline string muteUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(muteUserListShrink_, "") };
    inline MuteGroupUserShrinkRequest& setMuteUserListShrink(string muteUserListShrink) { DARABONBA_PTR_SET_VALUE(muteUserListShrink_, muteUserListShrink) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline MuteGroupUserShrinkRequest& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The mode in which system messages are broadcasted. Valid values:
    // 
    // *   0: specifies that system messages are not broadcasted. This is the default value.
    // *   1: specifies that system messages are broadcasted to specified users.
    // *   2: specifies that system messages are broadcasted to the message group.
    std::shared_ptr<int32_t> broadCastType_ = nullptr;
    // The ID of the message group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The duration of the mute. Unit: seconds.
    // 
    // > If you do not specify this parameter or set the value to 0, the default duration of 86,400 seconds is used.
    std::shared_ptr<int32_t> muteTime_ = nullptr;
    // Details about the mute.
    // 
    // This parameter is required.
    std::shared_ptr<string> muteUserListShrink_ = nullptr;
    // The ID of the user who performs the operation.
    std::shared_ptr<string> operatorUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
