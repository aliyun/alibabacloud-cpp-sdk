// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAuthorizedUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListAuthorizedUsersResponseBody() = default ;
    ListAuthorizedUsersResponseBody(const ListAuthorizedUsersResponseBody &) = default ;
    ListAuthorizedUsersResponseBody(ListAuthorizedUsersResponseBody &&) = default ;
    ListAuthorizedUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersResponseBody() = default ;
    ListAuthorizedUsersResponseBody& operator=(const ListAuthorizedUsersResponseBody &) = default ;
    ListAuthorizedUsersResponseBody& operator=(ListAuthorizedUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
        DARABONBA_PTR_TO_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
        DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(IsAuthAllApps, isAuthAllApps_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
        DARABONBA_PTR_FROM_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
        DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(IsAuthAllApps, isAuthAllApps_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->appId_ == nullptr && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupSetId_ == nullptr && this->appInstancePersistentIds_ == nullptr && this->authMode_ == nullptr
        && this->email_ == nullptr && this->endUserId_ == nullptr && this->isAuthAllApps_ == nullptr && this->phone_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Users& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Users& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline Users& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupSetId Field Functions 
      bool hasAppInstanceGroupSetId() const { return this->appInstanceGroupSetId_ != nullptr;};
      void deleteAppInstanceGroupSetId() { this->appInstanceGroupSetId_ = nullptr;};
      inline string getAppInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupSetId_, "") };
      inline Users& setAppInstanceGroupSetId(string appInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupSetId_, appInstanceGroupSetId) };


      // appInstancePersistentIds Field Functions 
      bool hasAppInstancePersistentIds() const { return this->appInstancePersistentIds_ != nullptr;};
      void deleteAppInstancePersistentIds() { this->appInstancePersistentIds_ = nullptr;};
      inline const vector<string> & getAppInstancePersistentIds() const { DARABONBA_PTR_GET_CONST(appInstancePersistentIds_, vector<string>) };
      inline vector<string> getAppInstancePersistentIds() { DARABONBA_PTR_GET(appInstancePersistentIds_, vector<string>) };
      inline Users& setAppInstancePersistentIds(const vector<string> & appInstancePersistentIds) { DARABONBA_PTR_SET_VALUE(appInstancePersistentIds_, appInstancePersistentIds) };
      inline Users& setAppInstancePersistentIds(vector<string> && appInstancePersistentIds) { DARABONBA_PTR_SET_RVALUE(appInstancePersistentIds_, appInstancePersistentIds) };


      // authMode Field Functions 
      bool hasAuthMode() const { return this->authMode_ != nullptr;};
      void deleteAuthMode() { this->authMode_ = nullptr;};
      inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
      inline Users& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Users& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // isAuthAllApps Field Functions 
      bool hasIsAuthAllApps() const { return this->isAuthAllApps_ != nullptr;};
      void deleteIsAuthAllApps() { this->isAuthAllApps_ = nullptr;};
      inline string getIsAuthAllApps() const { DARABONBA_PTR_GET_DEFAULT(isAuthAllApps_, "") };
      inline Users& setIsAuthAllApps(string isAuthAllApps) { DARABONBA_PTR_SET_VALUE(isAuthAllApps_, isAuthAllApps) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Users& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    protected:
      // The account type of the user. Valid values:
      // 
      // - simple: Convenience account.
      // - ad: Active Directory (AD) domain account, which originates from an enterprise AD domain.
      shared_ptr<string> accountType_ {};
      // The application ID. Returned only when AppId is specified in the request. The value is the same as the request parameter. Not returned if AppId is not specified or when querying by delivery group set.
      shared_ptr<string> appId_ {};
      // The delivery group ID associated with the user\\"s authorization relationship. When querying by delivery group, this value is the same as the request parameter. When querying by delivery group set, this value is the primary delivery group ID of the set.
      shared_ptr<string> appInstanceGroupId_ {};
      // The delivery group set ID. Returned only when querying by delivery group set. The value is the same as the AppInstanceGroupSetId request parameter.
      shared_ptr<string> appInstanceGroupSetId_ {};
      // The list of persistent session IDs granted to the user. Returned only when the delivery group authorization mode (AuthMode) is `Session`. This list is not affected by the AppInstancePersistentId request parameter and always includes all persistent sessions granted to the user.
      shared_ptr<vector<string>> appInstancePersistentIds_ {};
      // The authorization mode of the delivery group, which determines the scope of results returned by this operation. Valid values:
      // 
      // - App: Application-level authorization. Applications within the delivery group are authorized to users without restricting which sessions the users can use.
      // - Session: Session-level authorization. Persistent sessions within the delivery group are authorized to users without restricting which applications the users can use. In this case, AppInstancePersistentIds returns the persistent sessions granted to the user.
      // - AppInstanceGroup: Delivery group-level authorization. The entire delivery group is authorized to users, allowing them to open any application using any session within the delivery group.
      // 
      // When querying by delivery group set, the authorization mode of the primary delivery group in the set is returned.
      shared_ptr<string> authMode_ {};
      // The email address of the user. Returned only when the account information of the user can be retrieved.
      shared_ptr<string> email_ {};
      // The username. To remove authorization, pass this value to the UnAuthorizeUserIds parameter of the [AuthorizeInstanceGroup](~~AuthorizeInstanceGroup~~) or [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation.
      shared_ptr<string> endUserId_ {};
      // Indicates whether the query is not restricted to a specific application. Valid values:
      // 
      // - true: AppId is not specified in the request. All authorized users under the delivery group are returned.
      // - false: AppId is specified in the request. Only users authorized for that specific application are returned.
      // 
      // > This field is determined by whether the AppId request parameter is specified. It does not reflect the actual scope of applications authorized to the user and cannot be used to determine whether the user is authorized for all applications.
      shared_ptr<string> isAuthAllApps_ {};
      // The phone number of the user. Returned only when the account information of the user can be retrieved.
      shared_ptr<string> phone_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAuthorizedUsersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedUsersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAuthorizedUsersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListAuthorizedUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListAuthorizedUsersResponseBody::Users>) };
    inline vector<ListAuthorizedUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListAuthorizedUsersResponseBody::Users>) };
    inline ListAuthorizedUsersResponseBody& setUsers(const vector<ListAuthorizedUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListAuthorizedUsersResponseBody& setUsers(vector<ListAuthorizedUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The current page number, which is the same as the PageNumber request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page, which is the same as the PageSize request parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records that match the query conditions. Use this value to determine whether to continue paging.
    // 
    // - When the authorization mode is `App` or `AppInstanceGroup`, this is the number of authorization records. If the same user has multiple authorization records, the user is counted multiple times. Therefore, this value may be greater than the actual number of users.
    // - When the authorization mode is `Session`, this is the deduplicated user count.
    shared_ptr<int32_t> totalCount_ {};
    // The list of authorized users on the current page. Multiple authorization records for the same user are merged into a single entry. An empty list is returned if no authorized users match the conditions.
    shared_ptr<vector<ListAuthorizedUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
