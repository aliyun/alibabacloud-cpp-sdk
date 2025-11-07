// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UntagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeysShrink_);
    };
    UntagResourcesShrinkRequest() = default ;
    UntagResourcesShrinkRequest(const UntagResourcesShrinkRequest &) = default ;
    UntagResourcesShrinkRequest(UntagResourcesShrinkRequest &&) = default ;
    UntagResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesShrinkRequest() = default ;
    UntagResourcesShrinkRequest& operator=(const UntagResourcesShrinkRequest &) = default ;
    UntagResourcesShrinkRequest& operator=(UntagResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceIdsShrink_ == nullptr && return this->resourceType_ == nullptr && return this->tagKeysShrink_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesShrinkRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UntagResourcesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string resourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline UntagResourcesShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeysShrink Field Functions 
    bool hasTagKeysShrink() const { return this->tagKeysShrink_ != nullptr;};
    void deleteTagKeysShrink() { this->tagKeysShrink_ = nullptr;};
    inline string tagKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeysShrink_, "") };
    inline UntagResourcesShrinkRequest& setTagKeysShrink(string tagKeysShrink) { DARABONBA_PTR_SET_VALUE(tagKeysShrink_, tagKeysShrink) };


  protected:
    // Specifies whether to remove all tags. This parameter takes effect only if TagKeys is left empty. Valid values: true and false. Default value: false. TagKeys is required if this parameter is set to false.
    std::shared_ptr<bool> all_ = nullptr;
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
    // The tag keys. The number of keys ranges from 1 to 20.
    std::shared_ptr<string> tagKeysShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
