// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAccountRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
    };
    DescribeAccountRolesResponseBody() = default ;
    DescribeAccountRolesResponseBody(const DescribeAccountRolesResponseBody &) = default ;
    DescribeAccountRolesResponseBody(DescribeAccountRolesResponseBody &&) = default ;
    DescribeAccountRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountRolesResponseBody() = default ;
    DescribeAccountRolesResponseBody& operator=(const DescribeAccountRolesResponseBody &) = default ;
    DescribeAccountRolesResponseBody& operator=(DescribeAccountRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Role& obj) { 
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
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
        virtual bool empty() const override { return this->DBName_ == nullptr
        && this->role_ == nullptr; };
        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Role& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Role& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        shared_ptr<string> DBName_ {};
        shared_ptr<string> role_ {};
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

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->roles_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const DescribeAccountRolesResponseBody::Roles & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, DescribeAccountRolesResponseBody::Roles) };
    inline DescribeAccountRolesResponseBody::Roles getRoles() { DARABONBA_PTR_GET(roles_, DescribeAccountRolesResponseBody::Roles) };
    inline DescribeAccountRolesResponseBody& setRoles(const DescribeAccountRolesResponseBody::Roles & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline DescribeAccountRolesResponseBody& setRoles(DescribeAccountRolesResponseBody::Roles && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeAccountRolesResponseBody::Roles> roles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
