// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDV2RESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDV2RESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReadableResourcesListByUserIdV2ResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReadableResourcesListByUserIdV2ResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryReadableResourcesListByUserIdV2ResponseBodyResult& obj) { 
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
    QueryReadableResourcesListByUserIdV2ResponseBodyResult() = default ;
    QueryReadableResourcesListByUserIdV2ResponseBodyResult(const QueryReadableResourcesListByUserIdV2ResponseBodyResult &) = default ;
    QueryReadableResourcesListByUserIdV2ResponseBodyResult(QueryReadableResourcesListByUserIdV2ResponseBodyResult &&) = default ;
    QueryReadableResourcesListByUserIdV2ResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReadableResourcesListByUserIdV2ResponseBodyResult() = default ;
    QueryReadableResourcesListByUserIdV2ResponseBodyResult& operator=(const QueryReadableResourcesListByUserIdV2ResponseBodyResult &) = default ;
    QueryReadableResourcesListByUserIdV2ResponseBodyResult& operator=(QueryReadableResourcesListByUserIdV2ResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->directory_ != nullptr && this->modifyName_ != nullptr && this->modifyTime_ != nullptr && this->ownerId_ != nullptr
        && this->ownerName_ != nullptr && this->securityLevel_ != nullptr && this->status_ != nullptr && this->thirdPartAuthFlag_ != nullptr && this->workName_ != nullptr
        && this->workType_ != nullptr && this->worksId_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const Models::QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory & directory() const { DARABONBA_PTR_GET_CONST(directory_, Models::QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory) };
    inline Models::QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory directory() { DARABONBA_PTR_GET(directory_, Models::QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory) };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setDirectory(const Models::QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setDirectory(Models::QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // modifyName Field Functions 
    bool hasModifyName() const { return this->modifyName_ != nullptr;};
    void deleteModifyName() { this->modifyName_ = nullptr;};
    inline string modifyName() const { DARABONBA_PTR_GET_DEFAULT(modifyName_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setModifyName(string modifyName) { DARABONBA_PTR_SET_VALUE(modifyName_, modifyName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartAuthFlag Field Functions 
    bool hasThirdPartAuthFlag() const { return this->thirdPartAuthFlag_ != nullptr;};
    void deleteThirdPartAuthFlag() { this->thirdPartAuthFlag_ = nullptr;};
    inline int32_t thirdPartAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(thirdPartAuthFlag_, 0) };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setThirdPartAuthFlag(int32_t thirdPartAuthFlag) { DARABONBA_PTR_SET_VALUE(thirdPartAuthFlag_, thirdPartAuthFlag) };


    // workName Field Functions 
    bool hasWorkName() const { return this->workName_ != nullptr;};
    void deleteWorkName() { this->workName_ = nullptr;};
    inline string workName() const { DARABONBA_PTR_GET_DEFAULT(workName_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setWorkName(string workName) { DARABONBA_PTR_SET_VALUE(workName_, workName) };


    // workType Field Functions 
    bool hasWorkType() const { return this->workType_ != nullptr;};
    void deleteWorkType() { this->workType_ = nullptr;};
    inline string workType() const { DARABONBA_PTR_GET_DEFAULT(workType_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setWorkType(string workType) { DARABONBA_PTR_SET_VALUE(workType_, workType) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryReadableResourcesListByUserIdV2ResponseBodyResult& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Timestamp of creation in milliseconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // Work remarks.
    std::shared_ptr<string> description_ = nullptr;
    // The directory structure where the work is located.
    std::shared_ptr<Models::QueryReadableResourcesListByUserIdV2ResponseBodyResultDirectory> directory_ = nullptr;
    // Alibaba Cloud account name of the modifier.
    std::shared_ptr<string> modifyName_ = nullptr;
    // Timestamp of the last modification in milliseconds.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The UserID of the work owner in Quick BI.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Alibaba Cloud account name of the owner.
    std::shared_ptr<string> ownerName_ = nullptr;
    // Security policy for collaborative work. Values: - 0: Private - 12: Authorize specific members - 1 or 11: Authorize all space members
    // >- If you are using the old version of permissions, the return value is 1. - If you are using the new version of permissions, the return value is 11.
    std::shared_ptr<string> securityLevel_ = nullptr;
    // Report status. Possible values:
    // - 0: Unpublished
    // - 1: Published
    // - 2: Modified but not published
    // - 3: Offline
    std::shared_ptr<int32_t> status_ = nullptr;
    // Third-party embedding status. Possible values:
    // - 0: Embedding not enabled
    // - 1: Embedding enabled
    std::shared_ptr<int32_t> thirdPartAuthFlag_ = nullptr;
    // The name of the work.
    std::shared_ptr<string> workName_ = nullptr;
    // Work type. Possible values:
    // - DATAPRODUCT: Data Portal
    // - PAGE: Dashboard
    // - REPORT: Spreadsheet
    // - dashboardOfflineQuery: Self-service Data Extraction
    // - SCREEN: Data Wall
    // - DATAFORM: Data Entry
    // - ANALYSIS: Ad-hoc Analysis
    std::shared_ptr<string> workType_ = nullptr;
    // The ID of the work.
    std::shared_ptr<string> worksId_ = nullptr;
    // ID of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
