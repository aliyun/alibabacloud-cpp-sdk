// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHOPERATEWORKITEMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHOPERATEWORKITEMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class BatchOperateWorkItemsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchOperateWorkItemsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemIds, workItemIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchOperateWorkItemsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemIds, workItemIdsShrink_);
    };
    BatchOperateWorkItemsShrinkRequest() = default ;
    BatchOperateWorkItemsShrinkRequest(const BatchOperateWorkItemsShrinkRequest &) = default ;
    BatchOperateWorkItemsShrinkRequest(BatchOperateWorkItemsShrinkRequest &&) = default ;
    BatchOperateWorkItemsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchOperateWorkItemsShrinkRequest() = default ;
    BatchOperateWorkItemsShrinkRequest& operator=(const BatchOperateWorkItemsShrinkRequest &) = default ;
    BatchOperateWorkItemsShrinkRequest& operator=(BatchOperateWorkItemsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->idempotencyKey_ == nullptr && this->tenantId_ == nullptr && this->workItemIdsShrink_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline BatchOperateWorkItemsShrinkRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline BatchOperateWorkItemsShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline BatchOperateWorkItemsShrinkRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline BatchOperateWorkItemsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemIdsShrink Field Functions 
    bool hasWorkItemIdsShrink() const { return this->workItemIdsShrink_ != nullptr;};
    void deleteWorkItemIdsShrink() { this->workItemIdsShrink_ = nullptr;};
    inline string getWorkItemIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(workItemIdsShrink_, "") };
    inline BatchOperateWorkItemsShrinkRequest& setWorkItemIdsShrink(string workItemIdsShrink) { DARABONBA_PTR_SET_VALUE(workItemIdsShrink_, workItemIdsShrink) };


  protected:
    // The batch action.
    // 
    // This parameter is required.
    shared_ptr<string> action_ {};
    // The ID of the collaboration workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The idempotency key.
    // 
    // This parameter is required.
    shared_ptr<string> idempotencyKey_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The IDs of the target work items. You can specify 1 to 100 IDs.
    // 
    // This parameter is required.
    shared_ptr<string> workItemIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
