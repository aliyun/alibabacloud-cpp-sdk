// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSKILLMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSKILLMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentSkillMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentSkillMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(UploadLocation, uploadLocation_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentSkillMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(UploadLocation, uploadLocation_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataAgentSkillMetaRequest() = default ;
    CreateDataAgentSkillMetaRequest(const CreateDataAgentSkillMetaRequest &) = default ;
    CreateDataAgentSkillMetaRequest(CreateDataAgentSkillMetaRequest &&) = default ;
    CreateDataAgentSkillMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentSkillMetaRequest() = default ;
    CreateDataAgentSkillMetaRequest& operator=(const CreateDataAgentSkillMetaRequest &) = default ;
    CreateDataAgentSkillMetaRequest& operator=(CreateDataAgentSkillMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->skillName_ == nullptr && this->uploadLocation_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataAgentSkillMetaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline CreateDataAgentSkillMetaRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // uploadLocation Field Functions 
    bool hasUploadLocation() const { return this->uploadLocation_ != nullptr;};
    void deleteUploadLocation() { this->uploadLocation_ = nullptr;};
    inline string getUploadLocation() const { DARABONBA_PTR_GET_DEFAULT(uploadLocation_, "") };
    inline CreateDataAgentSkillMetaRequest& setUploadLocation(string uploadLocation) { DARABONBA_PTR_SET_VALUE(uploadLocation_, uploadLocation) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentSkillMetaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The skill description.
    // - By default, this parameter is optional. The backend parses the ZIP package specified by UploadLocation to obtain the skill description.
    shared_ptr<string> description_ {};
    // The skill name.
    // - By default, this parameter is optional. The backend parses the ZIP package specified by UploadLocation to obtain the skill name.
    shared_ptr<string> skillName_ {};
    // The full path for uploading the skill ZIP file.
    // - Format: The UploadDir field returned by the DescribeSkillFileUploadSignature operation concatenated with the file name.
    // - Example: ${UploadDir}/${Filename}
    shared_ptr<string> uploadLocation_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
