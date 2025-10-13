// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGTASKGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggTaskGroupsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAggTaskGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggTaskGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterAggTaskGroupIds, filterAggTaskGroupIds_);
      DARABONBA_PTR_TO_JSON(filterAggTaskGroupNames, filterAggTaskGroupNames_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(targetPrometheusId, targetPrometheusId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggTaskGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterAggTaskGroupIds, filterAggTaskGroupIds_);
      DARABONBA_PTR_FROM_JSON(filterAggTaskGroupNames, filterAggTaskGroupNames_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(targetPrometheusId, targetPrometheusId_);
    };
    ListAggTaskGroupsRequest() = default ;
    ListAggTaskGroupsRequest(const ListAggTaskGroupsRequest &) = default ;
    ListAggTaskGroupsRequest(ListAggTaskGroupsRequest &&) = default ;
    ListAggTaskGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggTaskGroupsRequest() = default ;
    ListAggTaskGroupsRequest& operator=(const ListAggTaskGroupsRequest &) = default ;
    ListAggTaskGroupsRequest& operator=(ListAggTaskGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterAggTaskGroupIds_ == nullptr
        && return this->filterAggTaskGroupNames_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->query_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->targetPrometheusId_ == nullptr; };
    // filterAggTaskGroupIds Field Functions 
    bool hasFilterAggTaskGroupIds() const { return this->filterAggTaskGroupIds_ != nullptr;};
    void deleteFilterAggTaskGroupIds() { this->filterAggTaskGroupIds_ = nullptr;};
    inline string filterAggTaskGroupIds() const { DARABONBA_PTR_GET_DEFAULT(filterAggTaskGroupIds_, "") };
    inline ListAggTaskGroupsRequest& setFilterAggTaskGroupIds(string filterAggTaskGroupIds) { DARABONBA_PTR_SET_VALUE(filterAggTaskGroupIds_, filterAggTaskGroupIds) };


    // filterAggTaskGroupNames Field Functions 
    bool hasFilterAggTaskGroupNames() const { return this->filterAggTaskGroupNames_ != nullptr;};
    void deleteFilterAggTaskGroupNames() { this->filterAggTaskGroupNames_ = nullptr;};
    inline string filterAggTaskGroupNames() const { DARABONBA_PTR_GET_DEFAULT(filterAggTaskGroupNames_, "") };
    inline ListAggTaskGroupsRequest& setFilterAggTaskGroupNames(string filterAggTaskGroupNames) { DARABONBA_PTR_SET_VALUE(filterAggTaskGroupNames_, filterAggTaskGroupNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggTaskGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggTaskGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListAggTaskGroupsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAggTaskGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListAggTaskGroupsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListAggTaskGroupsRequestTags>) };
    inline vector<ListAggTaskGroupsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListAggTaskGroupsRequestTags>) };
    inline ListAggTaskGroupsRequest& setTags(const vector<ListAggTaskGroupsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAggTaskGroupsRequest& setTags(vector<ListAggTaskGroupsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetPrometheusId Field Functions 
    bool hasTargetPrometheusId() const { return this->targetPrometheusId_ != nullptr;};
    void deleteTargetPrometheusId() { this->targetPrometheusId_ = nullptr;};
    inline string targetPrometheusId() const { DARABONBA_PTR_GET_DEFAULT(targetPrometheusId_, "") };
    inline ListAggTaskGroupsRequest& setTargetPrometheusId(string targetPrometheusId) { DARABONBA_PTR_SET_VALUE(targetPrometheusId_, targetPrometheusId) };


  protected:
    std::shared_ptr<string> filterAggTaskGroupIds_ = nullptr;
    std::shared_ptr<string> filterAggTaskGroupNames_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<ListAggTaskGroupsRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> targetPrometheusId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
