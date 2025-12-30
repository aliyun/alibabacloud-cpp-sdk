// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ApplyCoordinationForMonitoringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForMonitoringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinatePolicyType, coordinatePolicyType_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceCandidates, resourceCandidates_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForMonitoringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinatePolicyType, coordinatePolicyType_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceCandidates, resourceCandidates_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ApplyCoordinationForMonitoringRequest() = default ;
    ApplyCoordinationForMonitoringRequest(const ApplyCoordinationForMonitoringRequest &) = default ;
    ApplyCoordinationForMonitoringRequest(ApplyCoordinationForMonitoringRequest &&) = default ;
    ApplyCoordinationForMonitoringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForMonitoringRequest() = default ;
    ApplyCoordinationForMonitoringRequest& operator=(const ApplyCoordinationForMonitoringRequest &) = default ;
    ApplyCoordinationForMonitoringRequest& operator=(ApplyCoordinationForMonitoringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceCandidates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceCandidates& obj) { 
        DARABONBA_PTR_TO_JSON(OwnerAliUid, ownerAliUid_);
        DARABONBA_PTR_TO_JSON(OwnerEndUserId, ownerEndUserId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceProperties, resourceProperties_);
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceCandidates& obj) { 
        DARABONBA_PTR_FROM_JSON(OwnerAliUid, ownerAliUid_);
        DARABONBA_PTR_FROM_JSON(OwnerEndUserId, ownerEndUserId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceProperties, resourceProperties_);
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourceCandidates() = default ;
      ResourceCandidates(const ResourceCandidates &) = default ;
      ResourceCandidates(ResourceCandidates &&) = default ;
      ResourceCandidates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceCandidates() = default ;
      ResourceCandidates& operator=(const ResourceCandidates &) = default ;
      ResourceCandidates& operator=(ResourceCandidates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ownerAliUid_ == nullptr
        && this->ownerEndUserId_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceProperties_ == nullptr && this->resourceRegionId_ == nullptr
        && this->resourceType_ == nullptr; };
      // ownerAliUid Field Functions 
      bool hasOwnerAliUid() const { return this->ownerAliUid_ != nullptr;};
      void deleteOwnerAliUid() { this->ownerAliUid_ = nullptr;};
      inline int64_t getOwnerAliUid() const { DARABONBA_PTR_GET_DEFAULT(ownerAliUid_, 0L) };
      inline ResourceCandidates& setOwnerAliUid(int64_t ownerAliUid) { DARABONBA_PTR_SET_VALUE(ownerAliUid_, ownerAliUid) };


      // ownerEndUserId Field Functions 
      bool hasOwnerEndUserId() const { return this->ownerEndUserId_ != nullptr;};
      void deleteOwnerEndUserId() { this->ownerEndUserId_ = nullptr;};
      inline string getOwnerEndUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerEndUserId_, "") };
      inline ResourceCandidates& setOwnerEndUserId(string ownerEndUserId) { DARABONBA_PTR_SET_VALUE(ownerEndUserId_, ownerEndUserId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceCandidates& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline ResourceCandidates& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceProperties Field Functions 
      bool hasResourceProperties() const { return this->resourceProperties_ != nullptr;};
      void deleteResourceProperties() { this->resourceProperties_ = nullptr;};
      inline string getResourceProperties() const { DARABONBA_PTR_GET_DEFAULT(resourceProperties_, "") };
      inline ResourceCandidates& setResourceProperties(string resourceProperties) { DARABONBA_PTR_SET_VALUE(resourceProperties_, resourceProperties) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline ResourceCandidates& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceCandidates& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The ID of the Alibaba Cloud account to which the current cloud desktop belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> ownerAliUid_ {};
      // The ID of the current end user.
      shared_ptr<string> ownerEndUserId_ {};
      // The ID of the cloud desktop.
      // 
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // The name of the cloud desktop.
      // 
      // This parameter is required.
      shared_ptr<string> resourceName_ {};
      // The properties of the cloud desktop.
      shared_ptr<string> resourceProperties_ {};
      // The region where the resource resides.
      // 
      // This parameter is required.
      shared_ptr<string> resourceRegionId_ {};
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
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->coordinatePolicyType_ == nullptr
        && this->endUserId_ == nullptr && this->initiatorType_ == nullptr && this->regionId_ == nullptr && this->resourceCandidates_ == nullptr && this->uuid_ == nullptr; };
    // coordinatePolicyType Field Functions 
    bool hasCoordinatePolicyType() const { return this->coordinatePolicyType_ != nullptr;};
    void deleteCoordinatePolicyType() { this->coordinatePolicyType_ = nullptr;};
    inline string getCoordinatePolicyType() const { DARABONBA_PTR_GET_DEFAULT(coordinatePolicyType_, "") };
    inline ApplyCoordinationForMonitoringRequest& setCoordinatePolicyType(string coordinatePolicyType) { DARABONBA_PTR_SET_VALUE(coordinatePolicyType_, coordinatePolicyType) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ApplyCoordinationForMonitoringRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // initiatorType Field Functions 
    bool hasInitiatorType() const { return this->initiatorType_ != nullptr;};
    void deleteInitiatorType() { this->initiatorType_ = nullptr;};
    inline string getInitiatorType() const { DARABONBA_PTR_GET_DEFAULT(initiatorType_, "") };
    inline ApplyCoordinationForMonitoringRequest& setInitiatorType(string initiatorType) { DARABONBA_PTR_SET_VALUE(initiatorType_, initiatorType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyCoordinationForMonitoringRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceCandidates Field Functions 
    bool hasResourceCandidates() const { return this->resourceCandidates_ != nullptr;};
    void deleteResourceCandidates() { this->resourceCandidates_ = nullptr;};
    inline const vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates> & getResourceCandidates() const { DARABONBA_PTR_GET_CONST(resourceCandidates_, vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates>) };
    inline vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates> getResourceCandidates() { DARABONBA_PTR_GET(resourceCandidates_, vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates>) };
    inline ApplyCoordinationForMonitoringRequest& setResourceCandidates(const vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates> & resourceCandidates) { DARABONBA_PTR_SET_VALUE(resourceCandidates_, resourceCandidates) };
    inline ApplyCoordinationForMonitoringRequest& setResourceCandidates(vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates> && resourceCandidates) { DARABONBA_PTR_SET_RVALUE(resourceCandidates_, resourceCandidates) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ApplyCoordinationForMonitoringRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The coordination policy.
    // 
    // Set the value to FULL_CONTROL.
    // 
    // *   The value FULL_CONTROL specifies that the cloud desktop is shared and remote access to the cloud desktop is allowed.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    shared_ptr<string> coordinatePolicyType_ {};
    // The ID of the end user who initiates the stream collaboration. If the initiator is the administrator, do not specify this parameter.
    shared_ptr<string> endUserId_ {};
    // The type of the initiator.
    // 
    // Set the value to ADMIN_INITIATE.
    // 
    // *   The value ADMIN_INITIATE specifies that the administrator initiates the coordination request.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> initiatorType_ {};
    // The region ID. You can call the [DescribeRegions](https://next.api.aliyun.com/document/ecd/2020-09-30/DescribeRegions) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of cloud desktops that run the collaboration task at the same time.
    // 
    // This parameter is required.
    shared_ptr<vector<ApplyCoordinationForMonitoringRequest::ResourceCandidates>> resourceCandidates_ {};
    // The universally unique identifier (UUID) of the device.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
