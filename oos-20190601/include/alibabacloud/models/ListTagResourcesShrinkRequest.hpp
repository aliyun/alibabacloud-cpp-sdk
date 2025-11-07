// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    ListTagResourcesShrinkRequest() = default ;
    ListTagResourcesShrinkRequest(const ListTagResourcesShrinkRequest &) = default ;
    ListTagResourcesShrinkRequest(ListTagResourcesShrinkRequest &&) = default ;
    ListTagResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesShrinkRequest() = default ;
    ListTagResourcesShrinkRequest& operator=(const ListTagResourcesShrinkRequest &) = default ;
    ListTagResourcesShrinkRequest& operator=(ListTagResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceIdsShrink_ == nullptr && return this->resourceType_ == nullptr && return this->tagsShrink_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTagResourcesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string resourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline ListTagResourcesShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListTagResourcesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of resources. The number of resource IDs ranges from 1 to 50.
    std::shared_ptr<string> resourceIdsShrink_ = nullptr;
    // The type of the resource. Valid values: template execution
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tag keys and values. The number of key-value pairs ranges from 1 to 20.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
