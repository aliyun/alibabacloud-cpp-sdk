// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValidateTemplateResponseBodyOutputs.hpp>
#include <alibabacloud/models/ValidateTemplateResponseBodyResourceTypes.hpp>
#include <alibabacloud/models/ValidateTemplateResponseBodyResources.hpp>
#include <alibabacloud/models/ValidateTemplateResponseBodyUpdateInfo.hpp>
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
    virtual bool empty() const override { this->description_ != nullptr
        && this->outputs_ != nullptr && this->parameters_ != nullptr && this->requestId_ != nullptr && this->resourceTypes_ != nullptr && this->resources_ != nullptr
        && this->updateInfo_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ValidateTemplateResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<ValidateTemplateResponseBodyOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<ValidateTemplateResponseBodyOutputs>) };
    inline vector<ValidateTemplateResponseBodyOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<ValidateTemplateResponseBodyOutputs>) };
    inline ValidateTemplateResponseBody& setOutputs(const vector<ValidateTemplateResponseBodyOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ValidateTemplateResponseBody& setOutputs(vector<ValidateTemplateResponseBodyOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> parameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline ValidateTemplateResponseBody& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ValidateTemplateResponseBody& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const ValidateTemplateResponseBodyResourceTypes & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, ValidateTemplateResponseBodyResourceTypes) };
    inline ValidateTemplateResponseBodyResourceTypes resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, ValidateTemplateResponseBodyResourceTypes) };
    inline ValidateTemplateResponseBody& setResourceTypes(const ValidateTemplateResponseBodyResourceTypes & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ValidateTemplateResponseBody& setResourceTypes(ValidateTemplateResponseBodyResourceTypes && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ValidateTemplateResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ValidateTemplateResponseBodyResources>) };
    inline vector<ValidateTemplateResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<ValidateTemplateResponseBodyResources>) };
    inline ValidateTemplateResponseBody& setResources(const vector<ValidateTemplateResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ValidateTemplateResponseBody& setResources(vector<ValidateTemplateResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // updateInfo Field Functions 
    bool hasUpdateInfo() const { return this->updateInfo_ != nullptr;};
    void deleteUpdateInfo() { this->updateInfo_ = nullptr;};
    inline const ValidateTemplateResponseBodyUpdateInfo & updateInfo() const { DARABONBA_PTR_GET_CONST(updateInfo_, ValidateTemplateResponseBodyUpdateInfo) };
    inline ValidateTemplateResponseBodyUpdateInfo updateInfo() { DARABONBA_PTR_GET(updateInfo_, ValidateTemplateResponseBodyUpdateInfo) };
    inline ValidateTemplateResponseBody& setUpdateInfo(const ValidateTemplateResponseBodyUpdateInfo & updateInfo) { DARABONBA_PTR_SET_VALUE(updateInfo_, updateInfo) };
    inline ValidateTemplateResponseBody& setUpdateInfo(ValidateTemplateResponseBodyUpdateInfo && updateInfo) { DARABONBA_PTR_SET_RVALUE(updateInfo_, updateInfo) };


  protected:
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The outputs of the template.
    std::shared_ptr<vector<ValidateTemplateResponseBodyOutputs>> outputs_ = nullptr;
    // The parameters that are defined in the Parameters section of the template.
    std::shared_ptr<vector<Darabonba::Json>> parameters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource types that are used in the template.
    std::shared_ptr<ValidateTemplateResponseBodyResourceTypes> resourceTypes_ = nullptr;
    // The regular resources that are defined in the template.
    // 
    // > - For a Resource Orchestration Service (ROS) template, the resource whose definition contains `Count` is not displayed as a list.
    // > -  For a Terraform template, the resource whose definition contains `count` or `for_each` is not displayed as a list.
    std::shared_ptr<vector<ValidateTemplateResponseBodyResources>> resources_ = nullptr;
    // The information about the stack update. This parameter cannot be returned if the value of UpdateInfoOptions contains Disabled.
    std::shared_ptr<ValidateTemplateResponseBodyUpdateInfo> updateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
