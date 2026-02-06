// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
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
        DARABONBA_PTR_TO_JSON(Project, project_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectList& obj) { 
        DARABONBA_PTR_FROM_JSON(Project, project_);
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
      class Project : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Project& obj) { 
          DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Project& obj) { 
          DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
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
        virtual bool empty() const override { return this->coverURL_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->duration_ == nullptr && this->modifiedTime_ == nullptr && this->projectId_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->storageLocation_ == nullptr && this->title_ == nullptr; };
        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline Project& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Project& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Project& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Project& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


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


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Project& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Project& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline Project& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Project& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The thumbnail URL of the online editing project.
        shared_ptr<string> coverURL_ {};
        // The time when the online editing project was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the online editing project.
        shared_ptr<string> description_ {};
        // The duration of the online editing project, which must be consistent with the duration of the timeline.
        // > The Timeline parameter is not included in response parameters.
        shared_ptr<float> duration_ {};
        // The last time when the online editing project was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The ID of the online editing project.
        shared_ptr<string> projectId_ {};
        // The region where the online editing project was created.
        shared_ptr<string> regionId_ {};
        // The status of the online editing project. Separate multiple states with commas (,). By default, all online editing projects were queried. Valid values:
        // *   **Normal**: indicates that the online editing project is in draft.
        // *   **Producing**: indicates that the video is being produced.
        // *   **Produced**: indicates that the video was produced.
        // *   **ProduceFailed**: indicates that the video failed to be produced.
        shared_ptr<string> status_ {};
        // The path of the Object Storage Service (OSS) bucket where the produced video is stored.
        // > To view the path of the OSS bucket, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com/?spm=a2c4g.11186623.2.15.6948257eaZ4m54#/vod/settings/censored), and choose **Configuration Management** > **Media Management** > **Storage**. On the Storage page, you can view the path of the OSS bucket.
        shared_ptr<string> storageLocation_ {};
        // The title of the online editing project.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->project_ == nullptr; };
      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline const vector<ProjectList::Project> & getProject() const { DARABONBA_PTR_GET_CONST(project_, vector<ProjectList::Project>) };
      inline vector<ProjectList::Project> getProject() { DARABONBA_PTR_GET(project_, vector<ProjectList::Project>) };
      inline ProjectList& setProject(const vector<ProjectList::Project> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
      inline ProjectList& setProject(vector<ProjectList::Project> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    protected:
      shared_ptr<vector<ProjectList::Project>> project_ {};
    };

    virtual bool empty() const override { return this->projectList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const SearchEditingProjectResponseBody::ProjectList & getProjectList() const { DARABONBA_PTR_GET_CONST(projectList_, SearchEditingProjectResponseBody::ProjectList) };
    inline SearchEditingProjectResponseBody::ProjectList getProjectList() { DARABONBA_PTR_GET(projectList_, SearchEditingProjectResponseBody::ProjectList) };
    inline SearchEditingProjectResponseBody& setProjectList(const SearchEditingProjectResponseBody::ProjectList & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline SearchEditingProjectResponseBody& setProjectList(SearchEditingProjectResponseBody::ProjectList && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline SearchEditingProjectResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of online editing projects.
    shared_ptr<SearchEditingProjectResponseBody::ProjectList> projectList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of online editing projects returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
