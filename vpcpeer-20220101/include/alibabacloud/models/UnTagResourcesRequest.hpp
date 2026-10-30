// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class UnTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, UnTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
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
    virtual bool empty() const override { return this->all_ == nullptr
        && this->clientToken_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->tagKey_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UnTagResourcesRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UnTagResourcesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnTagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline UnTagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline UnTagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UnTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<string> & getTagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<string>) };
    inline vector<string> getTagKey() { DARABONBA_PTR_GET(tagKey_, vector<string>) };
    inline UnTagResourcesRequest& setTagKey(const vector<string> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline UnTagResourcesRequest& setTagKey(vector<string> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


  protected:
    // Specifies whether to remove all tags from the resource. Valid values:
    // - **true**: Removes all tags from the resource.
    // - **false** (default): Does not remove all tags from the resource.
    shared_ptr<bool> all_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the token value on your client and ensure that it is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // The ID of the region where the tag resides. 
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource. You can specify up to 20 resource IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceId_ {};
    // The resource type. Valid value: **PeerConnection**, which indicates a VPC peering connection.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The tag key that you want to remove. You can specify up to 20 tag keys. If you need to pass this parameter, you can enter an empty string.
    // 
    // A tag key can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
    shared_ptr<vector<string>> tagKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
