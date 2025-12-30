// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateRowPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateRowPermissionCommand, updateRowPermissionCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRowPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateRowPermissionCommand, updateRowPermissionCommandShrink_);
    };
    UpdateRowPermissionShrinkRequest() = default ;
    UpdateRowPermissionShrinkRequest(const UpdateRowPermissionShrinkRequest &) = default ;
    UpdateRowPermissionShrinkRequest(UpdateRowPermissionShrinkRequest &&) = default ;
    UpdateRowPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRowPermissionShrinkRequest() = default ;
    UpdateRowPermissionShrinkRequest& operator=(const UpdateRowPermissionShrinkRequest &) = default ;
    UpdateRowPermissionShrinkRequest& operator=(UpdateRowPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateRowPermissionCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateRowPermissionShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateRowPermissionCommandShrink Field Functions 
    bool hasUpdateRowPermissionCommandShrink() const { return this->updateRowPermissionCommandShrink_ != nullptr;};
    void deleteUpdateRowPermissionCommandShrink() { this->updateRowPermissionCommandShrink_ = nullptr;};
    inline string getUpdateRowPermissionCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(updateRowPermissionCommandShrink_, "") };
    inline UpdateRowPermissionShrinkRequest& setUpdateRowPermissionCommandShrink(string updateRowPermissionCommandShrink) { DARABONBA_PTR_SET_VALUE(updateRowPermissionCommandShrink_, updateRowPermissionCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> updateRowPermissionCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
