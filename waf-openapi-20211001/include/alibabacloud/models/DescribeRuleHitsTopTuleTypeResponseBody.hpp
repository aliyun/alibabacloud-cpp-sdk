// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPTULETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPTULETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopTuleTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopTuleTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopTuleType, ruleHitsTopTuleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopTuleTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopTuleType, ruleHitsTopTuleType_);
    };
    DescribeRuleHitsTopTuleTypeResponseBody() = default ;
    DescribeRuleHitsTopTuleTypeResponseBody(const DescribeRuleHitsTopTuleTypeResponseBody &) = default ;
    DescribeRuleHitsTopTuleTypeResponseBody(DescribeRuleHitsTopTuleTypeResponseBody &&) = default ;
    DescribeRuleHitsTopTuleTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopTuleTypeResponseBody() = default ;
    DescribeRuleHitsTopTuleTypeResponseBody& operator=(const DescribeRuleHitsTopTuleTypeResponseBody &) = default ;
    DescribeRuleHitsTopTuleTypeResponseBody& operator=(DescribeRuleHitsTopTuleTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleHitsTopTuleType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopTuleTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopTuleType Field Functions 
    bool hasRuleHitsTopTuleType() const { return this->ruleHitsTopTuleType_ != nullptr;};
    void deleteRuleHitsTopTuleType() { this->ruleHitsTopTuleType_ = nullptr;};
    inline const vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType> & ruleHitsTopTuleType() const { DARABONBA_PTR_GET_CONST(ruleHitsTopTuleType_, vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType>) };
    inline vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType> ruleHitsTopTuleType() { DARABONBA_PTR_GET(ruleHitsTopTuleType_, vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType>) };
    inline DescribeRuleHitsTopTuleTypeResponseBody& setRuleHitsTopTuleType(const vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType> & ruleHitsTopTuleType) { DARABONBA_PTR_SET_VALUE(ruleHitsTopTuleType_, ruleHitsTopTuleType) };
    inline DescribeRuleHitsTopTuleTypeResponseBody& setRuleHitsTopTuleType(vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType> && ruleHitsTopTuleType) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopTuleType_, ruleHitsTopTuleType) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The top 10 protection modules that are matched.
    std::shared_ptr<vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType>> ruleHitsTopTuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
