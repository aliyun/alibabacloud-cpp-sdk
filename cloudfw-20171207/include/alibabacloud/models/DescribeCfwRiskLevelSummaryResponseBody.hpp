// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECFWRISKLEVELSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECFWRISKLEVELSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCfwRiskLevelSummaryResponseBodyRiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeCfwRiskLevelSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCfwRiskLevelSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskList, riskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCfwRiskLevelSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
    };
    DescribeCfwRiskLevelSummaryResponseBody() = default ;
    DescribeCfwRiskLevelSummaryResponseBody(const DescribeCfwRiskLevelSummaryResponseBody &) = default ;
    DescribeCfwRiskLevelSummaryResponseBody(DescribeCfwRiskLevelSummaryResponseBody &&) = default ;
    DescribeCfwRiskLevelSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCfwRiskLevelSummaryResponseBody() = default ;
    DescribeCfwRiskLevelSummaryResponseBody& operator=(const DescribeCfwRiskLevelSummaryResponseBody &) = default ;
    DescribeCfwRiskLevelSummaryResponseBody& operator=(DescribeCfwRiskLevelSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->riskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCfwRiskLevelSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskList Field Functions 
    bool hasRiskList() const { return this->riskList_ != nullptr;};
    void deleteRiskList() { this->riskList_ = nullptr;};
    inline const vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList> & riskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList>) };
    inline vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList> riskList() { DARABONBA_PTR_GET(riskList_, vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList>) };
    inline DescribeCfwRiskLevelSummaryResponseBody& setRiskList(const vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
    inline DescribeCfwRiskLevelSummaryResponseBody& setRiskList(vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of risks.
    std::shared_ptr<vector<DescribeCfwRiskLevelSummaryResponseBodyRiskList>> riskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
