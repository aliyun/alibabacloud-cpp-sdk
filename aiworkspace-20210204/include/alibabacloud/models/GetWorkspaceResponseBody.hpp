// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminNames, adminNames_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
      DARABONBA_ANY_TO_JSON(ExtraInfos, extraInfos_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminNames, adminNames_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
      DARABONBA_ANY_FROM_JSON(ExtraInfos, extraInfos_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    GetWorkspaceResponseBody() = default ;
    GetWorkspaceResponseBody(const GetWorkspaceResponseBody &) = default ;
    GetWorkspaceResponseBody(GetWorkspaceResponseBody &&) = default ;
    GetWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceResponseBody() = default ;
    GetWorkspaceResponseBody& operator=(const GetWorkspaceResponseBody &) = default ;
    GetWorkspaceResponseBody& operator=(GetWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Owner : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Owner& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserKp, userKp_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Owner& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserKp, userKp_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Owner() = default ;
      Owner(const Owner &) = default ;
      Owner(Owner &&) = default ;
      Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Owner() = default ;
      Owner& operator=(const Owner &) = default ;
      Owner& operator=(Owner &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr && this->userKp_ == nullptr && this->userName_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Owner& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Owner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userKp Field Functions 
      bool hasUserKp() const { return this->userKp_ != nullptr;};
      void deleteUserKp() { this->userKp_ = nullptr;};
      inline string getUserKp() const { DARABONBA_PTR_GET_DEFAULT(userKp_, "") };
      inline Owner& setUserKp(string userKp) { DARABONBA_PTR_SET_VALUE(userKp_, userKp) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Owner& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The display name.
      shared_ptr<string> displayName_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The user ID.
      shared_ptr<string> userKp_ {};
      // The username.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->adminNames_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->envTypes_ == nullptr && this->extraInfos_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->isDefault_ == nullptr && this->owner_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
    // adminNames Field Functions 
    bool hasAdminNames() const { return this->adminNames_ != nullptr;};
    void deleteAdminNames() { this->adminNames_ = nullptr;};
    inline const vector<string> & getAdminNames() const { DARABONBA_PTR_GET_CONST(adminNames_, vector<string>) };
    inline vector<string> getAdminNames() { DARABONBA_PTR_GET(adminNames_, vector<string>) };
    inline GetWorkspaceResponseBody& setAdminNames(const vector<string> & adminNames) { DARABONBA_PTR_SET_VALUE(adminNames_, adminNames) };
    inline GetWorkspaceResponseBody& setAdminNames(vector<string> && adminNames) { DARABONBA_PTR_SET_RVALUE(adminNames_, adminNames) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetWorkspaceResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkspaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetWorkspaceResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envTypes Field Functions 
    bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
    void deleteEnvTypes() { this->envTypes_ = nullptr;};
    inline const vector<string> & getEnvTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
    inline vector<string> getEnvTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
    inline GetWorkspaceResponseBody& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
    inline GetWorkspaceResponseBody& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


    // extraInfos Field Functions 
    bool hasExtraInfos() const { return this->extraInfos_ != nullptr;};
    void deleteExtraInfos() { this->extraInfos_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfos() const { DARABONBA_GET(extraInfos_) };
    Darabonba::Json & getExtraInfos() { DARABONBA_GET(extraInfos_) };
    inline GetWorkspaceResponseBody& setExtraInfos(const Darabonba::Json & extraInfos) { DARABONBA_SET_VALUE(extraInfos_, extraInfos) };
    inline GetWorkspaceResponseBody& setExtraInfos(Darabonba::Json && extraInfos) { DARABONBA_SET_RVALUE(extraInfos_, extraInfos) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetWorkspaceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetWorkspaceResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline GetWorkspaceResponseBody& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const GetWorkspaceResponseBody::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, GetWorkspaceResponseBody::Owner) };
    inline GetWorkspaceResponseBody::Owner getOwner() { DARABONBA_PTR_GET(owner_, GetWorkspaceResponseBody::Owner) };
    inline GetWorkspaceResponseBody& setOwner(const GetWorkspaceResponseBody::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline GetWorkspaceResponseBody& setOwner(GetWorkspaceResponseBody::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetWorkspaceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkspaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The names of the administrator accounts.
    shared_ptr<vector<string>> adminNames_ {};
    // The ID of the user who creates the workspace.
    shared_ptr<string> creator_ {};
    // The description of the workspace.
    shared_ptr<string> description_ {};
    // The display name of the workspace.
    shared_ptr<string> displayName_ {};
    // The environment information of the workspace.
    // 
    // *   Workspaces in basic mode can run only in the production environment.
    // *   Workspaces in standard mode can run in both the development and production environments.
    shared_ptr<vector<string>> envTypes_ {};
    // The additional information, which only contains the TenantId field.
    Darabonba::Json extraInfos_ {};
    // The time when the workspace is created, in UTC. The time follows the ISO 8601 standard.
    shared_ptr<string> gmtCreateTime_ {};
    // The time when the workspace is modified, in UTC. The time follows the ISO 8601 standard.
    shared_ptr<string> gmtModifiedTime_ {};
    // Indicates whether the workspace is the default workspace. Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<bool> isDefault_ {};
    // The information about the workspace owner. This parameter is valid only when Verbose is set to true.
    shared_ptr<GetWorkspaceResponseBody::Owner> owner_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The workspace state. Valid values:
    // 
    // *   ENABLED
    // *   INITIALIZING
    // *   FAILURE:
    // *   DISABLED
    // *   FROZEN
    // *   UPDATING
    shared_ptr<string> status_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The name of the workspace.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
