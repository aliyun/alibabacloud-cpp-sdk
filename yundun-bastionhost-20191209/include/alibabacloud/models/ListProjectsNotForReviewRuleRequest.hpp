// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSNOTFORREVIEWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSNOTFORREVIEWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListProjectsNotForReviewRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsNotForReviewRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReviewRuleId, reviewRuleId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsNotForReviewRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReviewRuleId, reviewRuleId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
    };
    ListProjectsNotForReviewRuleRequest() = default ;
    ListProjectsNotForReviewRuleRequest(const ListProjectsNotForReviewRuleRequest &) = default ;
    ListProjectsNotForReviewRuleRequest(ListProjectsNotForReviewRuleRequest &&) = default ;
    ListProjectsNotForReviewRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsNotForReviewRuleRequest() = default ;
    ListProjectsNotForReviewRuleRequest& operator=(const ListProjectsNotForReviewRuleRequest &) = default ;
    ListProjectsNotForReviewRuleRequest& operator=(ListProjectsNotForReviewRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keyword_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->reviewRuleId_ == nullptr
        && this->skip_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListProjectsNotForReviewRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListProjectsNotForReviewRuleRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectsNotForReviewRuleRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsNotForReviewRuleRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListProjectsNotForReviewRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reviewRuleId Field Functions 
    bool hasReviewRuleId() const { return this->reviewRuleId_ != nullptr;};
    void deleteReviewRuleId() { this->reviewRuleId_ = nullptr;};
    inline int64_t getReviewRuleId() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleId_, 0L) };
    inline ListProjectsNotForReviewRuleRequest& setReviewRuleId(int64_t reviewRuleId) { DARABONBA_PTR_SET_VALUE(reviewRuleId_, reviewRuleId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListProjectsNotForReviewRuleRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    // The ID of the bastion host instance.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the project to query. Fuzzy match is supported.
    shared_ptr<string> keyword_ {};
    // The maximum number of projects to return per request. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for paging. Leave this parameter empty or do not specify this character for the first request.
    shared_ptr<string> nextToken_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the audit policy.
    // > You can invoke the ListReviewRules operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reviewRuleId_ {};
    // The number of entries to skip.
    // 
    // > This parameter takes effect only when NextToken is empty.
    shared_ptr<int32_t> skip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
