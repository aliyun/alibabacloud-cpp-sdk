// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeControlPolicyDomainResolveResponseBodyResolveResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeControlPolicyDomainResolveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeControlPolicyDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResolveResult, resolveResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeControlPolicyDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResolveResult, resolveResult_);
    };
    DescribeControlPolicyDomainResolveResponseBody() = default ;
    DescribeControlPolicyDomainResolveResponseBody(const DescribeControlPolicyDomainResolveResponseBody &) = default ;
    DescribeControlPolicyDomainResolveResponseBody(DescribeControlPolicyDomainResolveResponseBody &&) = default ;
    DescribeControlPolicyDomainResolveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeControlPolicyDomainResolveResponseBody() = default ;
    DescribeControlPolicyDomainResolveResponseBody& operator=(const DescribeControlPolicyDomainResolveResponseBody &) = default ;
    DescribeControlPolicyDomainResolveResponseBody& operator=(DescribeControlPolicyDomainResolveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resolveResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeControlPolicyDomainResolveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resolveResult Field Functions 
    bool hasResolveResult() const { return this->resolveResult_ != nullptr;};
    void deleteResolveResult() { this->resolveResult_ = nullptr;};
    inline const vector<DescribeControlPolicyDomainResolveResponseBodyResolveResult> & resolveResult() const { DARABONBA_PTR_GET_CONST(resolveResult_, vector<DescribeControlPolicyDomainResolveResponseBodyResolveResult>) };
    inline vector<DescribeControlPolicyDomainResolveResponseBodyResolveResult> resolveResult() { DARABONBA_PTR_GET(resolveResult_, vector<DescribeControlPolicyDomainResolveResponseBodyResolveResult>) };
    inline DescribeControlPolicyDomainResolveResponseBody& setResolveResult(const vector<DescribeControlPolicyDomainResolveResponseBodyResolveResult> & resolveResult) { DARABONBA_PTR_SET_VALUE(resolveResult_, resolveResult) };
    inline DescribeControlPolicyDomainResolveResponseBody& setResolveResult(vector<DescribeControlPolicyDomainResolveResponseBodyResolveResult> && resolveResult) { DARABONBA_PTR_SET_RVALUE(resolveResult_, resolveResult) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeControlPolicyDomainResolveResponseBodyResolveResult>> resolveResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
