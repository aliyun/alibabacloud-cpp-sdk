// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROWPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROWPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteRowPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteRowPermissionCommand, deleteRowPermissionCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteRowPermissionCommand, deleteRowPermissionCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteRowPermissionShrinkRequest() = default ;
    DeleteRowPermissionShrinkRequest(const DeleteRowPermissionShrinkRequest &) = default ;
    DeleteRowPermissionShrinkRequest(DeleteRowPermissionShrinkRequest &&) = default ;
    DeleteRowPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRowPermissionShrinkRequest() = default ;
    DeleteRowPermissionShrinkRequest& operator=(const DeleteRowPermissionShrinkRequest &) = default ;
    DeleteRowPermissionShrinkRequest& operator=(DeleteRowPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteRowPermissionCommandShrink_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // deleteRowPermissionCommandShrink Field Functions 
    bool hasDeleteRowPermissionCommandShrink() const { return this->deleteRowPermissionCommandShrink_ != nullptr;};
    void deleteDeleteRowPermissionCommandShrink() { this->deleteRowPermissionCommandShrink_ = nullptr;};
    inline string deleteRowPermissionCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteRowPermissionCommandShrink_, "") };
    inline DeleteRowPermissionShrinkRequest& setDeleteRowPermissionCommandShrink(string deleteRowPermissionCommandShrink) { DARABONBA_PTR_SET_VALUE(deleteRowPermissionCommandShrink_, deleteRowPermissionCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteRowPermissionShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deleteRowPermissionCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
