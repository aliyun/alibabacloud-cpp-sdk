// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class TagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    TagResourcesShrinkRequest() = default ;
    TagResourcesShrinkRequest(const TagResourcesShrinkRequest &) = default ;
    TagResourcesShrinkRequest(TagResourcesShrinkRequest &&) = default ;
    TagResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesShrinkRequest() = default ;
    TagResourcesShrinkRequest& operator=(const TagResourcesShrinkRequest &) = default ;
    TagResourcesShrinkRequest& operator=(TagResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->resourceIdsShrink_ == nullptr && return this->resourceType_ == nullptr && return this->tagsShrink_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TagResourcesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string resourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline TagResourcesShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline TagResourcesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the resources for which you want to modify the resource group. The number of resource IDs is 1 to 50.
    // 
    // *   If you set ResourceType to template, specify ResourceIds in the ["TemplateName1","TemplateName2"] format.
    // *   If you set ResourceType to parameter, specify ResourceIds in the ["Name1","Name2"] format.
    // *   If you set ResourceType to secretparameter, specify ResourceIds in the ["Name1","Name2"] format.
    // *   If you set ResourceType to stateconfiguration, specify ResourceIds in the ["StateConfigurationId 1","StateConfigurationId 2"] format.
    // *   If you set ResourceType to application, specify ResourceIds in the ["Name1","Name2"] format.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceIdsShrink_ = nullptr;
    // The type of the resource for which you want to modify the resource group. Valid values:
    // 
    // *   template: template.
    // *   parameter: parameter.
    // *   secretparameter: encryption parameter.
    // *   stateconfiguration: desired-state configuration.
    // *   application: application.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tag keys and values. The number of key-value pairs ranges from 1 to 20.
    // 
    // This parameter is required.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
