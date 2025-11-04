// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDITINGPROJECTSRESPONSEBODYPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDITINGPROJECTSRESPONSEBODYPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListEditingProjectsResponseBodyProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEditingProjectsResponseBodyProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ModifiedSource, modifiedSource_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListEditingProjectsResponseBodyProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ModifiedSource, modifiedSource_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListEditingProjectsResponseBodyProjectList() = default ;
    ListEditingProjectsResponseBodyProjectList(const ListEditingProjectsResponseBodyProjectList &) = default ;
    ListEditingProjectsResponseBodyProjectList(ListEditingProjectsResponseBodyProjectList &&) = default ;
    ListEditingProjectsResponseBodyProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEditingProjectsResponseBodyProjectList() = default ;
    ListEditingProjectsResponseBodyProjectList& operator=(const ListEditingProjectsResponseBodyProjectList &) = default ;
    ListEditingProjectsResponseBodyProjectList& operator=(ListEditingProjectsResponseBodyProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessConfig_ == nullptr
        && return this->businessStatus_ == nullptr && return this->coverURL_ == nullptr && return this->createSource_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->modifiedSource_ == nullptr && return this->modifiedTime_ == nullptr && return this->projectId_ == nullptr
        && return this->projectType_ == nullptr && return this->status_ == nullptr && return this->templateType_ == nullptr && return this->title_ == nullptr; };
    // businessConfig Field Functions 
    bool hasBusinessConfig() const { return this->businessConfig_ != nullptr;};
    void deleteBusinessConfig() { this->businessConfig_ = nullptr;};
    inline string businessConfig() const { DARABONBA_PTR_GET_DEFAULT(businessConfig_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setBusinessConfig(string businessConfig) { DARABONBA_PTR_SET_VALUE(businessConfig_, businessConfig) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string createSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // modifiedSource Field Functions 
    bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
    void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
    inline string modifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectType Field Functions 
    bool hasProjectType() const { return this->projectType_ != nullptr;};
    void deleteProjectType() { this->projectType_ = nullptr;};
    inline string projectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListEditingProjectsResponseBodyProjectList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The business configuration of the project. This parameter can be ignored for general editing projects.
    std::shared_ptr<string> businessConfig_ = nullptr;
    // The business status of the project. This parameter can be ignored for general editing projects.
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The thumbnail URL of the online editing project.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The method for editing the online editing project. Valid values:
    // 
    // \\- OpenAPI
    // 
    // \\- AliyunConsole
    // 
    // \\- WebSDK
    std::shared_ptr<string> createSource_ = nullptr;
    // The time when the online editing project was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the online editing project.
    std::shared_ptr<string> description_ = nullptr;
    // The error code returned if the production of the online editing project failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the production of the online editing project failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The method for modifying the online editing project last time.
    std::shared_ptr<string> modifiedSource_ = nullptr;
    // The time when the online editing project was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The type of the editing project. Valid values:
    // 
    // *   EditingProject: a regular editing project.
    // *   LiveEditingProject: a live stream editing project.
    std::shared_ptr<string> projectType_ = nullptr;
    // The status of the online editing project. Valid values:
    // 
    // \\- Draft
    // 
    // \\- Editing
    // 
    // \\- Producing
    // 
    // \\- Produced
    // 
    // \\- ProduceFailed
    std::shared_ptr<string> status_ = nullptr;
    // The template type. Valid values:
    // 
    // *   Timeline: a regular template.
    // *   VETemplate: an advanced template.
    std::shared_ptr<string> templateType_ = nullptr;
    // The title of the online editing project.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
