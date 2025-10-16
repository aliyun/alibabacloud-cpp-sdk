// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGCLOUDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGCLOUDRESOURCESREQUEST_HPP_
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
  class UntagCloudResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagCloudResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, UntagCloudResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    UntagCloudResourcesRequest() = default ;
    UntagCloudResourcesRequest(const UntagCloudResourcesRequest &) = default ;
    UntagCloudResourcesRequest(UntagCloudResourcesRequest &&) = default ;
    UntagCloudResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagCloudResourcesRequest() = default ;
    UntagCloudResourcesRequest& operator=(const UntagCloudResourcesRequest &) = default ;
    UntagCloudResourcesRequest& operator=(UntagCloudResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceIds_ == nullptr
        && return this->resourceType_ == nullptr && return this->tagKeys_ == nullptr; };
    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline UntagCloudResourcesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline UntagCloudResourcesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagCloudResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & tagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> tagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline UntagCloudResourcesRequest& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline UntagCloudResourcesRequest& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // The resource IDs. You can specify up to 50 resource IDs. You do not need to specify this parameter if you set ResourceType to AliUid.
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // The type of the resource from which you want to remove tags.
    // 
    // Valid values:
    // 
    // *   AppId: app ID.
    // *   WyId: Alibaba Cloud Workspace user ID.
    // *   AppInstanceGroupId: delivery group ID.
    // *   AliUid: tenant ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags that you want to remove from the cloud resources. System and custom tags are supported. You can specify up to 10 tags.
    // 
    // Valid values for system tags:
    // 
    // *   `System/Scheduler/GRAYSCALE`: canary tags.
    // *   `System/Scheduler/STOP_NEW_USER_CONNECTION`: tags used to stop new users bound to the delivery group from establishing a connection.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> tagKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
