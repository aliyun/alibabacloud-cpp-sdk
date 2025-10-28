// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionData, actionData_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, InsertRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionData, actionData_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    InsertRoleRequest() = default ;
    InsertRoleRequest(const InsertRoleRequest &) = default ;
    InsertRoleRequest(InsertRoleRequest &&) = default ;
    InsertRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertRoleRequest() = default ;
    InsertRoleRequest& operator=(const InsertRoleRequest &) = default ;
    InsertRoleRequest& operator=(InsertRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionData_ == nullptr
        && return this->roleName_ == nullptr; };
    // actionData Field Functions 
    bool hasActionData() const { return this->actionData_ != nullptr;};
    void deleteActionData() { this->actionData_ = nullptr;};
    inline string actionData() const { DARABONBA_PTR_GET_DEFAULT(actionData_, "") };
    inline InsertRoleRequest& setActionData(string actionData) { DARABONBA_PTR_SET_VALUE(actionData_, actionData) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline InsertRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The set of permissions to be granted to the role. The value is in the format of `Permission group ID 1:Permission serial number 1;...;Permission group ID n:Permission serial number n`. Example: `1:1;1:2;2:1;2:2`. For more information about permission groups and permission serial numbers, see [ListAuthority](https://help.aliyun.com/document_detail/149409.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> actionData_ = nullptr;
    // The name of the role.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
