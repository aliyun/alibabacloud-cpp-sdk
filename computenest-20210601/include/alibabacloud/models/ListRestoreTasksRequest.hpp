// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESTORETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESTORETASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRestoreTasksRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListRestoreTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRestoreTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListRestoreTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListRestoreTasksRequest() = default ;
    ListRestoreTasksRequest(const ListRestoreTasksRequest &) = default ;
    ListRestoreTasksRequest(ListRestoreTasksRequest &&) = default ;
    ListRestoreTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRestoreTasksRequest() = default ;
    ListRestoreTasksRequest& operator=(const ListRestoreTasksRequest &) = default ;
    ListRestoreTasksRequest& operator=(ListRestoreTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListRestoreTasksRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListRestoreTasksRequestFilter>) };
    inline vector<ListRestoreTasksRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListRestoreTasksRequestFilter>) };
    inline ListRestoreTasksRequest& setFilter(const vector<ListRestoreTasksRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListRestoreTasksRequest& setFilter(vector<ListRestoreTasksRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRestoreTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRestoreTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The list of the filters.
    std::shared_ptr<vector<ListRestoreTasksRequestFilter>> filter_ = nullptr;
    // The number of rows displayed per page in paginated queries. Maximum: 100 rows per page. Default: 20 rows.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // NextToken
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
