// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGRANTVSWITCHENISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListGrantVSwitchEnisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrantVSwitchEnisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantVSwitchEnis, grantVSwitchEnis_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrantVSwitchEnisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantVSwitchEnis, grantVSwitchEnis_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGrantVSwitchEnisResponseBody() = default ;
    ListGrantVSwitchEnisResponseBody(const ListGrantVSwitchEnisResponseBody &) = default ;
    ListGrantVSwitchEnisResponseBody(ListGrantVSwitchEnisResponseBody &&) = default ;
    ListGrantVSwitchEnisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrantVSwitchEnisResponseBody() = default ;
    ListGrantVSwitchEnisResponseBody& operator=(const ListGrantVSwitchEnisResponseBody &) = default ;
    ListGrantVSwitchEnisResponseBody& operator=(ListGrantVSwitchEnisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantVSwitchEnis_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // grantVSwitchEnis Field Functions 
    bool hasGrantVSwitchEnis() const { return this->grantVSwitchEnis_ != nullptr;};
    void deleteGrantVSwitchEnis() { this->grantVSwitchEnis_ = nullptr;};
    inline const vector<ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis> & grantVSwitchEnis() const { DARABONBA_PTR_GET_CONST(grantVSwitchEnis_, vector<ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis>) };
    inline vector<ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis> grantVSwitchEnis() { DARABONBA_PTR_GET(grantVSwitchEnis_, vector<ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis>) };
    inline ListGrantVSwitchEnisResponseBody& setGrantVSwitchEnis(const vector<ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis> & grantVSwitchEnis) { DARABONBA_PTR_SET_VALUE(grantVSwitchEnis_, grantVSwitchEnis) };
    inline ListGrantVSwitchEnisResponseBody& setGrantVSwitchEnis(vector<ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis> && grantVSwitchEnis) { DARABONBA_PTR_SET_RVALUE(grantVSwitchEnis_, grantVSwitchEnis) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListGrantVSwitchEnisResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGrantVSwitchEnisResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGrantVSwitchEnisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListGrantVSwitchEnisResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the ENI.
    std::shared_ptr<vector<ListGrantVSwitchEnisResponseBodyGrantVSwitchEnis>> grantVSwitchEnis_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    // 
    // > If MaxResults and NextToken are sued to query results by page, ignore this parameter.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
