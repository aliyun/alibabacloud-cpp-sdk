// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWNODECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWNODECONFIGURATIONREQUEST_HPP_
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
  class UpdateWorkflowNodeConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowNodeConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(executor, executor_);
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(responsibleUserIds, responsibleUserIds_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowNodeConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(executor, executor_);
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(responsibleUserIds, responsibleUserIds_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateWorkflowNodeConfigurationRequest() = default ;
    UpdateWorkflowNodeConfigurationRequest(const UpdateWorkflowNodeConfigurationRequest &) = default ;
    UpdateWorkflowNodeConfigurationRequest(UpdateWorkflowNodeConfigurationRequest &&) = default ;
    UpdateWorkflowNodeConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowNodeConfigurationRequest() = default ;
    UpdateWorkflowNodeConfigurationRequest& operator=(const UpdateWorkflowNodeConfigurationRequest &) = default ;
    UpdateWorkflowNodeConfigurationRequest& operator=(UpdateWorkflowNodeConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Executor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executor& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Executor& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Executor() = default ;
      Executor(const Executor &) = default ;
      Executor(Executor &&) = default ;
      Executor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executor() = default ;
      Executor& operator=(const Executor &) = default ;
      Executor& operator=(Executor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Executor& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Executor& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The executor ID. If the type is USER, the value is a string representing a positive integer platform user ID. If the type is AGENT, the value is the technical name of the digital worker in the workspace.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The executor type. Valid values: USER (a human user) and AGENT (a digital worker).
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->executor_ == nullptr && this->expectedVersion_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr
        && this->nodeId_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->responsibleUserIds_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline const UpdateWorkflowNodeConfigurationRequest::Executor & getExecutor() const { DARABONBA_PTR_GET_CONST(executor_, UpdateWorkflowNodeConfigurationRequest::Executor) };
    inline UpdateWorkflowNodeConfigurationRequest::Executor getExecutor() { DARABONBA_PTR_GET(executor_, UpdateWorkflowNodeConfigurationRequest::Executor) };
    inline UpdateWorkflowNodeConfigurationRequest& setExecutor(const UpdateWorkflowNodeConfigurationRequest::Executor & executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };
    inline UpdateWorkflowNodeConfigurationRequest& setExecutor(UpdateWorkflowNodeConfigurationRequest::Executor && executor) { DARABONBA_PTR_SET_RVALUE(executor_, executor) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline UpdateWorkflowNodeConfigurationRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // responsibleUserIds Field Functions 
    bool hasResponsibleUserIds() const { return this->responsibleUserIds_ != nullptr;};
    void deleteResponsibleUserIds() { this->responsibleUserIds_ = nullptr;};
    inline const vector<int64_t> & getResponsibleUserIds() const { DARABONBA_PTR_GET_CONST(responsibleUserIds_, vector<int64_t>) };
    inline vector<int64_t> getResponsibleUserIds() { DARABONBA_PTR_GET(responsibleUserIds_, vector<int64_t>) };
    inline UpdateWorkflowNodeConfigurationRequest& setResponsibleUserIds(const vector<int64_t> & responsibleUserIds) { DARABONBA_PTR_SET_VALUE(responsibleUserIds_, responsibleUserIds) };
    inline UpdateWorkflowNodeConfigurationRequest& setResponsibleUserIds(vector<int64_t> && responsibleUserIds) { DARABONBA_PTR_SET_RVALUE(responsibleUserIds_, responsibleUserIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateWorkflowNodeConfigurationRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The ID of the collaboration workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The executor of the node. If this parameter is omitted, the current value is retained. If this parameter is set to null, the default value is restored. You must modify at least one of the owner, model, or executor.
    shared_ptr<UpdateWorkflowNodeConfigurationRequest::Executor> executor_ {};
    // The configuration version returned by the read operation. The value must be a non-negative integer. If a version conflict occurs, you must refresh the version.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
    // The ID of the current physical plan.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The model mode. The quick value is normalized to standard. If this parameter is omitted, the current value is retained. If this parameter is set to null, the default value is restored.
    shared_ptr<string> model_ {};
    // The key of the business node.
    // 
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The list of user IDs for the node owners. The value must be a non-empty array of positive integers. If this parameter is omitted, the current value is retained. If this parameter is set to null, the default value is restored.
    shared_ptr<vector<int64_t>> responsibleUserIds_ {};
    // The tenant ID. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
