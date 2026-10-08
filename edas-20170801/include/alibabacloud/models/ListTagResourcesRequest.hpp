// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    ListTagResourcesRequest() = default ;
    ListTagResourcesRequest(const ListTagResourcesRequest &) = default ;
    ListTagResourcesRequest(ListTagResourcesRequest &&) = default ;
    ListTagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesRequest() = default ;
    ListTagResourcesRequest& operator=(const ListTagResourcesRequest &) = default ;
    ListTagResourcesRequest& operator=(ListTagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceIds_ == nullptr
        && this->resourceRegionId_ == nullptr && this->resourceType_ == nullptr && this->tags_ == nullptr; };
    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline     const Darabonba::Json & getResourceIds() const { DARABONBA_GET(resourceIds_) };
    Darabonba::Json & getResourceIds() { DARABONBA_GET(resourceIds_) };
    inline ListTagResourcesRequest& setResourceIds(const Darabonba::Json & resourceIds) { DARABONBA_SET_VALUE(resourceIds_, resourceIds) };
    inline ListTagResourcesRequest& setResourceIds(Darabonba::Json && resourceIds) { DARABONBA_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline ListTagResourcesRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline ListTagResourcesRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListTagResourcesRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The IDs of the resources. You can specify up to 20 IDs. Set this parameter to a JSON array.
    Darabonba::Json resourceIds_ {};
    // The region in which the resource resides.
    // 
    // This parameter is required.
    shared_ptr<string> resourceRegionId_ {};
    // The type of the resource. Valid values:
    // 
    // *   **application**: Enterprise Distributed Application Service (EDAS) application
    // *   **cluster**: EDAS cluster
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The key-value pairs that specify the tags.
    // 
    // *   You can add up to 20 tags to a resource.
    // *   The key cannot start with **aliyun** or **acs:** and cannot contain **http://** or **https://**.
    // *   The tag key or tag value can be up to 128 characters in length, and can contain letters, digits, hyphens (-), commas (,), asterisks (\\*), forward slashes (/), question marks (?), and colons (:).
    // *   Set this parameter to a JSON array.
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
