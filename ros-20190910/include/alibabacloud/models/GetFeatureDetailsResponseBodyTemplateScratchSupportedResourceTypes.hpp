// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATESCRATCHSUPPORTEDRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATESCRATCHSUPPORTEDRESOURCETYPES_HPP_
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
  class GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SourceResourceGroupSupported, sourceResourceGroupSupported_);
      DARABONBA_PTR_TO_JSON(SourceResourcesSupported, sourceResourcesSupported_);
      DARABONBA_PTR_TO_JSON(SourceSupported, sourceSupported_);
      DARABONBA_PTR_TO_JSON(SourceTagSupported, sourceTagSupported_);
      DARABONBA_PTR_TO_JSON(SupportedTemplateScratchTypes, supportedTemplateScratchTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SourceResourceGroupSupported, sourceResourceGroupSupported_);
      DARABONBA_PTR_FROM_JSON(SourceResourcesSupported, sourceResourcesSupported_);
      DARABONBA_PTR_FROM_JSON(SourceSupported, sourceSupported_);
      DARABONBA_PTR_FROM_JSON(SourceTagSupported, sourceTagSupported_);
      DARABONBA_PTR_FROM_JSON(SupportedTemplateScratchTypes, supportedTemplateScratchTypes_);
    };
    GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes(const GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes(GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes &&) = default ;
    GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& operator=(const GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& operator=(GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceType_ != nullptr
        && this->sourceResourceGroupSupported_ != nullptr && this->sourceResourcesSupported_ != nullptr && this->sourceSupported_ != nullptr && this->sourceTagSupported_ != nullptr && this->supportedTemplateScratchTypes_ != nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sourceResourceGroupSupported Field Functions 
    bool hasSourceResourceGroupSupported() const { return this->sourceResourceGroupSupported_ != nullptr;};
    void deleteSourceResourceGroupSupported() { this->sourceResourceGroupSupported_ = nullptr;};
    inline bool sourceResourceGroupSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceGroupSupported_, false) };
    inline GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& setSourceResourceGroupSupported(bool sourceResourceGroupSupported) { DARABONBA_PTR_SET_VALUE(sourceResourceGroupSupported_, sourceResourceGroupSupported) };


    // sourceResourcesSupported Field Functions 
    bool hasSourceResourcesSupported() const { return this->sourceResourcesSupported_ != nullptr;};
    void deleteSourceResourcesSupported() { this->sourceResourcesSupported_ = nullptr;};
    inline bool sourceResourcesSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceResourcesSupported_, false) };
    inline GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& setSourceResourcesSupported(bool sourceResourcesSupported) { DARABONBA_PTR_SET_VALUE(sourceResourcesSupported_, sourceResourcesSupported) };


    // sourceSupported Field Functions 
    bool hasSourceSupported() const { return this->sourceSupported_ != nullptr;};
    void deleteSourceSupported() { this->sourceSupported_ = nullptr;};
    inline bool sourceSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceSupported_, false) };
    inline GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& setSourceSupported(bool sourceSupported) { DARABONBA_PTR_SET_VALUE(sourceSupported_, sourceSupported) };


    // sourceTagSupported Field Functions 
    bool hasSourceTagSupported() const { return this->sourceTagSupported_ != nullptr;};
    void deleteSourceTagSupported() { this->sourceTagSupported_ = nullptr;};
    inline bool sourceTagSupported() const { DARABONBA_PTR_GET_DEFAULT(sourceTagSupported_, false) };
    inline GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& setSourceTagSupported(bool sourceTagSupported) { DARABONBA_PTR_SET_VALUE(sourceTagSupported_, sourceTagSupported) };


    // supportedTemplateScratchTypes Field Functions 
    bool hasSupportedTemplateScratchTypes() const { return this->supportedTemplateScratchTypes_ != nullptr;};
    void deleteSupportedTemplateScratchTypes() { this->supportedTemplateScratchTypes_ = nullptr;};
    inline const vector<string> & supportedTemplateScratchTypes() const { DARABONBA_PTR_GET_CONST(supportedTemplateScratchTypes_, vector<string>) };
    inline vector<string> supportedTemplateScratchTypes() { DARABONBA_PTR_GET(supportedTemplateScratchTypes_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& setSupportedTemplateScratchTypes(const vector<string> & supportedTemplateScratchTypes) { DARABONBA_PTR_SET_VALUE(supportedTemplateScratchTypes_, supportedTemplateScratchTypes) };
    inline GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes& setSupportedTemplateScratchTypes(vector<string> && supportedTemplateScratchTypes) { DARABONBA_PTR_SET_RVALUE(supportedTemplateScratchTypes_, supportedTemplateScratchTypes) };


  protected:
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Indicates whether the resource scope can be specified by source resource group. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> sourceResourceGroupSupported_ = nullptr;
    // Indicates whether the resource scope can be specified by source resource. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> sourceResourcesSupported_ = nullptr;
    // Indicates whether the resource scope can be specified by source tag, resource group, or resource. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> sourceSupported_ = nullptr;
    // Indicates whether the resource scope can be specified by source tag. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> sourceTagSupported_ = nullptr;
    // The scenario types that are supported.
    std::shared_ptr<vector<string>> supportedTemplateScratchTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
