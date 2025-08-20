// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTERRAFORMSUPPORTEDRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTag, customTag_);
      DARABONBA_PTR_TO_JSON(EstimateCost, estimateCost_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(StackOperationRisk, stackOperationRisk_);
      DARABONBA_PTR_TO_JSON(SystemTag, systemTag_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTag, customTag_);
      DARABONBA_PTR_FROM_JSON(EstimateCost, estimateCost_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(StackOperationRisk, stackOperationRisk_);
      DARABONBA_PTR_FROM_JSON(SystemTag, systemTag_);
    };
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes(const GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes(GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes &&) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& operator=(const GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& operator=(GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customTag_ != nullptr
        && this->estimateCost_ != nullptr && this->resourceGroup_ != nullptr && this->stackOperationRisk_ != nullptr && this->systemTag_ != nullptr; };
    // customTag Field Functions 
    bool hasCustomTag() const { return this->customTag_ != nullptr;};
    void deleteCustomTag() { this->customTag_ = nullptr;};
    inline const vector<string> & customTag() const { DARABONBA_PTR_GET_CONST(customTag_, vector<string>) };
    inline vector<string> customTag() { DARABONBA_PTR_GET(customTag_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setCustomTag(const vector<string> & customTag) { DARABONBA_PTR_SET_VALUE(customTag_, customTag) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setCustomTag(vector<string> && customTag) { DARABONBA_PTR_SET_RVALUE(customTag_, customTag) };


    // estimateCost Field Functions 
    bool hasEstimateCost() const { return this->estimateCost_ != nullptr;};
    void deleteEstimateCost() { this->estimateCost_ = nullptr;};
    inline const vector<string> & estimateCost() const { DARABONBA_PTR_GET_CONST(estimateCost_, vector<string>) };
    inline vector<string> estimateCost() { DARABONBA_PTR_GET(estimateCost_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setEstimateCost(const vector<string> & estimateCost) { DARABONBA_PTR_SET_VALUE(estimateCost_, estimateCost) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setEstimateCost(vector<string> && estimateCost) { DARABONBA_PTR_SET_RVALUE(estimateCost_, estimateCost) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const vector<string> & resourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, vector<string>) };
    inline vector<string> resourceGroup() { DARABONBA_PTR_GET(resourceGroup_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setResourceGroup(const vector<string> & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setResourceGroup(vector<string> && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


    // stackOperationRisk Field Functions 
    bool hasStackOperationRisk() const { return this->stackOperationRisk_ != nullptr;};
    void deleteStackOperationRisk() { this->stackOperationRisk_ = nullptr;};
    inline const Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk & stackOperationRisk() const { DARABONBA_PTR_GET_CONST(stackOperationRisk_, Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk) };
    inline Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk stackOperationRisk() { DARABONBA_PTR_GET(stackOperationRisk_, Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setStackOperationRisk(const Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk & stackOperationRisk) { DARABONBA_PTR_SET_VALUE(stackOperationRisk_, stackOperationRisk) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setStackOperationRisk(Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk && stackOperationRisk) { DARABONBA_PTR_SET_RVALUE(stackOperationRisk_, stackOperationRisk) };


    // systemTag Field Functions 
    bool hasSystemTag() const { return this->systemTag_ != nullptr;};
    void deleteSystemTag() { this->systemTag_ = nullptr;};
    inline const vector<string> & systemTag() const { DARABONBA_PTR_GET_CONST(systemTag_, vector<string>) };
    inline vector<string> systemTag() { DARABONBA_PTR_GET(systemTag_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setSystemTag(const vector<string> & systemTag) { DARABONBA_PTR_SET_VALUE(systemTag_, systemTag) };
    inline GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes& setSystemTag(vector<string> && systemTag) { DARABONBA_PTR_SET_RVALUE(systemTag_, systemTag) };


  protected:
    // The resource types that support the custom tag feature.
    std::shared_ptr<vector<string>> customTag_ = nullptr;
    // The resource types that support the price inquiry feature.
    std::shared_ptr<vector<string>> estimateCost_ = nullptr;
    // The resource types that support the resource group feature.
    std::shared_ptr<vector<string>> resourceGroup_ = nullptr;
    // The resource type that support the risk check feature.
    std::shared_ptr<Models::GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk> stackOperationRisk_ = nullptr;
    // The resource types that support the system tag `acs:ros:stackId`.
    std::shared_ptr<vector<string>> systemTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
