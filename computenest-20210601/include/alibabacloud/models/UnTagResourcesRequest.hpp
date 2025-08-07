// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UnTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, UnTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    UnTagResourcesRequest() = default ;
    UnTagResourcesRequest(const UnTagResourcesRequest &) = default ;
    UnTagResourcesRequest(UnTagResourcesRequest &&) = default ;
    UnTagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnTagResourcesRequest() = default ;
    UnTagResourcesRequest& operator=(const UnTagResourcesRequest &) = default ;
    UnTagResourcesRequest& operator=(UnTagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->all_ != nullptr
        && this->regionId_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->tagKey_ != nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UnTagResourcesRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnTagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline UnTagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline UnTagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UnTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<string> & tagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<string>) };
    inline vector<string> tagKey() { DARABONBA_PTR_GET(tagKey_, vector<string>) };
    inline UnTagResourcesRequest& setTagKey(const vector<string> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline UnTagResourcesRequest& setTagKey(vector<string> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


  protected:
    // Specifies whether to remove all tags from the resource. Valid values:
    // 
    // *   true: All tags are removed from the resource.
    // *   false (default): The specified tags are removed from the resource.
    std::shared_ptr<bool> all_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource ID.
    // 
    // You can remove tags from up to 50 resources at a time.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   service: service
    // *   serviceinstance: service instance
    // *   artifact: artifact
    // *   dataset: dataset
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tag keys.
    // 
    // You can specify a maximum of 20 tag keys.
    // 
    // > If you set the `All` parameter to `true`, you do not need to specify tag keys.
    std::shared_ptr<vector<string>> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
