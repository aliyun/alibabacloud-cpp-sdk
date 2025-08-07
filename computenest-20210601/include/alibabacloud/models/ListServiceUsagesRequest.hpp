// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEUSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEUSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceUsagesRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceUsagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceUsagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceUsagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListServiceUsagesRequest() = default ;
    ListServiceUsagesRequest(const ListServiceUsagesRequest &) = default ;
    ListServiceUsagesRequest(ListServiceUsagesRequest &&) = default ;
    ListServiceUsagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceUsagesRequest() = default ;
    ListServiceUsagesRequest& operator=(const ListServiceUsagesRequest &) = default ;
    ListServiceUsagesRequest& operator=(ListServiceUsagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServiceUsagesRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServiceUsagesRequestFilter>) };
    inline vector<ListServiceUsagesRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListServiceUsagesRequestFilter>) };
    inline ListServiceUsagesRequest& setFilter(const vector<ListServiceUsagesRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServiceUsagesRequest& setFilter(vector<ListServiceUsagesRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceUsagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceUsagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The filters.
    std::shared_ptr<vector<ListServiceUsagesRequestFilter>> filter_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
