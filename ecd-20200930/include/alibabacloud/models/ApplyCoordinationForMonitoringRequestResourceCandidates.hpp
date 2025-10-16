// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGREQUESTRESOURCECANDIDATES_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGREQUESTRESOURCECANDIDATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ApplyCoordinationForMonitoringRequestResourceCandidates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForMonitoringRequestResourceCandidates& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAliUid, ownerAliUid_);
      DARABONBA_PTR_TO_JSON(OwnerEndUserId, ownerEndUserId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForMonitoringRequestResourceCandidates& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAliUid, ownerAliUid_);
      DARABONBA_PTR_FROM_JSON(OwnerEndUserId, ownerEndUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ApplyCoordinationForMonitoringRequestResourceCandidates() = default ;
    ApplyCoordinationForMonitoringRequestResourceCandidates(const ApplyCoordinationForMonitoringRequestResourceCandidates &) = default ;
    ApplyCoordinationForMonitoringRequestResourceCandidates(ApplyCoordinationForMonitoringRequestResourceCandidates &&) = default ;
    ApplyCoordinationForMonitoringRequestResourceCandidates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForMonitoringRequestResourceCandidates() = default ;
    ApplyCoordinationForMonitoringRequestResourceCandidates& operator=(const ApplyCoordinationForMonitoringRequestResourceCandidates &) = default ;
    ApplyCoordinationForMonitoringRequestResourceCandidates& operator=(ApplyCoordinationForMonitoringRequestResourceCandidates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAliUid_ == nullptr
        && return this->ownerEndUserId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceProperties_ == nullptr && return this->resourceRegionId_ == nullptr
        && return this->resourceType_ == nullptr; };
    // ownerAliUid Field Functions 
    bool hasOwnerAliUid() const { return this->ownerAliUid_ != nullptr;};
    void deleteOwnerAliUid() { this->ownerAliUid_ = nullptr;};
    inline int64_t ownerAliUid() const { DARABONBA_PTR_GET_DEFAULT(ownerAliUid_, 0L) };
    inline ApplyCoordinationForMonitoringRequestResourceCandidates& setOwnerAliUid(int64_t ownerAliUid) { DARABONBA_PTR_SET_VALUE(ownerAliUid_, ownerAliUid) };


    // ownerEndUserId Field Functions 
    bool hasOwnerEndUserId() const { return this->ownerEndUserId_ != nullptr;};
    void deleteOwnerEndUserId() { this->ownerEndUserId_ = nullptr;};
    inline string ownerEndUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerEndUserId_, "") };
    inline ApplyCoordinationForMonitoringRequestResourceCandidates& setOwnerEndUserId(string ownerEndUserId) { DARABONBA_PTR_SET_VALUE(ownerEndUserId_, ownerEndUserId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ApplyCoordinationForMonitoringRequestResourceCandidates& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ApplyCoordinationForMonitoringRequestResourceCandidates& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceProperties Field Functions 
    bool hasResourceProperties() const { return this->resourceProperties_ != nullptr;};
    void deleteResourceProperties() { this->resourceProperties_ = nullptr;};
    inline string resourceProperties() const { DARABONBA_PTR_GET_DEFAULT(resourceProperties_, "") };
    inline ApplyCoordinationForMonitoringRequestResourceCandidates& setResourceProperties(string resourceProperties) { DARABONBA_PTR_SET_VALUE(resourceProperties_, resourceProperties) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ApplyCoordinationForMonitoringRequestResourceCandidates& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ApplyCoordinationForMonitoringRequestResourceCandidates& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the Alibaba Cloud account to which the current cloud desktop belongs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ownerAliUid_ = nullptr;
    // The ID of the current end user.
    std::shared_ptr<string> ownerEndUserId_ = nullptr;
    // The ID of the cloud desktop.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the cloud desktop.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The properties of the cloud desktop.
    std::shared_ptr<string> resourceProperties_ = nullptr;
    // The region where the resource resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The resource type.
    // 
    // Set the value to CLOUD_DESKTOP.
    // 
    // *   The value CLOUD_DESKTOP specifies that the resource is a cloud desktop.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
