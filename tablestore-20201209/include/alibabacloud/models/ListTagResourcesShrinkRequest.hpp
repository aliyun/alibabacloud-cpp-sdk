// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListTagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceIdsShrink_ == nullptr && this->resourceType_ == nullptr && this->tagsShrink_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTagResourcesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string getResourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline ListTagResourcesShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListTagResourcesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The maximum number of tagged resources that you want to return. Valid values: 0 to 200. If you do not specify this parameter or set the parameter to 0, the default value of 100 is used.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken. Tagged resources are returned in lexicographical order starting from the position that is specified by this parameter.
    shared_ptr<string> nextToken_ {};
    // The resource IDs, which are instance names.
    shared_ptr<string> resourceIdsShrink_ {};
    // The type of the resource. valid value:
    // 
    // instance: instance
    shared_ptr<string> resourceType_ {};
    // The tags.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
