// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODYPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityGroupAttributeResponseBodyPermissionsPermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupAttributeResponseBodyPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBodyPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(Permission, permission_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBodyPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
    };
    DescribeSecurityGroupAttributeResponseBodyPermissions() = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissions(const DescribeSecurityGroupAttributeResponseBodyPermissions &) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissions(DescribeSecurityGroupAttributeResponseBodyPermissions &&) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBodyPermissions() = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissions& operator=(const DescribeSecurityGroupAttributeResponseBodyPermissions &) = default ;
    DescribeSecurityGroupAttributeResponseBodyPermissions& operator=(DescribeSecurityGroupAttributeResponseBodyPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permission_ != nullptr; };
    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline const vector<Models::DescribeSecurityGroupAttributeResponseBodyPermissionsPermission> & permission() const { DARABONBA_PTR_GET_CONST(permission_, vector<Models::DescribeSecurityGroupAttributeResponseBodyPermissionsPermission>) };
    inline vector<Models::DescribeSecurityGroupAttributeResponseBodyPermissionsPermission> permission() { DARABONBA_PTR_GET(permission_, vector<Models::DescribeSecurityGroupAttributeResponseBodyPermissionsPermission>) };
    inline DescribeSecurityGroupAttributeResponseBodyPermissions& setPermission(const vector<Models::DescribeSecurityGroupAttributeResponseBodyPermissionsPermission> & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
    inline DescribeSecurityGroupAttributeResponseBodyPermissions& setPermission(vector<Models::DescribeSecurityGroupAttributeResponseBodyPermissionsPermission> && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


  protected:
    std::shared_ptr<vector<Models::DescribeSecurityGroupAttributeResponseBodyPermissionsPermission>> permission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
