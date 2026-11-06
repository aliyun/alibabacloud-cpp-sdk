// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWNODECONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWNODECONFIGURATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateWorkflowNodeConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowNodeConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(executor, executorShrink_);
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(responsibleUserIds, responsibleUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowNodeConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(executor, executorShrink_);
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(responsibleUserIds, responsibleUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateWorkflowNodeConfigurationShrinkRequest() = default ;
    UpdateWorkflowNodeConfigurationShrinkRequest(const UpdateWorkflowNodeConfigurationShrinkRequest &) = default ;
    UpdateWorkflowNodeConfigurationShrinkRequest(UpdateWorkflowNodeConfigurationShrinkRequest &&) = default ;
    UpdateWorkflowNodeConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowNodeConfigurationShrinkRequest() = default ;
    UpdateWorkflowNodeConfigurationShrinkRequest& operator=(const UpdateWorkflowNodeConfigurationShrinkRequest &) = default ;
    UpdateWorkflowNodeConfigurationShrinkRequest& operator=(UpdateWorkflowNodeConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->executorShrink_ == nullptr && this->expectedVersion_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr && this->nodeId_ == nullptr
        && this->responsibleUserIdsShrink_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // executorShrink Field Functions 
    bool hasExecutorShrink() const { return this->executorShrink_ != nullptr;};
    void deleteExecutorShrink() { this->executorShrink_ = nullptr;};
    inline string getExecutorShrink() const { DARABONBA_PTR_GET_DEFAULT(executorShrink_, "") };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setExecutorShrink(string executorShrink) { DARABONBA_PTR_SET_VALUE(executorShrink_, executorShrink) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // responsibleUserIdsShrink Field Functions 
    bool hasResponsibleUserIdsShrink() const { return this->responsibleUserIdsShrink_ != nullptr;};
    void deleteResponsibleUserIdsShrink() { this->responsibleUserIdsShrink_ = nullptr;};
    inline string getResponsibleUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(responsibleUserIdsShrink_, "") };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setResponsibleUserIdsShrink(string responsibleUserIdsShrink) { DARABONBA_PTR_SET_VALUE(responsibleUserIdsShrink_, responsibleUserIdsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateWorkflowNodeConfigurationShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 协作空间ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 节点执行人；省略保持，null恢复默认；与负责人、模型至少修改一项
    shared_ptr<string> executorShrink_ {};
    // 读取接口返回的configVersion；非负整数；版本冲突须刷新
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
    // 当前物理计划ID（planId）
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 模型模式；quick归一化standard；省略保持，null恢复默认
    shared_ptr<string> model_ {};
    // 业务节点key（nodeKey）
    // 
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    // 节点负责人用户ID列表，非空正整数数组；省略保持，null恢复默认
    shared_ptr<string> responsibleUserIdsShrink_ {};
    // 租户ID；缺省使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
