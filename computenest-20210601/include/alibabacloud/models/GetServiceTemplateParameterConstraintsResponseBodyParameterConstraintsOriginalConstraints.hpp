// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSORIGINALCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSORIGINALCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &&) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& operator=(const GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &) = default ;
    GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& operator=(GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedValues_ != nullptr
        && this->propertyName_ != nullptr && this->resourceName_ != nullptr && this->resourceType_ != nullptr; };
    // allowedValues Field Functions 
    bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
    void deleteAllowedValues() { this->allowedValues_ = nullptr;};
    inline const vector<string> & allowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<string>) };
    inline vector<string> allowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<string>) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setAllowedValues(const vector<string> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setAllowedValues(vector<string> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The valid values of the parameter.
    std::shared_ptr<vector<string>> allowedValues_ = nullptr;
    // The property name.
    std::shared_ptr<string> propertyName_ = nullptr;
    // The name of the resource that is defined in the template.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
