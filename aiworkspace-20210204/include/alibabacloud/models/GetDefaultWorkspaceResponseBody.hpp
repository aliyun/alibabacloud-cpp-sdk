// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDefaultWorkspaceResponseBodyConditions.hpp>
#include <alibabacloud/models/GetDefaultWorkspaceResponseBodyOwner.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDefaultWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    GetDefaultWorkspaceResponseBody() = default ;
    GetDefaultWorkspaceResponseBody(const GetDefaultWorkspaceResponseBody &) = default ;
    GetDefaultWorkspaceResponseBody(GetDefaultWorkspaceResponseBody &&) = default ;
    GetDefaultWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultWorkspaceResponseBody() = default ;
    GetDefaultWorkspaceResponseBody& operator=(const GetDefaultWorkspaceResponseBody &) = default ;
    GetDefaultWorkspaceResponseBody& operator=(GetDefaultWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->creator_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->envTypes_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtModifiedTime_ == nullptr && return this->owner_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->workspaceId_ == nullptr
        && return this->workspaceName_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<GetDefaultWorkspaceResponseBodyConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<GetDefaultWorkspaceResponseBodyConditions>) };
    inline vector<GetDefaultWorkspaceResponseBodyConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<GetDefaultWorkspaceResponseBodyConditions>) };
    inline GetDefaultWorkspaceResponseBody& setConditions(const vector<GetDefaultWorkspaceResponseBodyConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GetDefaultWorkspaceResponseBody& setConditions(vector<GetDefaultWorkspaceResponseBodyConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetDefaultWorkspaceResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDefaultWorkspaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetDefaultWorkspaceResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envTypes Field Functions 
    bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
    void deleteEnvTypes() { this->envTypes_ = nullptr;};
    inline const vector<string> & envTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
    inline vector<string> envTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
    inline GetDefaultWorkspaceResponseBody& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
    inline GetDefaultWorkspaceResponseBody& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetDefaultWorkspaceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetDefaultWorkspaceResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const GetDefaultWorkspaceResponseBodyOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, GetDefaultWorkspaceResponseBodyOwner) };
    inline GetDefaultWorkspaceResponseBodyOwner owner() { DARABONBA_PTR_GET(owner_, GetDefaultWorkspaceResponseBodyOwner) };
    inline GetDefaultWorkspaceResponseBody& setOwner(const GetDefaultWorkspaceResponseBodyOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline GetDefaultWorkspaceResponseBody& setOwner(GetDefaultWorkspaceResponseBodyOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDefaultWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDefaultWorkspaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDefaultWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetDefaultWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The conditions of the default workspace in the creation process.
    std::shared_ptr<vector<GetDefaultWorkspaceResponseBodyConditions>> conditions_ = nullptr;
    // The UID of the Alibaba Cloud account.
    std::shared_ptr<string> creator_ = nullptr;
    // The workspace description.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the workspace.
    std::shared_ptr<string> displayName_ = nullptr;
    // The environments of the workspace. Valid values:
    // 
    // *   Workspaces in basic mode can run only in the production environment.
    // *   Workspaces in standard mode can run in both the development and production environments.
    std::shared_ptr<vector<string>> envTypes_ = nullptr;
    // The time when the workspace was created, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the workspace was modified, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The UID of the Alibaba Cloud account.
    std::shared_ptr<GetDefaultWorkspaceResponseBodyOwner> owner_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The workspace status. Valid values:
    // 
    // *   ENABLED
    // *   INITIALIZING
    // *   FAILURE
    // *   DISABLED
    // *   FROZEN
    // *   UPDATING
    std::shared_ptr<string> status_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The workspace name, which is unique in a region.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
