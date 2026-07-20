// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERBACPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERBACPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateRbacPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRbacPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(PermissionData, permissionData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRbacPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(PermissionData, permissionData_);
    };
    CreateRbacPermissionRequest() = default ;
    CreateRbacPermissionRequest(const CreateRbacPermissionRequest &) = default ;
    CreateRbacPermissionRequest(CreateRbacPermissionRequest &&) = default ;
    CreateRbacPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRbacPermissionRequest() = default ;
    CreateRbacPermissionRequest& operator=(const CreateRbacPermissionRequest &) = default ;
    CreateRbacPermissionRequest& operator=(CreateRbacPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->permissionData_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateRbacPermissionRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // permissionData Field Functions 
    bool hasPermissionData() const { return this->permissionData_ != nullptr;};
    void deletePermissionData() { this->permissionData_ = nullptr;};
    inline string getPermissionData() const { DARABONBA_PTR_GET_DEFAULT(permissionData_, "") };
    inline CreateRbacPermissionRequest& setPermissionData(string permissionData) { DARABONBA_PTR_SET_VALUE(permissionData_, permissionData) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> permissionData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
