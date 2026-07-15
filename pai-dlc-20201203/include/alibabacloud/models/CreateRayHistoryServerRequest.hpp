// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERAYHISTORYSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERAYHISTORYSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateRayHistoryServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRayHistoryServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(MaxRuntimeMinutes, maxRuntimeMinutes_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(StoragePath, storagePath_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRayHistoryServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(MaxRuntimeMinutes, maxRuntimeMinutes_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(StoragePath, storagePath_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateRayHistoryServerRequest() = default ;
    CreateRayHistoryServerRequest(const CreateRayHistoryServerRequest &) = default ;
    CreateRayHistoryServerRequest(CreateRayHistoryServerRequest &&) = default ;
    CreateRayHistoryServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRayHistoryServerRequest() = default ;
    CreateRayHistoryServerRequest& operator=(const CreateRayHistoryServerRequest &) = default ;
    CreateRayHistoryServerRequest& operator=(CreateRayHistoryServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->displayName_ == nullptr && this->ecsSpec_ == nullptr && this->maxRuntimeMinutes_ == nullptr && this->resourceId_ == nullptr && this->storagePath_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateRayHistoryServerRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateRayHistoryServerRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline CreateRayHistoryServerRequest& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // maxRuntimeMinutes Field Functions 
    bool hasMaxRuntimeMinutes() const { return this->maxRuntimeMinutes_ != nullptr;};
    void deleteMaxRuntimeMinutes() { this->maxRuntimeMinutes_ = nullptr;};
    inline int32_t getMaxRuntimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRuntimeMinutes_, 0) };
    inline CreateRayHistoryServerRequest& setMaxRuntimeMinutes(int32_t maxRuntimeMinutes) { DARABONBA_PTR_SET_VALUE(maxRuntimeMinutes_, maxRuntimeMinutes) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateRayHistoryServerRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // storagePath Field Functions 
    bool hasStoragePath() const { return this->storagePath_ != nullptr;};
    void deleteStoragePath() { this->storagePath_ = nullptr;};
    inline string getStoragePath() const { DARABONBA_PTR_GET_DEFAULT(storagePath_, "") };
    inline CreateRayHistoryServerRequest& setStoragePath(string storagePath) { DARABONBA_PTR_SET_VALUE(storagePath_, storagePath) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateRayHistoryServerRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the job. Valid values:
    // - PUBLIC: visible to all members in the workspace.
    // - PRIVATE: visible only to you and administrators in the workspace.
    shared_ptr<string> accessibility_ {};
    // The display name of the job.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The hardware specifications of the public resource group. To access the detailed list of specifications, see [PAI-DLC billing](https://help.aliyun.com/document_detail/171758.html).>Notice: Prices vary depending on the specifications..
    shared_ptr<string> ecsSpec_ {};
    // The maximum runtime in minutes.
    shared_ptr<int32_t> maxRuntimeMinutes_ {};
    // The resource group ID. This parameter is optional.
    // - If this parameter is left empty, the job is committed to the public resource group.
    // - If the current workspace is attached to a resource quota, you can specify the corresponding resource quota ID. For details about how to query the resource quota ID, see [Manage resource quotas](https://help.aliyun.com/document_detail/2651299.html).
    shared_ptr<string> resourceId_ {};
    // The storage path for Ray logs.
    // 
    // This parameter is required.
    shared_ptr<string> storagePath_ {};
    // The workspace ID. <props="china">For information about how to obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html)..
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
