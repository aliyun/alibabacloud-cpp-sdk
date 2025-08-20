// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSNOTSUPPORTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSNOTSUPPORTRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources() = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources(const GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources &) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources(GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources &&) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources() = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources& operator=(const GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources &) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources& operator=(GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyName_ != nullptr
        && this->resourceType_ != nullptr; };
    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsNotSupportResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The name of the resource property.
    std::shared_ptr<string> propertyName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
