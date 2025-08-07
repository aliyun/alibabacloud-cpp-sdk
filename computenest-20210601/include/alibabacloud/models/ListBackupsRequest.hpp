// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBackupsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListBackupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListBackupsRequest() = default ;
    ListBackupsRequest(const ListBackupsRequest &) = default ;
    ListBackupsRequest(ListBackupsRequest &&) = default ;
    ListBackupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupsRequest() = default ;
    ListBackupsRequest& operator=(const ListBackupsRequest &) = default ;
    ListBackupsRequest& operator=(ListBackupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListBackupsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListBackupsRequestFilter>) };
    inline vector<ListBackupsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListBackupsRequestFilter>) };
    inline ListBackupsRequest& setFilter(const vector<ListBackupsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListBackupsRequest& setFilter(vector<ListBackupsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBackupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBackupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The filter.
    std::shared_ptr<vector<ListBackupsRequestFilter>> filter_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
