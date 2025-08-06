// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENTIMAGECOMPONENTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENTIMAGECOMPONENTSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters.hpp>
#include <alibabacloud/models/DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageComponentsResponseBodyImageComponentImageComponentSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageComponentsResponseBodyImageComponentImageComponentSet& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageComponentId, imageComponentId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageComponentsResponseBodyImageComponentImageComponentSet& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageComponentId, imageComponentId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeImageComponentsResponseBodyImageComponentImageComponentSet() = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSet(const DescribeImageComponentsResponseBodyImageComponentImageComponentSet &) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSet(DescribeImageComponentsResponseBodyImageComponentImageComponentSet &&) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageComponentsResponseBodyImageComponentImageComponentSet() = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSet& operator=(const DescribeImageComponentsResponseBodyImageComponentImageComponentSet &) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSet& operator=(DescribeImageComponentsResponseBodyImageComponentImageComponentSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentType_ != nullptr
        && this->componentVersion_ != nullptr && this->content_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->imageComponentId_ != nullptr
        && this->name_ != nullptr && this->owner_ != nullptr && this->parameters_ != nullptr && this->resourceGroupId_ != nullptr && this->systemType_ != nullptr
        && this->tags_ != nullptr; };
    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // componentVersion Field Functions 
    bool hasComponentVersion() const { return this->componentVersion_ != nullptr;};
    void deleteComponentVersion() { this->componentVersion_ = nullptr;};
    inline string componentVersion() const { DARABONBA_PTR_GET_DEFAULT(componentVersion_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setComponentVersion(string componentVersion) { DARABONBA_PTR_SET_VALUE(componentVersion_, componentVersion) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageComponentId Field Functions 
    bool hasImageComponentId() const { return this->imageComponentId_ != nullptr;};
    void deleteImageComponentId() { this->imageComponentId_ = nullptr;};
    inline string imageComponentId() const { DARABONBA_PTR_GET_DEFAULT(imageComponentId_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setImageComponentId(string imageComponentId) { DARABONBA_PTR_SET_VALUE(imageComponentId_, imageComponentId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters) };
    inline Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters) };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setParameters(const Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setParameters(Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string systemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags) };
    inline Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags) };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setTags(const Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSet& setTags(Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The type of the image component.
    std::shared_ptr<string> componentType_ = nullptr;
    // The version number of the image component.
    std::shared_ptr<string> componentVersion_ = nullptr;
    // The content of the image component.
    std::shared_ptr<string> content_ = nullptr;
    // The time when the image component was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the image component.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the image component.
    std::shared_ptr<string> imageComponentId_ = nullptr;
    // The name of the image component.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the image component. Valid values:
    // 
    // *   SELF: the custom component that you created.
    // *   ALIYUN: the system component provided by Alibaba Cloud.
    std::shared_ptr<string> owner_ = nullptr;
    // The parameters contained in the image component.
    std::shared_ptr<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters> parameters_ = nullptr;
    // The ID of the resource group to which the image component belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the operating system supported by the image component.
    std::shared_ptr<string> systemType_ = nullptr;
    // The tags of the image component.
    std::shared_ptr<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
