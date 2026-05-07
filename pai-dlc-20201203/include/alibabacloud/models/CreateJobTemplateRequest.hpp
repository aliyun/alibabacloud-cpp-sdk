// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobTemplateRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobTemplateRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateJobTemplateRequest() = default ;
    CreateJobTemplateRequest(const CreateJobTemplateRequest &) = default ;
    CreateJobTemplateRequest(CreateJobTemplateRequest &&) = default ;
    CreateJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobTemplateRequest() = default ;
    CreateJobTemplateRequest& operator=(const CreateJobTemplateRequest &) = default ;
    CreateJobTemplateRequest& operator=(CreateJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constraints_ == nullptr
        && this->content_ == nullptr && this->description_ == nullptr && this->metadata_ == nullptr && this->templateName_ == nullptr && this->workspaceId_ == nullptr; };
    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline     const Darabonba::Json & getConstraints() const { DARABONBA_GET(constraints_) };
    Darabonba::Json & getConstraints() { DARABONBA_GET(constraints_) };
    inline CreateJobTemplateRequest& setConstraints(const Darabonba::Json & constraints) { DARABONBA_SET_VALUE(constraints_, constraints) };
    inline CreateJobTemplateRequest& setConstraints(Darabonba::Json && constraints) { DARABONBA_SET_RVALUE(constraints_, constraints) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateJobTemplateRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateJobTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateJobTemplateRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateJobTemplateRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateJobTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateJobTemplateRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // 字段约束规则。Key 为 JSONPath 表达式，Value 为约束类型：locked（锁定不可覆盖）、overridable（可覆盖）、required（必填）。
    Darabonba::Json constraints_ {};
    // 任务模板的配置内容，包含作业配置参数，以 JSON 格式传入。
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<string> description_ {};
    // 用户自定义的键值对元数据，用于存储模板的附加信息。
    Darabonba::Json metadata_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // 工作空间 ID。如何获取工作空间 ID，请参见 ListWorkspaces。
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
