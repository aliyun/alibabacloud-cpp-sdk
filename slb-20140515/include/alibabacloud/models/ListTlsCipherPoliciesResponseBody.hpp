// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTLSCipherPoliciesResponseBodyTLSCipherPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ListTLSCipherPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTLSCipherPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TLSCipherPolicies, TLSCipherPolicies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTLSCipherPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TLSCipherPolicies, TLSCipherPolicies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTLSCipherPoliciesResponseBody() = default ;
    ListTLSCipherPoliciesResponseBody(const ListTLSCipherPoliciesResponseBody &) = default ;
    ListTLSCipherPoliciesResponseBody(ListTLSCipherPoliciesResponseBody &&) = default ;
    ListTLSCipherPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTLSCipherPoliciesResponseBody() = default ;
    ListTLSCipherPoliciesResponseBody& operator=(const ListTLSCipherPoliciesResponseBody &) = default ;
    ListTLSCipherPoliciesResponseBody& operator=(ListTLSCipherPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->TLSCipherPolicies_ == nullptr && return this->totalCount_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListTLSCipherPoliciesResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTLSCipherPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTLSCipherPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // TLSCipherPolicies Field Functions 
    bool hasTLSCipherPolicies() const { return this->TLSCipherPolicies_ != nullptr;};
    void deleteTLSCipherPolicies() { this->TLSCipherPolicies_ = nullptr;};
    inline const vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies> & TLSCipherPolicies() const { DARABONBA_PTR_GET_CONST(TLSCipherPolicies_, vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies>) };
    inline vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies> TLSCipherPolicies() { DARABONBA_PTR_GET(TLSCipherPolicies_, vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies>) };
    inline ListTLSCipherPoliciesResponseBody& setTLSCipherPolicies(const vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies> & TLSCipherPolicies) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicies_, TLSCipherPolicies) };
    inline ListTLSCipherPoliciesResponseBody& setTLSCipherPolicies(vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies> && TLSCipherPolicies) { DARABONBA_PTR_SET_RVALUE(TLSCipherPolicies_, TLSCipherPolicies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTLSCipherPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates whether the current page is the last page. Valid values:
    // 
    // *   **true**: The current page is the last page.
    // *   **false**: The current page is not the last page.
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If **NextToken** is empty, it indicates that no next query is to be sent.
    // *   If **NextToken** is not empty, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of TLS policies.
    std::shared_ptr<vector<ListTLSCipherPoliciesResponseBodyTLSCipherPolicies>> TLSCipherPolicies_ = nullptr;
    // The total number of TLS policies returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
