// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Dbtypes, dbtypesShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(UploadToken, uploadToken_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Dbtypes, dbtypesShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(UploadToken, uploadToken_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateSkillShrinkRequest() = default ;
    CreateSkillShrinkRequest(const CreateSkillShrinkRequest &) = default ;
    CreateSkillShrinkRequest(CreateSkillShrinkRequest &&) = default ;
    CreateSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillShrinkRequest() = default ;
    CreateSkillShrinkRequest& operator=(const CreateSkillShrinkRequest &) = default ;
    CreateSkillShrinkRequest& operator=(CreateSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentShrink_ == nullptr
        && this->dbtypesShrink_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->uploadId_ == nullptr && this->uploadToken_ == nullptr
        && this->workspaceId_ == nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline CreateSkillShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // dbtypesShrink Field Functions 
    bool hasDbtypesShrink() const { return this->dbtypesShrink_ != nullptr;};
    void deleteDbtypesShrink() { this->dbtypesShrink_ = nullptr;};
    inline string getDbtypesShrink() const { DARABONBA_PTR_GET_DEFAULT(dbtypesShrink_, "") };
    inline CreateSkillShrinkRequest& setDbtypesShrink(string dbtypesShrink) { DARABONBA_PTR_SET_VALUE(dbtypesShrink_, dbtypesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSkillShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSkillShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline CreateSkillShrinkRequest& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // uploadToken Field Functions 
    bool hasUploadToken() const { return this->uploadToken_ != nullptr;};
    void deleteUploadToken() { this->uploadToken_ = nullptr;};
    inline string getUploadToken() const { DARABONBA_PTR_GET_DEFAULT(uploadToken_, "") };
    inline CreateSkillShrinkRequest& setUploadToken(string uploadToken) { DARABONBA_PTR_SET_VALUE(uploadToken_, uploadToken) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateSkillShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The content.
    shared_ptr<string> contentShrink_ {};
    // The list of database types.
    shared_ptr<string> dbtypesShrink_ {};
    // The Skill description. The description can be up to 1000 characters in length.
    shared_ptr<string> description_ {};
    // The Skill name. The name can contain only lowercase letters, digits, and hyphens.
    shared_ptr<string> name_ {};
    // The Skill upload session ID.
    shared_ptr<string> uploadId_ {};
    // The Skill upload session token.
    shared_ptr<string> uploadToken_ {};
    // The ContextDB workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
