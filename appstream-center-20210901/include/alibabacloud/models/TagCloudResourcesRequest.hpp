// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESREQUEST_HPP_
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
  class TagCloudResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagCloudResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagCloudResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    TagCloudResourcesRequest() = default ;
    TagCloudResourcesRequest(const TagCloudResourcesRequest &) = default ;
    TagCloudResourcesRequest(TagCloudResourcesRequest &&) = default ;
    TagCloudResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagCloudResourcesRequest() = default ;
    TagCloudResourcesRequest& operator=(const TagCloudResourcesRequest &) = default ;
    TagCloudResourcesRequest& operator=(TagCloudResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of a tag. The value must be 1 to 128 characters in length and is case-sensitive. The name must be 1 to 128 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The value of a tag. The value must be 1 to 128 characters in length and is case-sensitive. The name must be 1 to 128 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->resourceIds_ == nullptr
        && this->resourceType_ == nullptr && this->tags_ == nullptr; };
    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline TagCloudResourcesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline TagCloudResourcesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagCloudResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<TagCloudResourcesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TagCloudResourcesRequest::Tags>) };
    inline vector<TagCloudResourcesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TagCloudResourcesRequest::Tags>) };
    inline TagCloudResourcesRequest& setTags(const vector<TagCloudResourcesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TagCloudResourcesRequest& setTags(vector<TagCloudResourcesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The resource IDs. You can specify up to 50 resource IDs. You do not need to specify this parameter if you set ResourceType to AliUid.
    shared_ptr<vector<string>> resourceIds_ {};
    // The type of the cloud resource.
    // 
    // Valid values:
    // 
    // *   CenterImageId: center image ID.
    // *   AppId: app ID.
    // *   WyId: Alibaba Cloud Workspace user ID.
    // *   AppInstanceGroupId: delivery group ID.
    // *   AliUid: tenant ID.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The tags that you want to remove from the cloud resources. System and custom tags are supported.
    // 
    // *   Valid values for system tags:
    // 
    //     *   `System/Scheduler/GRAYSCALE`: canary tags.
    //     *   `System/Scheduler/STOP_NEW_USER_CONNECTION`: tags used to stop new users bound to the delivery group from establishing a connection.
    // 
    // *   You can create up to 20 custom tags.
    // 
    // > Each tag key on a resource can have only one tag value. If you create a tag that has the same key as an existing tag, the value of the existing tag is overwritten.
    // 
    // This parameter is required.
    shared_ptr<vector<TagCloudResourcesRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
