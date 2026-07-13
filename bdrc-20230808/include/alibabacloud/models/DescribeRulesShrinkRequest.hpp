// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeRulesShrinkRequest() = default ;
    DescribeRulesShrinkRequest(const DescribeRulesShrinkRequest &) = default ;
    DescribeRulesShrinkRequest(DescribeRulesShrinkRequest &&) = default ;
    DescribeRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesShrinkRequest() = default ;
    DescribeRulesShrinkRequest& operator=(const DescribeRulesShrinkRequest &) = default ;
    DescribeRulesShrinkRequest& operator=(DescribeRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceCategoryId_ == nullptr && this->resourceOwnerIdsShrink_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRulesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRulesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeRulesShrinkRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceOwnerIdsShrink Field Functions 
    bool hasResourceOwnerIdsShrink() const { return this->resourceOwnerIdsShrink_ != nullptr;};
    void deleteResourceOwnerIdsShrink() { this->resourceOwnerIdsShrink_ = nullptr;};
    inline string getResourceOwnerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerIdsShrink_, "") };
    inline DescribeRulesShrinkRequest& setResourceOwnerIdsShrink(string resourceOwnerIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceOwnerIdsShrink_, resourceOwnerIdsShrink) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeRulesShrinkRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeRulesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The number of entries to return on each page. Maximum value: 50. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token to retrieve the next page of results. You can obtain this token from the `NextToken` parameter in the previous response.
    shared_ptr<string> nextToken_ {};
    // The resource category ID.
    shared_ptr<string> resourceCategoryId_ {};
    shared_ptr<string> resourceOwnerIdsShrink_ {};
    // The ID of the region where the resource resides.
    shared_ptr<string> resourceRegionId_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
