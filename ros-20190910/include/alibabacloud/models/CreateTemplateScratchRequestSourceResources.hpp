// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUESTSOURCERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUESTSOURCERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateTemplateScratchRequestSourceResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateScratchRequestSourceResources& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceTypeFilter, relatedResourceTypeFilter_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateScratchRequestSourceResources& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceTypeFilter, relatedResourceTypeFilter_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateTemplateScratchRequestSourceResources() = default ;
    CreateTemplateScratchRequestSourceResources(const CreateTemplateScratchRequestSourceResources &) = default ;
    CreateTemplateScratchRequestSourceResources(CreateTemplateScratchRequestSourceResources &&) = default ;
    CreateTemplateScratchRequestSourceResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateScratchRequestSourceResources() = default ;
    CreateTemplateScratchRequestSourceResources& operator=(const CreateTemplateScratchRequestSourceResources &) = default ;
    CreateTemplateScratchRequestSourceResources& operator=(CreateTemplateScratchRequestSourceResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->relatedResourceTypeFilter_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTemplateScratchRequestSourceResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedResourceTypeFilter Field Functions 
    bool hasRelatedResourceTypeFilter() const { return this->relatedResourceTypeFilter_ != nullptr;};
    void deleteRelatedResourceTypeFilter() { this->relatedResourceTypeFilter_ = nullptr;};
    inline const vector<string> & relatedResourceTypeFilter() const { DARABONBA_PTR_GET_CONST(relatedResourceTypeFilter_, vector<string>) };
    inline vector<string> relatedResourceTypeFilter() { DARABONBA_PTR_GET(relatedResourceTypeFilter_, vector<string>) };
    inline CreateTemplateScratchRequestSourceResources& setRelatedResourceTypeFilter(const vector<string> & relatedResourceTypeFilter) { DARABONBA_PTR_SET_VALUE(relatedResourceTypeFilter_, relatedResourceTypeFilter) };
    inline CreateTemplateScratchRequestSourceResources& setRelatedResourceTypeFilter(vector<string> && relatedResourceTypeFilter) { DARABONBA_PTR_SET_RVALUE(relatedResourceTypeFilter_, relatedResourceTypeFilter) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateTemplateScratchRequestSourceResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateTemplateScratchRequestSourceResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The region ID of the resource.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // > 
    // 
    // *   This parameter takes effect only when TemplateScratchType is set to ArchitectureDetection.
    // 
    // *   The region ID of a global resource is `global`. For example, the region ID of the ALIYUN::CDN::Domain global resource is `global`.
    std::shared_ptr<string> regionId_ = nullptr;
    // The related resource type filters.
    std::shared_ptr<vector<string>> relatedResourceTypeFilter_ = nullptr;
    // The resource ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
