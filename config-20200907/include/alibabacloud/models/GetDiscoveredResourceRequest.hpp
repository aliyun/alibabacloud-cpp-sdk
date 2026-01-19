// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetDiscoveredResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiscoveredResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceOption, complianceOption_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiscoveredResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceOption, complianceOption_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetDiscoveredResourceRequest() = default ;
    GetDiscoveredResourceRequest(const GetDiscoveredResourceRequest &) = default ;
    GetDiscoveredResourceRequest(GetDiscoveredResourceRequest &&) = default ;
    GetDiscoveredResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiscoveredResourceRequest() = default ;
    GetDiscoveredResourceRequest& operator=(const GetDiscoveredResourceRequest &) = default ;
    GetDiscoveredResourceRequest& operator=(GetDiscoveredResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceOption_ == nullptr
        && this->region_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // complianceOption Field Functions 
    bool hasComplianceOption() const { return this->complianceOption_ != nullptr;};
    void deleteComplianceOption() { this->complianceOption_ = nullptr;};
    inline int32_t getComplianceOption() const { DARABONBA_PTR_GET_DEFAULT(complianceOption_, 0) };
    inline GetDiscoveredResourceRequest& setComplianceOption(int32_t complianceOption) { DARABONBA_PTR_SET_VALUE(complianceOption_, complianceOption) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetDiscoveredResourceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetDiscoveredResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetDiscoveredResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // Specifies whether to query the compliance results of the resource. Valid values:
    // 
    // *   0 (default): does not query the compliance results of the resource.
    // *   1: queries the compliance results of the resource.
    shared_ptr<int32_t> complianceOption_ {};
    // The ID of the region in which the resource resides.
    // 
    // For more information about how to query the region ID of a resource, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/411702.html).
    shared_ptr<string> region_ {};
    // The resource ID.
    // 
    // For more information about how to obtain the ID of a resource, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/411702.html).
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The type of the resource.
    // 
    // For more information about how to obtain the type of a resource, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/411702.html).
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
