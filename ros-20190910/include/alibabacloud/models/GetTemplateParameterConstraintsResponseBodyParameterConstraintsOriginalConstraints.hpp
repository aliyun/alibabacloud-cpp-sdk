// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSORIGINALCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSRESPONSEBODYPARAMETERCONSTRAINTSORIGINALCONSTRAINTS_HPP_
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
  class GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_TO_JSON(Behavior, behavior_);
      DARABONBA_PTR_TO_JSON(BehaviorReason, behaviorReason_);
      DARABONBA_PTR_TO_JSON(PropertiesData, propertiesData_);
      DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_TO_JSON(RequestInfo, requestInfo_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(BehaviorReason, behaviorReason_);
      DARABONBA_PTR_FROM_JSON(PropertiesData, propertiesData_);
      DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_FROM_JSON(RequestInfo, requestInfo_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(const GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &&) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& operator=(const GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &) = default ;
    GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& operator=(GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedValues_ != nullptr
        && this->behavior_ != nullptr && this->behaviorReason_ != nullptr && this->propertiesData_ != nullptr && this->propertyName_ != nullptr && this->requestInfo_ != nullptr
        && this->resourceName_ != nullptr && this->resourceType_ != nullptr; };
    // allowedValues Field Functions 
    bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
    void deleteAllowedValues() { this->allowedValues_ = nullptr;};
    inline const vector<Darabonba::Json> & allowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> allowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<Darabonba::Json>) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setAllowedValues(const vector<Darabonba::Json> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setAllowedValues(vector<Darabonba::Json> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline string behavior() const { DARABONBA_PTR_GET_DEFAULT(behavior_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setBehavior(string behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };


    // behaviorReason Field Functions 
    bool hasBehaviorReason() const { return this->behaviorReason_ != nullptr;};
    void deleteBehaviorReason() { this->behaviorReason_ = nullptr;};
    inline string behaviorReason() const { DARABONBA_PTR_GET_DEFAULT(behaviorReason_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setBehaviorReason(string behaviorReason) { DARABONBA_PTR_SET_VALUE(behaviorReason_, behaviorReason) };


    // propertiesData Field Functions 
    bool hasPropertiesData() const { return this->propertiesData_ != nullptr;};
    void deletePropertiesData() { this->propertiesData_ = nullptr;};
    inline string propertiesData() const { DARABONBA_PTR_GET_DEFAULT(propertiesData_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setPropertiesData(string propertiesData) { DARABONBA_PTR_SET_VALUE(propertiesData_, propertiesData) };


    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    // requestInfo Field Functions 
    bool hasRequestInfo() const { return this->requestInfo_ != nullptr;};
    void deleteRequestInfo() { this->requestInfo_ = nullptr;};
    inline string requestInfo() const { DARABONBA_PTR_GET_DEFAULT(requestInfo_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setRequestInfo(string requestInfo) { DARABONBA_PTR_SET_VALUE(requestInfo_, requestInfo) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The values of the parameter.
    std::shared_ptr<vector<Darabonba::Json>> allowedValues_ = nullptr;
    // Behavior of the parameter
    std::shared_ptr<string> behavior_ = nullptr;
    // The reason for the parameter behavior
    std::shared_ptr<string> behaviorReason_ = nullptr;
    std::shared_ptr<string> propertiesData_ = nullptr;
    // The name of the resource property.
    std::shared_ptr<string> propertyName_ = nullptr;
    std::shared_ptr<string> requestInfo_ = nullptr;
    // The name of the resource that is defined in the template.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
