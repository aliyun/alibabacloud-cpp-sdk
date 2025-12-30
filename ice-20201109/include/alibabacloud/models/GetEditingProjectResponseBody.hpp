// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEditingProjectResponseBody() = default ;
    GetEditingProjectResponseBody(const GetEditingProjectResponseBody &) = default ;
    GetEditingProjectResponseBody(GetEditingProjectResponseBody &&) = default ;
    GetEditingProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectResponseBody() = default ;
    GetEditingProjectResponseBody& operator=(const GetEditingProjectResponseBody &) = default ;
    GetEditingProjectResponseBody& operator=(GetEditingProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Project : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Project& obj) { 
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
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(Timeline, timeline_);
        DARABONBA_PTR_TO_JSON(TimelineConvertErrorMessage, timelineConvertErrorMessage_);
        DARABONBA_PTR_TO_JSON(TimelineConvertStatus, timelineConvertStatus_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Project& obj) { 
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
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
        DARABONBA_PTR_FROM_JSON(TimelineConvertErrorMessage, timelineConvertErrorMessage_);
        DARABONBA_PTR_FROM_JSON(TimelineConvertStatus, timelineConvertStatus_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Project() = default ;
      Project(const Project &) = default ;
      Project(Project &&) = default ;
      Project(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Project() = default ;
      Project& operator=(const Project &) = default ;
      Project& operator=(Project &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessConfig_ == nullptr
        && this->businessStatus_ == nullptr && this->clipsParam_ == nullptr && this->coverURL_ == nullptr && this->createSource_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr && this->duration_ == nullptr && this->modifiedSource_ == nullptr && this->modifiedTime_ == nullptr && this->projectId_ == nullptr
        && this->projectType_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr && this->timeline_ == nullptr
        && this->timelineConvertErrorMessage_ == nullptr && this->timelineConvertStatus_ == nullptr && this->title_ == nullptr; };
      // businessConfig Field Functions 
      bool hasBusinessConfig() const { return this->businessConfig_ != nullptr;};
      void deleteBusinessConfig() { this->businessConfig_ = nullptr;};
      inline string getBusinessConfig() const { DARABONBA_PTR_GET_DEFAULT(businessConfig_, "") };
      inline Project& setBusinessConfig(string businessConfig) { DARABONBA_PTR_SET_VALUE(businessConfig_, businessConfig) };


      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline Project& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // clipsParam Field Functions 
      bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
      void deleteClipsParam() { this->clipsParam_ = nullptr;};
      inline string getClipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
      inline Project& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline Project& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // createSource Field Functions 
      bool hasCreateSource() const { return this->createSource_ != nullptr;};
      void deleteCreateSource() { this->createSource_ = nullptr;};
      inline string getCreateSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
      inline Project& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Project& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Project& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Project& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // modifiedSource Field Functions 
      bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
      void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
      inline string getModifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
      inline Project& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Project& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Project& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectType Field Functions 
      bool hasProjectType() const { return this->projectType_ != nullptr;};
      void deleteProjectType() { this->projectType_ = nullptr;};
      inline string getProjectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
      inline Project& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Project& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Project& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Project& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // timeline Field Functions 
      bool hasTimeline() const { return this->timeline_ != nullptr;};
      void deleteTimeline() { this->timeline_ = nullptr;};
      inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
      inline Project& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


      // timelineConvertErrorMessage Field Functions 
      bool hasTimelineConvertErrorMessage() const { return this->timelineConvertErrorMessage_ != nullptr;};
      void deleteTimelineConvertErrorMessage() { this->timelineConvertErrorMessage_ = nullptr;};
      inline string getTimelineConvertErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(timelineConvertErrorMessage_, "") };
      inline Project& setTimelineConvertErrorMessage(string timelineConvertErrorMessage) { DARABONBA_PTR_SET_VALUE(timelineConvertErrorMessage_, timelineConvertErrorMessage) };


      // timelineConvertStatus Field Functions 
      bool hasTimelineConvertStatus() const { return this->timelineConvertStatus_ != nullptr;};
      void deleteTimelineConvertStatus() { this->timelineConvertStatus_ = nullptr;};
      inline string getTimelineConvertStatus() const { DARABONBA_PTR_GET_DEFAULT(timelineConvertStatus_, "") };
      inline Project& setTimelineConvertStatus(string timelineConvertStatus) { DARABONBA_PTR_SET_VALUE(timelineConvertStatus_, timelineConvertStatus) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Project& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The business configuration of the project. This parameter can be ignored for general editing projects.
      shared_ptr<string> businessConfig_ {};
      // The business status of the project. This parameter can be ignored for general editing projects. Valid values:
      // 
      // Reserving
      // 
      // ReservationCanceled
      // 
      // BroadCasting
      // 
      // LoadingFailed
      // 
      // LiveFinished
      shared_ptr<string> businessStatus_ {};
      // The material parameter corresponding to the template, in the JSON format. If TemplateId is specified, ClipsParam must also be specified. For more information<props="china">, see [Create and use a regular template](https://help.aliyun.com/document_detail/328557.html) and [Create and use an advanced template](https://help.aliyun.com/document_detail/291418.html).
      shared_ptr<string> clipsParam_ {};
      // The thumbnail URL of the online editing project.
      shared_ptr<string> coverURL_ {};
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
      shared_ptr<string> createSource_ {};
      // The time when the online editing project was created.
      shared_ptr<string> createTime_ {};
      // The description of the online editing project.
      shared_ptr<string> description_ {};
      // The total duration of the online editing project.
      shared_ptr<int64_t> duration_ {};
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
      shared_ptr<string> modifiedSource_ {};
      // The time when the online editing project was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The ID of the online editing project.
      shared_ptr<string> projectId_ {};
      // The type of the editing project. Default value: EditingProject. Valid values:
      // 
      // \\- EditingProject: a regular editing project.
      // 
      // \\- LiveEditingProject: a live stream editing project.
      shared_ptr<string> projectType_ {};
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
      // 
      // \\- Deleted
      shared_ptr<string> status_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template type of the online editing project. Valid values:
      // 
      // \\- Timeline
      // 
      // \\- VETemplate
      shared_ptr<string> templateType_ {};
      // The timeline of the online editing project.
      shared_ptr<string> timeline_ {};
      // The error message returned if the project conversion failed. The error message displays the detailed information about the failure, and is returned only if the value of TimelineConvertStatus is ConvertFailed.
      shared_ptr<string> timelineConvertErrorMessage_ {};
      // The project conversion status. Conversion of an API-style timeline into a frontend-style timeline is an asynchronous process and takes effect only if RequestSource:WebSDK is specified.
      // 
      // \\- Unconverted
      // 
      // \\- Converting
      // 
      // \\- Converted
      // 
      // \\- ConvertFailed
      shared_ptr<string> timelineConvertStatus_ {};
      // The title of the online editing project.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->project_ == nullptr
        && this->requestId_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const GetEditingProjectResponseBody::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, GetEditingProjectResponseBody::Project) };
    inline GetEditingProjectResponseBody::Project getProject() { DARABONBA_PTR_GET(project_, GetEditingProjectResponseBody::Project) };
    inline GetEditingProjectResponseBody& setProject(const GetEditingProjectResponseBody::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline GetEditingProjectResponseBody& setProject(GetEditingProjectResponseBody::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the online editing project.
    shared_ptr<GetEditingProjectResponseBody::Project> project_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
