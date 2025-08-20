// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCEIMPORTSUPPORTEDRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYRESOURCEIMPORTSUPPORTEDRESOURCETYPES_HPP_
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
  class GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceIdentifiers, resourceIdentifiers_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceIdentifiers, resourceIdentifiers_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes(const GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes(GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes &&) = default ;
    GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes& operator=(const GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes& operator=(GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceIdentifiers_ != nullptr
        && this->resourceType_ != nullptr; };
    // resourceIdentifiers Field Functions 
    bool hasResourceIdentifiers() const { return this->resourceIdentifiers_ != nullptr;};
    void deleteResourceIdentifiers() { this->resourceIdentifiers_ = nullptr;};
    inline const vector<string> & resourceIdentifiers() const { DARABONBA_PTR_GET_CONST(resourceIdentifiers_, vector<string>) };
    inline vector<string> resourceIdentifiers() { DARABONBA_PTR_GET(resourceIdentifiers_, vector<string>) };
    inline GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes& setResourceIdentifiers(const vector<string> & resourceIdentifiers) { DARABONBA_PTR_SET_VALUE(resourceIdentifiers_, resourceIdentifiers) };
    inline GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes& setResourceIdentifiers(vector<string> && resourceIdentifiers) { DARABONBA_PTR_SET_RVALUE(resourceIdentifiers_, resourceIdentifiers) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetFeatureDetailsResponseBodyResourceImportSupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The resource identifiers.
    std::shared_ptr<vector<string>> resourceIdentifiers_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
