// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEDISCOVEREDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEDISCOVEREDRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateDiscoveredResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateDiscoveredResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ComplianceOption, complianceOption_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateDiscoveredResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ComplianceOption, complianceOption_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetAggregateDiscoveredResourceRequest() = default ;
    GetAggregateDiscoveredResourceRequest(const GetAggregateDiscoveredResourceRequest &) = default ;
    GetAggregateDiscoveredResourceRequest(GetAggregateDiscoveredResourceRequest &&) = default ;
    GetAggregateDiscoveredResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateDiscoveredResourceRequest() = default ;
    GetAggregateDiscoveredResourceRequest& operator=(const GetAggregateDiscoveredResourceRequest &) = default ;
    GetAggregateDiscoveredResourceRequest& operator=(GetAggregateDiscoveredResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->complianceOption_ == nullptr && this->region_ == nullptr && this->resourceAccountId_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->resourceType_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateDiscoveredResourceRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // complianceOption Field Functions 
    bool hasComplianceOption() const { return this->complianceOption_ != nullptr;};
    void deleteComplianceOption() { this->complianceOption_ = nullptr;};
    inline int32_t getComplianceOption() const { DARABONBA_PTR_GET_DEFAULT(complianceOption_, 0) };
    inline GetAggregateDiscoveredResourceRequest& setComplianceOption(int32_t complianceOption) { DARABONBA_PTR_SET_VALUE(complianceOption_, complianceOption) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetAggregateDiscoveredResourceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline GetAggregateDiscoveredResourceRequest& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetAggregateDiscoveredResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetAggregateDiscoveredResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAggregateDiscoveredResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // Specifies whether to query the compliance results of the resource. Valid values:
    // 
    // *   0 (default): does not query the compliance results of the resource.
    // *   1: queries the compliance results of the resource.
    shared_ptr<int32_t> complianceOption_ {};
    // The ID of the region in which the resource resides.
    // 
    // For more information about how to query the ID of a region in which the resource resides, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/411691.html).
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // Required. The ID of the Alibaba Cloud account to which the specified resource belongs in the account group.
    shared_ptr<int64_t> resourceAccountId_ {};
    // The resource ID.
    // 
    // For more information about how to obtain the ID of a resource, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/411691.html).
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the resource.
    // 
    // For more information about how to obtain the type of a resource, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/411691.html).
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
