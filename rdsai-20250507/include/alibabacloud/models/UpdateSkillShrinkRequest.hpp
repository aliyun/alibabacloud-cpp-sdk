// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Dbtypes, dbtypesShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(UpdateNote, updateNote_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(UploadToken, uploadToken_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Dbtypes, dbtypesShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(UpdateNote, updateNote_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(UploadToken, uploadToken_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateSkillShrinkRequest() = default ;
    UpdateSkillShrinkRequest(const UpdateSkillShrinkRequest &) = default ;
    UpdateSkillShrinkRequest(UpdateSkillShrinkRequest &&) = default ;
    UpdateSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillShrinkRequest() = default ;
    UpdateSkillShrinkRequest& operator=(const UpdateSkillShrinkRequest &) = default ;
    UpdateSkillShrinkRequest& operator=(UpdateSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentShrink_ == nullptr
        && this->dbtypesShrink_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->skillId_ == nullptr && this->updateNote_ == nullptr
        && this->uploadId_ == nullptr && this->uploadToken_ == nullptr && this->workspaceId_ == nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline UpdateSkillShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // dbtypesShrink Field Functions 
    bool hasDbtypesShrink() const { return this->dbtypesShrink_ != nullptr;};
    void deleteDbtypesShrink() { this->dbtypesShrink_ = nullptr;};
    inline string getDbtypesShrink() const { DARABONBA_PTR_GET_DEFAULT(dbtypesShrink_, "") };
    inline UpdateSkillShrinkRequest& setDbtypesShrink(string dbtypesShrink) { DARABONBA_PTR_SET_VALUE(dbtypesShrink_, dbtypesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSkillShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSkillShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline UpdateSkillShrinkRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // updateNote Field Functions 
    bool hasUpdateNote() const { return this->updateNote_ != nullptr;};
    void deleteUpdateNote() { this->updateNote_ = nullptr;};
    inline string getUpdateNote() const { DARABONBA_PTR_GET_DEFAULT(updateNote_, "") };
    inline UpdateSkillShrinkRequest& setUpdateNote(string updateNote) { DARABONBA_PTR_SET_VALUE(updateNote_, updateNote) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline UpdateSkillShrinkRequest& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // uploadToken Field Functions 
    bool hasUploadToken() const { return this->uploadToken_ != nullptr;};
    void deleteUploadToken() { this->uploadToken_ = nullptr;};
    inline string getUploadToken() const { DARABONBA_PTR_GET_DEFAULT(uploadToken_, "") };
    inline UpdateSkillShrinkRequest& setUploadToken(string uploadToken) { DARABONBA_PTR_SET_VALUE(uploadToken_, uploadToken) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateSkillShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The content.
    shared_ptr<string> contentShrink_ {};
    // The list of database types.
    shared_ptr<string> dbtypesShrink_ {};
    // The description of the Skill. The description can be up to 1000 characters in length.
    shared_ptr<string> description_ {};
    // The name of the Skill. The name can contain only lowercase letters, digits, and hyphens.
    shared_ptr<string> name_ {};
    // The unique identifier of the Skill.
    // 
    // This parameter is required.
    shared_ptr<string> skillId_ {};
    // The version update note for the ContextDB Skill. Specify this parameter when confirming storage after the check passes. The note can be up to 1000 characters in length.
    shared_ptr<string> updateNote_ {};
    // The upload session ID returned by GetUploadPolicy for ContextDB full package updates. This parameter is not required for original RDS field updates.
    shared_ptr<string> uploadId_ {};
    // The upload session token paired with UploadId, used to verify ownership. This parameter is not required for original RDS field updates.
    shared_ptr<string> uploadToken_ {};
    // The ContextDB workspace ID. This parameter is not required for regular Skill calls.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
