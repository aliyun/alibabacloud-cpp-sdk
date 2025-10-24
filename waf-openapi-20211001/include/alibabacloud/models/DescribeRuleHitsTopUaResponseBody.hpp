// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPUARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPUARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopUaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopUaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopUa, ruleHitsTopUa_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopUaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopUa, ruleHitsTopUa_);
    };
    DescribeRuleHitsTopUaResponseBody() = default ;
    DescribeRuleHitsTopUaResponseBody(const DescribeRuleHitsTopUaResponseBody &) = default ;
    DescribeRuleHitsTopUaResponseBody(DescribeRuleHitsTopUaResponseBody &&) = default ;
    DescribeRuleHitsTopUaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopUaResponseBody() = default ;
    DescribeRuleHitsTopUaResponseBody& operator=(const DescribeRuleHitsTopUaResponseBody &) = default ;
    DescribeRuleHitsTopUaResponseBody& operator=(DescribeRuleHitsTopUaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleHitsTopUa_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopUaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopUa Field Functions 
    bool hasRuleHitsTopUa() const { return this->ruleHitsTopUa_ != nullptr;};
    void deleteRuleHitsTopUa() { this->ruleHitsTopUa_ = nullptr;};
    inline const vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa> & ruleHitsTopUa() const { DARABONBA_PTR_GET_CONST(ruleHitsTopUa_, vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa>) };
    inline vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa> ruleHitsTopUa() { DARABONBA_PTR_GET(ruleHitsTopUa_, vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa>) };
    inline DescribeRuleHitsTopUaResponseBody& setRuleHitsTopUa(const vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa> & ruleHitsTopUa) { DARABONBA_PTR_SET_VALUE(ruleHitsTopUa_, ruleHitsTopUa) };
    inline DescribeRuleHitsTopUaResponseBody& setRuleHitsTopUa(vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa> && ruleHitsTopUa) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopUa_, ruleHitsTopUa) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the top 10 user agents that are used to initiate attacks.
    std::shared_ptr<vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa>> ruleHitsTopUa_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
