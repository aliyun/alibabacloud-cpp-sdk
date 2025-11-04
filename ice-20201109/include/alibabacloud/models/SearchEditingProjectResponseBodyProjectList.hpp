// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODYPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODYPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchEditingProjectResponseBodyProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectResponseBodyProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ModifiedSource, modifiedSource_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectResponseBodyProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessConfig, businessConfig_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ModifiedSource, modifiedSource_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    SearchEditingProjectResponseBodyProjectList() = default ;
    SearchEditingProjectResponseBodyProjectList(const SearchEditingProjectResponseBodyProjectList &) = default ;
    SearchEditingProjectResponseBodyProjectList(SearchEditingProjectResponseBodyProjectList &&) = default ;
    SearchEditingProjectResponseBodyProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEditingProjectResponseBodyProjectList() = default ;
    SearchEditingProjectResponseBodyProjectList& operator=(const SearchEditingProjectResponseBodyProjectList &) = default ;
    SearchEditingProjectResponseBodyProjectList& operator=(SearchEditingProjectResponseBodyProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessConfig_ == nullptr
        && return this->businessStatus_ == nullptr && return this->coverURL_ == nullptr && return this->createSource_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr
        && return this->duration_ == nullptr && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->modifiedSource_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->projectId_ == nullptr && return this->projectType_ == nullptr && return this->status_ == nullptr && return this->templateType_ == nullptr && return this->timeline_ == nullptr
        && return this->title_ == nullptr; };
    // businessConfig Field Functions 
    bool hasBusinessConfig() const { return this->businessConfig_ != nullptr;};
    void deleteBusinessConfig() { this->businessConfig_ = nullptr;};
    inline string businessConfig() const { DARABONBA_PTR_GET_DEFAULT(businessConfig_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setBusinessConfig(string businessConfig) { DARABONBA_PTR_SET_VALUE(businessConfig_, businessConfig) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string createSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline SearchEditingProjectResponseBodyProjectList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // modifiedSource Field Functions 
    bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
    void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
    inline string modifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectType Field Functions 
    bool hasProjectType() const { return this->projectType_ != nullptr;};
    void deleteProjectType() { this->projectType_ = nullptr;};
    inline string projectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string timeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchEditingProjectResponseBodyProjectList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The business configuration of the project. This parameter can be ignored for general editing projects.
    std::shared_ptr<string> businessConfig_ = nullptr;
    // The business status of the project. This parameter can be ignored for general editing projects. Valid values:
    // 
    // Valid values:
    // 
    // *   BroadCasting:
    // *   ReservationCanceled
    // *   LiveFinished
    // *   LoadingFailed
    // *   Reserving
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The thumbnail URL of the online editing project.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The method for editing the online editing project.
    // 
    // \\-OpenAPI
    // 
    // \\-AliyunConsole
    // 
    // \\-WebSDK
    // 
    // Valid values:
    // 
    // *   AliyunConsole: The project is created in the Alibaba Cloud console.
    // *   WebSDK: The project is created by using the SDK for Web.
    // *   OpenAPI: The project is created by calling API operations.
    std::shared_ptr<string> createSource_ = nullptr;
    // The time when the online editing project was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the online editing project.
    std::shared_ptr<string> description_ = nullptr;
    // The total length of the online editing project. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The error code returned if the production of the online editing project failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the production of the online editing project failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The method used when the online editing project was last modified.
    std::shared_ptr<string> modifiedSource_ = nullptr;
    // The time when the online editing project was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The type of the editing project.
    // 
    // Valid values:
    // 
    // *   LiveEditingProject: a live stream editing project.
    // *   EditingProject: a regular editing project.
    std::shared_ptr<string> projectType_ = nullptr;
    // The status of the online editing project. Valid values:
    // 
    // \\-Draft
    // 
    // \\-Editing
    // 
    // \\-Producing
    // 
    // \\-Produced
    // 
    // \\-ProduceFailed
    // 
    // Valid values:
    // 
    // *   Draft
    // *   Produced
    // *   Editing
    // *   Producing
    // *   ProduceFailed
    std::shared_ptr<string> status_ = nullptr;
    // The type of the template.
    std::shared_ptr<string> templateType_ = nullptr;
    // The timeline of the online editing project.
    std::shared_ptr<string> timeline_ = nullptr;
    // The title of the online editing project.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
