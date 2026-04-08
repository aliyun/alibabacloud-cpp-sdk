// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProjectsResponseBody() = default ;
    ListProjectsResponseBody(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody(ListProjectsResponseBody &&) = default ;
    ListProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBody() = default ;
    ListProjectsResponseBody& operator=(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody& operator=(ListProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProjectList& obj) { 
          DARABONBA_PTR_TO_JSON(DisableDevelopment, disableDevelopment_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(ProjectDescription, projectDescription_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
          DARABONBA_PTR_TO_JSON(ProjectStatus, projectStatus_);
          DARABONBA_PTR_TO_JSON(ProjectStatusCode, projectStatusCode_);
          DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
          DARABONBA_PTR_TO_JSON(TablePrivacyMode, tablePrivacyMode_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
        };
        friend void from_json(const Darabonba::Json& j, ProjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(DisableDevelopment, disableDevelopment_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(ProjectDescription, projectDescription_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
          DARABONBA_PTR_FROM_JSON(ProjectStatus, projectStatus_);
          DARABONBA_PTR_FROM_JSON(ProjectStatusCode, projectStatusCode_);
          DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
          DARABONBA_PTR_FROM_JSON(TablePrivacyMode, tablePrivacyMode_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of tag N added to the workspace.
          shared_ptr<string> key_ {};
          // The value of tag N added to the workspace.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->disableDevelopment_ == nullptr
        && this->isDefault_ == nullptr && this->projectDescription_ == nullptr && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr && this->projectName_ == nullptr
        && this->projectOwnerBaseId_ == nullptr && this->projectStatus_ == nullptr && this->projectStatusCode_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->tablePrivacyMode_ == nullptr
        && this->tags_ == nullptr && this->useProxyOdpsAccount_ == nullptr; };
        // disableDevelopment Field Functions 
        bool hasDisableDevelopment() const { return this->disableDevelopment_ != nullptr;};
        void deleteDisableDevelopment() { this->disableDevelopment_ = nullptr;};
        inline bool getDisableDevelopment() const { DARABONBA_PTR_GET_DEFAULT(disableDevelopment_, false) };
        inline ProjectList& setDisableDevelopment(bool disableDevelopment) { DARABONBA_PTR_SET_VALUE(disableDevelopment_, disableDevelopment) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline int32_t getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0) };
        inline ProjectList& setIsDefault(int32_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // projectDescription Field Functions 
        bool hasProjectDescription() const { return this->projectDescription_ != nullptr;};
        void deleteProjectDescription() { this->projectDescription_ = nullptr;};
        inline string getProjectDescription() const { DARABONBA_PTR_GET_DEFAULT(projectDescription_, "") };
        inline ProjectList& setProjectDescription(string projectDescription) { DARABONBA_PTR_SET_VALUE(projectDescription_, projectDescription) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ProjectList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectIdentifier Field Functions 
        bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
        void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
        inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
        inline ProjectList& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline ProjectList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // projectOwnerBaseId Field Functions 
        bool hasProjectOwnerBaseId() const { return this->projectOwnerBaseId_ != nullptr;};
        void deleteProjectOwnerBaseId() { this->projectOwnerBaseId_ = nullptr;};
        inline string getProjectOwnerBaseId() const { DARABONBA_PTR_GET_DEFAULT(projectOwnerBaseId_, "") };
        inline ProjectList& setProjectOwnerBaseId(string projectOwnerBaseId) { DARABONBA_PTR_SET_VALUE(projectOwnerBaseId_, projectOwnerBaseId) };


        // projectStatus Field Functions 
        bool hasProjectStatus() const { return this->projectStatus_ != nullptr;};
        void deleteProjectStatus() { this->projectStatus_ = nullptr;};
        inline int32_t getProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(projectStatus_, 0) };
        inline ProjectList& setProjectStatus(int32_t projectStatus) { DARABONBA_PTR_SET_VALUE(projectStatus_, projectStatus) };


        // projectStatusCode Field Functions 
        bool hasProjectStatusCode() const { return this->projectStatusCode_ != nullptr;};
        void deleteProjectStatusCode() { this->projectStatusCode_ = nullptr;};
        inline string getProjectStatusCode() const { DARABONBA_PTR_GET_DEFAULT(projectStatusCode_, "") };
        inline ProjectList& setProjectStatusCode(string projectStatusCode) { DARABONBA_PTR_SET_VALUE(projectStatusCode_, projectStatusCode) };


        // resourceManagerResourceGroupId Field Functions 
        bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
        void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
        inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
        inline ProjectList& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


        // tablePrivacyMode Field Functions 
        bool hasTablePrivacyMode() const { return this->tablePrivacyMode_ != nullptr;};
        void deleteTablePrivacyMode() { this->tablePrivacyMode_ = nullptr;};
        inline int32_t getTablePrivacyMode() const { DARABONBA_PTR_GET_DEFAULT(tablePrivacyMode_, 0) };
        inline ProjectList& setTablePrivacyMode(int32_t tablePrivacyMode) { DARABONBA_PTR_SET_VALUE(tablePrivacyMode_, tablePrivacyMode) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<ProjectList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ProjectList::Tags>) };
        inline vector<ProjectList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ProjectList::Tags>) };
        inline ProjectList& setTags(const vector<ProjectList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ProjectList& setTags(vector<ProjectList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // useProxyOdpsAccount Field Functions 
        bool hasUseProxyOdpsAccount() const { return this->useProxyOdpsAccount_ != nullptr;};
        void deleteUseProxyOdpsAccount() { this->useProxyOdpsAccount_ = nullptr;};
        inline bool getUseProxyOdpsAccount() const { DARABONBA_PTR_GET_DEFAULT(useProxyOdpsAccount_, false) };
        inline ProjectList& setUseProxyOdpsAccount(bool useProxyOdpsAccount) { DARABONBA_PTR_SET_VALUE(useProxyOdpsAccount_, useProxyOdpsAccount) };


      protected:
        // Indicates whether the Development role is disabled. Valid values:
        // 
        // *   **false**: enabled
        // *   **true**: disabled
        shared_ptr<bool> disableDevelopment_ {};
        // Indicates whether the workspace is a default workspace. Valid values:
        // 
        // *   **1**: The workspace is a default workspace.
        // *   **0**: The workspace is not a default workspace.
        shared_ptr<int32_t> isDefault_ {};
        // The description of the workspace.
        shared_ptr<string> projectDescription_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The name of the workspace.
        shared_ptr<string> projectIdentifier_ {};
        // The display name of the workspace.
        shared_ptr<string> projectName_ {};
        // The ID of the user used by the workspace owner.
        shared_ptr<string> projectOwnerBaseId_ {};
        // The status of the workspace. Valid values:
        // 
        // *   0: AVAILABLE, which indicates that the workspace is running as expected.
        // *   1: DELETED, which indicates that the workspace is deleted.
        // *   2: INITIALIZING, which indicates that the workspace is being initialized.
        // *   3: INIT_FAILED, which indicates that the workspace fails to be initialized.
        // *   4: FORBIDDEN, which indicates that the workspace is manually disabled.
        // *   5: DELETING, which indicates that the workspace is being deleted.
        // *   6: DEL_FAILED, which indicates that the workspace fails to be deleted.
        // *   7: FROZEN, which indicates that the workspace is frozen due to overdue payments.
        // *   8: UPDATING, which indicates that the workspace is being updated. After you associate a compute engine with the workspace, the system initializes the compute engine and updates the workspace.
        // *   9: UPDATE_FAILED, which indicates that the workspace fails to be updated.
        shared_ptr<int32_t> projectStatus_ {};
        // The status code of the workspace. Valid values:
        // 
        // *   AVAILABLE: 0, which indicates that the workspace is running as expected.
        // *   DELETED: 1, which indicates that the workspace is deleted.
        // *   INITIALIZING: 2, which indicates that the workspace is being initialized.
        // *   INIT_FAILED: 3, which indicates that the workspace fails to be initialized.
        // *   FORBIDDEN: 4, which indicates that the workspace is manually disabled.
        // *   DELETING: 5, which indicates that the workspace is being deleted.
        // *   DEL_FAILED: 6, which indicates that the workspace fails to be deleted.
        // *   FROZEN: 7, which indicates that the workspace is frozen due to overdue payments.
        // *   UPDATING: 8, which indicates that the workspace is being updated. After you associate a compute engine with the workspace, the system initializes the compute engine and updates the workspace.
        // *   UPDATE_FAILED: 9, which indicates that the workspace fails to be updated.
        shared_ptr<string> projectStatusCode_ {};
        // The resource group ID.
        shared_ptr<string> resourceManagerResourceGroupId_ {};
        // Indicates whether the MaxCompute tables in the workspace are visible to the users within a tenant. Valid values:
        // 
        // *   **0**: invisible
        // *   **1**: visible
        shared_ptr<int32_t> tablePrivacyMode_ {};
        // The tags added to the workspace.
        shared_ptr<vector<ProjectList::Tags>> tags_ {};
        // Indicates whether a proxy account is used to access the MaxCompute compute engine associated with the workspace. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> useProxyOdpsAccount_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectList Field Functions 
      bool hasProjectList() const { return this->projectList_ != nullptr;};
      void deleteProjectList() { this->projectList_ = nullptr;};
      inline const vector<PageResult::ProjectList> & getProjectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<PageResult::ProjectList>) };
      inline vector<PageResult::ProjectList> getProjectList() { DARABONBA_PTR_GET(projectList_, vector<PageResult::ProjectList>) };
      inline PageResult& setProjectList(const vector<PageResult::ProjectList> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
      inline PageResult& setProjectList(vector<PageResult::ProjectList> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The DataWorks workspaces.
      shared_ptr<vector<PageResult::ProjectList>> projectList_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageResult_ == nullptr
        && this->requestId_ == nullptr; };
    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListProjectsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListProjectsResponseBody::PageResult) };
    inline ListProjectsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListProjectsResponseBody::PageResult) };
    inline ListProjectsResponseBody& setPageResult(const ListProjectsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListProjectsResponseBody& setPageResult(ListProjectsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results that are returned.
    shared_ptr<ListProjectsResponseBody::PageResult> pageResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
