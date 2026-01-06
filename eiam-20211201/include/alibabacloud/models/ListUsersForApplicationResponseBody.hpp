// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUsersForApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersForApplicationResponseBody() = default ;
    ListUsersForApplicationResponseBody(const ListUsersForApplicationResponseBody &) = default ;
    ListUsersForApplicationResponseBody(ListUsersForApplicationResponseBody &&) = default ;
    ListUsersForApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForApplicationResponseBody() = default ;
    ListUsersForApplicationResponseBody& operator=(const ListUsersForApplicationResponseBody &) = default ;
    ListUsersForApplicationResponseBody& operator=(ListUsersForApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationRoles, applicationRoles_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationRoles, applicationRoles_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      class ApplicationRoles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationRoles& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationRoleId, applicationRoleId_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationRoles& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationRoleId, applicationRoleId_);
        };
        ApplicationRoles() = default ;
        ApplicationRoles(const ApplicationRoles &) = default ;
        ApplicationRoles(ApplicationRoles &&) = default ;
        ApplicationRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationRoles() = default ;
        ApplicationRoles& operator=(const ApplicationRoles &) = default ;
        ApplicationRoles& operator=(ApplicationRoles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationRoleId_ == nullptr; };
        // applicationRoleId Field Functions 
        bool hasApplicationRoleId() const { return this->applicationRoleId_ != nullptr;};
        void deleteApplicationRoleId() { this->applicationRoleId_ = nullptr;};
        inline string getApplicationRoleId() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleId_, "") };
        inline ApplicationRoles& setApplicationRoleId(string applicationRoleId) { DARABONBA_PTR_SET_VALUE(applicationRoleId_, applicationRoleId) };


      protected:
        // 应用角色标识。
        shared_ptr<string> applicationRoleId_ {};
      };

      virtual bool empty() const override { return this->applicationRoles_ == nullptr
        && this->userId_ == nullptr; };
      // applicationRoles Field Functions 
      bool hasApplicationRoles() const { return this->applicationRoles_ != nullptr;};
      void deleteApplicationRoles() { this->applicationRoles_ = nullptr;};
      inline const vector<Users::ApplicationRoles> & getApplicationRoles() const { DARABONBA_PTR_GET_CONST(applicationRoles_, vector<Users::ApplicationRoles>) };
      inline vector<Users::ApplicationRoles> getApplicationRoles() { DARABONBA_PTR_GET(applicationRoles_, vector<Users::ApplicationRoles>) };
      inline Users& setApplicationRoles(const vector<Users::ApplicationRoles> & applicationRoles) { DARABONBA_PTR_SET_VALUE(applicationRoles_, applicationRoles) };
      inline Users& setApplicationRoles(vector<Users::ApplicationRoles> && applicationRoles) { DARABONBA_PTR_SET_RVALUE(applicationRoles_, applicationRoles) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // 应用角色列表。
      shared_ptr<vector<Users::ApplicationRoles>> applicationRoles_ {};
      // The ID of the account.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersForApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersForApplicationResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersForApplicationResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersForApplicationResponseBody::Users>) };
    inline vector<ListUsersForApplicationResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListUsersForApplicationResponseBody::Users>) };
    inline ListUsersForApplicationResponseBody& setUsers(const vector<ListUsersForApplicationResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersForApplicationResponseBody& setUsers(vector<ListUsersForApplicationResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int64_t> totalCount_ {};
    // The IDs of the accounts.
    shared_ptr<vector<ListUsersForApplicationResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
