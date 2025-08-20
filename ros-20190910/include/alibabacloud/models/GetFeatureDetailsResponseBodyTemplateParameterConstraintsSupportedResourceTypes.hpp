// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATEPARAMETERCONSTRAINTSSUPPORTEDRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYTEMPLATEPARAMETERCONSTRAINTSSUPPORTEDRESOURCETYPES_HPP_
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
  class GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes(const GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes(GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes &&) = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes() = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes& operator=(const GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes &) = default ;
    GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes& operator=(GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->properties_ != nullptr
        && this->resourceType_ != nullptr; };
    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<string> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<string>) };
    inline vector<string> properties() { DARABONBA_PTR_GET(properties_, vector<string>) };
    inline GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes& setProperties(const vector<string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes& setProperties(vector<string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetFeatureDetailsResponseBodyTemplateParameterConstraintsSupportedResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The names of properties that are supported by the resource type.
    std::shared_ptr<vector<string>> properties_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
