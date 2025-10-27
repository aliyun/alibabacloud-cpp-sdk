// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridProxyPolicyResponseBodyPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridProxyPolicyResponseBody() = default ;
    DescribeHybridProxyPolicyResponseBody(const DescribeHybridProxyPolicyResponseBody &) = default ;
    DescribeHybridProxyPolicyResponseBody(DescribeHybridProxyPolicyResponseBody &&) = default ;
    DescribeHybridProxyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyPolicyResponseBody() = default ;
    DescribeHybridProxyPolicyResponseBody& operator=(const DescribeHybridProxyPolicyResponseBody &) = default ;
    DescribeHybridProxyPolicyResponseBody& operator=(DescribeHybridProxyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->policyList_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeHybridProxyPolicyResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<DescribeHybridProxyPolicyResponseBodyPolicyList> & policyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<DescribeHybridProxyPolicyResponseBodyPolicyList>) };
    inline vector<DescribeHybridProxyPolicyResponseBodyPolicyList> policyList() { DARABONBA_PTR_GET(policyList_, vector<DescribeHybridProxyPolicyResponseBodyPolicyList>) };
    inline DescribeHybridProxyPolicyResponseBody& setPolicyList(const vector<DescribeHybridProxyPolicyResponseBodyPolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline DescribeHybridProxyPolicyResponseBody& setPolicyList(vector<DescribeHybridProxyPolicyResponseBodyPolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridProxyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The data collection configurations of the proxy cluster.
    std::shared_ptr<vector<DescribeHybridProxyPolicyResponseBodyPolicyList>> policyList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
