// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILRESPONSEBODYPROPERTYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILRESPONSEBODYPROPERTYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUserDetailResponseBodyPropertys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUserDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_TO_JSON(AccountsExpirationDate, accountsExpirationDate_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IsCouldLogin, isCouldLogin_);
      DARABONBA_PTR_TO_JSON(IsPasswdExpired, isPasswdExpired_);
      DARABONBA_PTR_TO_JSON(IsPasswdLocked, isPasswdLocked_);
      DARABONBA_PTR_TO_JSON(IsRoot, isRoot_);
      DARABONBA_PTR_TO_JSON(IsSudoer, isSudoer_);
      DARABONBA_PTR_TO_JSON(IsUserExpired, isUserExpired_);
      DARABONBA_PTR_TO_JSON(LastLoginIp, lastLoginIp_);
      DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_TO_JSON(LastLoginTimeDt, lastLoginTimeDt_);
      DARABONBA_PTR_TO_JSON(LastLoginTimestamp, lastLoginTimestamp_);
      DARABONBA_PTR_TO_JSON(PasswordExpirationDate, passwordExpirationDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountsExpirationDate, accountsExpirationDate_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(GroupNames, groupNames_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IsCouldLogin, isCouldLogin_);
      DARABONBA_PTR_FROM_JSON(IsPasswdExpired, isPasswdExpired_);
      DARABONBA_PTR_FROM_JSON(IsPasswdLocked, isPasswdLocked_);
      DARABONBA_PTR_FROM_JSON(IsRoot, isRoot_);
      DARABONBA_PTR_FROM_JSON(IsSudoer, isSudoer_);
      DARABONBA_PTR_FROM_JSON(IsUserExpired, isUserExpired_);
      DARABONBA_PTR_FROM_JSON(LastLoginIp, lastLoginIp_);
      DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
      DARABONBA_PTR_FROM_JSON(LastLoginTimeDt, lastLoginTimeDt_);
      DARABONBA_PTR_FROM_JSON(LastLoginTimestamp, lastLoginTimestamp_);
      DARABONBA_PTR_FROM_JSON(PasswordExpirationDate, passwordExpirationDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertyUserDetailResponseBodyPropertys() = default ;
    DescribePropertyUserDetailResponseBodyPropertys(const DescribePropertyUserDetailResponseBodyPropertys &) = default ;
    DescribePropertyUserDetailResponseBodyPropertys(DescribePropertyUserDetailResponseBodyPropertys &&) = default ;
    DescribePropertyUserDetailResponseBodyPropertys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUserDetailResponseBodyPropertys() = default ;
    DescribePropertyUserDetailResponseBodyPropertys& operator=(const DescribePropertyUserDetailResponseBodyPropertys &) = default ;
    DescribePropertyUserDetailResponseBodyPropertys& operator=(DescribePropertyUserDetailResponseBodyPropertys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountsExpirationDate_ != nullptr
        && this->createTimestamp_ != nullptr && this->groupNames_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->ip_ != nullptr && this->isCouldLogin_ != nullptr && this->isPasswdExpired_ != nullptr && this->isPasswdLocked_ != nullptr
        && this->isRoot_ != nullptr && this->isSudoer_ != nullptr && this->isUserExpired_ != nullptr && this->lastLoginIp_ != nullptr && this->lastLoginTime_ != nullptr
        && this->lastLoginTimeDt_ != nullptr && this->lastLoginTimestamp_ != nullptr && this->passwordExpirationDate_ != nullptr && this->status_ != nullptr && this->user_ != nullptr
        && this->uuid_ != nullptr; };
    // accountsExpirationDate Field Functions 
    bool hasAccountsExpirationDate() const { return this->accountsExpirationDate_ != nullptr;};
    void deleteAccountsExpirationDate() { this->accountsExpirationDate_ = nullptr;};
    inline string accountsExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(accountsExpirationDate_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setAccountsExpirationDate(string accountsExpirationDate) { DARABONBA_PTR_SET_VALUE(accountsExpirationDate_, accountsExpirationDate) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // groupNames Field Functions 
    bool hasGroupNames() const { return this->groupNames_ != nullptr;};
    void deleteGroupNames() { this->groupNames_ = nullptr;};
    inline const vector<string> & groupNames() const { DARABONBA_PTR_GET_CONST(groupNames_, vector<string>) };
    inline vector<string> groupNames() { DARABONBA_PTR_GET(groupNames_, vector<string>) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setGroupNames(const vector<string> & groupNames) { DARABONBA_PTR_SET_VALUE(groupNames_, groupNames) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setGroupNames(vector<string> && groupNames) { DARABONBA_PTR_SET_RVALUE(groupNames_, groupNames) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // isCouldLogin Field Functions 
    bool hasIsCouldLogin() const { return this->isCouldLogin_ != nullptr;};
    void deleteIsCouldLogin() { this->isCouldLogin_ = nullptr;};
    inline int32_t isCouldLogin() const { DARABONBA_PTR_GET_DEFAULT(isCouldLogin_, 0) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIsCouldLogin(int32_t isCouldLogin) { DARABONBA_PTR_SET_VALUE(isCouldLogin_, isCouldLogin) };


    // isPasswdExpired Field Functions 
    bool hasIsPasswdExpired() const { return this->isPasswdExpired_ != nullptr;};
    void deleteIsPasswdExpired() { this->isPasswdExpired_ = nullptr;};
    inline int32_t isPasswdExpired() const { DARABONBA_PTR_GET_DEFAULT(isPasswdExpired_, 0) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIsPasswdExpired(int32_t isPasswdExpired) { DARABONBA_PTR_SET_VALUE(isPasswdExpired_, isPasswdExpired) };


    // isPasswdLocked Field Functions 
    bool hasIsPasswdLocked() const { return this->isPasswdLocked_ != nullptr;};
    void deleteIsPasswdLocked() { this->isPasswdLocked_ = nullptr;};
    inline int32_t isPasswdLocked() const { DARABONBA_PTR_GET_DEFAULT(isPasswdLocked_, 0) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIsPasswdLocked(int32_t isPasswdLocked) { DARABONBA_PTR_SET_VALUE(isPasswdLocked_, isPasswdLocked) };


    // isRoot Field Functions 
    bool hasIsRoot() const { return this->isRoot_ != nullptr;};
    void deleteIsRoot() { this->isRoot_ = nullptr;};
    inline string isRoot() const { DARABONBA_PTR_GET_DEFAULT(isRoot_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIsRoot(string isRoot) { DARABONBA_PTR_SET_VALUE(isRoot_, isRoot) };


    // isSudoer Field Functions 
    bool hasIsSudoer() const { return this->isSudoer_ != nullptr;};
    void deleteIsSudoer() { this->isSudoer_ = nullptr;};
    inline int32_t isSudoer() const { DARABONBA_PTR_GET_DEFAULT(isSudoer_, 0) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIsSudoer(int32_t isSudoer) { DARABONBA_PTR_SET_VALUE(isSudoer_, isSudoer) };


    // isUserExpired Field Functions 
    bool hasIsUserExpired() const { return this->isUserExpired_ != nullptr;};
    void deleteIsUserExpired() { this->isUserExpired_ = nullptr;};
    inline int32_t isUserExpired() const { DARABONBA_PTR_GET_DEFAULT(isUserExpired_, 0) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setIsUserExpired(int32_t isUserExpired) { DARABONBA_PTR_SET_VALUE(isUserExpired_, isUserExpired) };


    // lastLoginIp Field Functions 
    bool hasLastLoginIp() const { return this->lastLoginIp_ != nullptr;};
    void deleteLastLoginIp() { this->lastLoginIp_ = nullptr;};
    inline string lastLoginIp() const { DARABONBA_PTR_GET_DEFAULT(lastLoginIp_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setLastLoginIp(string lastLoginIp) { DARABONBA_PTR_SET_VALUE(lastLoginIp_, lastLoginIp) };


    // lastLoginTime Field Functions 
    bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
    void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
    inline string lastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


    // lastLoginTimeDt Field Functions 
    bool hasLastLoginTimeDt() const { return this->lastLoginTimeDt_ != nullptr;};
    void deleteLastLoginTimeDt() { this->lastLoginTimeDt_ = nullptr;};
    inline int64_t lastLoginTimeDt() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimeDt_, 0L) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setLastLoginTimeDt(int64_t lastLoginTimeDt) { DARABONBA_PTR_SET_VALUE(lastLoginTimeDt_, lastLoginTimeDt) };


    // lastLoginTimestamp Field Functions 
    bool hasLastLoginTimestamp() const { return this->lastLoginTimestamp_ != nullptr;};
    void deleteLastLoginTimestamp() { this->lastLoginTimestamp_ = nullptr;};
    inline int64_t lastLoginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimestamp_, 0L) };
    inline DescribePropertyUserDetailResponseBodyPropertys& setLastLoginTimestamp(int64_t lastLoginTimestamp) { DARABONBA_PTR_SET_VALUE(lastLoginTimestamp_, lastLoginTimestamp) };


    // passwordExpirationDate Field Functions 
    bool hasPasswordExpirationDate() const { return this->passwordExpirationDate_ != nullptr;};
    void deletePasswordExpirationDate() { this->passwordExpirationDate_ = nullptr;};
    inline string passwordExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationDate_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setPasswordExpirationDate(string passwordExpirationDate) { DARABONBA_PTR_SET_VALUE(passwordExpirationDate_, passwordExpirationDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyUserDetailResponseBodyPropertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The date on which the account expires.
    std::shared_ptr<string> accountsExpirationDate_ = nullptr;
    // The timestamp at which the last asset fingerprint collection is performed. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The details of the user groups to which the account belongs.
    std::shared_ptr<vector<string>> groupNames_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP addresses of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // Indicates whether the account is an interactive logon account. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> isCouldLogin_ = nullptr;
    // Indicates whether the password expires. Valid values:
    // 
    // *   **0**: yes
    // *   **1**: no
    std::shared_ptr<int32_t> isPasswdExpired_ = nullptr;
    // Indicates whether the password is locked. Valid values:
    // 
    // *   **0**: yes
    // *   **1**: no
    std::shared_ptr<int32_t> isPasswdLocked_ = nullptr;
    // Indicates whether the account has root permissions. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<string> isRoot_ = nullptr;
    // Indicates whether the account is a sudo account. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> isSudoer_ = nullptr;
    // Indicates whether the account expires. Valid values:
    // 
    // *   **0**: yes
    // *   **1**: no
    std::shared_ptr<int32_t> isUserExpired_ = nullptr;
    // The source IP address of the last logon to the account.
    std::shared_ptr<string> lastLoginIp_ = nullptr;
    // The last logon time of the account.
    std::shared_ptr<string> lastLoginTime_ = nullptr;
    // The timestamp of the last logon to the account. Unit: milliseconds.
    std::shared_ptr<int64_t> lastLoginTimeDt_ = nullptr;
    // The timestamp of the last logon to the account. Unit: milliseconds.
    std::shared_ptr<int64_t> lastLoginTimestamp_ = nullptr;
    // The date on which the password of the account expires.
    std::shared_ptr<string> passwordExpirationDate_ = nullptr;
    // This parameter is deprecated. You can ignore it.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> user_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
