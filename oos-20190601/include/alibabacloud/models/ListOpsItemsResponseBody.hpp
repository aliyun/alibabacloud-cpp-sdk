// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOpsItemsResponseBodyOpsItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListOpsItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OpsItems, opsItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OpsItems, opsItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOpsItemsResponseBody() = default ;
    ListOpsItemsResponseBody(const ListOpsItemsResponseBody &) = default ;
    ListOpsItemsResponseBody(ListOpsItemsResponseBody &&) = default ;
    ListOpsItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsItemsResponseBody() = default ;
    ListOpsItemsResponseBody& operator=(const ListOpsItemsResponseBody &) = default ;
    ListOpsItemsResponseBody& operator=(ListOpsItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->opsItems_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpsItemsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpsItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // opsItems Field Functions 
    bool hasOpsItems() const { return this->opsItems_ != nullptr;};
    void deleteOpsItems() { this->opsItems_ = nullptr;};
    inline const vector<ListOpsItemsResponseBodyOpsItems> & opsItems() const { DARABONBA_PTR_GET_CONST(opsItems_, vector<ListOpsItemsResponseBodyOpsItems>) };
    inline vector<ListOpsItemsResponseBodyOpsItems> opsItems() { DARABONBA_PTR_GET(opsItems_, vector<ListOpsItemsResponseBodyOpsItems>) };
    inline ListOpsItemsResponseBody& setOpsItems(const vector<ListOpsItemsResponseBodyOpsItems> & opsItems) { DARABONBA_PTR_SET_VALUE(opsItems_, opsItems) };
    inline ListOpsItemsResponseBody& setOpsItems(vector<ListOpsItemsResponseBodyOpsItems> && opsItems) { DARABONBA_PTR_SET_RVALUE(opsItems_, opsItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpsItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOpsItemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The list of O\\&M items.
    std::shared_ptr<vector<ListOpsItemsResponseBodyOpsItems>> opsItems_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
