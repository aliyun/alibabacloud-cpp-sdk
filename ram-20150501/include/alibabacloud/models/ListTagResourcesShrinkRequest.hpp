// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListTagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceNames, resourceNamesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceNames, resourceNamesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
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
        && this->pageSize_ == nullptr && this->resourceNamesShrink_ == nullptr && this->resourceType_ == nullptr && this->tagShrink_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagResourcesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceNamesShrink Field Functions 
    bool hasResourceNamesShrink() const { return this->resourceNamesShrink_ != nullptr;};
    void deleteResourceNamesShrink() { this->resourceNamesShrink_ = nullptr;};
    inline string getResourceNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceNamesShrink_, "") };
    inline ListTagResourcesShrinkRequest& setResourceNamesShrink(string resourceNamesShrink) { DARABONBA_PTR_SET_VALUE(resourceNamesShrink_, resourceNamesShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListTagResourcesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The names of the resources. You can specify up to 50 resource names.
    shared_ptr<string> resourceNamesShrink_ {};
    // The resource type.
    // 
    // Enumerated values:
    // 
    // *   role: RAM roles.
    // *   policy: policies.
    shared_ptr<string> resourceType_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
