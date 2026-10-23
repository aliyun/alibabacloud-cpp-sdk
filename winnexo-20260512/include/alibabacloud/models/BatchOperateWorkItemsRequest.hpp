// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHOPERATEWORKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHOPERATEWORKITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class BatchOperateWorkItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchOperateWorkItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemIds, workItemIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchOperateWorkItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemIds, workItemIds_);
    };
    BatchOperateWorkItemsRequest() = default ;
    BatchOperateWorkItemsRequest(const BatchOperateWorkItemsRequest &) = default ;
    BatchOperateWorkItemsRequest(BatchOperateWorkItemsRequest &&) = default ;
    BatchOperateWorkItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchOperateWorkItemsRequest() = default ;
    BatchOperateWorkItemsRequest& operator=(const BatchOperateWorkItemsRequest &) = default ;
    BatchOperateWorkItemsRequest& operator=(BatchOperateWorkItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->idempotencyKey_ == nullptr && this->tenantId_ == nullptr && this->workItemIds_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline BatchOperateWorkItemsRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline BatchOperateWorkItemsRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline BatchOperateWorkItemsRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline BatchOperateWorkItemsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemIds Field Functions 
    bool hasWorkItemIds() const { return this->workItemIds_ != nullptr;};
    void deleteWorkItemIds() { this->workItemIds_ = nullptr;};
    inline const vector<string> & getWorkItemIds() const { DARABONBA_PTR_GET_CONST(workItemIds_, vector<string>) };
    inline vector<string> getWorkItemIds() { DARABONBA_PTR_GET(workItemIds_, vector<string>) };
    inline BatchOperateWorkItemsRequest& setWorkItemIds(const vector<string> & workItemIds) { DARABONBA_PTR_SET_VALUE(workItemIds_, workItemIds) };
    inline BatchOperateWorkItemsRequest& setWorkItemIds(vector<string> && workItemIds) { DARABONBA_PTR_SET_RVALUE(workItemIds_, workItemIds) };


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
    shared_ptr<vector<string>> workItemIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
