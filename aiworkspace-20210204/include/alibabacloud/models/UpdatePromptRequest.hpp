// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdatePromptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePromptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_TO_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePromptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FrameworkContent, frameworkContent_);
      DARABONBA_PTR_FROM_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdatePromptRequest() = default ;
    UpdatePromptRequest(const UpdatePromptRequest &) = default ;
    UpdatePromptRequest(UpdatePromptRequest &&) = default ;
    UpdatePromptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePromptRequest() = default ;
    UpdatePromptRequest& operator=(const UpdatePromptRequest &) = default ;
    UpdatePromptRequest& operator=(UpdatePromptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->frameworkContent_ == nullptr && this->frameworkType_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePromptRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frameworkContent Field Functions 
    bool hasFrameworkContent() const { return this->frameworkContent_ != nullptr;};
    void deleteFrameworkContent() { this->frameworkContent_ = nullptr;};
    inline string getFrameworkContent() const { DARABONBA_PTR_GET_DEFAULT(frameworkContent_, "") };
    inline UpdatePromptRequest& setFrameworkContent(string frameworkContent) { DARABONBA_PTR_SET_VALUE(frameworkContent_, frameworkContent) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string getFrameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline UpdatePromptRequest& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdatePromptRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The description of the prompt.
    shared_ptr<string> description_ {};
    // The prompt content.
    shared_ptr<string> frameworkContent_ {};
    // The framework type of the prompt template.
    shared_ptr<string> frameworkType_ {};
    // The workspace ID. You can obtain the ID by calling the [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
