// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODYSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODYSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary.hpp>
#include <alibabacloud/models/DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportSummaryResponseBodySummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportSummaryResponseBodySummary& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItemCount, checkItemCount_);
      DARABONBA_PTR_TO_JSON(CheckResourceCount, checkResourceCount_);
      DARABONBA_PTR_TO_JSON(PassRateSummary, passRateSummary_);
      DARABONBA_PTR_TO_JSON(RiskSummary, riskSummary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportSummaryResponseBodySummary& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItemCount, checkItemCount_);
      DARABONBA_PTR_FROM_JSON(CheckResourceCount, checkResourceCount_);
      DARABONBA_PTR_FROM_JSON(PassRateSummary, passRateSummary_);
      DARABONBA_PTR_FROM_JSON(RiskSummary, riskSummary_);
    };
    DescribeNisInspectionReportSummaryResponseBodySummary() = default ;
    DescribeNisInspectionReportSummaryResponseBodySummary(const DescribeNisInspectionReportSummaryResponseBodySummary &) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummary(DescribeNisInspectionReportSummaryResponseBodySummary &&) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportSummaryResponseBodySummary() = default ;
    DescribeNisInspectionReportSummaryResponseBodySummary& operator=(const DescribeNisInspectionReportSummaryResponseBodySummary &) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummary& operator=(DescribeNisInspectionReportSummaryResponseBodySummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkItemCount_ == nullptr
        && return this->checkResourceCount_ == nullptr && return this->passRateSummary_ == nullptr && return this->riskSummary_ == nullptr; };
    // checkItemCount Field Functions 
    bool hasCheckItemCount() const { return this->checkItemCount_ != nullptr;};
    void deleteCheckItemCount() { this->checkItemCount_ = nullptr;};
    inline int32_t checkItemCount() const { DARABONBA_PTR_GET_DEFAULT(checkItemCount_, 0) };
    inline DescribeNisInspectionReportSummaryResponseBodySummary& setCheckItemCount(int32_t checkItemCount) { DARABONBA_PTR_SET_VALUE(checkItemCount_, checkItemCount) };


    // checkResourceCount Field Functions 
    bool hasCheckResourceCount() const { return this->checkResourceCount_ != nullptr;};
    void deleteCheckResourceCount() { this->checkResourceCount_ = nullptr;};
    inline int32_t checkResourceCount() const { DARABONBA_PTR_GET_DEFAULT(checkResourceCount_, 0) };
    inline DescribeNisInspectionReportSummaryResponseBodySummary& setCheckResourceCount(int32_t checkResourceCount) { DARABONBA_PTR_SET_VALUE(checkResourceCount_, checkResourceCount) };


    // passRateSummary Field Functions 
    bool hasPassRateSummary() const { return this->passRateSummary_ != nullptr;};
    void deletePassRateSummary() { this->passRateSummary_ = nullptr;};
    inline const vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary> & passRateSummary() const { DARABONBA_PTR_GET_CONST(passRateSummary_, vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary>) };
    inline vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary> passRateSummary() { DARABONBA_PTR_GET(passRateSummary_, vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary>) };
    inline DescribeNisInspectionReportSummaryResponseBodySummary& setPassRateSummary(const vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary> & passRateSummary) { DARABONBA_PTR_SET_VALUE(passRateSummary_, passRateSummary) };
    inline DescribeNisInspectionReportSummaryResponseBodySummary& setPassRateSummary(vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary> && passRateSummary) { DARABONBA_PTR_SET_RVALUE(passRateSummary_, passRateSummary) };


    // riskSummary Field Functions 
    bool hasRiskSummary() const { return this->riskSummary_ != nullptr;};
    void deleteRiskSummary() { this->riskSummary_ = nullptr;};
    inline const vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary> & riskSummary() const { DARABONBA_PTR_GET_CONST(riskSummary_, vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary>) };
    inline vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary> riskSummary() { DARABONBA_PTR_GET(riskSummary_, vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary>) };
    inline DescribeNisInspectionReportSummaryResponseBodySummary& setRiskSummary(const vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary> & riskSummary) { DARABONBA_PTR_SET_VALUE(riskSummary_, riskSummary) };
    inline DescribeNisInspectionReportSummaryResponseBodySummary& setRiskSummary(vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary> && riskSummary) { DARABONBA_PTR_SET_RVALUE(riskSummary_, riskSummary) };


  protected:
    std::shared_ptr<int32_t> checkItemCount_ = nullptr;
    std::shared_ptr<int32_t> checkResourceCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary>> passRateSummary_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary>> riskSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
