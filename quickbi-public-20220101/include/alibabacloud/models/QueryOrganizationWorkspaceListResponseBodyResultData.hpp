// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGANIZATIONWORKSPACELISTRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGANIZATIONWORKSPACELISTRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryOrganizationWorkspaceListResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrganizationWorkspaceListResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(AllowPublishOperation, allowPublishOperation_);
      DARABONBA_PTR_TO_JSON(AllowShareOperation, allowShareOperation_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(CreateUserAccountName, createUserAccountName_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(ModifyUserAccountName, modifyUserAccountName_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerAccountName, ownerAccountName_);
      DARABONBA_PTR_TO_JSON(WorkspaceDescription, workspaceDescription_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrganizationWorkspaceListResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowPublishOperation, allowPublishOperation_);
      DARABONBA_PTR_FROM_JSON(AllowShareOperation, allowShareOperation_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(CreateUserAccountName, createUserAccountName_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(ModifyUserAccountName, modifyUserAccountName_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountName, ownerAccountName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceDescription, workspaceDescription_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    QueryOrganizationWorkspaceListResponseBodyResultData() = default ;
    QueryOrganizationWorkspaceListResponseBodyResultData(const QueryOrganizationWorkspaceListResponseBodyResultData &) = default ;
    QueryOrganizationWorkspaceListResponseBodyResultData(QueryOrganizationWorkspaceListResponseBodyResultData &&) = default ;
    QueryOrganizationWorkspaceListResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrganizationWorkspaceListResponseBodyResultData() = default ;
    QueryOrganizationWorkspaceListResponseBodyResultData& operator=(const QueryOrganizationWorkspaceListResponseBodyResultData &) = default ;
    QueryOrganizationWorkspaceListResponseBodyResultData& operator=(QueryOrganizationWorkspaceListResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowPublishOperation_ != nullptr
        && this->allowShareOperation_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr && this->createUserAccountName_ != nullptr && this->modifiedTime_ != nullptr
        && this->modifyUser_ != nullptr && this->modifyUserAccountName_ != nullptr && this->organizationId_ != nullptr && this->owner_ != nullptr && this->ownerAccountName_ != nullptr
        && this->workspaceDescription_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // allowPublishOperation Field Functions 
    bool hasAllowPublishOperation() const { return this->allowPublishOperation_ != nullptr;};
    void deleteAllowPublishOperation() { this->allowPublishOperation_ = nullptr;};
    inline bool allowPublishOperation() const { DARABONBA_PTR_GET_DEFAULT(allowPublishOperation_, false) };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setAllowPublishOperation(bool allowPublishOperation) { DARABONBA_PTR_SET_VALUE(allowPublishOperation_, allowPublishOperation) };


    // allowShareOperation Field Functions 
    bool hasAllowShareOperation() const { return this->allowShareOperation_ != nullptr;};
    void deleteAllowShareOperation() { this->allowShareOperation_ = nullptr;};
    inline bool allowShareOperation() const { DARABONBA_PTR_GET_DEFAULT(allowShareOperation_, false) };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setAllowShareOperation(bool allowShareOperation) { DARABONBA_PTR_SET_VALUE(allowShareOperation_, allowShareOperation) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // createUserAccountName Field Functions 
    bool hasCreateUserAccountName() const { return this->createUserAccountName_ != nullptr;};
    void deleteCreateUserAccountName() { this->createUserAccountName_ = nullptr;};
    inline string createUserAccountName() const { DARABONBA_PTR_GET_DEFAULT(createUserAccountName_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setCreateUserAccountName(string createUserAccountName) { DARABONBA_PTR_SET_VALUE(createUserAccountName_, createUserAccountName) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // modifyUserAccountName Field Functions 
    bool hasModifyUserAccountName() const { return this->modifyUserAccountName_ != nullptr;};
    void deleteModifyUserAccountName() { this->modifyUserAccountName_ = nullptr;};
    inline string modifyUserAccountName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserAccountName_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setModifyUserAccountName(string modifyUserAccountName) { DARABONBA_PTR_SET_VALUE(modifyUserAccountName_, modifyUserAccountName) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerAccountName Field Functions 
    bool hasOwnerAccountName() const { return this->ownerAccountName_ != nullptr;};
    void deleteOwnerAccountName() { this->ownerAccountName_ = nullptr;};
    inline string ownerAccountName() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountName_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setOwnerAccountName(string ownerAccountName) { DARABONBA_PTR_SET_VALUE(ownerAccountName_, ownerAccountName) };


    // workspaceDescription Field Functions 
    bool hasWorkspaceDescription() const { return this->workspaceDescription_ != nullptr;};
    void deleteWorkspaceDescription() { this->workspaceDescription_ = nullptr;};
    inline string workspaceDescription() const { DARABONBA_PTR_GET_DEFAULT(workspaceDescription_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setWorkspaceDescription(string workspaceDescription) { DARABONBA_PTR_SET_VALUE(workspaceDescription_, workspaceDescription) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryOrganizationWorkspaceListResponseBodyResultData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Whether the work can be made public. Value range:
    // 
    // - true: Public
    // - false: Not public
    std::shared_ptr<bool> allowPublishOperation_ = nullptr;
    // Indicates whether the work can be authorized for sharing. Possible values:
    // 
    // - true: Authorized
    // - false: Not authorized
    std::shared_ptr<bool> allowShareOperation_ = nullptr;
    // Creation time of the workspace.
    std::shared_ptr<string> createTime_ = nullptr;
    // Quick BI user ID of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // Aliyun account name of the creator.
    std::shared_ptr<string> createUserAccountName_ = nullptr;
    // Last modified time of the workspace.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // ID of the Quick BI user who modified the workspace.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // Aliyun account name of the modifier.
    std::shared_ptr<string> modifyUserAccountName_ = nullptr;
    // ID of the organization to which the workspace belongs.
    std::shared_ptr<string> organizationId_ = nullptr;
    // Quick BI user ID of the workspace owner.
    std::shared_ptr<string> owner_ = nullptr;
    // Aliyun account name of the workspace owner.
    std::shared_ptr<string> ownerAccountName_ = nullptr;
    // Workspace description.
    std::shared_ptr<string> workspaceDescription_ = nullptr;
    // Workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // Name of the workspace.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
