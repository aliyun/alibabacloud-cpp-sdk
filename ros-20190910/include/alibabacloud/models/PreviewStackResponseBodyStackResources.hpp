// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODYSTACKRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODYSTACKRESOURCES_HPP_
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
  class PreviewStackResponseBodyStackResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewStackResponseBodyStackResources& obj) { 
      DARABONBA_PTR_TO_JSON(AcsResourceType, acsResourceType_);
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_ANY_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Replacement, replacement_);
      DARABONBA_PTR_TO_JSON(RequiredBy, requiredBy_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_TO_JSON(Stack, stack_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewStackResponseBodyStackResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AcsResourceType, acsResourceType_);
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_ANY_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Replacement, replacement_);
      DARABONBA_PTR_FROM_JSON(RequiredBy, requiredBy_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_FROM_JSON(Stack, stack_);
    };
    PreviewStackResponseBodyStackResources() = default ;
    PreviewStackResponseBodyStackResources(const PreviewStackResponseBodyStackResources &) = default ;
    PreviewStackResponseBodyStackResources(PreviewStackResponseBodyStackResources &&) = default ;
    PreviewStackResponseBodyStackResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewStackResponseBodyStackResources() = default ;
    PreviewStackResponseBodyStackResources& operator=(const PreviewStackResponseBodyStackResources &) = default ;
    PreviewStackResponseBodyStackResources& operator=(PreviewStackResponseBodyStackResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acsResourceType_ != nullptr
        && this->action_ != nullptr && this->description_ != nullptr && this->logicalResourceId_ != nullptr && this->physicalResourceId_ != nullptr && this->properties_ != nullptr
        && this->replacement_ != nullptr && this->requiredBy_ != nullptr && this->resourceType_ != nullptr && this->stack_ != nullptr; };
    // acsResourceType Field Functions 
    bool hasAcsResourceType() const { return this->acsResourceType_ != nullptr;};
    void deleteAcsResourceType() { this->acsResourceType_ = nullptr;};
    inline string acsResourceType() const { DARABONBA_PTR_GET_DEFAULT(acsResourceType_, "") };
    inline PreviewStackResponseBodyStackResources& setAcsResourceType(string acsResourceType) { DARABONBA_PTR_SET_VALUE(acsResourceType_, acsResourceType) };


    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline PreviewStackResponseBodyStackResources& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PreviewStackResponseBodyStackResources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline PreviewStackResponseBodyStackResources& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // physicalResourceId Field Functions 
    bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
    void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
    inline string physicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
    inline PreviewStackResponseBodyStackResources& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline PreviewStackResponseBodyStackResources& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline PreviewStackResponseBodyStackResources& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // replacement Field Functions 
    bool hasReplacement() const { return this->replacement_ != nullptr;};
    void deleteReplacement() { this->replacement_ = nullptr;};
    inline string replacement() const { DARABONBA_PTR_GET_DEFAULT(replacement_, "") };
    inline PreviewStackResponseBodyStackResources& setReplacement(string replacement) { DARABONBA_PTR_SET_VALUE(replacement_, replacement) };


    // requiredBy Field Functions 
    bool hasRequiredBy() const { return this->requiredBy_ != nullptr;};
    void deleteRequiredBy() { this->requiredBy_ = nullptr;};
    inline const vector<string> & requiredBy() const { DARABONBA_PTR_GET_CONST(requiredBy_, vector<string>) };
    inline vector<string> requiredBy() { DARABONBA_PTR_GET(requiredBy_, vector<string>) };
    inline PreviewStackResponseBodyStackResources& setRequiredBy(const vector<string> & requiredBy) { DARABONBA_PTR_SET_VALUE(requiredBy_, requiredBy) };
    inline PreviewStackResponseBodyStackResources& setRequiredBy(vector<string> && requiredBy) { DARABONBA_PTR_SET_RVALUE(requiredBy_, requiredBy) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PreviewStackResponseBodyStackResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline     const Darabonba::Json & stack() const { DARABONBA_GET(stack_) };
    Darabonba::Json & stack() { DARABONBA_GET(stack_) };
    inline PreviewStackResponseBodyStackResources& setStack(const Darabonba::Json & stack) { DARABONBA_SET_VALUE(stack_, stack) };
    inline PreviewStackResponseBodyStackResources& setStack(Darabonba::Json & stack) { DARABONBA_SET_RVALUE(stack_, stack) };


  protected:
    // The resource type of an Alibaba Cloud service.
    std::shared_ptr<string> acsResourceType_ = nullptr;
    // The action that is performed on the resource. Valid values:
    // 
    // *   Add
    // *   Modify
    // *   Remove
    // *   None
    std::shared_ptr<string> action_ = nullptr;
    // The description of the resource.
    std::shared_ptr<string> description_ = nullptr;
    // The logical ID of the resource.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The physical ID of the resource.
    // 
    // This parameter is returned only if Action is set to Modify or Remove.
    std::shared_ptr<string> physicalResourceId_ = nullptr;
    // The resource properties.
    Darabonba::Json properties_ = nullptr;
    // Indicates whether a replacement update is performed on the template. Valid values:
    // 
    // *   True: A replacement update is performed on the template.
    // *   False: A change is made on the template.
    // *   Conditional: A replacement update may be performed on the template. You can check whether a replacement update is performed when the template is in use.
    // 
    // > This parameter is returned only if Action is set to Modify.
    std::shared_ptr<string> replacement_ = nullptr;
    // The resources on which the stack depends.
    std::shared_ptr<vector<string>> requiredBy_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The information about the nested stack. The data structure of the value is the same as the data structure of the entire response.
    Darabonba::Json stack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
