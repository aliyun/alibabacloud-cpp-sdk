// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERBACROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERBACROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateRbacRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRbacRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(RoleData, roleData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRbacRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(RoleData, roleData_);
    };
    CreateRbacRoleRequest() = default ;
    CreateRbacRoleRequest(const CreateRbacRoleRequest &) = default ;
    CreateRbacRoleRequest(CreateRbacRoleRequest &&) = default ;
    CreateRbacRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRbacRoleRequest() = default ;
    CreateRbacRoleRequest& operator=(const CreateRbacRoleRequest &) = default ;
    CreateRbacRoleRequest& operator=(CreateRbacRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->roleData_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateRbacRoleRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // roleData Field Functions 
    bool hasRoleData() const { return this->roleData_ != nullptr;};
    void deleteRoleData() { this->roleData_ = nullptr;};
    inline string getRoleData() const { DARABONBA_PTR_GET_DEFAULT(roleData_, "") };
    inline CreateRbacRoleRequest& setRoleData(string roleData) { DARABONBA_PTR_SET_VALUE(roleData_, roleData) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> roleData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
