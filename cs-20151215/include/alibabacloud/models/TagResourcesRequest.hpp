// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class TagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_ids, resourceIds_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_ids, resourceIds_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
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
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceIds_ != nullptr && this->resourceType_ != nullptr && this->tags_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline TagResourcesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline TagResourcesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline TagResourcesRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TagResourcesRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the region in which the resource resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of resource IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // The type of resources that you want to label. Set the value to `CLUSTER`.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags that you want to add to the resources in key-value pairs. You can add up to 20 key-value pairs. Note:
    // 
    // *   The values cannot be empty strings. A value must be 1 to 128 characters in length.
    // *   A key or value cannot start with `aliyun` or `acs:`.
    // *   A key or value cannot contain `http://` or `https://`.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
