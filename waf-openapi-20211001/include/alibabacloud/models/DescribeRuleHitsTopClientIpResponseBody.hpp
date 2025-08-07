// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPCLIENTIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPCLIENTIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopClientIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopClientIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopClientIp, ruleHitsTopClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopClientIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopClientIp, ruleHitsTopClientIp_);
    };
    DescribeRuleHitsTopClientIpResponseBody() = default ;
    DescribeRuleHitsTopClientIpResponseBody(const DescribeRuleHitsTopClientIpResponseBody &) = default ;
    DescribeRuleHitsTopClientIpResponseBody(DescribeRuleHitsTopClientIpResponseBody &&) = default ;
    DescribeRuleHitsTopClientIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopClientIpResponseBody() = default ;
    DescribeRuleHitsTopClientIpResponseBody& operator=(const DescribeRuleHitsTopClientIpResponseBody &) = default ;
    DescribeRuleHitsTopClientIpResponseBody& operator=(DescribeRuleHitsTopClientIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->ruleHitsTopClientIp_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopClientIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopClientIp Field Functions 
    bool hasRuleHitsTopClientIp() const { return this->ruleHitsTopClientIp_ != nullptr;};
    void deleteRuleHitsTopClientIp() { this->ruleHitsTopClientIp_ = nullptr;};
    inline const vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp> & ruleHitsTopClientIp() const { DARABONBA_PTR_GET_CONST(ruleHitsTopClientIp_, vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp>) };
    inline vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp> ruleHitsTopClientIp() { DARABONBA_PTR_GET(ruleHitsTopClientIp_, vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp>) };
    inline DescribeRuleHitsTopClientIpResponseBody& setRuleHitsTopClientIp(const vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp> & ruleHitsTopClientIp) { DARABONBA_PTR_SET_VALUE(ruleHitsTopClientIp_, ruleHitsTopClientIp) };
    inline DescribeRuleHitsTopClientIpResponseBody& setRuleHitsTopClientIp(vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp> && ruleHitsTopClientIp) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopClientIp_, ruleHitsTopClientIp) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the top 10 IP addresses from which attacks are initiated.
    std::shared_ptr<vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp>> ruleHitsTopClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
