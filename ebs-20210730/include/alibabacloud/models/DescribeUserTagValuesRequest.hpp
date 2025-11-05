// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERTAGVALUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERTAGVALUESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeUserTagValuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserTagValuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TagFilterValue, tagFilterValue_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserTagValuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TagFilterValue, tagFilterValue_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    DescribeUserTagValuesRequest() = default ;
    DescribeUserTagValuesRequest(const DescribeUserTagValuesRequest &) = default ;
    DescribeUserTagValuesRequest(DescribeUserTagValuesRequest &&) = default ;
    DescribeUserTagValuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserTagValuesRequest() = default ;
    DescribeUserTagValuesRequest& operator=(const DescribeUserTagValuesRequest &) = default ;
    DescribeUserTagValuesRequest& operator=(DescribeUserTagValuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->tagFilterValue_ == nullptr && return this->tagKey_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUserTagValuesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserTagValuesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserTagValuesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagFilterValue Field Functions 
    bool hasTagFilterValue() const { return this->tagFilterValue_ != nullptr;};
    void deleteTagFilterValue() { this->tagFilterValue_ = nullptr;};
    inline string tagFilterValue() const { DARABONBA_PTR_GET_DEFAULT(tagFilterValue_, "") };
    inline DescribeUserTagValuesRequest& setTagFilterValue(string tagFilterValue) { DARABONBA_PTR_SET_VALUE(tagFilterValue_, tagFilterValue) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeUserTagValuesRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


  protected:
    // Number of items per page in a paginated query. The maximum value is 100.
    // 
    // Default value:
    // 
    // - If no value is set or the set value is less than 10, the default value is 10.
    // 
    // - If the set value is greater than 100, the default value is 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Query token (Token). The value should be the NextToken parameter value from the previous call to this interface. This parameter is not required for the initial call. If NextToken is set, the PageSize and PageNumber request parameters become invalid, and the TotalCount in the response data is also invalid.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID of the consistency replication group.
    std::shared_ptr<string> regionId_ = nullptr;
    // Tag content filter
    std::shared_ptr<string> tagFilterValue_ = nullptr;
    // Tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
