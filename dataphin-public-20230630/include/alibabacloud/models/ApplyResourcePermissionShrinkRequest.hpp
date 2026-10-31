// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYRESOURCEPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYRESOURCEPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyResourcePermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyResourcePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyCommand, applyCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyResourcePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyCommand, applyCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ApplyResourcePermissionShrinkRequest() = default ;
    ApplyResourcePermissionShrinkRequest(const ApplyResourcePermissionShrinkRequest &) = default ;
    ApplyResourcePermissionShrinkRequest(ApplyResourcePermissionShrinkRequest &&) = default ;
    ApplyResourcePermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyResourcePermissionShrinkRequest() = default ;
    ApplyResourcePermissionShrinkRequest& operator=(const ApplyResourcePermissionShrinkRequest &) = default ;
    ApplyResourcePermissionShrinkRequest& operator=(ApplyResourcePermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // applyCommandShrink Field Functions 
    bool hasApplyCommandShrink() const { return this->applyCommandShrink_ != nullptr;};
    void deleteApplyCommandShrink() { this->applyCommandShrink_ = nullptr;};
    inline string getApplyCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(applyCommandShrink_, "") };
    inline ApplyResourcePermissionShrinkRequest& setApplyCommandShrink(string applyCommandShrink) { DARABONBA_PTR_SET_VALUE(applyCommandShrink_, applyCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ApplyResourcePermissionShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ApplyResourcePermissionShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The permission application request.
    // 
    // This parameter is required.
    shared_ptr<string> applyCommandShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
