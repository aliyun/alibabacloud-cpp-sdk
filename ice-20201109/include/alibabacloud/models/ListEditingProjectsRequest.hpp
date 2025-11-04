// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDITINGPROJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDITINGPROJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListEditingProjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEditingProjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEditingProjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ListEditingProjectsRequest() = default ;
    ListEditingProjectsRequest(const ListEditingProjectsRequest &) = default ;
    ListEditingProjectsRequest(ListEditingProjectsRequest &&) = default ;
    ListEditingProjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEditingProjectsRequest() = default ;
    ListEditingProjectsRequest& operator=(const ListEditingProjectsRequest &) = default ;
    ListEditingProjectsRequest& operator=(ListEditingProjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createSource_ == nullptr
        && return this->endTime_ == nullptr && return this->keyword_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->projectType_ == nullptr
        && return this->sortBy_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->templateType_ == nullptr; };
    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string createSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline ListEditingProjectsRequest& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListEditingProjectsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListEditingProjectsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListEditingProjectsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEditingProjectsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectType Field Functions 
    bool hasProjectType() const { return this->projectType_ != nullptr;};
    void deleteProjectType() { this->projectType_ = nullptr;};
    inline string projectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
    inline ListEditingProjectsRequest& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListEditingProjectsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListEditingProjectsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEditingProjectsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ListEditingProjectsRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The method for creating the online editing project. Valid values:
    // 
    // \\- OpenAPI
    // 
    // \\- AliyunConsole
    // 
    // \\- WebSDK
    std::shared_ptr<string> createSource_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The search keyword. You can search by job ID.
    std::shared_ptr<string> keyword_ = nullptr;
    // The number of entries per page. A maximum of 100 entries can be returned on each page.
    // 
    // Default value: 10.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The type of the editing project. Valid values:
    // 
    // *   EditingProject: a regular editing project.
    // *   LiveEditingProject: a live stream editing project.
    std::shared_ptr<string> projectType_ = nullptr;
    // The order of sorting of the results. Valid values:
    // 
    // *   CreationTime:Desc (default): sorts the results in reverse chronological order.
    // *   CreationTime:Asc: sorts the results in chronological order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the online editing project. By default, online editing projects in all states are queried.
    std::shared_ptr<string> status_ = nullptr;
    // The template type. This parameter is required if you create a template-based online editing project. Default value: Timeline.
    // 
    // *
    // *
    // 
    // Valid values:
    // 
    // *   Timeline: a regular template.
    // *   VETemplate: an advanced template.
    // *   None: general editing.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
