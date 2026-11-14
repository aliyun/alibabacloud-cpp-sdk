// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class TagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. This parameter is required. The tag key must be 1 to 128 characters in length and is case-sensitive. It cannot start with `aliyun` or `acs:` (case-insensitive) and cannot contain `http://` or `https://`. It supports letters, digits, spaces, and common Chinese and English punctuation marks. If the tag key does not meet the rules, the error code `InvalidTagPolicy.KeyInvalid` is returned.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value. This parameter is required. The tag value must be 0 to 256 characters in length and is case-sensitive. Empty strings are allowed. It cannot contain `http://` or `https://`. If the tag value does not meet the rules, the error code `InvalidTagPolicy.ValueInvalid` is returned.
      // 
      // If the tag key is a system tag, the tag value can only be `true` or `false`.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->tag_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline TagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline TagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<TagResourcesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<TagResourcesRequest::Tag>) };
    inline vector<TagResourcesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<TagResourcesRequest::Tag>) };
    inline TagResourcesRequest& setTag(const vector<TagResourcesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline TagResourcesRequest& setTag(vector<TagResourcesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The region ID. This parameter is required. Specify the ID of the region where the app instance group resides, such as `cn-hangzhou`.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of resource IDs to which you want to bind tags. This parameter is required. Specify the app instance group IDs. You can specify up to 50 IDs in a single request. Duplicate IDs are automatically deduplicated.
    // 
    // **All IDs must belong to existing app instance groups under the current Alibaba Cloud account.** If any ID does not exist or does not belong to the current account, the entire request fails and the error code `InvalidAppInstanceGroup.NotFound` is returned. No tags are bound to any resources.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceId_ {};
    // The resource type. This parameter is required. **Currently, only app instance groups are supported**. The value is case-insensitive, but we recommend that you use uppercase letters:
    // 
    // - `APPINSTANCEGROUP`: app instance group.
    // 
    // If you specify other values, the error code `InvalidResourceType.Invalid` is returned.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The list of tags to bind. This parameter is required. You can specify up to 20 tags in a single request. You must specify both Key and Value for each tag.
    // 
    // - Tag keys in the same request cannot be duplicate. Otherwise, the error code `InvalidTag.Duplicated` is returned.
    // - If a tag with the same key already exists on the resource, the tag value is updated to the value specified in the current request.
    // - A single resource can be bound to up to 20 custom tags. If this limit is exceeded, the error code `ResourceTag.CustomTagCountExceed` is returned.
    // 
    // Tag keys starting with `System/` are Wuying system tags. Only the following values are supported, and the tag value can only be `true` or `false`:
    // 
    // - `System/Scheduler/GRAYSCALE`: the canary release tag for the app instance group.
    // - `System/Scheduler/STOP_NEW_USER_CONNECTION`: prevents newly bound users from establishing connections to the app instance group.
    // 
    // If you specify other tag keys starting with `System/`, the error code `InvalidTag.SystemTagKeyInvalid` or `InvalidTag.SystemKeyNotAllow` is returned.
    // 
    // This parameter is required.
    shared_ptr<vector<TagResourcesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
