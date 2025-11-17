// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryWorksResponseBodyResultDirectory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Auth3rdFlag, auth3rdFlag_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_TO_JSON(ModifyName, modifyName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(PublicFlag, publicFlag_);
      DARABONBA_PTR_TO_JSON(PublicInvalidTime, publicInvalidTime_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkName, workName_);
      DARABONBA_PTR_TO_JSON(WorkType, workType_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Auth3rdFlag, auth3rdFlag_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(ModifyName, modifyName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(PublicFlag, publicFlag_);
      DARABONBA_PTR_FROM_JSON(PublicInvalidTime, publicInvalidTime_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkName, workName_);
      DARABONBA_PTR_FROM_JSON(WorkType, workType_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    QueryWorksResponseBodyResult() = default ;
    QueryWorksResponseBodyResult(const QueryWorksResponseBodyResult &) = default ;
    QueryWorksResponseBodyResult(QueryWorksResponseBodyResult &&) = default ;
    QueryWorksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorksResponseBodyResult() = default ;
    QueryWorksResponseBodyResult& operator=(const QueryWorksResponseBodyResult &) = default ;
    QueryWorksResponseBodyResult& operator=(QueryWorksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auth3rdFlag_ == nullptr
        && return this->description_ == nullptr && return this->directory_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModify_ == nullptr && return this->modifyName_ == nullptr
        && return this->ownerId_ == nullptr && return this->ownerName_ == nullptr && return this->publicFlag_ == nullptr && return this->publicInvalidTime_ == nullptr && return this->securityLevel_ == nullptr
        && return this->status_ == nullptr && return this->workName_ == nullptr && return this->workType_ == nullptr && return this->worksId_ == nullptr && return this->workspaceId_ == nullptr
        && return this->workspaceName_ == nullptr; };
    // auth3rdFlag Field Functions 
    bool hasAuth3rdFlag() const { return this->auth3rdFlag_ != nullptr;};
    void deleteAuth3rdFlag() { this->auth3rdFlag_ = nullptr;};
    inline int32_t auth3rdFlag() const { DARABONBA_PTR_GET_DEFAULT(auth3rdFlag_, 0) };
    inline QueryWorksResponseBodyResult& setAuth3rdFlag(int32_t auth3rdFlag) { DARABONBA_PTR_SET_VALUE(auth3rdFlag_, auth3rdFlag) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryWorksResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const Models::QueryWorksResponseBodyResultDirectory & directory() const { DARABONBA_PTR_GET_CONST(directory_, Models::QueryWorksResponseBodyResultDirectory) };
    inline Models::QueryWorksResponseBodyResultDirectory directory() { DARABONBA_PTR_GET(directory_, Models::QueryWorksResponseBodyResultDirectory) };
    inline QueryWorksResponseBodyResult& setDirectory(const Models::QueryWorksResponseBodyResultDirectory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline QueryWorksResponseBodyResult& setDirectory(Models::QueryWorksResponseBodyResultDirectory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryWorksResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline QueryWorksResponseBodyResult& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // modifyName Field Functions 
    bool hasModifyName() const { return this->modifyName_ != nullptr;};
    void deleteModifyName() { this->modifyName_ = nullptr;};
    inline string modifyName() const { DARABONBA_PTR_GET_DEFAULT(modifyName_, "") };
    inline QueryWorksResponseBodyResult& setModifyName(string modifyName) { DARABONBA_PTR_SET_VALUE(modifyName_, modifyName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline QueryWorksResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline QueryWorksResponseBodyResult& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // publicFlag Field Functions 
    bool hasPublicFlag() const { return this->publicFlag_ != nullptr;};
    void deletePublicFlag() { this->publicFlag_ = nullptr;};
    inline bool publicFlag() const { DARABONBA_PTR_GET_DEFAULT(publicFlag_, false) };
    inline QueryWorksResponseBodyResult& setPublicFlag(bool publicFlag) { DARABONBA_PTR_SET_VALUE(publicFlag_, publicFlag) };


    // publicInvalidTime Field Functions 
    bool hasPublicInvalidTime() const { return this->publicInvalidTime_ != nullptr;};
    void deletePublicInvalidTime() { this->publicInvalidTime_ = nullptr;};
    inline int64_t publicInvalidTime() const { DARABONBA_PTR_GET_DEFAULT(publicInvalidTime_, 0L) };
    inline QueryWorksResponseBodyResult& setPublicInvalidTime(int64_t publicInvalidTime) { DARABONBA_PTR_SET_VALUE(publicInvalidTime_, publicInvalidTime) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline QueryWorksResponseBodyResult& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryWorksResponseBodyResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workName Field Functions 
    bool hasWorkName() const { return this->workName_ != nullptr;};
    void deleteWorkName() { this->workName_ = nullptr;};
    inline string workName() const { DARABONBA_PTR_GET_DEFAULT(workName_, "") };
    inline QueryWorksResponseBodyResult& setWorkName(string workName) { DARABONBA_PTR_SET_VALUE(workName_, workName) };


    // workType Field Functions 
    bool hasWorkType() const { return this->workType_ != nullptr;};
    void deleteWorkType() { this->workType_ = nullptr;};
    inline string workType() const { DARABONBA_PTR_GET_DEFAULT(workType_, "") };
    inline QueryWorksResponseBodyResult& setWorkType(string workType) { DARABONBA_PTR_SET_VALUE(workType_, workType) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline QueryWorksResponseBodyResult& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryWorksResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryWorksResponseBodyResult& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Third-party embedding status. Valid values:
    // 
    // *   0: The embed service is not enabled.
    // *   1: Embed is enabled.
    std::shared_ptr<int32_t> auth3rdFlag_ = nullptr;
    // Remarks on the work.
    std::shared_ptr<string> description_ = nullptr;
    // The directory to which the work belongs.
    std::shared_ptr<Models::QueryWorksResponseBodyResultDirectory> directory_ = nullptr;
    // The timestamp of the creation of the work in milliseconds.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The timestamp of the modification of the work in milliseconds.
    std::shared_ptr<string> gmtModify_ = nullptr;
    // The Alibaba Cloud account name of the person who modified the work.
    std::shared_ptr<string> modifyName_ = nullptr;
    // The user ID of the work owner in the Quick BI.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The Alibaba Cloud account name of the work owner.
    std::shared_ptr<string> ownerName_ = nullptr;
    // Is it public
    std::shared_ptr<bool> publicFlag_ = nullptr;
    // Deadline for the public release of the report
    std::shared_ptr<int64_t> publicInvalidTime_ = nullptr;
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
    std::shared_ptr<string> securityLevel_ = nullptr;
    // The status of the report. Valid values:
    // 
    // *   0: unpublished
    // *   1: published
    // *   2: modified but not published
    // *   3: unpublished
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the work.
    std::shared_ptr<string> workName_ = nullptr;
    // Queries the types of works. Fill in the blanks to query all types. Valid values:
    // 
    // *   DATAPRODUCT: BI portal
    // *   PAGE: Dashboard
    // *   FULLPAGE: full-screen dashboards
    // *   REPORT: workbook
    // *   dashboardOfflineQuery: self-service data retrieval
    std::shared_ptr<string> workType_ = nullptr;
    // The ID of the work.
    std::shared_ptr<string> worksId_ = nullptr;
    // The ID of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
