// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpressConnectTrafficQosRuleResponseBodyRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeExpressConnectTrafficQosRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectTrafficQosRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectTrafficQosRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    DescribeExpressConnectTrafficQosRuleResponseBody() = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody(const DescribeExpressConnectTrafficQosRuleResponseBody &) = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody(DescribeExpressConnectTrafficQosRuleResponseBody &&) = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectTrafficQosRuleResponseBody() = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody& operator=(const DescribeExpressConnectTrafficQosRuleResponseBody &) = default ;
    DescribeExpressConnectTrafficQosRuleResponseBody& operator=(DescribeExpressConnectTrafficQosRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectTrafficQosRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<DescribeExpressConnectTrafficQosRuleResponseBodyRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<DescribeExpressConnectTrafficQosRuleResponseBodyRuleList>) };
    inline vector<DescribeExpressConnectTrafficQosRuleResponseBodyRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<DescribeExpressConnectTrafficQosRuleResponseBodyRuleList>) };
    inline DescribeExpressConnectTrafficQosRuleResponseBody& setRuleList(const vector<DescribeExpressConnectTrafficQosRuleResponseBodyRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeExpressConnectTrafficQosRuleResponseBody& setRuleList(vector<DescribeExpressConnectTrafficQosRuleResponseBodyRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of QoS rules.
    std::shared_ptr<vector<DescribeExpressConnectTrafficQosRuleResponseBodyRuleList>> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
