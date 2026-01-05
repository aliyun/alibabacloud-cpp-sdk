// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
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
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Projects, projects_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Projects, projects_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Projects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Projects& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
          DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
          DARABONBA_PTR_TO_JSON(DevRoleDisabled, devRoleDisabled_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(PaiTaskEnabled, paiTaskEnabled_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Projects& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
          DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
          DARABONBA_PTR_FROM_JSON(DevRoleDisabled, devRoleDisabled_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(PaiTaskEnabled, paiTaskEnabled_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Projects() = default ;
        Projects(const Projects &) = default ;
        Projects(Projects &&) = default ;
        Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Projects() = default ;
        Projects& operator=(const Projects &) = default ;
        Projects& operator=(Projects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AliyunResourceTags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AliyunResourceTags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AliyunResourceTags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AliyunResourceTags() = default ;
          AliyunResourceTags(const AliyunResourceTags &) = default ;
          AliyunResourceTags(AliyunResourceTags &&) = default ;
          AliyunResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AliyunResourceTags() = default ;
          AliyunResourceTags& operator=(const AliyunResourceTags &) = default ;
          AliyunResourceTags& operator=(AliyunResourceTags &&) = default ;
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
          inline AliyunResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline AliyunResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && this->aliyunResourceTags_ == nullptr && this->description_ == nullptr && this->devEnvironmentEnabled_ == nullptr && this->devRoleDisabled_ == nullptr && this->displayName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->paiTaskEnabled_ == nullptr && this->status_ == nullptr; };
        // aliyunResourceGroupId Field Functions 
        bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
        void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
        inline string getAliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
        inline Projects& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


        // aliyunResourceTags Field Functions 
        bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
        void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
        inline const vector<Projects::AliyunResourceTags> & getAliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<Projects::AliyunResourceTags>) };
        inline vector<Projects::AliyunResourceTags> getAliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<Projects::AliyunResourceTags>) };
        inline Projects& setAliyunResourceTags(const vector<Projects::AliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
        inline Projects& setAliyunResourceTags(vector<Projects::AliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Projects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // devEnvironmentEnabled Field Functions 
        bool hasDevEnvironmentEnabled() const { return this->devEnvironmentEnabled_ != nullptr;};
        void deleteDevEnvironmentEnabled() { this->devEnvironmentEnabled_ = nullptr;};
        inline bool getDevEnvironmentEnabled() const { DARABONBA_PTR_GET_DEFAULT(devEnvironmentEnabled_, false) };
        inline Projects& setDevEnvironmentEnabled(bool devEnvironmentEnabled) { DARABONBA_PTR_SET_VALUE(devEnvironmentEnabled_, devEnvironmentEnabled) };


        // devRoleDisabled Field Functions 
        bool hasDevRoleDisabled() const { return this->devRoleDisabled_ != nullptr;};
        void deleteDevRoleDisabled() { this->devRoleDisabled_ = nullptr;};
        inline bool getDevRoleDisabled() const { DARABONBA_PTR_GET_DEFAULT(devRoleDisabled_, false) };
        inline Projects& setDevRoleDisabled(bool devRoleDisabled) { DARABONBA_PTR_SET_VALUE(devRoleDisabled_, devRoleDisabled) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Projects& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Projects& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Projects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Projects& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // paiTaskEnabled Field Functions 
        bool hasPaiTaskEnabled() const { return this->paiTaskEnabled_ != nullptr;};
        void deletePaiTaskEnabled() { this->paiTaskEnabled_ = nullptr;};
        inline bool getPaiTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(paiTaskEnabled_, false) };
        inline Projects& setPaiTaskEnabled(bool paiTaskEnabled) { DARABONBA_PTR_SET_VALUE(paiTaskEnabled_, paiTaskEnabled) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Projects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the Alibaba Cloud resource group to which the workspace belongs.
        shared_ptr<string> aliyunResourceGroupId_ {};
        // The tags.
        shared_ptr<vector<Projects::AliyunResourceTags>> aliyunResourceTags_ {};
        // The description of the workspace.
        shared_ptr<string> description_ {};
        // Indicates whether the development environment is enabled. Valid values:
        // 
        // *   true: The development environment is enabled. In this case, the development environment is isolated from the production environment in the workspace.
        // *   false: The development environment is disabled. In this case, only the production environment is used in the workspace.
        shared_ptr<bool> devEnvironmentEnabled_ {};
        // Indicates whether the Develop role is disabled. Valid values:
        // 
        // *   false (default)
        // *   true
        shared_ptr<bool> devRoleDisabled_ {};
        // The display name of the workspace.
        shared_ptr<string> displayName_ {};
        // The workspace ID.
        shared_ptr<int64_t> id_ {};
        // The name of the workspace.
        shared_ptr<string> name_ {};
        // The ID of the Alibaba Cloud account to which the workspace belongs.
        shared_ptr<string> owner_ {};
        // Indicates whether scheduling of PAI tasks is enabled. Valid values:
        // 
        // *   true: Scheduling of PAI tasks is enabled. In this case, you can create a PAI node in a DataWorks workspace and configure scheduling properties for the node to implement periodic scheduling of PAI tasks.
        // *   false: Scheduling of PAI tasks is disabled.
        shared_ptr<bool> paiTaskEnabled_ {};
        // The status of the workspace. Valid values:
        // 
        // *   Available
        // *   Initializing
        // *   InitFailed
        // *   Forbidden
        // *   Deleting
        // *   DeleteFailed
        // *   Frozen
        // *   Updating
        // *   UpdateFailed
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projects_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<PagingInfo::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<PagingInfo::Projects>) };
      inline vector<PagingInfo::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<PagingInfo::Projects>) };
      inline PagingInfo& setProjects(const vector<PagingInfo::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline PagingInfo& setProjects(vector<PagingInfo::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The workspaces.
      shared_ptr<vector<PagingInfo::Projects>> projects_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListProjectsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListProjectsResponseBody::PagingInfo) };
    inline ListProjectsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListProjectsResponseBody::PagingInfo) };
    inline ListProjectsResponseBody& setPagingInfo(const ListProjectsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListProjectsResponseBody& setPagingInfo(ListProjectsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListProjectsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
