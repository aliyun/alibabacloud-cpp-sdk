// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListOfficeSiteUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListOfficeSiteUsersResponseBody() = default ;
    ListOfficeSiteUsersResponseBody(const ListOfficeSiteUsersResponseBody &) = default ;
    ListOfficeSiteUsersResponseBody(ListOfficeSiteUsersResponseBody &&) = default ;
    ListOfficeSiteUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteUsersResponseBody() = default ;
    ListOfficeSiteUsersResponseBody& operator=(const ListOfficeSiteUsersResponseBody &) = default ;
    ListOfficeSiteUsersResponseBody& operator=(ListOfficeSiteUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(AssignedDesktopNumber, assignedDesktopNumber_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(DisplayNameNew, displayNameNew_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EndUser, endUser_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(AssignedDesktopNumber, assignedDesktopNumber_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(DisplayNameNew, displayNameNew_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EndUser, endUser_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
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
      virtual bool empty() const override { return this->assignedDesktopNumber_ == nullptr
        && this->displayName_ == nullptr && this->displayNameNew_ == nullptr && this->email_ == nullptr && this->endUser_ == nullptr && this->phone_ == nullptr
        && this->userPrincipalName_ == nullptr; };
      // assignedDesktopNumber Field Functions 
      bool hasAssignedDesktopNumber() const { return this->assignedDesktopNumber_ != nullptr;};
      void deleteAssignedDesktopNumber() { this->assignedDesktopNumber_ = nullptr;};
      inline int32_t getAssignedDesktopNumber() const { DARABONBA_PTR_GET_DEFAULT(assignedDesktopNumber_, 0) };
      inline Users& setAssignedDesktopNumber(int32_t assignedDesktopNumber) { DARABONBA_PTR_SET_VALUE(assignedDesktopNumber_, assignedDesktopNumber) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Users& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // displayNameNew Field Functions 
      bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
      void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
      inline string getDisplayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
      inline Users& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // endUser Field Functions 
      bool hasEndUser() const { return this->endUser_ != nullptr;};
      void deleteEndUser() { this->endUser_ = nullptr;};
      inline string getEndUser() const { DARABONBA_PTR_GET_DEFAULT(endUser_, "") };
      inline Users& setEndUser(string endUser) { DARABONBA_PTR_SET_VALUE(endUser_, endUser) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Users& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline Users& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    protected:
      shared_ptr<int32_t> assignedDesktopNumber_ {};
      // The display name of the AD account.
      shared_ptr<string> displayName_ {};
      shared_ptr<string> displayNameNew_ {};
      shared_ptr<string> email_ {};
      // The username of the AD account.
      shared_ptr<string> endUser_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> userPrincipalName_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->users_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOfficeSiteUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOfficeSiteUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListOfficeSiteUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListOfficeSiteUsersResponseBody::Users>) };
    inline vector<ListOfficeSiteUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListOfficeSiteUsersResponseBody::Users>) };
    inline ListOfficeSiteUsersResponseBody& setUsers(const vector<ListOfficeSiteUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListOfficeSiteUsersResponseBody& setUsers(vector<ListOfficeSiteUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The usernames of the AD accounts.\\
    // If the only Administrator and Guest users exist in the enterprise AD directory, an empty User array is returned.
    shared_ptr<vector<ListOfficeSiteUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
