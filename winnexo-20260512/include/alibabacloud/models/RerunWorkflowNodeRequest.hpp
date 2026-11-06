// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNWORKFLOWNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RERUNWORKFLOWNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RerunWorkflowNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerunWorkflowNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(nodeKey, nodeKey_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RerunWorkflowNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(nodeKey, nodeKey_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RerunWorkflowNodeRequest() = default ;
    RerunWorkflowNodeRequest(const RerunWorkflowNodeRequest &) = default ;
    RerunWorkflowNodeRequest(RerunWorkflowNodeRequest &&) = default ;
    RerunWorkflowNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerunWorkflowNodeRequest() = default ;
    RerunWorkflowNodeRequest& operator=(const RerunWorkflowNodeRequest &) = default ;
    RerunWorkflowNodeRequest& operator=(RerunWorkflowNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->nodeKey_ == nullptr && this->planId_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline RerunWorkflowNodeRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // nodeKey Field Functions 
    bool hasNodeKey() const { return this->nodeKey_ != nullptr;};
    void deleteNodeKey() { this->nodeKey_ = nullptr;};
    inline string getNodeKey() const { DARABONBA_PTR_GET_DEFAULT(nodeKey_, "") };
    inline RerunWorkflowNodeRequest& setNodeKey(string nodeKey) { DARABONBA_PTR_SET_VALUE(nodeKey_, nodeKey) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline RerunWorkflowNodeRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RerunWorkflowNodeRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 协作空间ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 重跑起始节点 key，包含固定规划节点和业务执行节点
    // 
    // This parameter is required.
    shared_ptr<string> nodeKey_ {};
    // 工作项当前物理计划ID
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
    // 租户ID，缺省使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
