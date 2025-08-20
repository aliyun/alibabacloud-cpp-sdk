// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATERESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ValidateTemplateResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalResourceIdPattern, logicalResourceIdPattern_);
      DARABONBA_PTR_TO_JSON(ResourcePath, resourcePath_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalResourceIdPattern, logicalResourceIdPattern_);
      DARABONBA_PTR_FROM_JSON(ResourcePath, resourcePath_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ValidateTemplateResponseBodyResources() = default ;
    ValidateTemplateResponseBodyResources(const ValidateTemplateResponseBodyResources &) = default ;
    ValidateTemplateResponseBodyResources(ValidateTemplateResponseBodyResources &&) = default ;
    ValidateTemplateResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateResponseBodyResources() = default ;
    ValidateTemplateResponseBodyResources& operator=(const ValidateTemplateResponseBodyResources &) = default ;
    ValidateTemplateResponseBodyResources& operator=(ValidateTemplateResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicalResourceIdPattern_ != nullptr
        && this->resourcePath_ != nullptr && this->resourceType_ != nullptr; };
    // logicalResourceIdPattern Field Functions 
    bool hasLogicalResourceIdPattern() const { return this->logicalResourceIdPattern_ != nullptr;};
    void deleteLogicalResourceIdPattern() { this->logicalResourceIdPattern_ = nullptr;};
    inline string logicalResourceIdPattern() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceIdPattern_, "") };
    inline ValidateTemplateResponseBodyResources& setLogicalResourceIdPattern(string logicalResourceIdPattern) { DARABONBA_PTR_SET_VALUE(logicalResourceIdPattern_, logicalResourceIdPattern) };


    // resourcePath Field Functions 
    bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
    void deleteResourcePath() { this->resourcePath_ = nullptr;};
    inline string resourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
    inline ValidateTemplateResponseBodyResources& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ValidateTemplateResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


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
    std::shared_ptr<string> logicalResourceIdPattern_ = nullptr;
    // The path of the regular resource. In most cases, the path of a regular resource is the same as the resource name.
    std::shared_ptr<string> resourcePath_ = nullptr;
    // The regular resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
