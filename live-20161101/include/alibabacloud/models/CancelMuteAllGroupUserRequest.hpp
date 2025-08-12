// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMUTEALLGROUPUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELMUTEALLGROUPUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CancelMuteAllGroupUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMuteAllGroupUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMuteAllGroupUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
    };
    CancelMuteAllGroupUserRequest() = default ;
    CancelMuteAllGroupUserRequest(const CancelMuteAllGroupUserRequest &) = default ;
    CancelMuteAllGroupUserRequest(CancelMuteAllGroupUserRequest &&) = default ;
    CancelMuteAllGroupUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMuteAllGroupUserRequest() = default ;
    CancelMuteAllGroupUserRequest& operator=(const CancelMuteAllGroupUserRequest &) = default ;
    CancelMuteAllGroupUserRequest& operator=(CancelMuteAllGroupUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->broadCastType_ != nullptr && this->groupId_ != nullptr && this->operatorUserId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CancelMuteAllGroupUserRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // broadCastType Field Functions 
    bool hasBroadCastType() const { return this->broadCastType_ != nullptr;};
    void deleteBroadCastType() { this->broadCastType_ = nullptr;};
    inline int32_t broadCastType() const { DARABONBA_PTR_GET_DEFAULT(broadCastType_, 0) };
    inline CancelMuteAllGroupUserRequest& setBroadCastType(int32_t broadCastType) { DARABONBA_PTR_SET_VALUE(broadCastType_, broadCastType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CancelMuteAllGroupUserRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline CancelMuteAllGroupUserRequest& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


  protected:
    // Interactive message application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // 系统消息扩散类型，取值：
    // 
    // - 0：不扩散。
    // 
    // - 1：扩散到指定人。
    // 
    // - 2：扩散到群组。
    std::shared_ptr<int32_t> broadCastType_ = nullptr;
    // Message group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // Operator\\"s UserId. > This parameter is required and the user must be the creator of the group.
    std::shared_ptr<string> operatorUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
