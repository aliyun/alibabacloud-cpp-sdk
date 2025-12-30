// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchEditingProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    SearchEditingProjectRequest() = default ;
    SearchEditingProjectRequest(const SearchEditingProjectRequest &) = default ;
    SearchEditingProjectRequest(SearchEditingProjectRequest &&) = default ;
    SearchEditingProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEditingProjectRequest() = default ;
    SearchEditingProjectRequest& operator=(const SearchEditingProjectRequest &) = default ;
    SearchEditingProjectRequest& operator=(SearchEditingProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createSource_ == nullptr
        && this->endTime_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->projectType_ == nullptr && this->sortBy_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->templateType_ == nullptr; };
    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string getCreateSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline SearchEditingProjectRequest& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SearchEditingProjectRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline SearchEditingProjectRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline SearchEditingProjectRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectType Field Functions 
    bool hasProjectType() const { return this->projectType_ != nullptr;};
    void deleteProjectType() { this->projectType_ = nullptr;};
    inline string getProjectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
    inline SearchEditingProjectRequest& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchEditingProjectRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SearchEditingProjectRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchEditingProjectRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline SearchEditingProjectRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The source of the project.
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
    shared_ptr<string> createSource_ {};
    // The end of the time range to query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The type of the editing project. Default value: EditingProject. Valid values:
    // 
    // *   EditingProject: a regular editing project.
    // *   LiveEditingProject: a live stream editing project.
    shared_ptr<string> projectType_ {};
    // The sorting rule of results. Valid values:
    // 
    // \\- CreationTime:Desc (default): The results are sorted in reverse chronological order based on the creation time.
    // 
    // \\- CreationTime:Asc: The results are sorted in chronological order based on the creation time.
    shared_ptr<string> sortBy_ {};
    // The beginning of the time range to query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
    // The status of the online editing project. Separate multiple values with commas (,). By default, all online editing projects are queried.
    // 
    // Valid values:
    // 
    // \\-Draft
    // 
    // \\-Producing
    // 
    // \\-Produced
    // 
    // \\-ProduceFailed
    shared_ptr<string> status_ {};
    // The template type. Valid values:
    // 
    // \\-Timeline
    // 
    // \\-VETemplate
    // 
    // Valid values:
    // 
    // *   Timeline: regular template.
    // *   VETemplate: advanced template.
    // *   None: No template is used.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
