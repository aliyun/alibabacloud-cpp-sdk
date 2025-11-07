// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UntagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_ANY_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_ANY_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_FROM_JSON(TagKeys, tagKeys_);
    };
    UntagResourcesRequest() = default ;
    UntagResourcesRequest(const UntagResourcesRequest &) = default ;
    UntagResourcesRequest(UntagResourcesRequest &&) = default ;
    UntagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesRequest() = default ;
    UntagResourcesRequest& operator=(const UntagResourcesRequest &) = default ;
    UntagResourcesRequest& operator=(UntagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceIds_ == nullptr && return this->resourceType_ == nullptr && return this->tagKeys_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UntagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline     const Darabonba::Json & resourceIds() const { DARABONBA_GET(resourceIds_) };
    Darabonba::Json & resourceIds() { DARABONBA_GET(resourceIds_) };
    inline UntagResourcesRequest& setResourceIds(const Darabonba::Json & resourceIds) { DARABONBA_SET_VALUE(resourceIds_, resourceIds) };
    inline UntagResourcesRequest& setResourceIds(Darabonba::Json & resourceIds) { DARABONBA_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline     const Darabonba::Json & tagKeys() const { DARABONBA_GET(tagKeys_) };
    Darabonba::Json & tagKeys() { DARABONBA_GET(tagKeys_) };
    inline UntagResourcesRequest& setTagKeys(const Darabonba::Json & tagKeys) { DARABONBA_SET_VALUE(tagKeys_, tagKeys) };
    inline UntagResourcesRequest& setTagKeys(Darabonba::Json & tagKeys) { DARABONBA_SET_RVALUE(tagKeys_, tagKeys) };


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
    Darabonba::Json resourceIds_ = nullptr;
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
    Darabonba::Json tagKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
