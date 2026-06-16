// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEM0MEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEM0MEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteMem0MemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMem0MemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(context_store_id, contextStoreId_);
      DARABONBA_PTR_TO_JSON(org_id, orgId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMem0MemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(context_store_id, contextStoreId_);
      DARABONBA_PTR_FROM_JSON(org_id, orgId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
    };
    DeleteMem0MemoryRequest() = default ;
    DeleteMem0MemoryRequest(const DeleteMem0MemoryRequest &) = default ;
    DeleteMem0MemoryRequest(DeleteMem0MemoryRequest &&) = default ;
    DeleteMem0MemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMem0MemoryRequest() = default ;
    DeleteMem0MemoryRequest& operator=(const DeleteMem0MemoryRequest &) = default ;
    DeleteMem0MemoryRequest& operator=(DeleteMem0MemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->contextStoreId_ == nullptr && this->orgId_ == nullptr && this->projectId_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline DeleteMem0MemoryRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // contextStoreId Field Functions 
    bool hasContextStoreId() const { return this->contextStoreId_ != nullptr;};
    void deleteContextStoreId() { this->contextStoreId_ = nullptr;};
    inline string getContextStoreId() const { DARABONBA_PTR_GET_DEFAULT(contextStoreId_, "") };
    inline DeleteMem0MemoryRequest& setContextStoreId(string contextStoreId) { DARABONBA_PTR_SET_VALUE(contextStoreId_, contextStoreId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DeleteMem0MemoryRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DeleteMem0MemoryRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> agentSpace_ {};
    shared_ptr<string> contextStoreId_ {};
    shared_ptr<string> orgId_ {};
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
