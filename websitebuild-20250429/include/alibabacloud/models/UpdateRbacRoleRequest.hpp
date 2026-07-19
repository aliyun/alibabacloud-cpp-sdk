// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERBACROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERBACROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateRbacRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRbacRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(RoleData, roleData_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRbacRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(RoleData, roleData_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    UpdateRbacRoleRequest() = default ;
    UpdateRbacRoleRequest(const UpdateRbacRoleRequest &) = default ;
    UpdateRbacRoleRequest(UpdateRbacRoleRequest &&) = default ;
    UpdateRbacRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRbacRoleRequest() = default ;
    UpdateRbacRoleRequest& operator=(const UpdateRbacRoleRequest &) = default ;
    UpdateRbacRoleRequest& operator=(UpdateRbacRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->roleData_ == nullptr && this->roleId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UpdateRbacRoleRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // roleData Field Functions 
    bool hasRoleData() const { return this->roleData_ != nullptr;};
    void deleteRoleData() { this->roleData_ = nullptr;};
    inline string getRoleData() const { DARABONBA_PTR_GET_DEFAULT(roleData_, "") };
    inline UpdateRbacRoleRequest& setRoleData(string roleData) { DARABONBA_PTR_SET_VALUE(roleData_, roleData) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline UpdateRbacRoleRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> roleData_ {};
    shared_ptr<string> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
