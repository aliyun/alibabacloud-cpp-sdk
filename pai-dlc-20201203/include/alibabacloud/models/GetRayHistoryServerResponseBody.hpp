// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRAYHISTORYSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRAYHISTORYSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetRayHistoryServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRayHistoryServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(MaxRuntimeMinutes, maxRuntimeMinutes_);
      DARABONBA_PTR_TO_JSON(RayHistoryServerId, rayHistoryServerId_);
      DARABONBA_PTR_TO_JSON(RayHistoryServerUrl, rayHistoryServerUrl_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoragePath, storagePath_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRayHistoryServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(MaxRuntimeMinutes, maxRuntimeMinutes_);
      DARABONBA_PTR_FROM_JSON(RayHistoryServerId, rayHistoryServerId_);
      DARABONBA_PTR_FROM_JSON(RayHistoryServerUrl, rayHistoryServerUrl_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoragePath, storagePath_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetRayHistoryServerResponseBody() = default ;
    GetRayHistoryServerResponseBody(const GetRayHistoryServerResponseBody &) = default ;
    GetRayHistoryServerResponseBody(GetRayHistoryServerResponseBody &&) = default ;
    GetRayHistoryServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRayHistoryServerResponseBody() = default ;
    GetRayHistoryServerResponseBody& operator=(const GetRayHistoryServerResponseBody &) = default ;
    GetRayHistoryServerResponseBody& operator=(GetRayHistoryServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->displayName_ == nullptr && this->ecsSpec_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtFinishTime_ == nullptr && this->gmtModifyTime_ == nullptr
        && this->maxRuntimeMinutes_ == nullptr && this->rayHistoryServerId_ == nullptr && this->rayHistoryServerUrl_ == nullptr && this->reasonCode_ == nullptr && this->reasonMessage_ == nullptr
        && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->status_ == nullptr && this->storagePath_ == nullptr && this->tenantId_ == nullptr
        && this->userId_ == nullptr && this->username_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetRayHistoryServerResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetRayHistoryServerResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline GetRayHistoryServerResponseBody& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetRayHistoryServerResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline GetRayHistoryServerResponseBody& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline GetRayHistoryServerResponseBody& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // maxRuntimeMinutes Field Functions 
    bool hasMaxRuntimeMinutes() const { return this->maxRuntimeMinutes_ != nullptr;};
    void deleteMaxRuntimeMinutes() { this->maxRuntimeMinutes_ = nullptr;};
    inline int32_t getMaxRuntimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxRuntimeMinutes_, 0) };
    inline GetRayHistoryServerResponseBody& setMaxRuntimeMinutes(int32_t maxRuntimeMinutes) { DARABONBA_PTR_SET_VALUE(maxRuntimeMinutes_, maxRuntimeMinutes) };


    // rayHistoryServerId Field Functions 
    bool hasRayHistoryServerId() const { return this->rayHistoryServerId_ != nullptr;};
    void deleteRayHistoryServerId() { this->rayHistoryServerId_ = nullptr;};
    inline string getRayHistoryServerId() const { DARABONBA_PTR_GET_DEFAULT(rayHistoryServerId_, "") };
    inline GetRayHistoryServerResponseBody& setRayHistoryServerId(string rayHistoryServerId) { DARABONBA_PTR_SET_VALUE(rayHistoryServerId_, rayHistoryServerId) };


    // rayHistoryServerUrl Field Functions 
    bool hasRayHistoryServerUrl() const { return this->rayHistoryServerUrl_ != nullptr;};
    void deleteRayHistoryServerUrl() { this->rayHistoryServerUrl_ = nullptr;};
    inline string getRayHistoryServerUrl() const { DARABONBA_PTR_GET_DEFAULT(rayHistoryServerUrl_, "") };
    inline GetRayHistoryServerResponseBody& setRayHistoryServerUrl(string rayHistoryServerUrl) { DARABONBA_PTR_SET_VALUE(rayHistoryServerUrl_, rayHistoryServerUrl) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetRayHistoryServerResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetRayHistoryServerResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetRayHistoryServerResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetRayHistoryServerResponseBody& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRayHistoryServerResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storagePath Field Functions 
    bool hasStoragePath() const { return this->storagePath_ != nullptr;};
    void deleteStoragePath() { this->storagePath_ = nullptr;};
    inline string getStoragePath() const { DARABONBA_PTR_GET_DEFAULT(storagePath_, "") };
    inline GetRayHistoryServerResponseBody& setStoragePath(string storagePath) { DARABONBA_PTR_SET_VALUE(storagePath_, storagePath) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetRayHistoryServerResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetRayHistoryServerResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetRayHistoryServerResponseBody& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetRayHistoryServerResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<string> ecsSpec_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtFinishTime_ {};
    shared_ptr<string> gmtModifyTime_ {};
    shared_ptr<int32_t> maxRuntimeMinutes_ {};
    shared_ptr<string> rayHistoryServerId_ {};
    // Ray Dashboard URL。
    shared_ptr<string> rayHistoryServerUrl_ {};
    shared_ptr<string> reasonCode_ {};
    shared_ptr<string> reasonMessage_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> resourceName_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> storagePath_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> username_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
