// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCECLEANERSUPPORTEDRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCECLEANERSUPPORTEDRESOURCETYPES_HPP_
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
  class GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SideEffects, sideEffects_);
      DARABONBA_PTR_TO_JSON(SupportedFilters, supportedFilters_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SideEffects, sideEffects_);
      DARABONBA_PTR_FROM_JSON(SupportedFilters, supportedFilters_);
    };
    GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes(const GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes(GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes &&) = default ;
    GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& operator=(const GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& operator=(GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceType_ != nullptr
        && this->sideEffects_ != nullptr && this->supportedFilters_ != nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sideEffects Field Functions 
    bool hasSideEffects() const { return this->sideEffects_ != nullptr;};
    void deleteSideEffects() { this->sideEffects_ = nullptr;};
    inline const vector<string> & sideEffects() const { DARABONBA_PTR_GET_CONST(sideEffects_, vector<string>) };
    inline vector<string> sideEffects() { DARABONBA_PTR_GET(sideEffects_, vector<string>) };
    inline GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& setSideEffects(const vector<string> & sideEffects) { DARABONBA_PTR_SET_VALUE(sideEffects_, sideEffects) };
    inline GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& setSideEffects(vector<string> && sideEffects) { DARABONBA_PTR_SET_RVALUE(sideEffects_, sideEffects) };


    // supportedFilters Field Functions 
    bool hasSupportedFilters() const { return this->supportedFilters_ != nullptr;};
    void deleteSupportedFilters() { this->supportedFilters_ = nullptr;};
    inline const vector<string> & supportedFilters() const { DARABONBA_PTR_GET_CONST(supportedFilters_, vector<string>) };
    inline vector<string> supportedFilters() { DARABONBA_PTR_GET(supportedFilters_, vector<string>) };
    inline GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& setSupportedFilters(const vector<string> & supportedFilters) { DARABONBA_PTR_SET_VALUE(supportedFilters_, supportedFilters) };
    inline GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes& setSupportedFilters(vector<string> && supportedFilters) { DARABONBA_PTR_SET_RVALUE(supportedFilters_, supportedFilters) };


  protected:
    // The resource type that supports the resource cleaner feature.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The names of the side effects that may be caused by the cleanup operation performed on the resources of the specified type.
    std::shared_ptr<vector<string>> sideEffects_ = nullptr;
    // The names of the filters that are supported by the resource type.
    std::shared_ptr<vector<string>> supportedFilters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
