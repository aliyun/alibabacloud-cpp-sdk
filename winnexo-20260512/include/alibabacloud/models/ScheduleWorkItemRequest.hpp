// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEWORKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEWORKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ScheduleWorkItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduleWorkItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduleWorkItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    ScheduleWorkItemRequest() = default ;
    ScheduleWorkItemRequest(const ScheduleWorkItemRequest &) = default ;
    ScheduleWorkItemRequest(ScheduleWorkItemRequest &&) = default ;
    ScheduleWorkItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduleWorkItemRequest() = default ;
    ScheduleWorkItemRequest& operator=(const ScheduleWorkItemRequest &) = default ;
    ScheduleWorkItemRequest& operator=(ScheduleWorkItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->idempotencyKey_ == nullptr && this->tenantId_ == nullptr && this->workItemId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ScheduleWorkItemRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline ScheduleWorkItemRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ScheduleWorkItemRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline ScheduleWorkItemRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
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
    // The ID of the work item.
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
