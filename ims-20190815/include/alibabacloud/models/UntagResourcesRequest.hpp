// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UntagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourcePrincipalName, resourcePrincipalName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourcePrincipalName, resourcePrincipalName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
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
    virtual bool empty() const override { this->all_ != nullptr
        && this->resourceId_ != nullptr && this->resourcePrincipalName_ != nullptr && this->resourceType_ != nullptr && this->tagKey_ != nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline UntagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline UntagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourcePrincipalName Field Functions 
    bool hasResourcePrincipalName() const { return this->resourcePrincipalName_ != nullptr;};
    void deleteResourcePrincipalName() { this->resourcePrincipalName_ = nullptr;};
    inline const vector<string> & resourcePrincipalName() const { DARABONBA_PTR_GET_CONST(resourcePrincipalName_, vector<string>) };
    inline vector<string> resourcePrincipalName() { DARABONBA_PTR_GET(resourcePrincipalName_, vector<string>) };
    inline UntagResourcesRequest& setResourcePrincipalName(const vector<string> & resourcePrincipalName) { DARABONBA_PTR_SET_VALUE(resourcePrincipalName_, resourcePrincipalName) };
    inline UntagResourcesRequest& setResourcePrincipalName(vector<string> && resourcePrincipalName) { DARABONBA_PTR_SET_RVALUE(resourcePrincipalName_, resourcePrincipalName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<string> & tagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<string>) };
    inline vector<string> tagKey() { DARABONBA_PTR_GET(tagKey_, vector<string>) };
    inline UntagResourcesRequest& setTagKey(const vector<string> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline UntagResourcesRequest& setTagKey(vector<string> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


  protected:
    // Specifies whether to remove all tags from the resource. Valid values:
    // 
    // *   true: remove all tags from the resources.
    // *   false (default): does not remove all tags from the resources.
    // 
    // > This parameter takes effect only when TagKey.N is not set in the request.
    std::shared_ptr<bool> all_ = nullptr;
    // The IDs of resources.
    // 
    // Valid values of N: 1 to 50. If the ResourceType parameter is set to user, the resource ID is the ID of the RAM user.
    // 
    // > You must specify only one of the following parameters: ResourceId and ResourcePrincipalName.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The names of resources.
    // 
    // Valid values of N: 1 to 50. If the ResourceType parameter is set to user, the resource name is the name of the RAM user.
    // 
    // > You must specify only one of the following parameters: ResourceId and ResourcePrincipalName.
    std::shared_ptr<vector<string>> resourcePrincipalName_ = nullptr;
    // The type of the resource. Valid value:
    // 
    // *   user: a RAM user
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tag keys of resources.
    // 
    // Valid values of N: 1 to 20. N must be consecutive.
    std::shared_ptr<vector<string>> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
