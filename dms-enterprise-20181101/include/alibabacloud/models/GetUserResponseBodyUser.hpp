// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserResponseBodyUserRoleIdList.hpp>
#include <alibabacloud/models/GetUserResponseBodyUserRoleNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserResponseBodyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_TO_JSON(CurExecuteCount, curExecuteCount_);
      DARABONBA_PTR_TO_JSON(CurResultCount, curResultCount_);
      DARABONBA_PTR_TO_JSON(DingRobot, dingRobot_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_TO_JSON(MaxExecuteCount, maxExecuteCount_);
      DARABONBA_PTR_TO_JSON(MaxResultCount, maxResultCount_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(NotificationMode, notificationMode_);
      DARABONBA_PTR_TO_JSON(ParentUid, parentUid_);
      DARABONBA_PTR_TO_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_TO_JSON(RoleNameList, roleNameList_);
      DARABONBA_PTR_TO_JSON(SignatureMethod, signatureMethod_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(CurExecuteCount, curExecuteCount_);
      DARABONBA_PTR_FROM_JSON(CurResultCount, curResultCount_);
      DARABONBA_PTR_FROM_JSON(DingRobot, dingRobot_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_FROM_JSON(MaxExecuteCount, maxExecuteCount_);
      DARABONBA_PTR_FROM_JSON(MaxResultCount, maxResultCount_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(NotificationMode, notificationMode_);
      DARABONBA_PTR_FROM_JSON(ParentUid, parentUid_);
      DARABONBA_PTR_FROM_JSON(RoleIdList, roleIdList_);
      DARABONBA_PTR_FROM_JSON(RoleNameList, roleNameList_);
      DARABONBA_PTR_FROM_JSON(SignatureMethod, signatureMethod_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser(GetUserResponseBodyUser &&) = default ;
    GetUserResponseBodyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser& operator=(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser& operator=(GetUserResponseBodyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->curExecuteCount_ == nullptr
        && return this->curResultCount_ == nullptr && return this->dingRobot_ == nullptr && return this->email_ == nullptr && return this->lastLoginTime_ == nullptr && return this->maxExecuteCount_ == nullptr
        && return this->maxResultCount_ == nullptr && return this->mobile_ == nullptr && return this->nickName_ == nullptr && return this->notificationMode_ == nullptr && return this->parentUid_ == nullptr
        && return this->roleIdList_ == nullptr && return this->roleNameList_ == nullptr && return this->signatureMethod_ == nullptr && return this->state_ == nullptr && return this->uid_ == nullptr
        && return this->userId_ == nullptr && return this->webhook_ == nullptr; };
    // curExecuteCount Field Functions 
    bool hasCurExecuteCount() const { return this->curExecuteCount_ != nullptr;};
    void deleteCurExecuteCount() { this->curExecuteCount_ = nullptr;};
    inline int64_t curExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(curExecuteCount_, 0L) };
    inline GetUserResponseBodyUser& setCurExecuteCount(int64_t curExecuteCount) { DARABONBA_PTR_SET_VALUE(curExecuteCount_, curExecuteCount) };


    // curResultCount Field Functions 
    bool hasCurResultCount() const { return this->curResultCount_ != nullptr;};
    void deleteCurResultCount() { this->curResultCount_ = nullptr;};
    inline int64_t curResultCount() const { DARABONBA_PTR_GET_DEFAULT(curResultCount_, 0L) };
    inline GetUserResponseBodyUser& setCurResultCount(int64_t curResultCount) { DARABONBA_PTR_SET_VALUE(curResultCount_, curResultCount) };


    // dingRobot Field Functions 
    bool hasDingRobot() const { return this->dingRobot_ != nullptr;};
    void deleteDingRobot() { this->dingRobot_ = nullptr;};
    inline string dingRobot() const { DARABONBA_PTR_GET_DEFAULT(dingRobot_, "") };
    inline GetUserResponseBodyUser& setDingRobot(string dingRobot) { DARABONBA_PTR_SET_VALUE(dingRobot_, dingRobot) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBodyUser& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lastLoginTime Field Functions 
    bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
    void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
    inline string lastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
    inline GetUserResponseBodyUser& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


    // maxExecuteCount Field Functions 
    bool hasMaxExecuteCount() const { return this->maxExecuteCount_ != nullptr;};
    void deleteMaxExecuteCount() { this->maxExecuteCount_ = nullptr;};
    inline int64_t maxExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(maxExecuteCount_, 0L) };
    inline GetUserResponseBodyUser& setMaxExecuteCount(int64_t maxExecuteCount) { DARABONBA_PTR_SET_VALUE(maxExecuteCount_, maxExecuteCount) };


    // maxResultCount Field Functions 
    bool hasMaxResultCount() const { return this->maxResultCount_ != nullptr;};
    void deleteMaxResultCount() { this->maxResultCount_ = nullptr;};
    inline int64_t maxResultCount() const { DARABONBA_PTR_GET_DEFAULT(maxResultCount_, 0L) };
    inline GetUserResponseBodyUser& setMaxResultCount(int64_t maxResultCount) { DARABONBA_PTR_SET_VALUE(maxResultCount_, maxResultCount) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetUserResponseBodyUser& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetUserResponseBodyUser& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // notificationMode Field Functions 
    bool hasNotificationMode() const { return this->notificationMode_ != nullptr;};
    void deleteNotificationMode() { this->notificationMode_ = nullptr;};
    inline string notificationMode() const { DARABONBA_PTR_GET_DEFAULT(notificationMode_, "") };
    inline GetUserResponseBodyUser& setNotificationMode(string notificationMode) { DARABONBA_PTR_SET_VALUE(notificationMode_, notificationMode) };


    // parentUid Field Functions 
    bool hasParentUid() const { return this->parentUid_ != nullptr;};
    void deleteParentUid() { this->parentUid_ = nullptr;};
    inline int64_t parentUid() const { DARABONBA_PTR_GET_DEFAULT(parentUid_, 0L) };
    inline GetUserResponseBodyUser& setParentUid(int64_t parentUid) { DARABONBA_PTR_SET_VALUE(parentUid_, parentUid) };


    // roleIdList Field Functions 
    bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
    void deleteRoleIdList() { this->roleIdList_ = nullptr;};
    inline const Models::GetUserResponseBodyUserRoleIdList & roleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, Models::GetUserResponseBodyUserRoleIdList) };
    inline Models::GetUserResponseBodyUserRoleIdList roleIdList() { DARABONBA_PTR_GET(roleIdList_, Models::GetUserResponseBodyUserRoleIdList) };
    inline GetUserResponseBodyUser& setRoleIdList(const Models::GetUserResponseBodyUserRoleIdList & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
    inline GetUserResponseBodyUser& setRoleIdList(Models::GetUserResponseBodyUserRoleIdList && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


    // roleNameList Field Functions 
    bool hasRoleNameList() const { return this->roleNameList_ != nullptr;};
    void deleteRoleNameList() { this->roleNameList_ = nullptr;};
    inline const Models::GetUserResponseBodyUserRoleNameList & roleNameList() const { DARABONBA_PTR_GET_CONST(roleNameList_, Models::GetUserResponseBodyUserRoleNameList) };
    inline Models::GetUserResponseBodyUserRoleNameList roleNameList() { DARABONBA_PTR_GET(roleNameList_, Models::GetUserResponseBodyUserRoleNameList) };
    inline GetUserResponseBodyUser& setRoleNameList(const Models::GetUserResponseBodyUserRoleNameList & roleNameList) { DARABONBA_PTR_SET_VALUE(roleNameList_, roleNameList) };
    inline GetUserResponseBodyUser& setRoleNameList(Models::GetUserResponseBodyUserRoleNameList && roleNameList) { DARABONBA_PTR_SET_RVALUE(roleNameList_, roleNameList) };


    // signatureMethod Field Functions 
    bool hasSignatureMethod() const { return this->signatureMethod_ != nullptr;};
    void deleteSignatureMethod() { this->signatureMethod_ = nullptr;};
    inline string signatureMethod() const { DARABONBA_PTR_GET_DEFAULT(signatureMethod_, "") };
    inline GetUserResponseBodyUser& setSignatureMethod(string signatureMethod) { DARABONBA_PTR_SET_VALUE(signatureMethod_, signatureMethod) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetUserResponseBodyUser& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetUserResponseBodyUser& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserResponseBodyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline GetUserResponseBodyUser& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The number of queries that are performed on the current day.
    std::shared_ptr<int64_t> curExecuteCount_ = nullptr;
    // The number of rows that are queried on the current day.
    std::shared_ptr<int64_t> curResultCount_ = nullptr;
    // The DingTalk chatbot URL that is used to receive notifications.
    // 
    // > 
    // 
    // *   The system returns this parameter if the user has set a DingTalk chatbot URL in the console. To set a DingTalk chatbot URL in the console, move the pointer over the profile picture in the upper-right corner and click the Edit icon next to **Notice**.
    // 
    // *   The system does not return this parameter if the user has not set a DingTalk chatbot URL.
    std::shared_ptr<string> dingRobot_ = nullptr;
    // The email address that is used to receive notifications.
    // 
    // > 
    // 
    // *   The system returns this parameter if the user has set an email address in the console. To set an email address in the console, move the pointer over the profile picture in the upper-right corner and click the Edit icon next to **Notice**.
    // 
    // *   The system does not return this parameter if the user has not set an email address.
    std::shared_ptr<string> email_ = nullptr;
    // The last point in time when the user logged on to the console.
    std::shared_ptr<string> lastLoginTime_ = nullptr;
    // The maximum number of queries that can be performed on the current day.
    std::shared_ptr<int64_t> maxExecuteCount_ = nullptr;
    // The maximum number of rows that can be queried on the current day.
    std::shared_ptr<int64_t> maxResultCount_ = nullptr;
    // The mobile number of the user.
    // 
    // > 
    // 
    // *   The system returns this parameter if the user has set a mobile phone number in the console. To set a mobile phone number in the console, move the pointer over the profile picture in the upper-right corner and click the Edit icon next to **Notice**.
    // 
    // *   The system does not return this parameter if the user has not set a mobile phone number.
    std::shared_ptr<string> mobile_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> nickName_ = nullptr;
    // The notification method. The system returns one or more values. Valid values:
    // 
    // *   **SMS**: text message
    // *   **EMAIL**: email.
    // *   **DINGDING**: DingTalk.
    // *   **DINGROBOT**: DingTalk chatbot.
    // *   **WEBHOOK**: webhook.
    std::shared_ptr<string> notificationMode_ = nullptr;
    // The UID of the Alibaba Cloud account of the user.
    // 
    // > An Alibaba Cloud account can contain one or more RAM users.
    std::shared_ptr<int64_t> parentUid_ = nullptr;
    // The list of role IDs.
    std::shared_ptr<Models::GetUserResponseBodyUserRoleIdList> roleIdList_ = nullptr;
    // The list of role names.
    std::shared_ptr<Models::GetUserResponseBodyUserRoleNameList> roleNameList_ = nullptr;
    // The signature method that is used to secure connections when a webhook URL is used. Valid values:
    // 
    // *   **NONE**: no signature.
    // *   **HMAC_SHA1**: HMAC_SHA1.
    std::shared_ptr<string> signatureMethod_ = nullptr;
    // The status of the user. Valid values:
    // 
    // *   **NORMAL**: The user is normal.
    // *   **DISABLE**: The user is disabled.
    // *   **DELETE**: The user is deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The UID of the user.
    std::shared_ptr<string> uid_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The webhook URL that is used to receive notifications.
    // 
    // > 
    // 
    // *   If the user has set a webhook URL, DMS sends notifications to the specified URL.
    // 
    // *   The system does not return this parameter if the user has not set a webhook URL.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
