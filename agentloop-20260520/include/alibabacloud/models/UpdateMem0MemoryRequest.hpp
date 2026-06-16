// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEM0MEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEM0MEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateMem0MemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMem0MemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_ANY_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(context_store_id, contextStoreId_);
      DARABONBA_PTR_TO_JSON(org_id, orgId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMem0MemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_ANY_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(context_store_id, contextStoreId_);
      DARABONBA_PTR_FROM_JSON(org_id, orgId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
    };
    UpdateMem0MemoryRequest() = default ;
    UpdateMem0MemoryRequest(const UpdateMem0MemoryRequest &) = default ;
    UpdateMem0MemoryRequest(UpdateMem0MemoryRequest &&) = default ;
    UpdateMem0MemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMem0MemoryRequest() = default ;
    UpdateMem0MemoryRequest& operator=(const UpdateMem0MemoryRequest &) = default ;
    UpdateMem0MemoryRequest& operator=(UpdateMem0MemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->body_ == nullptr && this->contextStoreId_ == nullptr && this->orgId_ == nullptr && this->projectId_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline UpdateMem0MemoryRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & getBody() const { DARABONBA_GET(body_) };
    Darabonba::Json & getBody() { DARABONBA_GET(body_) };
    inline UpdateMem0MemoryRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline UpdateMem0MemoryRequest& setBody(Darabonba::Json && body) { DARABONBA_SET_RVALUE(body_, body) };


    // contextStoreId Field Functions 
    bool hasContextStoreId() const { return this->contextStoreId_ != nullptr;};
    void deleteContextStoreId() { this->contextStoreId_ = nullptr;};
    inline string getContextStoreId() const { DARABONBA_PTR_GET_DEFAULT(contextStoreId_, "") };
    inline UpdateMem0MemoryRequest& setContextStoreId(string contextStoreId) { DARABONBA_PTR_SET_VALUE(contextStoreId_, contextStoreId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline UpdateMem0MemoryRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateMem0MemoryRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> agentSpace_ {};
    Darabonba::Json body_ {};
    shared_ptr<string> contextStoreId_ {};
    shared_ptr<string> orgId_ {};
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
