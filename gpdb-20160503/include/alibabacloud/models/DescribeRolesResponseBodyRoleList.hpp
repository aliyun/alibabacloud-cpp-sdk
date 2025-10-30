// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROLESRESPONSEBODYROLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROLESRESPONSEBODYROLELIST_HPP_
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
  class DescribeRolesResponseBodyRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRolesResponseBodyRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRolesResponseBodyRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    DescribeRolesResponseBodyRoleList() = default ;
    DescribeRolesResponseBodyRoleList(const DescribeRolesResponseBodyRoleList &) = default ;
    DescribeRolesResponseBodyRoleList(DescribeRolesResponseBodyRoleList &&) = default ;
    DescribeRolesResponseBodyRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRolesResponseBodyRoleList() = default ;
    DescribeRolesResponseBodyRoleList& operator=(const DescribeRolesResponseBodyRoleList &) = default ;
    DescribeRolesResponseBodyRoleList& operator=(DescribeRolesResponseBodyRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->role_ == nullptr; };
    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const vector<string> & role() const { DARABONBA_PTR_GET_CONST(role_, vector<string>) };
    inline vector<string> role() { DARABONBA_PTR_GET(role_, vector<string>) };
    inline DescribeRolesResponseBodyRoleList& setRole(const vector<string> & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline DescribeRolesResponseBodyRoleList& setRole(vector<string> && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    std::shared_ptr<vector<string>> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
