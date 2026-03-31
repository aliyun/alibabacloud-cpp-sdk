// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESFORPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESFORPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListEntitiesForPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesForPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesForPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListEntitiesForPolicyResponseBody() = default ;
    ListEntitiesForPolicyResponseBody(const ListEntitiesForPolicyResponseBody &) = default ;
    ListEntitiesForPolicyResponseBody(ListEntitiesForPolicyResponseBody &&) = default ;
    ListEntitiesForPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesForPolicyResponseBody() = default ;
    ListEntitiesForPolicyResponseBody& operator=(const ListEntitiesForPolicyResponseBody &) = default ;
    ListEntitiesForPolicyResponseBody& operator=(ListEntitiesForPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      class User : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const User& obj) { 
          DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, User& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        User() = default ;
        User(const User &) = default ;
        User(User &&) = default ;
        User(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~User() = default ;
        User& operator=(const User &) = default ;
        User& operator=(User &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachDate_ == nullptr
        && this->displayName_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
        // attachDate Field Functions 
        bool hasAttachDate() const { return this->attachDate_ != nullptr;};
        void deleteAttachDate() { this->attachDate_ = nullptr;};
        inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
        inline User& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline User& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline User& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> attachDate_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->user_ == nullptr; };
      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline const vector<Users::User> & getUser() const { DARABONBA_PTR_GET_CONST(user_, vector<Users::User>) };
      inline vector<Users::User> getUser() { DARABONBA_PTR_GET(user_, vector<Users::User>) };
      inline Users& setUser(const vector<Users::User> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
      inline Users& setUser(vector<Users::User> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    protected:
      shared_ptr<vector<Users::User>> user_ {};
    };

    class Roles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Roles& obj) { 
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Roles& obj) { 
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      Roles() = default ;
      Roles(const Roles &) = default ;
      Roles(Roles &&) = default ;
      Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Roles() = default ;
      Roles& operator=(const Roles &) = default ;
      Roles& operator=(Roles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Role : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Role& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, Role& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        };
        Role() = default ;
        Role(const Role &) = default ;
        Role(Role &&) = default ;
        Role(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Role() = default ;
        Role& operator=(const Role &) = default ;
        Role& operator=(Role &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->attachDate_ == nullptr && this->description_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline Role& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // attachDate Field Functions 
        bool hasAttachDate() const { return this->attachDate_ != nullptr;};
        void deleteAttachDate() { this->attachDate_ = nullptr;};
        inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
        inline Role& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Role& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline Role& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline Role& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      protected:
        shared_ptr<string> arn_ {};
        shared_ptr<string> attachDate_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> roleId_ {};
        shared_ptr<string> roleName_ {};
      };

      virtual bool empty() const override { return this->role_ == nullptr; };
      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline const vector<Roles::Role> & getRole() const { DARABONBA_PTR_GET_CONST(role_, vector<Roles::Role>) };
      inline vector<Roles::Role> getRole() { DARABONBA_PTR_GET(role_, vector<Roles::Role>) };
      inline Roles& setRole(const vector<Roles::Role> & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
      inline Roles& setRole(vector<Roles::Role> && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    protected:
      shared_ptr<vector<Roles::Role>> role_ {};
    };

    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(Group, group_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(Group, group_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Group : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Group& obj) { 
          DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_TO_JSON(Comments, comments_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, Group& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_FROM_JSON(Comments, comments_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        Group() = default ;
        Group(const Group &) = default ;
        Group(Group &&) = default ;
        Group(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Group() = default ;
        Group& operator=(const Group &) = default ;
        Group& operator=(Group &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachDate_ == nullptr
        && this->comments_ == nullptr && this->groupName_ == nullptr; };
        // attachDate Field Functions 
        bool hasAttachDate() const { return this->attachDate_ != nullptr;};
        void deleteAttachDate() { this->attachDate_ = nullptr;};
        inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
        inline Group& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


        // comments Field Functions 
        bool hasComments() const { return this->comments_ != nullptr;};
        void deleteComments() { this->comments_ = nullptr;};
        inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
        inline Group& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        shared_ptr<string> attachDate_ {};
        shared_ptr<string> comments_ {};
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->group_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline const vector<Groups::Group> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<Groups::Group>) };
      inline vector<Groups::Group> getGroup() { DARABONBA_PTR_GET(group_, vector<Groups::Group>) };
      inline Groups& setGroup(const vector<Groups::Group> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
      inline Groups& setGroup(vector<Groups::Group> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    protected:
      shared_ptr<vector<Groups::Group>> group_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->requestId_ == nullptr && this->roles_ == nullptr && this->users_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const ListEntitiesForPolicyResponseBody::Groups & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, ListEntitiesForPolicyResponseBody::Groups) };
    inline ListEntitiesForPolicyResponseBody::Groups getGroups() { DARABONBA_PTR_GET(groups_, ListEntitiesForPolicyResponseBody::Groups) };
    inline ListEntitiesForPolicyResponseBody& setGroups(const ListEntitiesForPolicyResponseBody::Groups & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListEntitiesForPolicyResponseBody& setGroups(ListEntitiesForPolicyResponseBody::Groups && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEntitiesForPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const ListEntitiesForPolicyResponseBody::Roles & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, ListEntitiesForPolicyResponseBody::Roles) };
    inline ListEntitiesForPolicyResponseBody::Roles getRoles() { DARABONBA_PTR_GET(roles_, ListEntitiesForPolicyResponseBody::Roles) };
    inline ListEntitiesForPolicyResponseBody& setRoles(const ListEntitiesForPolicyResponseBody::Roles & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListEntitiesForPolicyResponseBody& setRoles(ListEntitiesForPolicyResponseBody::Roles && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const ListEntitiesForPolicyResponseBody::Users & getUsers() const { DARABONBA_PTR_GET_CONST(users_, ListEntitiesForPolicyResponseBody::Users) };
    inline ListEntitiesForPolicyResponseBody::Users getUsers() { DARABONBA_PTR_GET(users_, ListEntitiesForPolicyResponseBody::Users) };
    inline ListEntitiesForPolicyResponseBody& setUsers(const ListEntitiesForPolicyResponseBody::Users & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListEntitiesForPolicyResponseBody& setUsers(ListEntitiesForPolicyResponseBody::Users && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    shared_ptr<ListEntitiesForPolicyResponseBody::Groups> groups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListEntitiesForPolicyResponseBody::Roles> roles_ {};
    shared_ptr<ListEntitiesForPolicyResponseBody::Users> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
