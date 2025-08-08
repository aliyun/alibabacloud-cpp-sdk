// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODYWORKFLOWTEMPLATESWORKFLOWTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODYWORKFLOWTEMPLATESWORKFLOWTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(IsSystem, isSystem_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(WorkflowNodes, workflowNodes_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(IsSystem, isSystem_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(WorkflowNodes, workflowNodes_);
    };
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate() = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate(const ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate &) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate(ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate &&) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate() = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& operator=(const ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate &) = default ;
    ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& operator=(ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->createUserId_ != nullptr && this->enabled_ != nullptr && this->isSystem_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr
        && this->workflowNodes_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline int64_t createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // isSystem Field Functions 
    bool hasIsSystem() const { return this->isSystem_ != nullptr;};
    void deleteIsSystem() { this->isSystem_ = nullptr;};
    inline int32_t isSystem() const { DARABONBA_PTR_GET_DEFAULT(isSystem_, 0) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setIsSystem(int32_t isSystem) { DARABONBA_PTR_SET_VALUE(isSystem_, isSystem) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // workflowNodes Field Functions 
    bool hasWorkflowNodes() const { return this->workflowNodes_ != nullptr;};
    void deleteWorkflowNodes() { this->workflowNodes_ = nullptr;};
    inline const Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes & workflowNodes() const { DARABONBA_PTR_GET_CONST(workflowNodes_, Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes) };
    inline Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes workflowNodes() { DARABONBA_PTR_GET(workflowNodes_, Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setWorkflowNodes(const Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes & workflowNodes) { DARABONBA_PTR_SET_VALUE(workflowNodes_, workflowNodes) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate& setWorkflowNodes(Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes && workflowNodes) { DARABONBA_PTR_SET_RVALUE(workflowNodes_, workflowNodes) };


  protected:
    // The description of the approval template.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the creator.
    std::shared_ptr<int64_t> createUserId_ = nullptr;
    // Indicates whether the approval template is enabled. Valid values:
    // 
    // *   Y: The approval template is enabled.
    // *   N: The approval template is disabled.
    std::shared_ptr<string> enabled_ = nullptr;
    // Indicates whether the approval template is predefined by the system. Valid values:
    // 
    // *   1: The approval template is predefined by the system.
    // *   0: The approval template is not predefined by the system.
    std::shared_ptr<int32_t> isSystem_ = nullptr;
    // The ID of the approval template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The name of the approval template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The details of approval nodes.
    std::shared_ptr<Models::ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes> workflowNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
