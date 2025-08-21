// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagResourcesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class TagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourcePrincipalName, resourcePrincipalName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourcePrincipalName, resourcePrincipalName_);
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
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->resourcePrincipalName_ != nullptr && this->resourceType_ != nullptr && this->tag_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline TagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline TagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourcePrincipalName Field Functions 
    bool hasResourcePrincipalName() const { return this->resourcePrincipalName_ != nullptr;};
    void deleteResourcePrincipalName() { this->resourcePrincipalName_ = nullptr;};
    inline const vector<string> & resourcePrincipalName() const { DARABONBA_PTR_GET_CONST(resourcePrincipalName_, vector<string>) };
    inline vector<string> resourcePrincipalName() { DARABONBA_PTR_GET(resourcePrincipalName_, vector<string>) };
    inline TagResourcesRequest& setResourcePrincipalName(const vector<string> & resourcePrincipalName) { DARABONBA_PTR_SET_VALUE(resourcePrincipalName_, resourcePrincipalName) };
    inline TagResourcesRequest& setResourcePrincipalName(vector<string> && resourcePrincipalName) { DARABONBA_PTR_SET_RVALUE(resourcePrincipalName_, resourcePrincipalName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<TagResourcesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<TagResourcesRequestTag>) };
    inline vector<TagResourcesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<TagResourcesRequestTag>) };
    inline TagResourcesRequest& setTag(const vector<TagResourcesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline TagResourcesRequest& setTag(vector<TagResourcesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of resource N.
    // 
    // Valid values of N: 1 to 50. If the ResourceType parameter is set to user, the resource ID is the ID of the RAM user.
    // 
    // >  You must specify only one of the following parameters: `ResourceId` and `ResourcePrincipalName`.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The name of resource N.
    // 
    // Valid values of N: 1 to 50. If the ResourceType parameter is set to user, the resource name is the name of the RAM user.
    // 
    // >  You must specify only one of the following parameters: `ResourceId` and `ResourcePrincipalName`.
    std::shared_ptr<vector<string>> resourcePrincipalName_ = nullptr;
    // The type of the resource. Valid value:
    // 
    // *   user: a Resource Access Management (RAM) user.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The key of tag N.
    // 
    // Valid values of N: 1 to 20. You cannot specify empty strings as tag keys. The tag key can be up to 128 characters in length. The tag key cannot start with aliyun or acs: and cannot contain `http://` or `https://`.
    std::shared_ptr<vector<TagResourcesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
