// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDITINGPROJECTRESPONSEBODYPROJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDITINGPROJECTRESPONSEBODYPROJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateEditingProjectResponseBodyProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEditingProjectResponseBodyProject& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ClipsParam, clipsParam_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ModifiedSource, modifiedSource_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEditingProjectResponseBodyProject& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ClipsParam, clipsParam_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ModifiedSource, modifiedSource_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateEditingProjectResponseBodyProject() = default ;
    CreateEditingProjectResponseBodyProject(const CreateEditingProjectResponseBodyProject &) = default ;
    CreateEditingProjectResponseBodyProject(CreateEditingProjectResponseBodyProject &&) = default ;
    CreateEditingProjectResponseBodyProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEditingProjectResponseBodyProject() = default ;
    CreateEditingProjectResponseBodyProject& operator=(const CreateEditingProjectResponseBodyProject &) = default ;
    CreateEditingProjectResponseBodyProject& operator=(CreateEditingProjectResponseBodyProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessConfig_ == nullptr
        && return this->businessStatus_ == nullptr && return this->clipsParam_ == nullptr && return this->coverURL_ == nullptr && return this->createSource_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->duration_ == nullptr && return this->modifiedSource_ == nullptr && return this->modifiedTime_ == nullptr && return this->projectId_ == nullptr
        && return this->projectType_ == nullptr && return this->status_ == nullptr && return this->statusName_ == nullptr && return this->templateId_ == nullptr && return this->templateType_ == nullptr
        && return this->timeline_ == nullptr && return this->title_ == nullptr; };
    // businessConfig Field Functions 
    bool hasBusinessConfig() const { return this->businessConfig_ != nullptr;};
    void deleteBusinessConfig() { this->businessConfig_ = nullptr;};
    inline string businessConfig() const { DARABONBA_PTR_GET_DEFAULT(businessConfig_, "") };
    inline CreateEditingProjectResponseBodyProject& setBusinessConfig(string businessConfig) { DARABONBA_PTR_SET_VALUE(businessConfig_, businessConfig) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline CreateEditingProjectResponseBodyProject& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // clipsParam Field Functions 
    bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
    void deleteClipsParam() { this->clipsParam_ = nullptr;};
    inline string clipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
    inline CreateEditingProjectResponseBodyProject& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline CreateEditingProjectResponseBodyProject& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string createSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline CreateEditingProjectResponseBodyProject& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateEditingProjectResponseBodyProject& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEditingProjectResponseBodyProject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline CreateEditingProjectResponseBodyProject& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // modifiedSource Field Functions 
    bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
    void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
    inline string modifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
    inline CreateEditingProjectResponseBodyProject& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline CreateEditingProjectResponseBodyProject& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateEditingProjectResponseBodyProject& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectType Field Functions 
    bool hasProjectType() const { return this->projectType_ != nullptr;};
    void deleteProjectType() { this->projectType_ = nullptr;};
    inline string projectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
    inline CreateEditingProjectResponseBodyProject& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline CreateEditingProjectResponseBodyProject& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline CreateEditingProjectResponseBodyProject& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateEditingProjectResponseBodyProject& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateEditingProjectResponseBodyProject& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string timeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline CreateEditingProjectResponseBodyProject& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateEditingProjectResponseBodyProject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The business configuration of the project. This parameter can be ignored for general editing projects.
    std::shared_ptr<string> businessConfig_ = nullptr;
    // The business status of the project. This parameter can be ignored for general editing projects. Valid values:
    // 
    // *   Reserving
    // *   ReservationCanceled
    // *   BroadCasting
    // *   LoadingFailed
    // *   LiveFinished
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The template material parameters.
    std::shared_ptr<string> clipsParam_ = nullptr;
    // The thumbnail URL of the online editing project.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The method for creating the online editing project. Valid values:
    // 
    // \\- OpenAPI
    // 
    // \\- AliyunConsole
    // 
    // \\- WebSDK
    // 
    // \\- LiveEditingOpenAPI
    // 
    // \\- LiveEditingConsole
    std::shared_ptr<string> createSource_ = nullptr;
    // The time when the online editing project was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the online editing project.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the online editing project.
    std::shared_ptr<float> duration_ = nullptr;
    // The method for editing the online editing project. Valid values:
    // 
    // \\- OpenAPI
    // 
    // \\- AliyunConsole
    // 
    // \\- WebSDK
    // 
    // \\- LiveEditingOpenAPI
    // 
    // \\- LiveEditingConsole
    std::shared_ptr<string> modifiedSource_ = nullptr;
    // The time when the online editing project was last edited.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The type of the editing project. Default value: EditingProject. Valid values:
    // 
    // \\- EditingProject: a regular editing project.
    // 
    // \\- LiveEditingProject: a live stream editing project.
    std::shared_ptr<string> projectType_ = nullptr;
    // The status of the online editing project.
    // 
    // Valid values:
    // 
    // \\- 1: Draft
    // 
    // \\- 2: Editing
    // 
    // \\- 3: Producing
    // 
    // \\- 4: Produced
    // 
    // \\- 5: ProduceFailed
    // 
    // \\- 7: Deleted
    std::shared_ptr<int64_t> status_ = nullptr;
    // The status of the online editing project. For more information, see the status list.
    std::shared_ptr<string> statusName_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template type of the online editing project. Valid values:
    // 
    // \\- Timeline
    // 
    // \\- VETemplate
    std::shared_ptr<string> templateType_ = nullptr;
    // The timeline of the online editing project, in the JSON format.<props="china">For more information about objects in a timeline, see [Timeline configurations](https://help.aliyun.com/document_detail/198823.htm?spm=a2c4g.11186623.2.9.90dc653dF67srN#topic-2024662).  If you leave this parameter empty, an empty timeline is created and the duration of the online editing project is zero.
    std::shared_ptr<string> timeline_ = nullptr;
    // The title of the online editing project.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
