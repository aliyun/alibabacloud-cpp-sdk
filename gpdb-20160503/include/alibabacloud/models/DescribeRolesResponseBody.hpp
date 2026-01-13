// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
    };
    DescribeRolesResponseBody() = default ;
    DescribeRolesResponseBody(const DescribeRolesResponseBody &) = default ;
    DescribeRolesResponseBody(DescribeRolesResponseBody &&) = default ;
    DescribeRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRolesResponseBody() = default ;
    DescribeRolesResponseBody& operator=(const DescribeRolesResponseBody &) = default ;
    DescribeRolesResponseBody& operator=(DescribeRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleList& obj) { 
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, RoleList& obj) { 
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      RoleList() = default ;
      RoleList(const RoleList &) = default ;
      RoleList(RoleList &&) = default ;
      RoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleList() = default ;
      RoleList& operator=(const RoleList &) = default ;
      RoleList& operator=(RoleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->role_ == nullptr; };
      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline const vector<string> & getRole() const { DARABONBA_PTR_GET_CONST(role_, vector<string>) };
      inline vector<string> getRole() { DARABONBA_PTR_GET(role_, vector<string>) };
      inline RoleList& setRole(const vector<string> & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
      inline RoleList& setRole(vector<string> && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    protected:
      shared_ptr<vector<string>> role_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->roleList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const DescribeRolesResponseBody::RoleList & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, DescribeRolesResponseBody::RoleList) };
    inline DescribeRolesResponseBody::RoleList getRoleList() { DARABONBA_PTR_GET(roleList_, DescribeRolesResponseBody::RoleList) };
    inline DescribeRolesResponseBody& setRoleList(const DescribeRolesResponseBody::RoleList & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline DescribeRolesResponseBody& setRoleList(DescribeRolesResponseBody::RoleList && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The roles.
    shared_ptr<DescribeRolesResponseBody::RoleList> roleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
