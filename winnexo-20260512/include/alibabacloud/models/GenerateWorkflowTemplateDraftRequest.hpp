// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWORKFLOWTEMPLATEDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWORKFLOWTEMPLATEDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GenerateWorkflowTemplateDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWorkflowTemplateDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_ANY_TO_JSON(previousDraft, previousDraft_);
      DARABONBA_PTR_TO_JSON(requirement, requirement_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWorkflowTemplateDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_ANY_FROM_JSON(previousDraft, previousDraft_);
      DARABONBA_PTR_FROM_JSON(requirement, requirement_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GenerateWorkflowTemplateDraftRequest() = default ;
    GenerateWorkflowTemplateDraftRequest(const GenerateWorkflowTemplateDraftRequest &) = default ;
    GenerateWorkflowTemplateDraftRequest(GenerateWorkflowTemplateDraftRequest &&) = default ;
    GenerateWorkflowTemplateDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWorkflowTemplateDraftRequest() = default ;
    GenerateWorkflowTemplateDraftRequest& operator=(const GenerateWorkflowTemplateDraftRequest &) = default ;
    GenerateWorkflowTemplateDraftRequest& operator=(GenerateWorkflowTemplateDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->previousDraft_ == nullptr && this->requirement_ == nullptr
        && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline GenerateWorkflowTemplateDraftRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GenerateWorkflowTemplateDraftRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline GenerateWorkflowTemplateDraftRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline GenerateWorkflowTemplateDraftRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // previousDraft Field Functions 
    bool hasPreviousDraft() const { return this->previousDraft_ != nullptr;};
    void deletePreviousDraft() { this->previousDraft_ = nullptr;};
    inline     const Darabonba::Json & getPreviousDraft() const { DARABONBA_GET(previousDraft_) };
    Darabonba::Json & getPreviousDraft() { DARABONBA_GET(previousDraft_) };
    inline GenerateWorkflowTemplateDraftRequest& setPreviousDraft(const Darabonba::Json & previousDraft) { DARABONBA_SET_VALUE(previousDraft_, previousDraft) };
    inline GenerateWorkflowTemplateDraftRequest& setPreviousDraft(Darabonba::Json && previousDraft) { DARABONBA_SET_RVALUE(previousDraft_, previousDraft) };


    // requirement Field Functions 
    bool hasRequirement() const { return this->requirement_ != nullptr;};
    void deleteRequirement() { this->requirement_ = nullptr;};
    inline string getRequirement() const { DARABONBA_PTR_GET_DEFAULT(requirement_, "") };
    inline GenerateWorkflowTemplateDraftRequest& setRequirement(string requirement) { DARABONBA_PTR_SET_VALUE(requirement_, requirement) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GenerateWorkflowTemplateDraftRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The ID of the collaboration space.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The draft from the previous round. If this parameter is provided, the new draft is generated by iteratively modifying the previous draft.
    Darabonba::Json previousDraft_ {};
    // The description of the template requirement.
    // 
    // This parameter is required.
    shared_ptr<string> requirement_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
