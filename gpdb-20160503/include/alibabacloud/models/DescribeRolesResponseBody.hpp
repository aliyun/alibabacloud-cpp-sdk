// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRolesResponseBodyRoleList.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->roleList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const DescribeRolesResponseBodyRoleList & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, DescribeRolesResponseBodyRoleList) };
    inline DescribeRolesResponseBodyRoleList roleList() { DARABONBA_PTR_GET(roleList_, DescribeRolesResponseBodyRoleList) };
    inline DescribeRolesResponseBody& setRoleList(const DescribeRolesResponseBodyRoleList & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline DescribeRolesResponseBody& setRoleList(DescribeRolesResponseBodyRoleList && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The roles.
    std::shared_ptr<DescribeRolesResponseBodyRoleList> roleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
