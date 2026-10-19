// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWORKFLOWTEMPLATEDRAFTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWORKFLOWTEMPLATEDRAFTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GenerateWorkflowTemplateDraftShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWorkflowTemplateDraftShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(previousDraft, previousDraftShrink_);
      DARABONBA_PTR_TO_JSON(requirement, requirement_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWorkflowTemplateDraftShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(previousDraft, previousDraftShrink_);
      DARABONBA_PTR_FROM_JSON(requirement, requirement_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GenerateWorkflowTemplateDraftShrinkRequest() = default ;
    GenerateWorkflowTemplateDraftShrinkRequest(const GenerateWorkflowTemplateDraftShrinkRequest &) = default ;
    GenerateWorkflowTemplateDraftShrinkRequest(GenerateWorkflowTemplateDraftShrinkRequest &&) = default ;
    GenerateWorkflowTemplateDraftShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWorkflowTemplateDraftShrinkRequest() = default ;
    GenerateWorkflowTemplateDraftShrinkRequest& operator=(const GenerateWorkflowTemplateDraftShrinkRequest &) = default ;
    GenerateWorkflowTemplateDraftShrinkRequest& operator=(GenerateWorkflowTemplateDraftShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->previousDraftShrink_ == nullptr && this->requirement_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GenerateWorkflowTemplateDraftShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // previousDraftShrink Field Functions 
    bool hasPreviousDraftShrink() const { return this->previousDraftShrink_ != nullptr;};
    void deletePreviousDraftShrink() { this->previousDraftShrink_ = nullptr;};
    inline string getPreviousDraftShrink() const { DARABONBA_PTR_GET_DEFAULT(previousDraftShrink_, "") };
    inline GenerateWorkflowTemplateDraftShrinkRequest& setPreviousDraftShrink(string previousDraftShrink) { DARABONBA_PTR_SET_VALUE(previousDraftShrink_, previousDraftShrink) };


    // requirement Field Functions 
    bool hasRequirement() const { return this->requirement_ != nullptr;};
    void deleteRequirement() { this->requirement_ = nullptr;};
    inline string getRequirement() const { DARABONBA_PTR_GET_DEFAULT(requirement_, "") };
    inline GenerateWorkflowTemplateDraftShrinkRequest& setRequirement(string requirement) { DARABONBA_PTR_SET_VALUE(requirement_, requirement) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GenerateWorkflowTemplateDraftShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 上一轮草稿；提供时基于它迭代修改
    shared_ptr<string> previousDraftShrink_ {};
    // 模板需求描述
    // 
    // This parameter is required.
    shared_ptr<string> requirement_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
