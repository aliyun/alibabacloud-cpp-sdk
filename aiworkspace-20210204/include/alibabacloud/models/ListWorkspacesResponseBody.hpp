// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
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
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(ResourceLimits, resourceLimits_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(ResourceLimits, resourceLimits_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Workspaces, workspaces_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workspaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workspaces& obj) { 
        DARABONBA_PTR_TO_JSON(AdminNames, adminNames_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
        DARABONBA_ANY_TO_JSON(ExtraInfos, extraInfos_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Workspaces& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminNames, adminNames_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
        DARABONBA_ANY_FROM_JSON(ExtraInfos, extraInfos_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      };
      Workspaces() = default ;
      Workspaces(const Workspaces &) = default ;
      Workspaces(Workspaces &&) = default ;
      Workspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workspaces() = default ;
      Workspaces& operator=(const Workspaces &) = default ;
      Workspaces& operator=(Workspaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adminNames_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->envTypes_ == nullptr && this->extraInfos_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->isDefault_ == nullptr && this->status_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr
        && this->resourceGroupId_ == nullptr; };
      // adminNames Field Functions 
      bool hasAdminNames() const { return this->adminNames_ != nullptr;};
      void deleteAdminNames() { this->adminNames_ = nullptr;};
      inline const vector<string> & getAdminNames() const { DARABONBA_PTR_GET_CONST(adminNames_, vector<string>) };
      inline vector<string> getAdminNames() { DARABONBA_PTR_GET(adminNames_, vector<string>) };
      inline Workspaces& setAdminNames(const vector<string> & adminNames) { DARABONBA_PTR_SET_VALUE(adminNames_, adminNames) };
      inline Workspaces& setAdminNames(vector<string> && adminNames) { DARABONBA_PTR_SET_RVALUE(adminNames_, adminNames) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Workspaces& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Workspaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // envTypes Field Functions 
      bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
      void deleteEnvTypes() { this->envTypes_ = nullptr;};
      inline const vector<string> & getEnvTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
      inline vector<string> getEnvTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
      inline Workspaces& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
      inline Workspaces& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


      // extraInfos Field Functions 
      bool hasExtraInfos() const { return this->extraInfos_ != nullptr;};
      void deleteExtraInfos() { this->extraInfos_ = nullptr;};
      inline       const Darabonba::Json & getExtraInfos() const { DARABONBA_GET(extraInfos_) };
      Darabonba::Json & getExtraInfos() { DARABONBA_GET(extraInfos_) };
      inline Workspaces& setExtraInfos(const Darabonba::Json & extraInfos) { DARABONBA_SET_VALUE(extraInfos_, extraInfos) };
      inline Workspaces& setExtraInfos(Darabonba::Json && extraInfos) { DARABONBA_SET_RVALUE(extraInfos_, extraInfos) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Workspaces& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Workspaces& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Workspaces& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Workspaces& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Workspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Workspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Workspaces& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // The names of the administrator accounts.
      shared_ptr<vector<string>> adminNames_ {};
      // The user ID of the creator.
      shared_ptr<string> creator_ {};
      // The description of the workspace.
      shared_ptr<string> description_ {};
      // The environment types of the workspace.
      shared_ptr<vector<string>> envTypes_ {};
      // the additional information. Only contains TenantId.
      Darabonba::Json extraInfos_ {};
      // The time when the workspace was created. The time (UTC+0) follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ss.SSSZ format.
      shared_ptr<string> gmtCreateTime_ {};
      // The time when the workspace was modified. The time (UTC+0) follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ss.SSSZ format.
      shared_ptr<string> gmtModifiedTime_ {};
      // Indicates whether the workspace is the default workspace.
      shared_ptr<bool> isDefault_ {};
      // The status of the workspace.
      shared_ptr<string> status_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
      // The name of the workspace.
      shared_ptr<string> workspaceName_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceLimits_ == nullptr && this->totalCount_ == nullptr && this->workspaces_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceLimits Field Functions 
    bool hasResourceLimits() const { return this->resourceLimits_ != nullptr;};
    void deleteResourceLimits() { this->resourceLimits_ = nullptr;};
    inline     const Darabonba::Json & getResourceLimits() const { DARABONBA_GET(resourceLimits_) };
    Darabonba::Json & getResourceLimits() { DARABONBA_GET(resourceLimits_) };
    inline ListWorkspacesResponseBody& setResourceLimits(const Darabonba::Json & resourceLimits) { DARABONBA_SET_VALUE(resourceLimits_, resourceLimits) };
    inline ListWorkspacesResponseBody& setResourceLimits(Darabonba::Json && resourceLimits) { DARABONBA_SET_RVALUE(resourceLimits_, resourceLimits) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWorkspacesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<ListWorkspacesResponseBody::Workspaces> & getWorkspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline vector<ListWorkspacesResponseBody::Workspaces> getWorkspaces() { DARABONBA_PTR_GET(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline ListWorkspacesResponseBody& setWorkspaces(const vector<ListWorkspacesResponseBody::Workspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline ListWorkspacesResponseBody& setWorkspaces(vector<ListWorkspacesResponseBody::Workspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The type and quantity of resources that can be activated in a workspace. This list is returned when the Option is set to GetResourceLimits. Valid values:
    // 
    // *   MaxCompute_share: pay-as-you-go MaxCompute
    // *   MaxCompute_isolate: subscription MaxCompute
    // *   DLC_share: pay-as-you-go DLC
    // *   PAI_Isolate: subscription PAI
    // *   PAI_share: pay-as-you-go PAI
    // *   DataWorks_isolate: subscription DataWorks
    // *   DataWorks_share: pay-as-you-go DataWorks
    Darabonba::Json resourceLimits_ {};
    // The number of workspaces that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
    // The list of workspace details. This list is returned when Option is set to GetWorkspaces.
    shared_ptr<vector<ListWorkspacesResponseBody::Workspaces>> workspaces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
