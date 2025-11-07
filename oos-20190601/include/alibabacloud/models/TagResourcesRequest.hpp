// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class TagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_ANY_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_ANY_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    TagResourcesRequest() = default ;
    TagResourcesRequest(const TagResourcesRequest &) = default ;
    TagResourcesRequest(TagResourcesRequest &&) = default ;
    TagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesRequest() = default ;
    TagResourcesRequest& operator=(const TagResourcesRequest &) = default ;
    TagResourcesRequest& operator=(TagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->resourceIds_ == nullptr && return this->resourceType_ == nullptr && return this->tags_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline     const Darabonba::Json & resourceIds() const { DARABONBA_GET(resourceIds_) };
    Darabonba::Json & resourceIds() { DARABONBA_GET(resourceIds_) };
    inline TagResourcesRequest& setResourceIds(const Darabonba::Json & resourceIds) { DARABONBA_SET_VALUE(resourceIds_, resourceIds) };
    inline TagResourcesRequest& setResourceIds(Darabonba::Json & resourceIds) { DARABONBA_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline TagResourcesRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline TagResourcesRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


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
    // The tag keys and values. The number of key-value pairs ranges from 1 to 20.
    // 
    // This parameter is required.
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
