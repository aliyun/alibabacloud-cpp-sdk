// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERTAGKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERTAGKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeUserTagKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserTagKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TagFilterKey, tagFilterKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserTagKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TagFilterKey, tagFilterKey_);
    };
    DescribeUserTagKeysRequest() = default ;
    DescribeUserTagKeysRequest(const DescribeUserTagKeysRequest &) = default ;
    DescribeUserTagKeysRequest(DescribeUserTagKeysRequest &&) = default ;
    DescribeUserTagKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserTagKeysRequest() = default ;
    DescribeUserTagKeysRequest& operator=(const DescribeUserTagKeysRequest &) = default ;
    DescribeUserTagKeysRequest& operator=(DescribeUserTagKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->tagFilterKey_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUserTagKeysRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserTagKeysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserTagKeysRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagFilterKey Field Functions 
    bool hasTagFilterKey() const { return this->tagFilterKey_ != nullptr;};
    void deleteTagFilterKey() { this->tagFilterKey_ = nullptr;};
    inline string tagFilterKey() const { DARABONBA_PTR_GET_DEFAULT(tagFilterKey_, "") };
    inline DescribeUserTagKeysRequest& setTagFilterKey(string tagFilterKey) { DARABONBA_PTR_SET_VALUE(tagFilterKey_, tagFilterKey) };


  protected:
    // Number of items per page in paginated queries. The maximum value is 100.
    // 
    // Default value:
    // 
    // - If no value is set or the set value is less than 10, the default is 10.
    // 
    // - If the set value is greater than 100, the default is 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The query token returned by this call (Token).
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region to which the resource belongs. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to view the latest list of Alibaba Cloud regions.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tagKey for filtering the query.
    std::shared_ptr<string> tagFilterKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
