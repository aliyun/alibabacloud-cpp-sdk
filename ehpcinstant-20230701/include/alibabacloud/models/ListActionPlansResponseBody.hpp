// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListActionPlansResponseBodyActionPlans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlans, actionPlans_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlans, actionPlans_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListActionPlansResponseBody() = default ;
    ListActionPlansResponseBody(const ListActionPlansResponseBody &) = default ;
    ListActionPlansResponseBody(ListActionPlansResponseBody &&) = default ;
    ListActionPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlansResponseBody() = default ;
    ListActionPlansResponseBody& operator=(const ListActionPlansResponseBody &) = default ;
    ListActionPlansResponseBody& operator=(ListActionPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlans_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // actionPlans Field Functions 
    bool hasActionPlans() const { return this->actionPlans_ != nullptr;};
    void deleteActionPlans() { this->actionPlans_ = nullptr;};
    inline const vector<ListActionPlansResponseBodyActionPlans> & actionPlans() const { DARABONBA_PTR_GET_CONST(actionPlans_, vector<ListActionPlansResponseBodyActionPlans>) };
    inline vector<ListActionPlansResponseBodyActionPlans> actionPlans() { DARABONBA_PTR_GET(actionPlans_, vector<ListActionPlansResponseBodyActionPlans>) };
    inline ListActionPlansResponseBody& setActionPlans(const vector<ListActionPlansResponseBodyActionPlans> & actionPlans) { DARABONBA_PTR_SET_VALUE(actionPlans_, actionPlans) };
    inline ListActionPlansResponseBody& setActionPlans(vector<ListActionPlansResponseBodyActionPlans> && actionPlans) { DARABONBA_PTR_SET_RVALUE(actionPlans_, actionPlans) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionPlansResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionPlansResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListActionPlansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of execution plan results.
    std::shared_ptr<vector<ListActionPlansResponseBodyActionPlans>> actionPlans_ = nullptr;
    // The maximum number of records returned in this request.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Indicates the read position returned by the current call. An empty value means all data has been read.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total data count under the current request conditions (optional; not returned by default).
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
