// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(isActive, isActive_);
      DARABONBA_PTR_TO_JSON(lastLoginTime, lastLoginTime_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(roleCodes, roleCodes_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(isActive, isActive_);
      DARABONBA_PTR_FROM_JSON(lastLoginTime, lastLoginTime_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(roleCodes, roleCodes_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    GetUserResponseBody() = default ;
    GetUserResponseBody(const GetUserResponseBody &) = default ;
    GetUserResponseBody(GetUserResponseBody &&) = default ;
    GetUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBody() = default ;
    GetUserResponseBody& operator=(const GetUserResponseBody &) = default ;
    GetUserResponseBody& operator=(GetUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->code_ == nullptr && this->displayName_ == nullptr && this->gmtCreate_ == nullptr && this->isActive_ == nullptr && this->lastLoginTime_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->roleCodes_ == nullptr && this->userGroupIds_ == nullptr && this->wnUserId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetUserResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUserResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetUserResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline GetUserResponseBody& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


    // lastLoginTime Field Functions 
    bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
    void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
    inline string getLastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
    inline GetUserResponseBody& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleCodes Field Functions 
    bool hasRoleCodes() const { return this->roleCodes_ != nullptr;};
    void deleteRoleCodes() { this->roleCodes_ = nullptr;};
    inline const vector<string> & getRoleCodes() const { DARABONBA_PTR_GET_CONST(roleCodes_, vector<string>) };
    inline vector<string> getRoleCodes() { DARABONBA_PTR_GET(roleCodes_, vector<string>) };
    inline GetUserResponseBody& setRoleCodes(const vector<string> & roleCodes) { DARABONBA_PTR_SET_VALUE(roleCodes_, roleCodes) };
    inline GetUserResponseBody& setRoleCodes(vector<string> && roleCodes) { DARABONBA_PTR_SET_RVALUE(roleCodes_, roleCodes) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline GetUserResponseBody& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline GetUserResponseBody& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline GetUserResponseBody& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The account ID.
    shared_ptr<string> accountId_ {};
    // The error code.
    shared_ptr<string> code_ {};
    // The display name of the account.
    shared_ptr<string> displayName_ {};
    // The creation time.
    shared_ptr<string> gmtCreate_ {};
    // Indicates whether the account is activated. Valid values:
    //  - **true**: Activated.
    // - **false**: Not activated.
    shared_ptr<bool> isActive_ {};
    // The last logon time.
    shared_ptr<string> lastLoginTime_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of system role codes (full replacement, must contain at least one role). Valid values: SUPER_ADMIN, SYSTEM_ADMIN, SEMANTIC_ADMIN, SKILL_ADMIN, KB_ADMIN, AGENT_ADMIN, and APPLICATION_USER.
    shared_ptr<vector<string>> roleCodes_ {};
    // The list of user group IDs to which the user belongs.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The WINNEXO platform user ID.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
