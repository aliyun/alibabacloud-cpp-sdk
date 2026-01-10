// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDesignProjectInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDesignProjectInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDesignProjectInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTableDesignProjectInfoResponseBody() = default ;
    GetTableDesignProjectInfoResponseBody(const GetTableDesignProjectInfoResponseBody &) = default ;
    GetTableDesignProjectInfoResponseBody(GetTableDesignProjectInfoResponseBody &&) = default ;
    GetTableDesignProjectInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDesignProjectInfoResponseBody() = default ;
    GetTableDesignProjectInfoResponseBody& operator=(const GetTableDesignProjectInfoResponseBody &) = default ;
    GetTableDesignProjectInfoResponseBody& operator=(GetTableDesignProjectInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BaseDatabase, baseDatabase_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseDatabase, baseDatabase_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      ProjectInfo() = default ;
      ProjectInfo(const ProjectInfo &) = default ;
      ProjectInfo(ProjectInfo &&) = default ;
      ProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectInfo() = default ;
      ProjectInfo& operator=(const ProjectInfo &) = default ;
      ProjectInfo& operator=(ProjectInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BaseDatabase : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaseDatabase& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        };
        friend void from_json(const Darabonba::Json& j, BaseDatabase& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        };
        BaseDatabase() = default ;
        BaseDatabase(const BaseDatabase &) = default ;
        BaseDatabase(BaseDatabase &&) = default ;
        BaseDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaseDatabase() = default ;
        BaseDatabase& operator=(const BaseDatabase &) = default ;
        BaseDatabase& operator=(BaseDatabase &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alias_ == nullptr
        && this->dbId_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->logic_ == nullptr && this->schemaName_ == nullptr
        && this->searchName_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline BaseDatabase& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
        inline BaseDatabase& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline BaseDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline BaseDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline BaseDatabase& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline BaseDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline BaseDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      protected:
        // The alias of the database instance.
        shared_ptr<string> alias_ {};
        // The database ID.
        shared_ptr<int32_t> dbId_ {};
        // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
        shared_ptr<string> dbType_ {};
        // The type of the environment in which the database instance is deployed. Valid values:
        // 
        // *   **product**: production environment.
        // *   **dev**: development environment.
        // *   **pre**: pre-release environment.
        // *   **test**: test environment.
        // *   **sit**: system integration testing (SIT) environment.
        // *   **uat**: user acceptance testing (UAT) environment.
        // *   **pet**: stress testing environment.
        // *   **stag**: staging environment.
        shared_ptr<string> envType_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> logic_ {};
        // The database name.
        shared_ptr<string> schemaName_ {};
        // The name that is used to search for the database.
        shared_ptr<string> searchName_ {};
      };

      virtual bool empty() const override { return this->baseDatabase_ == nullptr
        && this->creatorId_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->orderId_ == nullptr
        && this->projectId_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // baseDatabase Field Functions 
      bool hasBaseDatabase() const { return this->baseDatabase_ != nullptr;};
      void deleteBaseDatabase() { this->baseDatabase_ = nullptr;};
      inline const ProjectInfo::BaseDatabase & getBaseDatabase() const { DARABONBA_PTR_GET_CONST(baseDatabase_, ProjectInfo::BaseDatabase) };
      inline ProjectInfo::BaseDatabase getBaseDatabase() { DARABONBA_PTR_GET(baseDatabase_, ProjectInfo::BaseDatabase) };
      inline ProjectInfo& setBaseDatabase(const ProjectInfo::BaseDatabase & baseDatabase) { DARABONBA_PTR_SET_VALUE(baseDatabase_, baseDatabase) };
      inline ProjectInfo& setBaseDatabase(ProjectInfo::BaseDatabase && baseDatabase) { DARABONBA_PTR_SET_RVALUE(baseDatabase_, baseDatabase) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
      inline ProjectInfo& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProjectInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ProjectInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ProjectInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline ProjectInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ProjectInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProjectInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ProjectInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The information about the change base database of the schema design ticket.
      shared_ptr<ProjectInfo::BaseDatabase> baseDatabase_ {};
      // The ID of the user who created the ticket.
      shared_ptr<int64_t> creatorId_ {};
      // The description of the schema design project.
      shared_ptr<string> description_ {};
      // The time when the ticket was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the ticket was last modified.
      shared_ptr<string> gmtModified_ {};
      // The ticket ID.
      shared_ptr<int64_t> orderId_ {};
      // The project ID.
      shared_ptr<int64_t> projectId_ {};
      // The state of the schema design project. Valid values:
      // 
      // *   **DESIGN**: The schema is being designed.
      // *   **PUBLISHED**: The schema is published.
      // *   **CLOSE**: The ticket is closed.
      shared_ptr<string> status_ {};
      // The name of the schema design project.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->projectInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTableDesignProjectInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTableDesignProjectInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // projectInfo Field Functions 
    bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
    void deleteProjectInfo() { this->projectInfo_ = nullptr;};
    inline const GetTableDesignProjectInfoResponseBody::ProjectInfo & getProjectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, GetTableDesignProjectInfoResponseBody::ProjectInfo) };
    inline GetTableDesignProjectInfoResponseBody::ProjectInfo getProjectInfo() { DARABONBA_PTR_GET(projectInfo_, GetTableDesignProjectInfoResponseBody::ProjectInfo) };
    inline GetTableDesignProjectInfoResponseBody& setProjectInfo(const GetTableDesignProjectInfoResponseBody::ProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
    inline GetTableDesignProjectInfoResponseBody& setProjectInfo(GetTableDesignProjectInfoResponseBody::ProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableDesignProjectInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableDesignProjectInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The information about the schema design project.
    shared_ptr<GetTableDesignProjectInfoResponseBody::ProjectInfo> projectInfo_ {};
    // The request ID. You can use the request ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
