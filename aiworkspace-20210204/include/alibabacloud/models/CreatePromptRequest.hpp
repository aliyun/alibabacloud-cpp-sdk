// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreatePromptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePromptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_TO_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_TO_JSON(PromptName, promptName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePromptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_FROM_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_FROM_JSON(PromptName, promptName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreatePromptRequest() = default ;
    CreatePromptRequest(const CreatePromptRequest &) = default ;
    CreatePromptRequest(CreatePromptRequest &&) = default ;
    CreatePromptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePromptRequest() = default ;
    CreatePromptRequest& operator=(const CreatePromptRequest &) = default ;
    CreatePromptRequest& operator=(CreatePromptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->description_ == nullptr && this->frameworkContent_ == nullptr && this->frameworkType_ == nullptr && this->promptName_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreatePromptRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePromptRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frameworkContent Field Functions 
    bool hasFrameworkContent() const { return this->frameworkContent_ != nullptr;};
    void deleteFrameworkContent() { this->frameworkContent_ = nullptr;};
    inline string getFrameworkContent() const { DARABONBA_PTR_GET_DEFAULT(frameworkContent_, "") };
    inline CreatePromptRequest& setFrameworkContent(string frameworkContent) { DARABONBA_PTR_SET_VALUE(frameworkContent_, frameworkContent) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string getFrameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline CreatePromptRequest& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // promptName Field Functions 
    bool hasPromptName() const { return this->promptName_ != nullptr;};
    void deletePromptName() { this->promptName_ = nullptr;};
    inline string getPromptName() const { DARABONBA_PTR_GET_DEFAULT(promptName_, "") };
    inline CreatePromptRequest& setPromptName(string promptName) { DARABONBA_PTR_SET_VALUE(promptName_, promptName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreatePromptRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The workspace visibility. Valid values:
    // - PRIVATE (default): Visible only to you and administrators in this workspace.
    // - PUBLIC: Visible to everyone in this workspace.
    shared_ptr<string> accessibility_ {};
    // The prompt description.
    shared_ptr<string> description_ {};
    // The prompt framework content.
    shared_ptr<string> frameworkContent_ {};
    // The prompt optimization template.
    shared_ptr<string> frameworkType_ {};
    // The prompt name.
    // 
    // This parameter is required.
    shared_ptr<string> promptName_ {};
    // The workspace ID. You can obtain the ID by calling the [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
