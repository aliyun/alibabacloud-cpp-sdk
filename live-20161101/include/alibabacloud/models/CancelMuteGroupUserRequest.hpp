// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERREQUEST_HPP_
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
  class CancelMuteGroupUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMuteGroupUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_TO_JSON(CancelMuteUserList, cancelMuteUserList_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMuteGroupUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_FROM_JSON(CancelMuteUserList, cancelMuteUserList_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
    };
    CancelMuteGroupUserRequest() = default ;
    CancelMuteGroupUserRequest(const CancelMuteGroupUserRequest &) = default ;
    CancelMuteGroupUserRequest(CancelMuteGroupUserRequest &&) = default ;
    CancelMuteGroupUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMuteGroupUserRequest() = default ;
    CancelMuteGroupUserRequest& operator=(const CancelMuteGroupUserRequest &) = default ;
    CancelMuteGroupUserRequest& operator=(CancelMuteGroupUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->broadCastType_ != nullptr && this->cancelMuteUserList_ != nullptr && this->groupId_ != nullptr && this->operatorUserId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CancelMuteGroupUserRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // broadCastType Field Functions 
    bool hasBroadCastType() const { return this->broadCastType_ != nullptr;};
    void deleteBroadCastType() { this->broadCastType_ = nullptr;};
    inline int32_t broadCastType() const { DARABONBA_PTR_GET_DEFAULT(broadCastType_, 0) };
    inline CancelMuteGroupUserRequest& setBroadCastType(int32_t broadCastType) { DARABONBA_PTR_SET_VALUE(broadCastType_, broadCastType) };


    // cancelMuteUserList Field Functions 
    bool hasCancelMuteUserList() const { return this->cancelMuteUserList_ != nullptr;};
    void deleteCancelMuteUserList() { this->cancelMuteUserList_ = nullptr;};
    inline const vector<string> & cancelMuteUserList() const { DARABONBA_PTR_GET_CONST(cancelMuteUserList_, vector<string>) };
    inline vector<string> cancelMuteUserList() { DARABONBA_PTR_GET(cancelMuteUserList_, vector<string>) };
    inline CancelMuteGroupUserRequest& setCancelMuteUserList(const vector<string> & cancelMuteUserList) { DARABONBA_PTR_SET_VALUE(cancelMuteUserList_, cancelMuteUserList) };
    inline CancelMuteGroupUserRequest& setCancelMuteUserList(vector<string> && cancelMuteUserList) { DARABONBA_PTR_SET_RVALUE(cancelMuteUserList_, cancelMuteUserList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CancelMuteGroupUserRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline CancelMuteGroupUserRequest& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


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
    std::shared_ptr<vector<string>> cancelMuteUserList_ = nullptr;
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
