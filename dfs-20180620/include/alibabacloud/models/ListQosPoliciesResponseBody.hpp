// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQOSPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQOSPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQosPoliciesResponseBodyQosPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListQosPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListQosPoliciesResponseBody() = default ;
    ListQosPoliciesResponseBody(const ListQosPoliciesResponseBody &) = default ;
    ListQosPoliciesResponseBody(ListQosPoliciesResponseBody &&) = default ;
    ListQosPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQosPoliciesResponseBody() = default ;
    ListQosPoliciesResponseBody& operator=(const ListQosPoliciesResponseBody &) = default ;
    ListQosPoliciesResponseBody& operator=(ListQosPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->qosPolicies_ == nullptr && return this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQosPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQosPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // qosPolicies Field Functions 
    bool hasQosPolicies() const { return this->qosPolicies_ != nullptr;};
    void deleteQosPolicies() { this->qosPolicies_ = nullptr;};
    inline const vector<ListQosPoliciesResponseBodyQosPolicies> & qosPolicies() const { DARABONBA_PTR_GET_CONST(qosPolicies_, vector<ListQosPoliciesResponseBodyQosPolicies>) };
    inline vector<ListQosPoliciesResponseBodyQosPolicies> qosPolicies() { DARABONBA_PTR_GET(qosPolicies_, vector<ListQosPoliciesResponseBodyQosPolicies>) };
    inline ListQosPoliciesResponseBody& setQosPolicies(const vector<ListQosPoliciesResponseBodyQosPolicies> & qosPolicies) { DARABONBA_PTR_SET_VALUE(qosPolicies_, qosPolicies) };
    inline ListQosPoliciesResponseBody& setQosPolicies(vector<ListQosPoliciesResponseBodyQosPolicies> && qosPolicies) { DARABONBA_PTR_SET_RVALUE(qosPolicies_, qosPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQosPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListQosPoliciesResponseBodyQosPolicies>> qosPolicies_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
