// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionData, actionData_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionData, actionData_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    UpdateRoleRequest() = default ;
    UpdateRoleRequest(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest(UpdateRoleRequest &&) = default ;
    UpdateRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoleRequest() = default ;
    UpdateRoleRequest& operator=(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest& operator=(UpdateRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionData_ == nullptr
        && return this->roleId_ == nullptr; };
    // actionData Field Functions 
    bool hasActionData() const { return this->actionData_ != nullptr;};
    void deleteActionData() { this->actionData_ = nullptr;};
    inline string actionData() const { DARABONBA_PTR_GET_DEFAULT(actionData_, "") };
    inline UpdateRoleRequest& setActionData(string actionData) { DARABONBA_PTR_SET_VALUE(actionData_, actionData) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int32_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
    inline UpdateRoleRequest& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // The set of permissions to be granted to the role. The value is in the format of `Permission group ID 1:Permission serial number 1;...;Permission group ID n:Permission serial number n`. Example: `1:1;1:2;2:1;2:2`. For more information about permission groups and permission serial numbers, see [ListAuthority](https://help.aliyun.com/document_detail/149409.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> actionData_ = nullptr;
    // The ID of the role. You can call the ListRole operation to query the role IDs. For more information, see [ListRole](https://help.aliyun.com/document_detail/149410.html).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
