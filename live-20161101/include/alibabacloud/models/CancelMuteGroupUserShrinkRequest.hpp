// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CancelMuteGroupUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMuteGroupUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_TO_JSON(CancelMuteUserList, cancelMuteUserListShrink_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMuteGroupUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_FROM_JSON(CancelMuteUserList, cancelMuteUserListShrink_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
    };
    CancelMuteGroupUserShrinkRequest() = default ;
    CancelMuteGroupUserShrinkRequest(const CancelMuteGroupUserShrinkRequest &) = default ;
    CancelMuteGroupUserShrinkRequest(CancelMuteGroupUserShrinkRequest &&) = default ;
    CancelMuteGroupUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMuteGroupUserShrinkRequest() = default ;
    CancelMuteGroupUserShrinkRequest& operator=(const CancelMuteGroupUserShrinkRequest &) = default ;
    CancelMuteGroupUserShrinkRequest& operator=(CancelMuteGroupUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->broadCastType_ == nullptr && return this->cancelMuteUserListShrink_ == nullptr && return this->groupId_ == nullptr && return this->operatorUserId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CancelMuteGroupUserShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // broadCastType Field Functions 
    bool hasBroadCastType() const { return this->broadCastType_ != nullptr;};
    void deleteBroadCastType() { this->broadCastType_ = nullptr;};
    inline int32_t broadCastType() const { DARABONBA_PTR_GET_DEFAULT(broadCastType_, 0) };
    inline CancelMuteGroupUserShrinkRequest& setBroadCastType(int32_t broadCastType) { DARABONBA_PTR_SET_VALUE(broadCastType_, broadCastType) };


    // cancelMuteUserListShrink Field Functions 
    bool hasCancelMuteUserListShrink() const { return this->cancelMuteUserListShrink_ != nullptr;};
    void deleteCancelMuteUserListShrink() { this->cancelMuteUserListShrink_ = nullptr;};
    inline string cancelMuteUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(cancelMuteUserListShrink_, "") };
    inline CancelMuteGroupUserShrinkRequest& setCancelMuteUserListShrink(string cancelMuteUserListShrink) { DARABONBA_PTR_SET_VALUE(cancelMuteUserListShrink_, cancelMuteUserListShrink) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CancelMuteGroupUserShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline CancelMuteGroupUserShrinkRequest& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


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
    // The IDs of the users.
    // 
    // This parameter is required.
    std::shared_ptr<string> cancelMuteUserListShrink_ = nullptr;
    // The ID of the message group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the user who performs the operation.
    std::shared_ptr<string> operatorUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
