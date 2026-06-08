// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODY_HPP_
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
  class ValidateTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(UpdateInfo, updateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(UpdateInfo, updateInfo_);
    };
    ValidateTemplateResponseBody() = default ;
    ValidateTemplateResponseBody(const ValidateTemplateResponseBody &) = default ;
    ValidateTemplateResponseBody(ValidateTemplateResponseBody &&) = default ;
    ValidateTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateResponseBody() = default ;
    ValidateTemplateResponseBody& operator=(const ValidateTemplateResponseBody &) = default ;
    ValidateTemplateResponseBody& operator=(ValidateTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
        DARABONBA_PTR_TO_JSON(ParametersCauseInterruptionIfModified, parametersCauseInterruptionIfModified_);
        DARABONBA_PTR_TO_JSON(ParametersCauseReplacementIfModified, parametersCauseReplacementIfModified_);
        DARABONBA_PTR_TO_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
        DARABONBA_PTR_TO_JSON(ParametersConditionallyCauseInterruptionIfModified, parametersConditionallyCauseInterruptionIfModified_);
        DARABONBA_PTR_TO_JSON(ParametersConditionallyCauseReplacementIfModified, parametersConditionallyCauseReplacementIfModified_);
        DARABONBA_PTR_TO_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
        DARABONBA_PTR_TO_JSON(ParametersUncertainlyAllowedToBeModified, parametersUncertainlyAllowedToBeModified_);
        DARABONBA_PTR_TO_JSON(ParametersUncertainlyCauseInterruptionIfModified, parametersUncertainlyCauseInterruptionIfModified_);
        DARABONBA_PTR_TO_JSON(ParametersUncertainlyCauseReplacementIfModified, parametersUncertainlyCauseReplacementIfModified_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ParametersAllowedToBeModified, parametersAllowedToBeModified_);
        DARABONBA_PTR_FROM_JSON(ParametersCauseInterruptionIfModified, parametersCauseInterruptionIfModified_);
        DARABONBA_PTR_FROM_JSON(ParametersCauseReplacementIfModified, parametersCauseReplacementIfModified_);
        DARABONBA_PTR_FROM_JSON(ParametersConditionallyAllowedToBeModified, parametersConditionallyAllowedToBeModified_);
        DARABONBA_PTR_FROM_JSON(ParametersConditionallyCauseInterruptionIfModified, parametersConditionallyCauseInterruptionIfModified_);
        DARABONBA_PTR_FROM_JSON(ParametersConditionallyCauseReplacementIfModified, parametersConditionallyCauseReplacementIfModified_);
        DARABONBA_PTR_FROM_JSON(ParametersNotAllowedToBeModified, parametersNotAllowedToBeModified_);
        DARABONBA_PTR_FROM_JSON(ParametersUncertainlyAllowedToBeModified, parametersUncertainlyAllowedToBeModified_);
        DARABONBA_PTR_FROM_JSON(ParametersUncertainlyCauseInterruptionIfModified, parametersUncertainlyCauseInterruptionIfModified_);
        DARABONBA_PTR_FROM_JSON(ParametersUncertainlyCauseReplacementIfModified, parametersUncertainlyCauseReplacementIfModified_);
      };
      UpdateInfo() = default ;
      UpdateInfo(const UpdateInfo &) = default ;
      UpdateInfo(UpdateInfo &&) = default ;
      UpdateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateInfo() = default ;
      UpdateInfo& operator=(const UpdateInfo &) = default ;
      UpdateInfo& operator=(UpdateInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parametersAllowedToBeModified_ == nullptr
        && this->parametersCauseInterruptionIfModified_ == nullptr && this->parametersCauseReplacementIfModified_ == nullptr && this->parametersConditionallyAllowedToBeModified_ == nullptr && this->parametersConditionallyCauseInterruptionIfModified_ == nullptr && this->parametersConditionallyCauseReplacementIfModified_ == nullptr
        && this->parametersNotAllowedToBeModified_ == nullptr && this->parametersUncertainlyAllowedToBeModified_ == nullptr && this->parametersUncertainlyCauseInterruptionIfModified_ == nullptr && this->parametersUncertainlyCauseReplacementIfModified_ == nullptr; };
      // parametersAllowedToBeModified Field Functions 
      bool hasParametersAllowedToBeModified() const { return this->parametersAllowedToBeModified_ != nullptr;};
      void deleteParametersAllowedToBeModified() { this->parametersAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersAllowedToBeModified() { DARABONBA_PTR_GET(parametersAllowedToBeModified_, vector<string>) };
      inline UpdateInfo& setParametersAllowedToBeModified(const vector<string> & parametersAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };
      inline UpdateInfo& setParametersAllowedToBeModified(vector<string> && parametersAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersAllowedToBeModified_, parametersAllowedToBeModified) };


      // parametersCauseInterruptionIfModified Field Functions 
      bool hasParametersCauseInterruptionIfModified() const { return this->parametersCauseInterruptionIfModified_ != nullptr;};
      void deleteParametersCauseInterruptionIfModified() { this->parametersCauseInterruptionIfModified_ = nullptr;};
      inline const vector<string> & getParametersCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersCauseInterruptionIfModified_, vector<string>) };
      inline vector<string> getParametersCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersCauseInterruptionIfModified_, vector<string>) };
      inline UpdateInfo& setParametersCauseInterruptionIfModified(const vector<string> & parametersCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersCauseInterruptionIfModified_, parametersCauseInterruptionIfModified) };
      inline UpdateInfo& setParametersCauseInterruptionIfModified(vector<string> && parametersCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersCauseInterruptionIfModified_, parametersCauseInterruptionIfModified) };


      // parametersCauseReplacementIfModified Field Functions 
      bool hasParametersCauseReplacementIfModified() const { return this->parametersCauseReplacementIfModified_ != nullptr;};
      void deleteParametersCauseReplacementIfModified() { this->parametersCauseReplacementIfModified_ = nullptr;};
      inline const vector<string> & getParametersCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersCauseReplacementIfModified_, vector<string>) };
      inline vector<string> getParametersCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersCauseReplacementIfModified_, vector<string>) };
      inline UpdateInfo& setParametersCauseReplacementIfModified(const vector<string> & parametersCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersCauseReplacementIfModified_, parametersCauseReplacementIfModified) };
      inline UpdateInfo& setParametersCauseReplacementIfModified(vector<string> && parametersCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersCauseReplacementIfModified_, parametersCauseReplacementIfModified) };


      // parametersConditionallyAllowedToBeModified Field Functions 
      bool hasParametersConditionallyAllowedToBeModified() const { return this->parametersConditionallyAllowedToBeModified_ != nullptr;};
      void deleteParametersConditionallyAllowedToBeModified() { this->parametersConditionallyAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersConditionallyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersConditionallyAllowedToBeModified() { DARABONBA_PTR_GET(parametersConditionallyAllowedToBeModified_, vector<string>) };
      inline UpdateInfo& setParametersConditionallyAllowedToBeModified(const vector<string> & parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };
      inline UpdateInfo& setParametersConditionallyAllowedToBeModified(vector<string> && parametersConditionallyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyAllowedToBeModified_, parametersConditionallyAllowedToBeModified) };


      // parametersConditionallyCauseInterruptionIfModified Field Functions 
      bool hasParametersConditionallyCauseInterruptionIfModified() const { return this->parametersConditionallyCauseInterruptionIfModified_ != nullptr;};
      void deleteParametersConditionallyCauseInterruptionIfModified() { this->parametersConditionallyCauseInterruptionIfModified_ = nullptr;};
      inline const vector<string> & getParametersConditionallyCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyCauseInterruptionIfModified_, vector<string>) };
      inline vector<string> getParametersConditionallyCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersConditionallyCauseInterruptionIfModified_, vector<string>) };
      inline UpdateInfo& setParametersConditionallyCauseInterruptionIfModified(const vector<string> & parametersConditionallyCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyCauseInterruptionIfModified_, parametersConditionallyCauseInterruptionIfModified) };
      inline UpdateInfo& setParametersConditionallyCauseInterruptionIfModified(vector<string> && parametersConditionallyCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyCauseInterruptionIfModified_, parametersConditionallyCauseInterruptionIfModified) };


      // parametersConditionallyCauseReplacementIfModified Field Functions 
      bool hasParametersConditionallyCauseReplacementIfModified() const { return this->parametersConditionallyCauseReplacementIfModified_ != nullptr;};
      void deleteParametersConditionallyCauseReplacementIfModified() { this->parametersConditionallyCauseReplacementIfModified_ = nullptr;};
      inline const vector<string> & getParametersConditionallyCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersConditionallyCauseReplacementIfModified_, vector<string>) };
      inline vector<string> getParametersConditionallyCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersConditionallyCauseReplacementIfModified_, vector<string>) };
      inline UpdateInfo& setParametersConditionallyCauseReplacementIfModified(const vector<string> & parametersConditionallyCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersConditionallyCauseReplacementIfModified_, parametersConditionallyCauseReplacementIfModified) };
      inline UpdateInfo& setParametersConditionallyCauseReplacementIfModified(vector<string> && parametersConditionallyCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersConditionallyCauseReplacementIfModified_, parametersConditionallyCauseReplacementIfModified) };


      // parametersNotAllowedToBeModified Field Functions 
      bool hasParametersNotAllowedToBeModified() const { return this->parametersNotAllowedToBeModified_ != nullptr;};
      void deleteParametersNotAllowedToBeModified() { this->parametersNotAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersNotAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersNotAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersNotAllowedToBeModified() { DARABONBA_PTR_GET(parametersNotAllowedToBeModified_, vector<string>) };
      inline UpdateInfo& setParametersNotAllowedToBeModified(const vector<string> & parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };
      inline UpdateInfo& setParametersNotAllowedToBeModified(vector<string> && parametersNotAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersNotAllowedToBeModified_, parametersNotAllowedToBeModified) };


      // parametersUncertainlyAllowedToBeModified Field Functions 
      bool hasParametersUncertainlyAllowedToBeModified() const { return this->parametersUncertainlyAllowedToBeModified_ != nullptr;};
      void deleteParametersUncertainlyAllowedToBeModified() { this->parametersUncertainlyAllowedToBeModified_ = nullptr;};
      inline const vector<string> & getParametersUncertainlyAllowedToBeModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyAllowedToBeModified_, vector<string>) };
      inline vector<string> getParametersUncertainlyAllowedToBeModified() { DARABONBA_PTR_GET(parametersUncertainlyAllowedToBeModified_, vector<string>) };
      inline UpdateInfo& setParametersUncertainlyAllowedToBeModified(const vector<string> & parametersUncertainlyAllowedToBeModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyAllowedToBeModified_, parametersUncertainlyAllowedToBeModified) };
      inline UpdateInfo& setParametersUncertainlyAllowedToBeModified(vector<string> && parametersUncertainlyAllowedToBeModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyAllowedToBeModified_, parametersUncertainlyAllowedToBeModified) };


      // parametersUncertainlyCauseInterruptionIfModified Field Functions 
      bool hasParametersUncertainlyCauseInterruptionIfModified() const { return this->parametersUncertainlyCauseInterruptionIfModified_ != nullptr;};
      void deleteParametersUncertainlyCauseInterruptionIfModified() { this->parametersUncertainlyCauseInterruptionIfModified_ = nullptr;};
      inline const vector<string> & getParametersUncertainlyCauseInterruptionIfModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyCauseInterruptionIfModified_, vector<string>) };
      inline vector<string> getParametersUncertainlyCauseInterruptionIfModified() { DARABONBA_PTR_GET(parametersUncertainlyCauseInterruptionIfModified_, vector<string>) };
      inline UpdateInfo& setParametersUncertainlyCauseInterruptionIfModified(const vector<string> & parametersUncertainlyCauseInterruptionIfModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyCauseInterruptionIfModified_, parametersUncertainlyCauseInterruptionIfModified) };
      inline UpdateInfo& setParametersUncertainlyCauseInterruptionIfModified(vector<string> && parametersUncertainlyCauseInterruptionIfModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyCauseInterruptionIfModified_, parametersUncertainlyCauseInterruptionIfModified) };


      // parametersUncertainlyCauseReplacementIfModified Field Functions 
      bool hasParametersUncertainlyCauseReplacementIfModified() const { return this->parametersUncertainlyCauseReplacementIfModified_ != nullptr;};
      void deleteParametersUncertainlyCauseReplacementIfModified() { this->parametersUncertainlyCauseReplacementIfModified_ = nullptr;};
      inline const vector<string> & getParametersUncertainlyCauseReplacementIfModified() const { DARABONBA_PTR_GET_CONST(parametersUncertainlyCauseReplacementIfModified_, vector<string>) };
      inline vector<string> getParametersUncertainlyCauseReplacementIfModified() { DARABONBA_PTR_GET(parametersUncertainlyCauseReplacementIfModified_, vector<string>) };
      inline UpdateInfo& setParametersUncertainlyCauseReplacementIfModified(const vector<string> & parametersUncertainlyCauseReplacementIfModified) { DARABONBA_PTR_SET_VALUE(parametersUncertainlyCauseReplacementIfModified_, parametersUncertainlyCauseReplacementIfModified) };
      inline UpdateInfo& setParametersUncertainlyCauseReplacementIfModified(vector<string> && parametersUncertainlyCauseReplacementIfModified) { DARABONBA_PTR_SET_RVALUE(parametersUncertainlyCauseReplacementIfModified_, parametersUncertainlyCauseReplacementIfModified) };


    protected:
      // The parameters that can be modified.
      shared_ptr<vector<string>> parametersAllowedToBeModified_ {};
      // The parameters whose changes cause service interruptions.
      // 
      // > - This parameter is supported only for a small number of resource types.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersCauseInterruptionIfModified_ {};
      // The parameters whose changes trigger replacement updates for resources.
      // 
      // > -  This parameter can be returned only if the value of UpdateInfoOptions contains EnableReplacement.
      // > -  This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersCauseReplacementIfModified_ {};
      // The parameters that can be modified under specific conditions.
      shared_ptr<vector<string>> parametersConditionallyAllowedToBeModified_ {};
      // The parameters whose changes cause service interruptions under specific conditions.
      // 
      // > - This parameter is supported only for a small number of resource types.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersConditionallyCauseInterruptionIfModified_ {};
      // The parameters whose changes trigger replacement updates for resources under specific conditions.
      // 
      // > - This parameter can be returned only if the value of UpdateInfoOptions contains EnableReplacement.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersConditionallyCauseReplacementIfModified_ {};
      // The parameters that cannot be modified.
      shared_ptr<vector<string>> parametersNotAllowedToBeModified_ {};
      // The parameters that can be modified under uncertain conditions.
      shared_ptr<vector<string>> parametersUncertainlyAllowedToBeModified_ {};
      // The parameters whose changes cause service interruptions under uncertain conditions.
      // 
      // > - This parameter is supported only for a small number of resource types.
      // > - This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersUncertainlyCauseInterruptionIfModified_ {};
      // The parameters whose changes trigger replacement updates for resources under uncertain conditions.
      // 
      // > -  This parameter can be returned only if the value of UpdateInfoOptions contains EnableReplacement.
      // > -  This parameter is valid only for updates on ROS stacks.
      shared_ptr<vector<string>> parametersUncertainlyCauseReplacementIfModified_ {};
    };

    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(LogicalResourceIdPattern, logicalResourceIdPattern_);
        DARABONBA_PTR_TO_JSON(ResourcePath, resourcePath_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicalResourceIdPattern, logicalResourceIdPattern_);
        DARABONBA_PTR_FROM_JSON(ResourcePath, resourcePath_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logicalResourceIdPattern_ == nullptr
        && this->resourcePath_ == nullptr && this->resourceType_ == nullptr; };
      // logicalResourceIdPattern Field Functions 
      bool hasLogicalResourceIdPattern() const { return this->logicalResourceIdPattern_ != nullptr;};
      void deleteLogicalResourceIdPattern() { this->logicalResourceIdPattern_ = nullptr;};
      inline string getLogicalResourceIdPattern() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceIdPattern_, "") };
      inline Resources& setLogicalResourceIdPattern(string logicalResourceIdPattern) { DARABONBA_PTR_SET_VALUE(logicalResourceIdPattern_, logicalResourceIdPattern) };


      // resourcePath Field Functions 
      bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
      void deleteResourcePath() { this->resourcePath_ = nullptr;};
      inline string getResourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
      inline Resources& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The pattern in which the logical IDs of regular resources are formed.
      // 
      // If resources are defined in a ROS template, the following rules apply:
      // 
      // *   Resource whose definition does not contain `Count`: If the resource name defined in the template is `server`, the values of LogicalResourceIdPattern and `ResourcePath` are both `server`.``
      // *   Resource whose definition contains `Count`: If the resource name defined in the template is `server`, the value of LogicalResourceIdPattern is `server[*]`, and the value of `ResourcePath` is `server`.
      // 
      // If resources and [modules](https://www.terraform.io/language/modules) are defined in a Terraform template, the following rules apply:
      // 
      // *   Resource and module whose definitions do not contain [`count`](https://www.terraform.io/language/meta-arguments/count) or [`for_each`](https://www.terraform.io/language/meta-arguments/for_each): If the resource name defined in the template is `server`, the values of LogicalResourceIdPattern and `ResourcePath` are both `server`.``
      // *   Resource and module whose definitions contain [`count`](https://www.terraform.io/language/meta-arguments/count) or [`for_each`](https://www.terraform.io/language/meta-arguments/for_each): If the resource name defined in the template is `server`, the value of LogicalResourceIdPattern is `server[*]`, and the value of `ResourcePath` is `server`.
      // 
      // Examples of LogicalResourceIdPattern for resources in a Terraform template:
      // 
      // *   Valid values of LogicalResourceIdPattern if a resource belongs to the root module:
      // 
      //     *   `server`: In this case, `count` and `for_each` are not contained in the resource. The value of `ResourcePath` is `server`.
      //     *   `server[*]`: In this case, `count` or `for_each` is contained in the resource. The value of `ResourcePath` is `server`.
      // 
      // *   Valid values of LogicalResourceIdPattern if a resource belongs to a child module:
      // 
      //     *   `app.server`: In this case, `count` and `for_each` are not contained in the `app` module and the `server` resource. The value of `ResourcePath` is `app.server`.````
      //     *   `app.server[*]`: In this case, `count` or `for_each` is contained in the `server` resource, but `count` and `for_each` are not contained in the `app` module. The value of `ResourcePath` is `app.server`.
      //     *   `app[*].server`: In this case, `count` or `for_each` is contained in the `app` module, but `count` and `for_each` are not contained in the `server` resource. The value of `ResourcePath` is `app.server`.
      //     *   `app[*].server[*]`: In this case, `count` or `for_each` is contained in the `app` module and the `server` resource. The value of `ResourcePath` is `app.server`.````
      //     *   `app.app_group[*].server`: In this case, `count` or `for_each` is contained in the `app_group` module, but `count` and `for_each` are not contained in the `app` module and the `server` resource. The value of `ResourcePath` is `app.app_group.server`. The `app_group` module is a child module of the `app` module.````
      shared_ptr<string> logicalResourceIdPattern_ {};
      // The path of the regular resource. In most cases, the path of a regular resource is the same as the resource name.
      shared_ptr<string> resourcePath_ {};
      // The regular resource type.
      shared_ptr<string> resourceType_ {};
    };

    class ResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
      };
      ResourceTypes() = default ;
      ResourceTypes(const ResourceTypes &) = default ;
      ResourceTypes(ResourceTypes &&) = default ;
      ResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypes() = default ;
      ResourceTypes& operator=(const ResourceTypes &) = default ;
      ResourceTypes& operator=(ResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSources_ == nullptr
        && this->resources_ == nullptr; };
      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<string> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<string>) };
      inline vector<string> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<string>) };
      inline ResourceTypes& setDataSources(const vector<string> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline ResourceTypes& setDataSources(vector<string> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
      inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
      inline ResourceTypes& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline ResourceTypes& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    protected:
      // The DataSource resource types that are used in the template. The value is deduplicated.
      shared_ptr<vector<string>> dataSources_ {};
      // The regular resource types that are used in the template. The value is deduplicated.
      shared_ptr<vector<string>> resources_ {};
    };

    class Outputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(OutputKey, outputKey_);
      };
      friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(OutputKey, outputKey_);
      };
      Outputs() = default ;
      Outputs(const Outputs &) = default ;
      Outputs(Outputs &&) = default ;
      Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Outputs() = default ;
      Outputs& operator=(const Outputs &) = default ;
      Outputs& operator=(Outputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->outputKey_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Outputs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Outputs& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // outputKey Field Functions 
      bool hasOutputKey() const { return this->outputKey_ != nullptr;};
      void deleteOutputKey() { this->outputKey_ = nullptr;};
      inline string getOutputKey() const { DARABONBA_PTR_GET_DEFAULT(outputKey_, "") };
      inline Outputs& setOutputKey(string outputKey) { DARABONBA_PTR_SET_VALUE(outputKey_, outputKey) };


    protected:
      // The description of the template output.
      shared_ptr<string> description_ {};
      // The alias of the template output.
      shared_ptr<string> label_ {};
      // The name of the template output.
      shared_ptr<string> outputKey_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->outputs_ == nullptr && this->parameters_ == nullptr && this->requestId_ == nullptr && this->resourceTypes_ == nullptr && this->resources_ == nullptr
        && this->updateInfo_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ValidateTemplateResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<ValidateTemplateResponseBody::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<ValidateTemplateResponseBody::Outputs>) };
    inline vector<ValidateTemplateResponseBody::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<ValidateTemplateResponseBody::Outputs>) };
    inline ValidateTemplateResponseBody& setOutputs(const vector<ValidateTemplateResponseBody::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ValidateTemplateResponseBody& setOutputs(vector<ValidateTemplateResponseBody::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline ValidateTemplateResponseBody& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ValidateTemplateResponseBody& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const ValidateTemplateResponseBody::ResourceTypes & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, ValidateTemplateResponseBody::ResourceTypes) };
    inline ValidateTemplateResponseBody::ResourceTypes getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, ValidateTemplateResponseBody::ResourceTypes) };
    inline ValidateTemplateResponseBody& setResourceTypes(const ValidateTemplateResponseBody::ResourceTypes & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ValidateTemplateResponseBody& setResourceTypes(ValidateTemplateResponseBody::ResourceTypes && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ValidateTemplateResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ValidateTemplateResponseBody::Resources>) };
    inline vector<ValidateTemplateResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ValidateTemplateResponseBody::Resources>) };
    inline ValidateTemplateResponseBody& setResources(const vector<ValidateTemplateResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ValidateTemplateResponseBody& setResources(vector<ValidateTemplateResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // updateInfo Field Functions 
    bool hasUpdateInfo() const { return this->updateInfo_ != nullptr;};
    void deleteUpdateInfo() { this->updateInfo_ = nullptr;};
    inline const ValidateTemplateResponseBody::UpdateInfo & getUpdateInfo() const { DARABONBA_PTR_GET_CONST(updateInfo_, ValidateTemplateResponseBody::UpdateInfo) };
    inline ValidateTemplateResponseBody::UpdateInfo getUpdateInfo() { DARABONBA_PTR_GET(updateInfo_, ValidateTemplateResponseBody::UpdateInfo) };
    inline ValidateTemplateResponseBody& setUpdateInfo(const ValidateTemplateResponseBody::UpdateInfo & updateInfo) { DARABONBA_PTR_SET_VALUE(updateInfo_, updateInfo) };
    inline ValidateTemplateResponseBody& setUpdateInfo(ValidateTemplateResponseBody::UpdateInfo && updateInfo) { DARABONBA_PTR_SET_RVALUE(updateInfo_, updateInfo) };


  protected:
    // The description of the template.
    shared_ptr<string> description_ {};
    // The outputs of the template.
    shared_ptr<vector<ValidateTemplateResponseBody::Outputs>> outputs_ {};
    // The parameters that are defined in the Parameters section of the template.
    shared_ptr<vector<Darabonba::Json>> parameters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource types that are used in the template.
    shared_ptr<ValidateTemplateResponseBody::ResourceTypes> resourceTypes_ {};
    // The regular resources that are defined in the template.
    // 
    // > - For a Resource Orchestration Service (ROS) template, the resource whose definition contains `Count` is not displayed as a list.
    // > -  For a Terraform template, the resource whose definition contains `count` or `for_each` is not displayed as a list.
    shared_ptr<vector<ValidateTemplateResponseBody::Resources>> resources_ {};
    // The information about the stack update. This parameter cannot be returned if the value of UpdateInfoOptions contains Disabled.
    shared_ptr<ValidateTemplateResponseBody::UpdateInfo> updateInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
