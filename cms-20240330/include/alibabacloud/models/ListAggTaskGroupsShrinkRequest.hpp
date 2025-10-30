// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAggTaskGroupsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggTaskGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterAggTaskGroupIds, filterAggTaskGroupIds_);
      DARABONBA_PTR_TO_JSON(filterAggTaskGroupNames, filterAggTaskGroupNames_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(targetPrometheusId, targetPrometheusId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggTaskGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterAggTaskGroupIds, filterAggTaskGroupIds_);
      DARABONBA_PTR_FROM_JSON(filterAggTaskGroupNames, filterAggTaskGroupNames_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(targetPrometheusId, targetPrometheusId_);
    };
    ListAggTaskGroupsShrinkRequest() = default ;
    ListAggTaskGroupsShrinkRequest(const ListAggTaskGroupsShrinkRequest &) = default ;
    ListAggTaskGroupsShrinkRequest(ListAggTaskGroupsShrinkRequest &&) = default ;
    ListAggTaskGroupsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggTaskGroupsShrinkRequest() = default ;
    ListAggTaskGroupsShrinkRequest& operator=(const ListAggTaskGroupsShrinkRequest &) = default ;
    ListAggTaskGroupsShrinkRequest& operator=(ListAggTaskGroupsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterAggTaskGroupIds_ == nullptr
        && return this->filterAggTaskGroupNames_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->query_ == nullptr && return this->status_ == nullptr
        && return this->tagsShrink_ == nullptr && return this->targetPrometheusId_ == nullptr; };
    // filterAggTaskGroupIds Field Functions 
    bool hasFilterAggTaskGroupIds() const { return this->filterAggTaskGroupIds_ != nullptr;};
    void deleteFilterAggTaskGroupIds() { this->filterAggTaskGroupIds_ = nullptr;};
    inline string filterAggTaskGroupIds() const { DARABONBA_PTR_GET_DEFAULT(filterAggTaskGroupIds_, "") };
    inline ListAggTaskGroupsShrinkRequest& setFilterAggTaskGroupIds(string filterAggTaskGroupIds) { DARABONBA_PTR_SET_VALUE(filterAggTaskGroupIds_, filterAggTaskGroupIds) };


    // filterAggTaskGroupNames Field Functions 
    bool hasFilterAggTaskGroupNames() const { return this->filterAggTaskGroupNames_ != nullptr;};
    void deleteFilterAggTaskGroupNames() { this->filterAggTaskGroupNames_ = nullptr;};
    inline string filterAggTaskGroupNames() const { DARABONBA_PTR_GET_DEFAULT(filterAggTaskGroupNames_, "") };
    inline ListAggTaskGroupsShrinkRequest& setFilterAggTaskGroupNames(string filterAggTaskGroupNames) { DARABONBA_PTR_SET_VALUE(filterAggTaskGroupNames_, filterAggTaskGroupNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggTaskGroupsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggTaskGroupsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListAggTaskGroupsShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAggTaskGroupsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListAggTaskGroupsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetPrometheusId Field Functions 
    bool hasTargetPrometheusId() const { return this->targetPrometheusId_ != nullptr;};
    void deleteTargetPrometheusId() { this->targetPrometheusId_ = nullptr;};
    inline string targetPrometheusId() const { DARABONBA_PTR_GET_DEFAULT(targetPrometheusId_, "") };
    inline ListAggTaskGroupsShrinkRequest& setTargetPrometheusId(string targetPrometheusId) { DARABONBA_PTR_SET_VALUE(targetPrometheusId_, targetPrometheusId) };


  protected:
    // List of IDs for the aggregation task groups, which must be JSON parseable.
    std::shared_ptr<string> filterAggTaskGroupIds_ = nullptr;
    // List of names for the aggregation task groups, which must be JSON parseable.
    std::shared_ptr<string> filterAggTaskGroupNames_ = nullptr;
    // Maximum number of records to return.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Query token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Name search, supports fuzzy matching.
    std::shared_ptr<string> query_ = nullptr;
    // Status of the aggregation task group, either \\"Running\\" or \\"Stopped\\". Default is Running.
    std::shared_ptr<string> status_ = nullptr;
    // Resource group tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The target Prometheus instance ID for the aggregation task group.
    std::shared_ptr<string> targetPrometheusId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
