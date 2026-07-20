// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERBACPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERBACPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteRbacPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRbacPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(PermissionId, permissionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRbacPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(PermissionId, permissionId_);
    };
    DeleteRbacPermissionRequest() = default ;
    DeleteRbacPermissionRequest(const DeleteRbacPermissionRequest &) = default ;
    DeleteRbacPermissionRequest(DeleteRbacPermissionRequest &&) = default ;
    DeleteRbacPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRbacPermissionRequest() = default ;
    DeleteRbacPermissionRequest& operator=(const DeleteRbacPermissionRequest &) = default ;
    DeleteRbacPermissionRequest& operator=(DeleteRbacPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->permissionId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DeleteRbacPermissionRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // permissionId Field Functions 
    bool hasPermissionId() const { return this->permissionId_ != nullptr;};
    void deletePermissionId() { this->permissionId_ = nullptr;};
    inline string getPermissionId() const { DARABONBA_PTR_GET_DEFAULT(permissionId_, "") };
    inline DeleteRbacPermissionRequest& setPermissionId(string permissionId) { DARABONBA_PTR_SET_VALUE(permissionId_, permissionId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> permissionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
