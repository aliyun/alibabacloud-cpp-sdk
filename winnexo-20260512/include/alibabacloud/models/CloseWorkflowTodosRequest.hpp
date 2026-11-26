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
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(sourceWorkflowId, sourceWorkflowId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseWorkflowTodosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
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
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->sourceWorkflowId_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline CloseWorkflowTodosRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CloseWorkflowTodosRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline CloseWorkflowTodosRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline CloseWorkflowTodosRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


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
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The ID of the collaborative workspace. The match scope is limited to this workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
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
