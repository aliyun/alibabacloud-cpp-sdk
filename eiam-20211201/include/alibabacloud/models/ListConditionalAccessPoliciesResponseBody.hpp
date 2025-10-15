// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListConditionalAccessPoliciesResponseBody() = default ;
    ListConditionalAccessPoliciesResponseBody(const ListConditionalAccessPoliciesResponseBody &) = default ;
    ListConditionalAccessPoliciesResponseBody(ListConditionalAccessPoliciesResponseBody &&) = default ;
    ListConditionalAccessPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesResponseBody() = default ;
    ListConditionalAccessPoliciesResponseBody& operator=(const ListConditionalAccessPoliciesResponseBody &) = default ;
    ListConditionalAccessPoliciesResponseBody& operator=(ListConditionalAccessPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionalAccessPolicies_ == nullptr
        && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // conditionalAccessPolicies Field Functions 
    bool hasConditionalAccessPolicies() const { return this->conditionalAccessPolicies_ != nullptr;};
    void deleteConditionalAccessPolicies() { this->conditionalAccessPolicies_ = nullptr;};
    inline const vector<ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies() const { DARABONBA_PTR_GET_CONST(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies>) };
    inline vector<ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies> conditionalAccessPolicies() { DARABONBA_PTR_GET(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies>) };
    inline ListConditionalAccessPoliciesResponseBody& setConditionalAccessPolicies(const vector<ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };
    inline ListConditionalAccessPoliciesResponseBody& setConditionalAccessPolicies(vector<ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies> && conditionalAccessPolicies) { DARABONBA_PTR_SET_RVALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConditionalAccessPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListConditionalAccessPoliciesResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConditionalAccessPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListConditionalAccessPoliciesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Collection of conditional access policies
    std::shared_ptr<vector<ListConditionalAccessPoliciesResponseBodyConditionalAccessPolicies>> conditionalAccessPolicies_ = nullptr;
    // The token value returned by this call for the next page query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Previous page query token (Token)
    std::shared_ptr<string> previousToken_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of items in the list.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
