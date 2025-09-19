// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRiskCheckSummaryResponseBodyRiskCheckSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCheckSummary, riskCheckSummary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCheckSummary, riskCheckSummary_);
    };
    DescribeRiskCheckSummaryResponseBody() = default ;
    DescribeRiskCheckSummaryResponseBody(const DescribeRiskCheckSummaryResponseBody &) = default ;
    DescribeRiskCheckSummaryResponseBody(DescribeRiskCheckSummaryResponseBody &&) = default ;
    DescribeRiskCheckSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckSummaryResponseBody() = default ;
    DescribeRiskCheckSummaryResponseBody& operator=(const DescribeRiskCheckSummaryResponseBody &) = default ;
    DescribeRiskCheckSummaryResponseBody& operator=(DescribeRiskCheckSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->riskCheckSummary_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskCheckSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCheckSummary Field Functions 
    bool hasRiskCheckSummary() const { return this->riskCheckSummary_ != nullptr;};
    void deleteRiskCheckSummary() { this->riskCheckSummary_ = nullptr;};
    inline const DescribeRiskCheckSummaryResponseBodyRiskCheckSummary & riskCheckSummary() const { DARABONBA_PTR_GET_CONST(riskCheckSummary_, DescribeRiskCheckSummaryResponseBodyRiskCheckSummary) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary riskCheckSummary() { DARABONBA_PTR_GET(riskCheckSummary_, DescribeRiskCheckSummaryResponseBodyRiskCheckSummary) };
    inline DescribeRiskCheckSummaryResponseBody& setRiskCheckSummary(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummary & riskCheckSummary) { DARABONBA_PTR_SET_VALUE(riskCheckSummary_, riskCheckSummary) };
    inline DescribeRiskCheckSummaryResponseBody& setRiskCheckSummary(DescribeRiskCheckSummaryResponseBodyRiskCheckSummary && riskCheckSummary) { DARABONBA_PTR_SET_RVALUE(riskCheckSummary_, riskCheckSummary) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The summary information about the check results of cloud service configurations.
    std::shared_ptr<DescribeRiskCheckSummaryResponseBodyRiskCheckSummary> riskCheckSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
