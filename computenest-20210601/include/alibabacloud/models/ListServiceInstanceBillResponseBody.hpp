// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceBillResponseBodyItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceInstanceBillResponseBody() = default ;
    ListServiceInstanceBillResponseBody(const ListServiceInstanceBillResponseBody &) = default ;
    ListServiceInstanceBillResponseBody(ListServiceInstanceBillResponseBody &&) = default ;
    ListServiceInstanceBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceBillResponseBody() = default ;
    ListServiceInstanceBillResponseBody& operator=(const ListServiceInstanceBillResponseBody &) = default ;
    ListServiceInstanceBillResponseBody& operator=(ListServiceInstanceBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<ListServiceInstanceBillResponseBodyItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<ListServiceInstanceBillResponseBodyItem>) };
    inline vector<ListServiceInstanceBillResponseBodyItem> item() { DARABONBA_PTR_GET(item_, vector<ListServiceInstanceBillResponseBodyItem>) };
    inline ListServiceInstanceBillResponseBody& setItem(const vector<ListServiceInstanceBillResponseBodyItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline ListServiceInstanceBillResponseBody& setItem(vector<ListServiceInstanceBillResponseBodyItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceBillResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceBillResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListServiceInstanceBillResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The billing information of the backup schedule.
    std::shared_ptr<vector<ListServiceInstanceBillResponseBodyItem>> item_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
