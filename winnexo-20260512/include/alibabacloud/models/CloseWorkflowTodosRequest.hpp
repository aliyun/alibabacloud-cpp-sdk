// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEWORKFLOWTODOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSEWORKFLOWTODOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CloseWorkflowTodosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseWorkflowTodosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(sourceWorkflowId, sourceWorkflowId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseWorkflowTodosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(sourceWorkflowId, sourceWorkflowId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CloseWorkflowTodosRequest() = default ;
    CloseWorkflowTodosRequest(const CloseWorkflowTodosRequest &) = default ;
    CloseWorkflowTodosRequest(CloseWorkflowTodosRequest &&) = default ;
    CloseWorkflowTodosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseWorkflowTodosRequest() = default ;
    CloseWorkflowTodosRequest& operator=(const CloseWorkflowTodosRequest &) = default ;
    CloseWorkflowTodosRequest& operator=(CloseWorkflowTodosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->sourceWorkflowId_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CloseWorkflowTodosRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // sourceWorkflowId Field Functions 
    bool hasSourceWorkflowId() const { return this->sourceWorkflowId_ != nullptr;};
    void deleteSourceWorkflowId() { this->sourceWorkflowId_ = nullptr;};
    inline string getSourceWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(sourceWorkflowId_, "") };
    inline CloseWorkflowTodosRequest& setSourceWorkflowId(string sourceWorkflowId) { DARABONBA_PTR_SET_VALUE(sourceWorkflowId_, sourceWorkflowId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CloseWorkflowTodosRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the collaborative workspace. The match scope is limited to this workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The workflow ID at the run level.
    // 
    // This parameter is required.
    shared_ptr<string> sourceWorkflowId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
