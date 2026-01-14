// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHARESTOUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHARESTOUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QuerySharesToUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySharesToUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySharesToUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySharesToUserListResponseBody() = default ;
    QuerySharesToUserListResponseBody(const QuerySharesToUserListResponseBody &) = default ;
    QuerySharesToUserListResponseBody(QuerySharesToUserListResponseBody &&) = default ;
    QuerySharesToUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySharesToUserListResponseBody() = default ;
    QuerySharesToUserListResponseBody& operator=(const QuerySharesToUserListResponseBody &) = default ;
    QuerySharesToUserListResponseBody& operator=(QuerySharesToUserListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(ModifyName, modifyName_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
        DARABONBA_PTR_TO_JSON(WorkName, workName_);
        DARABONBA_PTR_TO_JSON(WorkType, workType_);
        DARABONBA_PTR_TO_JSON(WorksId, worksId_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(ModifyName, modifyName_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
        DARABONBA_PTR_FROM_JSON(WorkName, workName_);
        DARABONBA_PTR_FROM_JSON(WorkType, workType_);
        DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Directory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Directory& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PathId, pathId_);
          DARABONBA_PTR_TO_JSON(PathName, pathName_);
        };
        friend void from_json(const Darabonba::Json& j, Directory& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PathId, pathId_);
          DARABONBA_PTR_FROM_JSON(PathName, pathName_);
        };
        Directory() = default ;
        Directory(const Directory &) = default ;
        Directory(Directory &&) = default ;
        Directory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Directory() = default ;
        Directory& operator=(const Directory &) = default ;
        Directory& operator=(Directory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->pathId_ == nullptr && this->pathName_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Directory& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Directory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pathId Field Functions 
        bool hasPathId() const { return this->pathId_ != nullptr;};
        void deletePathId() { this->pathId_ = nullptr;};
        inline string getPathId() const { DARABONBA_PTR_GET_DEFAULT(pathId_, "") };
        inline Directory& setPathId(string pathId) { DARABONBA_PTR_SET_VALUE(pathId_, pathId) };


        // pathName Field Functions 
        bool hasPathName() const { return this->pathName_ != nullptr;};
        void deletePathName() { this->pathName_ = nullptr;};
        inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
        inline Directory& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


      protected:
        // The ID of the directory where the resource is located.
        shared_ptr<string> id_ {};
        // The name of the resource.
        shared_ptr<string> name_ {};
        // The path ID of the directory where the resource is located.
        shared_ptr<string> pathId_ {};
        // The path name of the directory where the resource is located.
        shared_ptr<string> pathName_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->directory_ == nullptr && this->modifyName_ == nullptr && this->modifyTime_ == nullptr && this->ownerId_ == nullptr
        && this->ownerName_ == nullptr && this->securityLevel_ == nullptr && this->status_ == nullptr && this->thirdPartAuthFlag_ == nullptr && this->workName_ == nullptr
        && this->workType_ == nullptr && this->worksId_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline const Result::Directory & getDirectory() const { DARABONBA_PTR_GET_CONST(directory_, Result::Directory) };
      inline Result::Directory getDirectory() { DARABONBA_PTR_GET(directory_, Result::Directory) };
      inline Result& setDirectory(const Result::Directory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
      inline Result& setDirectory(Result::Directory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


      // modifyName Field Functions 
      bool hasModifyName() const { return this->modifyName_ != nullptr;};
      void deleteModifyName() { this->modifyName_ = nullptr;};
      inline string getModifyName() const { DARABONBA_PTR_GET_DEFAULT(modifyName_, "") };
      inline Result& setModifyName(string modifyName) { DARABONBA_PTR_SET_VALUE(modifyName_, modifyName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Result& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Result& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline Result& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // securityLevel Field Functions 
      bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
      void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
      inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
      inline Result& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thirdPartAuthFlag Field Functions 
      bool hasThirdPartAuthFlag() const { return this->thirdPartAuthFlag_ != nullptr;};
      void deleteThirdPartAuthFlag() { this->thirdPartAuthFlag_ = nullptr;};
      inline int32_t getThirdPartAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(thirdPartAuthFlag_, 0) };
      inline Result& setThirdPartAuthFlag(int32_t thirdPartAuthFlag) { DARABONBA_PTR_SET_VALUE(thirdPartAuthFlag_, thirdPartAuthFlag) };


      // workName Field Functions 
      bool hasWorkName() const { return this->workName_ != nullptr;};
      void deleteWorkName() { this->workName_ = nullptr;};
      inline string getWorkName() const { DARABONBA_PTR_GET_DEFAULT(workName_, "") };
      inline Result& setWorkName(string workName) { DARABONBA_PTR_SET_VALUE(workName_, workName) };


      // workType Field Functions 
      bool hasWorkType() const { return this->workType_ != nullptr;};
      void deleteWorkType() { this->workType_ = nullptr;};
      inline string getWorkType() const { DARABONBA_PTR_GET_DEFAULT(workType_, "") };
      inline Result& setWorkType(string workType) { DARABONBA_PTR_SET_VALUE(workType_, workType) };


      // worksId Field Functions 
      bool hasWorksId() const { return this->worksId_ != nullptr;};
      void deleteWorksId() { this->worksId_ = nullptr;};
      inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
      inline Result& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Result& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      // The timestamp of the creation time in milliseconds.
      shared_ptr<string> createTime_ {};
      // Remarks on the work.
      shared_ptr<string> description_ {};
      // Information about the directory where the work is located.
      shared_ptr<Result::Directory> directory_ {};
      // The name of the Alibaba Cloud account to which the modifier belongs.
      shared_ptr<string> modifyName_ {};
      // The timestamp of the modification time in milliseconds.
      shared_ptr<string> modifyTime_ {};
      // The UserID of the work owner in Quickbi.
      shared_ptr<string> ownerId_ {};
      // The Alibaba Cloud account name of the work owner.
      shared_ptr<string> ownerName_ {};
      // Security policies for collaborative authorization of works. Valid values:
      // 
      // *   0: private
      // *   12: Authorize specified members
      // *   1 or 11: Authorize all workspace members
      // 
      // > 
      // 
      // *   If you use legacy permissions, the return value is 1.
      // 
      // *   If you use the new permissions, the return value is 11.
      shared_ptr<string> securityLevel_ {};
      // The publishing status of the report. Valid values:
      // 
      // *   0: unpublished
      // *   1: published
      // *   2: modified but not published
      // *   3: unpublished
      shared_ptr<int32_t> status_ {};
      // Third-party embedding status. Valid values:
      // 
      // *   0: No embedding is enabled.
      // *   1: Embed is enabled.
      shared_ptr<int32_t> thirdPartAuthFlag_ {};
      // The name of the report.
      shared_ptr<string> workName_ {};
      // The type of the work. Valid values:
      // 
      // *   DATAPRODUCT: BI portal
      // *   PAGE: Dashboard
      // *   FULLPAGE: full-screen dashboards
      // *   REPORT: workbook
      // *   dashboardOfflineQuery: self-service data retrieval
      shared_ptr<string> workType_ {};
      // The ID of the operations report.
      shared_ptr<string> worksId_ {};
      // The ID of the workspace to which the report belongs.
      shared_ptr<string> workspaceId_ {};
      // The name of the workspace to which the report belongs.
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySharesToUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QuerySharesToUserListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QuerySharesToUserListResponseBody::Result>) };
    inline vector<QuerySharesToUserListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QuerySharesToUserListResponseBody::Result>) };
    inline QuerySharesToUserListResponseBody& setResult(const vector<QuerySharesToUserListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QuerySharesToUserListResponseBody& setResult(vector<QuerySharesToUserListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySharesToUserListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Returns a list of works authorized to the user.
    shared_ptr<vector<QuerySharesToUserListResponseBody::Result>> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
