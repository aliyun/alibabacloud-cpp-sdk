// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopRuleIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopRuleIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopRuleId, ruleHitsTopRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopRuleIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopRuleId, ruleHitsTopRuleId_);
    };
    DescribeRuleHitsTopRuleIdResponseBody() = default ;
    DescribeRuleHitsTopRuleIdResponseBody(const DescribeRuleHitsTopRuleIdResponseBody &) = default ;
    DescribeRuleHitsTopRuleIdResponseBody(DescribeRuleHitsTopRuleIdResponseBody &&) = default ;
    DescribeRuleHitsTopRuleIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopRuleIdResponseBody() = default ;
    DescribeRuleHitsTopRuleIdResponseBody& operator=(const DescribeRuleHitsTopRuleIdResponseBody &) = default ;
    DescribeRuleHitsTopRuleIdResponseBody& operator=(DescribeRuleHitsTopRuleIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleHitsTopRuleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopRuleIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopRuleId Field Functions 
    bool hasRuleHitsTopRuleId() const { return this->ruleHitsTopRuleId_ != nullptr;};
    void deleteRuleHitsTopRuleId() { this->ruleHitsTopRuleId_ = nullptr;};
    inline const vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId> & ruleHitsTopRuleId() const { DARABONBA_PTR_GET_CONST(ruleHitsTopRuleId_, vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId>) };
    inline vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId> ruleHitsTopRuleId() { DARABONBA_PTR_GET(ruleHitsTopRuleId_, vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId>) };
    inline DescribeRuleHitsTopRuleIdResponseBody& setRuleHitsTopRuleId(const vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId> & ruleHitsTopRuleId) { DARABONBA_PTR_SET_VALUE(ruleHitsTopRuleId_, ruleHitsTopRuleId) };
    inline DescribeRuleHitsTopRuleIdResponseBody& setRuleHitsTopRuleId(vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId> && ruleHitsTopRuleId) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopRuleId_, ruleHitsTopRuleId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the IDs of the top 10 rules that are matched by requests.
    std::shared_ptr<vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId>> ruleHitsTopRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
