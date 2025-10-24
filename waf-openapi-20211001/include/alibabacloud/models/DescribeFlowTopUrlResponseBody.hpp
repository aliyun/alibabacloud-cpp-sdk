// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowTopUrlResponseBodyRuleHitsTopUrl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFlowTopUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowTopUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopUrl, ruleHitsTopUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowTopUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopUrl, ruleHitsTopUrl_);
    };
    DescribeFlowTopUrlResponseBody() = default ;
    DescribeFlowTopUrlResponseBody(const DescribeFlowTopUrlResponseBody &) = default ;
    DescribeFlowTopUrlResponseBody(DescribeFlowTopUrlResponseBody &&) = default ;
    DescribeFlowTopUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowTopUrlResponseBody() = default ;
    DescribeFlowTopUrlResponseBody& operator=(const DescribeFlowTopUrlResponseBody &) = default ;
    DescribeFlowTopUrlResponseBody& operator=(DescribeFlowTopUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleHitsTopUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowTopUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopUrl Field Functions 
    bool hasRuleHitsTopUrl() const { return this->ruleHitsTopUrl_ != nullptr;};
    void deleteRuleHitsTopUrl() { this->ruleHitsTopUrl_ = nullptr;};
    inline const vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl> & ruleHitsTopUrl() const { DARABONBA_PTR_GET_CONST(ruleHitsTopUrl_, vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl>) };
    inline vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl> ruleHitsTopUrl() { DARABONBA_PTR_GET(ruleHitsTopUrl_, vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl>) };
    inline DescribeFlowTopUrlResponseBody& setRuleHitsTopUrl(const vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl> & ruleHitsTopUrl) { DARABONBA_PTR_SET_VALUE(ruleHitsTopUrl_, ruleHitsTopUrl) };
    inline DescribeFlowTopUrlResponseBody& setRuleHitsTopUrl(vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl> && ruleHitsTopUrl) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopUrl_, ruleHitsTopUrl) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the top 10 URLs that are used to initiate requests.
    std::shared_ptr<vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl>> ruleHitsTopUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
