// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetDiscoveredResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceDetail, discoveredResourceDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceDetail, discoveredResourceDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDiscoveredResourceResponseBody() = default ;
    GetDiscoveredResourceResponseBody(const GetDiscoveredResourceResponseBody &) = default ;
    GetDiscoveredResourceResponseBody(GetDiscoveredResourceResponseBody &&) = default ;
    GetDiscoveredResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiscoveredResourceResponseBody() = default ;
    GetDiscoveredResourceResponseBody& operator=(const GetDiscoveredResourceResponseBody &) = default ;
    GetDiscoveredResourceResponseBody& operator=(GetDiscoveredResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiscoveredResourceDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiscoveredResourceDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
        DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
        DARABONBA_PTR_TO_JSON(Configuration, configuration_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceCreationTime, resourceCreationTime_);
        DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, DiscoveredResourceDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
        DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
        DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceCreationTime, resourceCreationTime_);
        DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      DiscoveredResourceDetail() = default ;
      DiscoveredResourceDetail(const DiscoveredResourceDetail &) = default ;
      DiscoveredResourceDetail(DiscoveredResourceDetail &&) = default ;
      DiscoveredResourceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiscoveredResourceDetail() = default ;
      DiscoveredResourceDetail& operator=(const DiscoveredResourceDetail &) = default ;
      DiscoveredResourceDetail& operator=(DiscoveredResourceDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->availabilityZone_ == nullptr && this->complianceType_ == nullptr && this->configuration_ == nullptr && this->region_ == nullptr && this->resourceCreationTime_ == nullptr
        && this->resourceDeleted_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceStatus_ == nullptr && this->resourceType_ == nullptr
        && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline DiscoveredResourceDetail& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // availabilityZone Field Functions 
      bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
      void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
      inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
      inline DiscoveredResourceDetail& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


      // complianceType Field Functions 
      bool hasComplianceType() const { return this->complianceType_ != nullptr;};
      void deleteComplianceType() { this->complianceType_ = nullptr;};
      inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
      inline DiscoveredResourceDetail& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
      inline DiscoveredResourceDetail& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DiscoveredResourceDetail& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceCreationTime Field Functions 
      bool hasResourceCreationTime() const { return this->resourceCreationTime_ != nullptr;};
      void deleteResourceCreationTime() { this->resourceCreationTime_ = nullptr;};
      inline int64_t getResourceCreationTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreationTime_, 0L) };
      inline DiscoveredResourceDetail& setResourceCreationTime(int64_t resourceCreationTime) { DARABONBA_PTR_SET_VALUE(resourceCreationTime_, resourceCreationTime) };


      // resourceDeleted Field Functions 
      bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
      void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
      inline int32_t getResourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, 0) };
      inline DiscoveredResourceDetail& setResourceDeleted(int32_t resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline DiscoveredResourceDetail& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline DiscoveredResourceDetail& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline DiscoveredResourceDetail& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline DiscoveredResourceDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline DiscoveredResourceDetail& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline DiscoveredResourceDetail& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline DiscoveredResourceDetail& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<int64_t> accountId_ {};
      // The ID of the zone in which the resource resides.
      shared_ptr<string> availabilityZone_ {};
      // The compliance evaluation result of the resource. Valid values:
      // 
      // *   COMPLIANT: The resource is evaluated as compliant.
      // *   NON_COMPLIANT: The resource is evaluated as non-compliant.
      // *   NOT_APPLICABLE: The rule does not apply to the resources.
      // *   INSUFFICIENT_DATA: No data is available.
      shared_ptr<string> complianceType_ {};
      // The configuration of the resource.
      shared_ptr<string> configuration_ {};
      // The region ID.
      shared_ptr<string> region_ {};
      // The timestamp when the resource was created.
      shared_ptr<int64_t> resourceCreationTime_ {};
      // Indicates whether the resource was deleted. Valid values:
      // 
      // *   1: The resource was not deleted.
      // *   0: The resource was deleted.
      shared_ptr<int32_t> resourceDeleted_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The name of the resource.
      shared_ptr<string> resourceName_ {};
      // The status of the resource. The value of this parameter varies based on the resource type and may be empty.
      // 
      // *   If the ResourceType parameter is set to ACS::ECS::Instance, the resource is an ECS instance that has a specific state. In this case, the valid values of this parameter are Running and Stopped.
      // *   If the ResourceType parameter is ACS::OSS::Bucket, the resource is an Object Storage Service (OSS) bucket that is not in a specific state. In this case, this parameter is left empty.
      shared_ptr<string> resourceStatus_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The tags of the resource.
      shared_ptr<string> tags_ {};
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // This parameter is required.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->discoveredResourceDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // discoveredResourceDetail Field Functions 
    bool hasDiscoveredResourceDetail() const { return this->discoveredResourceDetail_ != nullptr;};
    void deleteDiscoveredResourceDetail() { this->discoveredResourceDetail_ = nullptr;};
    inline const GetDiscoveredResourceResponseBody::DiscoveredResourceDetail & getDiscoveredResourceDetail() const { DARABONBA_PTR_GET_CONST(discoveredResourceDetail_, GetDiscoveredResourceResponseBody::DiscoveredResourceDetail) };
    inline GetDiscoveredResourceResponseBody::DiscoveredResourceDetail getDiscoveredResourceDetail() { DARABONBA_PTR_GET(discoveredResourceDetail_, GetDiscoveredResourceResponseBody::DiscoveredResourceDetail) };
    inline GetDiscoveredResourceResponseBody& setDiscoveredResourceDetail(const GetDiscoveredResourceResponseBody::DiscoveredResourceDetail & discoveredResourceDetail) { DARABONBA_PTR_SET_VALUE(discoveredResourceDetail_, discoveredResourceDetail) };
    inline GetDiscoveredResourceResponseBody& setDiscoveredResourceDetail(GetDiscoveredResourceResponseBody::DiscoveredResourceDetail && discoveredResourceDetail) { DARABONBA_PTR_SET_RVALUE(discoveredResourceDetail_, discoveredResourceDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDiscoveredResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the resource.
    shared_ptr<GetDiscoveredResourceResponseBody::DiscoveredResourceDetail> discoveredResourceDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
