// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopUrl, ruleHitsTopUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopUrl, ruleHitsTopUrl_);
    };
    DescribeRuleHitsTopUrlResponseBody() = default ;
    DescribeRuleHitsTopUrlResponseBody(const DescribeRuleHitsTopUrlResponseBody &) = default ;
    DescribeRuleHitsTopUrlResponseBody(DescribeRuleHitsTopUrlResponseBody &&) = default ;
    DescribeRuleHitsTopUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopUrlResponseBody() = default ;
    DescribeRuleHitsTopUrlResponseBody& operator=(const DescribeRuleHitsTopUrlResponseBody &) = default ;
    DescribeRuleHitsTopUrlResponseBody& operator=(DescribeRuleHitsTopUrlResponseBody &&) = default ;
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
    inline DescribeRuleHitsTopUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopUrl Field Functions 
    bool hasRuleHitsTopUrl() const { return this->ruleHitsTopUrl_ != nullptr;};
    void deleteRuleHitsTopUrl() { this->ruleHitsTopUrl_ = nullptr;};
    inline const vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl> & ruleHitsTopUrl() const { DARABONBA_PTR_GET_CONST(ruleHitsTopUrl_, vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl>) };
    inline vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl> ruleHitsTopUrl() { DARABONBA_PTR_GET(ruleHitsTopUrl_, vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl>) };
    inline DescribeRuleHitsTopUrlResponseBody& setRuleHitsTopUrl(const vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl> & ruleHitsTopUrl) { DARABONBA_PTR_SET_VALUE(ruleHitsTopUrl_, ruleHitsTopUrl) };
    inline DescribeRuleHitsTopUrlResponseBody& setRuleHitsTopUrl(vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl> && ruleHitsTopUrl) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopUrl_, ruleHitsTopUrl) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The top 10 URLs that match protection rules.
    std::shared_ptr<vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl>> ruleHitsTopUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
