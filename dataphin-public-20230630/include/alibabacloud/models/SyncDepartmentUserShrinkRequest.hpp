// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SyncDepartmentUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SyncDepartmentUserCommand, syncDepartmentUserCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SyncDepartmentUserCommand, syncDepartmentUserCommandShrink_);
    };
    SyncDepartmentUserShrinkRequest() = default ;
    SyncDepartmentUserShrinkRequest(const SyncDepartmentUserShrinkRequest &) = default ;
    SyncDepartmentUserShrinkRequest(SyncDepartmentUserShrinkRequest &&) = default ;
    SyncDepartmentUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentUserShrinkRequest() = default ;
    SyncDepartmentUserShrinkRequest& operator=(const SyncDepartmentUserShrinkRequest &) = default ;
    SyncDepartmentUserShrinkRequest& operator=(SyncDepartmentUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->syncDepartmentUserCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SyncDepartmentUserShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // syncDepartmentUserCommandShrink Field Functions 
    bool hasSyncDepartmentUserCommandShrink() const { return this->syncDepartmentUserCommandShrink_ != nullptr;};
    void deleteSyncDepartmentUserCommandShrink() { this->syncDepartmentUserCommandShrink_ = nullptr;};
    inline string getSyncDepartmentUserCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(syncDepartmentUserCommandShrink_, "") };
    inline SyncDepartmentUserShrinkRequest& setSyncDepartmentUserCommandShrink(string syncDepartmentUserCommandShrink) { DARABONBA_PTR_SET_VALUE(syncDepartmentUserCommandShrink_, syncDepartmentUserCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> syncDepartmentUserCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
