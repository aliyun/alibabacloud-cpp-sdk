// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSWITHPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSWITHPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeUsersWithPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersWithPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersWithPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    DescribeUsersWithPermissionsRequest() = default ;
    DescribeUsersWithPermissionsRequest(const DescribeUsersWithPermissionsRequest &) = default ;
    DescribeUsersWithPermissionsRequest(DescribeUsersWithPermissionsRequest &&) = default ;
    DescribeUsersWithPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersWithPermissionsRequest() = default ;
    DescribeUsersWithPermissionsRequest& operator=(const DescribeUsersWithPermissionsRequest &) = default ;
    DescribeUsersWithPermissionsRequest& operator=(DescribeUsersWithPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userType_ == nullptr; };
    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline DescribeUsersWithPermissionsRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Specifies whether to query the IDs of all RAM users or RAM roles to which an RBAC role is assigned. Valid values:
    // 
    // *   `SubUser`: Query the IDs of all RAM users to which an RBAC role is assigned.
    // *   `RamRole`: Query the IDs of all RAM roles to which an RBAC role is assigned.
    // 
    // This parameter is required.
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
