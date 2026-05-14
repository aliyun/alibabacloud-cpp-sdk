// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODY_HPP_
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
  class ListProjectRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProjectRolesResponseBody() = default ;
    ListProjectRolesResponseBody(const ListProjectRolesResponseBody &) = default ;
    ListProjectRolesResponseBody(ListProjectRolesResponseBody &&) = default ;
    ListProjectRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRolesResponseBody() = default ;
    ListProjectRolesResponseBody& operator=(const ListProjectRolesResponseBody &) = default ;
    ListProjectRolesResponseBody& operator=(ListProjectRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectRoles, projectRoles_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectRoles, projectRoles_);
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
      class ProjectRoles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProjectRoles& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(ModulePermissions, modulePermissions_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ProjectRoles& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(ModulePermissions, modulePermissions_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ProjectRoles() = default ;
        ProjectRoles(const ProjectRoles &) = default ;
        ProjectRoles(ProjectRoles &&) = default ;
        ProjectRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProjectRoles() = default ;
        ProjectRoles& operator=(const ProjectRoles &) = default ;
        ProjectRoles& operator=(ProjectRoles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModulePermissions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModulePermissions& obj) { 
            DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
            DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
            DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
          };
          friend void from_json(const Darabonba::Json& j, ModulePermissions& obj) { 
            DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
            DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
            DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
          };
          ModulePermissions() = default ;
          ModulePermissions(const ModulePermissions &) = default ;
          ModulePermissions(ModulePermissions &&) = default ;
          ModulePermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModulePermissions() = default ;
          ModulePermissions& operator=(const ModulePermissions &) = default ;
          ModulePermissions& operator=(ModulePermissions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->moduleId_ == nullptr
        && this->moduleName_ == nullptr && this->permissionType_ == nullptr; };
          // moduleId Field Functions 
          bool hasModuleId() const { return this->moduleId_ != nullptr;};
          void deleteModuleId() { this->moduleId_ = nullptr;};
          inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
          inline ModulePermissions& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


          // moduleName Field Functions 
          bool hasModuleName() const { return this->moduleName_ != nullptr;};
          void deleteModuleName() { this->moduleName_ = nullptr;};
          inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
          inline ModulePermissions& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


          // permissionType Field Functions 
          bool hasPermissionType() const { return this->permissionType_ != nullptr;};
          void deletePermissionType() { this->permissionType_ = nullptr;};
          inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
          inline ModulePermissions& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


        protected:
          shared_ptr<int64_t> moduleId_ {};
          shared_ptr<string> moduleName_ {};
          shared_ptr<string> permissionType_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->modulePermissions_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ProjectRoles& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // modulePermissions Field Functions 
        bool hasModulePermissions() const { return this->modulePermissions_ != nullptr;};
        void deleteModulePermissions() { this->modulePermissions_ = nullptr;};
        inline const vector<ProjectRoles::ModulePermissions> & getModulePermissions() const { DARABONBA_PTR_GET_CONST(modulePermissions_, vector<ProjectRoles::ModulePermissions>) };
        inline vector<ProjectRoles::ModulePermissions> getModulePermissions() { DARABONBA_PTR_GET(modulePermissions_, vector<ProjectRoles::ModulePermissions>) };
        inline ProjectRoles& setModulePermissions(const vector<ProjectRoles::ModulePermissions> & modulePermissions) { DARABONBA_PTR_SET_VALUE(modulePermissions_, modulePermissions) };
        inline ProjectRoles& setModulePermissions(vector<ProjectRoles::ModulePermissions> && modulePermissions) { DARABONBA_PTR_SET_RVALUE(modulePermissions_, modulePermissions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ProjectRoles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ProjectRoles& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ProjectRoles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The code of the role in the DataWorks workspace.
        shared_ptr<string> code_ {};
        shared_ptr<vector<ProjectRoles::ModulePermissions>> modulePermissions_ {};
        // The name of the role.
        shared_ptr<string> name_ {};
        // The DataWorks workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The type of the role in the DataWorks workspace.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectRoles_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline PagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline PagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectRoles Field Functions 
      bool hasProjectRoles() const { return this->projectRoles_ != nullptr;};
      void deleteProjectRoles() { this->projectRoles_ = nullptr;};
      inline const vector<PagingInfo::ProjectRoles> & getProjectRoles() const { DARABONBA_PTR_GET_CONST(projectRoles_, vector<PagingInfo::ProjectRoles>) };
      inline vector<PagingInfo::ProjectRoles> getProjectRoles() { DARABONBA_PTR_GET(projectRoles_, vector<PagingInfo::ProjectRoles>) };
      inline PagingInfo& setProjectRoles(const vector<PagingInfo::ProjectRoles> & projectRoles) { DARABONBA_PTR_SET_VALUE(projectRoles_, projectRoles) };
      inline PagingInfo& setProjectRoles(vector<PagingInfo::ProjectRoles> && projectRoles) { DARABONBA_PTR_SET_RVALUE(projectRoles_, projectRoles) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline PagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<string> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<string> pageSize_ {};
      // The roles in the DataWorks workspace.
      shared_ptr<vector<PagingInfo::ProjectRoles>> projectRoles_ {};
      // The total number of entries returned.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListProjectRolesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListProjectRolesResponseBody::PagingInfo) };
    inline ListProjectRolesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListProjectRolesResponseBody::PagingInfo) };
    inline ListProjectRolesResponseBody& setPagingInfo(const ListProjectRolesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListProjectRolesResponseBody& setPagingInfo(ListProjectRolesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListProjectRolesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
