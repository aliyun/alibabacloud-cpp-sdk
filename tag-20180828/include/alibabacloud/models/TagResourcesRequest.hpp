// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class TagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceARN_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->tags_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline TagResourcesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TagResourcesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceARN Field Functions 
    bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
    void deleteResourceARN() { this->resourceARN_ = nullptr;};
    inline const vector<string> & resourceARN() const { DARABONBA_PTR_GET_CONST(resourceARN_, vector<string>) };
    inline vector<string> resourceARN() { DARABONBA_PTR_GET(resourceARN_, vector<string>) };
    inline TagResourcesRequest& setResourceARN(const vector<string> & resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };
    inline TagResourcesRequest& setResourceARN(vector<string> && resourceARN) { DARABONBA_PTR_SET_RVALUE(resourceARN_, resourceARN) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TagResourcesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline TagResourcesRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // *   If the resources belong to a service that is centrally deployed, set the value to `cn-hangzhou` or to the region ID of the resources by referring to [Regions supported by tag-related operations on resources of centrally deployed Alibaba Cloud services](https://help.aliyun.com/document_detail/2579691.html).
    // *   If the resources belong to a service that is not centrally deployed, set the value to the region ID of the resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of a resource.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceARN_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The key-value pairs of tags. You can specify 1 to 10 key-value pairs.
    // 
    // If you specify multiple tags, the system adds all the tags to the specified resources.
    // 
    // Limits:
    // 
    // *   A tag key must be 1 to 128 characters in length.
    // *   A tag value must be 1 to 128 characters in length.
    // *   Tag keys and tag values are case-sensitive.
    // *   Each tag key on a resource can have only one tag value. If you create a tag that has the same key as an existing tag, the value of the existing tag is overwritten.
    // 
    // This parameter is required.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
