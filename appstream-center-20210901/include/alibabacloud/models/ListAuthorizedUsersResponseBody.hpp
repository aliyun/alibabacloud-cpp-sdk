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
      // The user account type.
      // 
      // - `simple`: convenience account.
      // - `ad`: Active Directory (AD) domain account.
      shared_ptr<string> accountType_ {};
      // The application ID specified in this query. This field is not returned if no application filter condition is specified.
      shared_ptr<string> appId_ {};
      // The delivery group ID to which the authorization relationship belongs. When querying cloud browsers, this is the browser group ID. When querying by set, this field is the primary delivery group ID of the set.
      shared_ptr<string> appInstanceGroupId_ {};
      // The delivery group set ID of this query. This field is returned when querying by set.
      shared_ptr<string> appInstanceGroupSetId_ {};
      // The list of persistent session IDs authorized to the user. This field is returned when the authorization mode is `Session`.
      shared_ptr<vector<string>> appInstancePersistentIds_ {};
      // The authorization mode of the delivery group. Valid values:
      // 
      // - `App`: Authorization by application.
      // - `Session`: Authorization by persistent session.
      // - `AppInstanceGroup`: Authorization by delivery group.
      shared_ptr<string> authMode_ {};
      // The email address of the user. This field may not be returned if the email address is not available.
      shared_ptr<string> email_ {};
      // The authorized username.
      shared_ptr<string> endUserId_ {};
      // Indicates whether the query is not restricted to a specific application. Valid values:
      // 
      // - `true`: No application filter condition is specified.
      // - `false`: An application filter condition is specified.
      // 
      // This field is determined by the query conditions and cannot be used alone to determine whether the user is authorized for all applications.
      shared_ptr<string> isAuthAllApps_ {};
      // The phone number of the user. This field may not be returned if the phone number is not available.
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
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page in this request.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate this call.
    shared_ptr<string> requestId_ {};
    // The total number of authorization records that match the query conditions.
    shared_ptr<int32_t> totalCount_ {};
    // The list of authorized users on the current page. An empty list is returned if no authorization records are matched.
    shared_ptr<vector<ListAuthorizedUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
