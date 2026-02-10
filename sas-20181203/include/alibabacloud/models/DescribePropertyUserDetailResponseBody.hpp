// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILRESPONSEBODY_HPP_
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
  class DescribePropertyUserDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUserDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyUserDetailResponseBody() = default ;
    DescribePropertyUserDetailResponseBody(const DescribePropertyUserDetailResponseBody &) = default ;
    DescribePropertyUserDetailResponseBody(DescribePropertyUserDetailResponseBody &&) = default ;
    DescribePropertyUserDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUserDetailResponseBody() = default ;
    DescribePropertyUserDetailResponseBody& operator=(const DescribePropertyUserDetailResponseBody &) = default ;
    DescribePropertyUserDetailResponseBody& operator=(DescribePropertyUserDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Propertys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Propertys& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Propertys& obj) { 
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
      Propertys() = default ;
      Propertys(const Propertys &) = default ;
      Propertys(Propertys &&) = default ;
      Propertys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Propertys() = default ;
      Propertys& operator=(const Propertys &) = default ;
      Propertys& operator=(Propertys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountsExpirationDate_ == nullptr
        && this->createTimestamp_ == nullptr && this->groupNames_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->ip_ == nullptr && this->isCouldLogin_ == nullptr && this->isPasswdExpired_ == nullptr && this->isPasswdLocked_ == nullptr
        && this->isRoot_ == nullptr && this->isSudoer_ == nullptr && this->isUserExpired_ == nullptr && this->lastLoginIp_ == nullptr && this->lastLoginTime_ == nullptr
        && this->lastLoginTimeDt_ == nullptr && this->lastLoginTimestamp_ == nullptr && this->passwordExpirationDate_ == nullptr && this->status_ == nullptr && this->user_ == nullptr
        && this->uuid_ == nullptr; };
      // accountsExpirationDate Field Functions 
      bool hasAccountsExpirationDate() const { return this->accountsExpirationDate_ != nullptr;};
      void deleteAccountsExpirationDate() { this->accountsExpirationDate_ = nullptr;};
      inline string getAccountsExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(accountsExpirationDate_, "") };
      inline Propertys& setAccountsExpirationDate(string accountsExpirationDate) { DARABONBA_PTR_SET_VALUE(accountsExpirationDate_, accountsExpirationDate) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Propertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // groupNames Field Functions 
      bool hasGroupNames() const { return this->groupNames_ != nullptr;};
      void deleteGroupNames() { this->groupNames_ = nullptr;};
      inline const vector<string> & getGroupNames() const { DARABONBA_PTR_GET_CONST(groupNames_, vector<string>) };
      inline vector<string> getGroupNames() { DARABONBA_PTR_GET(groupNames_, vector<string>) };
      inline Propertys& setGroupNames(const vector<string> & groupNames) { DARABONBA_PTR_SET_VALUE(groupNames_, groupNames) };
      inline Propertys& setGroupNames(vector<string> && groupNames) { DARABONBA_PTR_SET_RVALUE(groupNames_, groupNames) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Propertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Propertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Propertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Propertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Propertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // isCouldLogin Field Functions 
      bool hasIsCouldLogin() const { return this->isCouldLogin_ != nullptr;};
      void deleteIsCouldLogin() { this->isCouldLogin_ = nullptr;};
      inline int32_t getIsCouldLogin() const { DARABONBA_PTR_GET_DEFAULT(isCouldLogin_, 0) };
      inline Propertys& setIsCouldLogin(int32_t isCouldLogin) { DARABONBA_PTR_SET_VALUE(isCouldLogin_, isCouldLogin) };


      // isPasswdExpired Field Functions 
      bool hasIsPasswdExpired() const { return this->isPasswdExpired_ != nullptr;};
      void deleteIsPasswdExpired() { this->isPasswdExpired_ = nullptr;};
      inline int32_t getIsPasswdExpired() const { DARABONBA_PTR_GET_DEFAULT(isPasswdExpired_, 0) };
      inline Propertys& setIsPasswdExpired(int32_t isPasswdExpired) { DARABONBA_PTR_SET_VALUE(isPasswdExpired_, isPasswdExpired) };


      // isPasswdLocked Field Functions 
      bool hasIsPasswdLocked() const { return this->isPasswdLocked_ != nullptr;};
      void deleteIsPasswdLocked() { this->isPasswdLocked_ = nullptr;};
      inline int32_t getIsPasswdLocked() const { DARABONBA_PTR_GET_DEFAULT(isPasswdLocked_, 0) };
      inline Propertys& setIsPasswdLocked(int32_t isPasswdLocked) { DARABONBA_PTR_SET_VALUE(isPasswdLocked_, isPasswdLocked) };


      // isRoot Field Functions 
      bool hasIsRoot() const { return this->isRoot_ != nullptr;};
      void deleteIsRoot() { this->isRoot_ = nullptr;};
      inline string getIsRoot() const { DARABONBA_PTR_GET_DEFAULT(isRoot_, "") };
      inline Propertys& setIsRoot(string isRoot) { DARABONBA_PTR_SET_VALUE(isRoot_, isRoot) };


      // isSudoer Field Functions 
      bool hasIsSudoer() const { return this->isSudoer_ != nullptr;};
      void deleteIsSudoer() { this->isSudoer_ = nullptr;};
      inline int32_t getIsSudoer() const { DARABONBA_PTR_GET_DEFAULT(isSudoer_, 0) };
      inline Propertys& setIsSudoer(int32_t isSudoer) { DARABONBA_PTR_SET_VALUE(isSudoer_, isSudoer) };


      // isUserExpired Field Functions 
      bool hasIsUserExpired() const { return this->isUserExpired_ != nullptr;};
      void deleteIsUserExpired() { this->isUserExpired_ = nullptr;};
      inline int32_t getIsUserExpired() const { DARABONBA_PTR_GET_DEFAULT(isUserExpired_, 0) };
      inline Propertys& setIsUserExpired(int32_t isUserExpired) { DARABONBA_PTR_SET_VALUE(isUserExpired_, isUserExpired) };


      // lastLoginIp Field Functions 
      bool hasLastLoginIp() const { return this->lastLoginIp_ != nullptr;};
      void deleteLastLoginIp() { this->lastLoginIp_ = nullptr;};
      inline string getLastLoginIp() const { DARABONBA_PTR_GET_DEFAULT(lastLoginIp_, "") };
      inline Propertys& setLastLoginIp(string lastLoginIp) { DARABONBA_PTR_SET_VALUE(lastLoginIp_, lastLoginIp) };


      // lastLoginTime Field Functions 
      bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
      void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
      inline string getLastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
      inline Propertys& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


      // lastLoginTimeDt Field Functions 
      bool hasLastLoginTimeDt() const { return this->lastLoginTimeDt_ != nullptr;};
      void deleteLastLoginTimeDt() { this->lastLoginTimeDt_ = nullptr;};
      inline int64_t getLastLoginTimeDt() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimeDt_, 0L) };
      inline Propertys& setLastLoginTimeDt(int64_t lastLoginTimeDt) { DARABONBA_PTR_SET_VALUE(lastLoginTimeDt_, lastLoginTimeDt) };


      // lastLoginTimestamp Field Functions 
      bool hasLastLoginTimestamp() const { return this->lastLoginTimestamp_ != nullptr;};
      void deleteLastLoginTimestamp() { this->lastLoginTimestamp_ = nullptr;};
      inline int64_t getLastLoginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimestamp_, 0L) };
      inline Propertys& setLastLoginTimestamp(int64_t lastLoginTimestamp) { DARABONBA_PTR_SET_VALUE(lastLoginTimestamp_, lastLoginTimestamp) };


      // passwordExpirationDate Field Functions 
      bool hasPasswordExpirationDate() const { return this->passwordExpirationDate_ != nullptr;};
      void deletePasswordExpirationDate() { this->passwordExpirationDate_ = nullptr;};
      inline string getPasswordExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(passwordExpirationDate_, "") };
      inline Propertys& setPasswordExpirationDate(string passwordExpirationDate) { DARABONBA_PTR_SET_VALUE(passwordExpirationDate_, passwordExpirationDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Propertys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Propertys& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Propertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The expiration date of the account.
      shared_ptr<string> accountsExpirationDate_ {};
      // The timestamp of the latest scan of the asset fingerprint. The unit is milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // Detailed information about the user groups of the queried account.
      shared_ptr<vector<string>> groupNames_ {};
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The list of IP addresses of the server.
      shared_ptr<string> ip_ {};
      // Whether it is an interactive login account. Values:
      // - **0**: No
      //  - **1**: Yes
      shared_ptr<int32_t> isCouldLogin_ {};
      // Whether the password has expired. The values are:
      // 
      // - **0**: Expired
      // - **1**: Not expired
      shared_ptr<int32_t> isPasswdExpired_ {};
      // Whether the password is locked. Values:
      // - **0**: Locked 
      // - **1**: Not locked
      shared_ptr<int32_t> isPasswdLocked_ {};
      // Whether the account has ROOT permissions. The values include:
      // 
      // - **0**: No
      // - **1**: Yes
      shared_ptr<string> isRoot_ {};
      // Whether it is a sudo account. Values:
      // - **0**: No 
      // - **1**: Yes
      shared_ptr<int32_t> isSudoer_ {};
      // Whether the user has expired. Values:
      // - **0**: Expired
      //  - **1**: Not expired
      shared_ptr<int32_t> isUserExpired_ {};
      // The source IP from which the account last logged in.
      shared_ptr<string> lastLoginIp_ {};
      // The last login time of the account.
      shared_ptr<string> lastLoginTime_ {};
      // The timestamp of the last login of the account. The unit is milliseconds.
      shared_ptr<int64_t> lastLoginTimeDt_ {};
      // The timestamp of the last login of the account. The unit is milliseconds.
      shared_ptr<int64_t> lastLoginTimestamp_ {};
      // The expiration date of the account password.
      shared_ptr<string> passwordExpirationDate_ {};
      // This parameter is deprecated and should be ignored.
      shared_ptr<string> status_ {};
      // The name of the account.
      shared_ptr<string> user_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of fingerprint information of account assets displayed on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page during pagination.
      shared_ptr<int32_t> currentPage_ {};
      // The NextToken value returned using the NextToken method.
      shared_ptr<string> nextToken_ {};
      // The number of account asset fingerprint information items to display per page during pagination. The default value is **10**, indicating that 10 items of account asset fingerprint information are displayed per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of account asset fingerprint information items queried.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->propertys_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyUserDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyUserDetailResponseBody::PageInfo) };
    inline DescribePropertyUserDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyUserDetailResponseBody::PageInfo) };
    inline DescribePropertyUserDetailResponseBody& setPageInfo(const DescribePropertyUserDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyUserDetailResponseBody& setPageInfo(DescribePropertyUserDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyUserDetailResponseBody::Propertys> & getPropertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyUserDetailResponseBody::Propertys>) };
    inline vector<DescribePropertyUserDetailResponseBody::Propertys> getPropertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyUserDetailResponseBody::Propertys>) };
    inline DescribePropertyUserDetailResponseBody& setPropertys(const vector<DescribePropertyUserDetailResponseBody::Propertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyUserDetailResponseBody& setPropertys(vector<DescribePropertyUserDetailResponseBody::Propertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyUserDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information displayed on the query result page.
    shared_ptr<DescribePropertyUserDetailResponseBody::PageInfo> pageInfo_ {};
    // Details list of the queried account asset fingerprint information.
    shared_ptr<vector<DescribePropertyUserDetailResponseBody::Propertys>> propertys_ {};
    // The ID of the current request, which is a unique identifier generated by Alibaba Cloud for the request, and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
