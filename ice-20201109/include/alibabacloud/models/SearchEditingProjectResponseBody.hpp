// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchEditingProjectResponseBody() = default ;
    SearchEditingProjectResponseBody(const SearchEditingProjectResponseBody &) = default ;
    SearchEditingProjectResponseBody(SearchEditingProjectResponseBody &&) = default ;
    SearchEditingProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEditingProjectResponseBody() = default ;
    SearchEditingProjectResponseBody& operator=(const SearchEditingProjectResponseBody &) = default ;
    SearchEditingProjectResponseBody& operator=(SearchEditingProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ProjectList& obj) { 
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
      ProjectList() = default ;
      ProjectList(const ProjectList &) = default ;
      ProjectList(ProjectList &&) = default ;
      ProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectList() = default ;
      ProjectList& operator=(const ProjectList &) = default ;
      ProjectList& operator=(ProjectList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessConfig_ == nullptr
        && this->businessStatus_ == nullptr && this->coverURL_ == nullptr && this->createSource_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->duration_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->modifiedSource_ == nullptr && this->modifiedTime_ == nullptr
        && this->projectId_ == nullptr && this->projectType_ == nullptr && this->status_ == nullptr && this->templateType_ == nullptr && this->timeline_ == nullptr
        && this->title_ == nullptr; };
      // businessConfig Field Functions 
      bool hasBusinessConfig() const { return this->businessConfig_ != nullptr;};
      void deleteBusinessConfig() { this->businessConfig_ = nullptr;};
      inline string getBusinessConfig() const { DARABONBA_PTR_GET_DEFAULT(businessConfig_, "") };
      inline ProjectList& setBusinessConfig(string businessConfig) { DARABONBA_PTR_SET_VALUE(businessConfig_, businessConfig) };


      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline ProjectList& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline ProjectList& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // createSource Field Functions 
      bool hasCreateSource() const { return this->createSource_ != nullptr;};
      void deleteCreateSource() { this->createSource_ = nullptr;};
      inline string getCreateSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
      inline ProjectList& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProjectList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline ProjectList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ProjectList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline ProjectList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // modifiedSource Field Functions 
      bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
      void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
      inline string getModifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
      inline ProjectList& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline ProjectList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline ProjectList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectType Field Functions 
      bool hasProjectType() const { return this->projectType_ != nullptr;};
      void deleteProjectType() { this->projectType_ = nullptr;};
      inline string getProjectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
      inline ProjectList& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProjectList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // timeline Field Functions 
      bool hasTimeline() const { return this->timeline_ != nullptr;};
      void deleteTimeline() { this->timeline_ = nullptr;};
      inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
      inline ProjectList& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ProjectList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The business configuration of the project. This parameter can be ignored for general editing projects.
      shared_ptr<string> businessConfig_ {};
      // The business status of the project. This parameter can be ignored for general editing projects. Valid values:
      // 
      // Valid values:
      // 
      // *   BroadCasting:
      // *   ReservationCanceled
      // *   LiveFinished
      // *   LoadingFailed
      // *   Reserving
      shared_ptr<string> businessStatus_ {};
      // The thumbnail URL of the online editing project.
      shared_ptr<string> coverURL_ {};
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
      shared_ptr<string> createSource_ {};
      // The time when the online editing project was created.
      shared_ptr<string> createTime_ {};
      // The description of the online editing project.
      shared_ptr<string> description_ {};
      // The total length of the online editing project. Unit: seconds.
      shared_ptr<int64_t> duration_ {};
      // The error code returned if the production of the online editing project failed.
      shared_ptr<string> errorCode_ {};
      // The error message returned if the production of the online editing project failed.
      shared_ptr<string> errorMessage_ {};
      // The method used when the online editing project was last modified.
      shared_ptr<string> modifiedSource_ {};
      // The time when the online editing project was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The ID of the online editing project.
      shared_ptr<string> projectId_ {};
      // The type of the editing project.
      // 
      // Valid values:
      // 
      // *   LiveEditingProject: a live stream editing project.
      // *   EditingProject: a regular editing project.
      shared_ptr<string> projectType_ {};
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
      shared_ptr<string> status_ {};
      // The type of the template.
      shared_ptr<string> templateType_ {};
      // The timeline of the online editing project.
      shared_ptr<string> timeline_ {};
      // The title of the online editing project.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->projectList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline SearchEditingProjectResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchEditingProjectResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<SearchEditingProjectResponseBody::ProjectList> & getProjectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<SearchEditingProjectResponseBody::ProjectList>) };
    inline vector<SearchEditingProjectResponseBody::ProjectList> getProjectList() { DARABONBA_PTR_GET(projectList_, vector<SearchEditingProjectResponseBody::ProjectList>) };
    inline SearchEditingProjectResponseBody& setProjectList(const vector<SearchEditingProjectResponseBody::ProjectList> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline SearchEditingProjectResponseBody& setProjectList(vector<SearchEditingProjectResponseBody::ProjectList> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchEditingProjectResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned on a single page. The value is set to the maximum number of entries returned on each page except for the last page.
    // 
    // Examples:
    // 
    // Valid example: 10,10,5. Invalid example: 10,5,10.
    shared_ptr<int64_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The queried online editing projects.
    shared_ptr<vector<SearchEditingProjectResponseBody::ProjectList>> projectList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Optional. The total number of entries returned. By default, this parameter is not returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
