// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPoliciesResponseBodyPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPoliciesResponseBody() = default ;
    ListPoliciesResponseBody(const ListPoliciesResponseBody &) = default ;
    ListPoliciesResponseBody(ListPoliciesResponseBody &&) = default ;
    ListPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesResponseBody() = default ;
    ListPoliciesResponseBody& operator=(const ListPoliciesResponseBody &) = default ;
    ListPoliciesResponseBody& operator=(ListPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->policyList_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<ListPoliciesResponseBodyPolicyList> & policyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<ListPoliciesResponseBodyPolicyList>) };
    inline vector<ListPoliciesResponseBodyPolicyList> policyList() { DARABONBA_PTR_GET(policyList_, vector<ListPoliciesResponseBodyPolicyList>) };
    inline ListPoliciesResponseBody& setPolicyList(const vector<ListPoliciesResponseBodyPolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline ListPoliciesResponseBody& setPolicyList(vector<ListPoliciesResponseBodyPolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the next query is required.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The tag policies.
    std::shared_ptr<vector<ListPoliciesResponseBodyPolicyList>> policyList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
