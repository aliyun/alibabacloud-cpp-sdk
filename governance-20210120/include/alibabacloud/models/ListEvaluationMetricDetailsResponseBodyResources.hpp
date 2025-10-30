// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETRICDETAILSRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetricDetailsResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetricDetailsResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetricDetailsResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListEvaluationMetricDetailsResponseBodyResources() = default ;
    ListEvaluationMetricDetailsResponseBodyResources(const ListEvaluationMetricDetailsResponseBodyResources &) = default ;
    ListEvaluationMetricDetailsResponseBodyResources(ListEvaluationMetricDetailsResponseBodyResources &&) = default ;
    ListEvaluationMetricDetailsResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetricDetailsResponseBodyResources() = default ;
    ListEvaluationMetricDetailsResponseBodyResources& operator=(const ListEvaluationMetricDetailsResponseBodyResources &) = default ;
    ListEvaluationMetricDetailsResponseBodyResources& operator=(ListEvaluationMetricDetailsResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceType_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceClassification_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->resourceProperties_ == nullptr && return this->resourceType_ == nullptr; };
    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResources& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceClassification Field Functions 
    bool hasResourceClassification() const { return this->resourceClassification_ != nullptr;};
    void deleteResourceClassification() { this->resourceClassification_ = nullptr;};
    inline string resourceClassification() const { DARABONBA_PTR_GET_DEFAULT(resourceClassification_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResources& setResourceClassification(string resourceClassification) { DARABONBA_PTR_SET_VALUE(resourceClassification_, resourceClassification) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListEvaluationMetricDetailsResponseBodyResources& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceProperties Field Functions 
    bool hasResourceProperties() const { return this->resourceProperties_ != nullptr;};
    void deleteResourceProperties() { this->resourceProperties_ = nullptr;};
    inline const vector<Models::ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties> & resourceProperties() const { DARABONBA_PTR_GET_CONST(resourceProperties_, vector<Models::ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties>) };
    inline vector<Models::ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties> resourceProperties() { DARABONBA_PTR_GET(resourceProperties_, vector<Models::ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties>) };
    inline ListEvaluationMetricDetailsResponseBodyResources& setResourceProperties(const vector<Models::ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties> & resourceProperties) { DARABONBA_PTR_SET_VALUE(resourceProperties_, resourceProperties) };
    inline ListEvaluationMetricDetailsResponseBodyResources& setResourceProperties(vector<Models::ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties> && resourceProperties) { DARABONBA_PTR_SET_RVALUE(resourceProperties_, resourceProperties) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListEvaluationMetricDetailsResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The compliance status of the resource. Valid values:
    // 
    // *   NonCompliant: non-compliant.
    // *   Excluded: ignored.
    // *   PendingExclusion: to be ignored.
    // *   PendingInclusion: to be unignored.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> regionId_ = nullptr;
    // The check results further analyzed by auxiliary decision-making.
    // 
    // >  This parameter is returned only when the check item supports the auxiliary decision-making feature.
    std::shared_ptr<string> resourceClassification_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the resource.
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The attributes of the resource.
    std::shared_ptr<vector<Models::ListEvaluationMetricDetailsResponseBodyResourcesResourceProperties>> resourceProperties_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
