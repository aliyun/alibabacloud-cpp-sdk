// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODYSUMMARYPASSRATESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODYSUMMARYPASSRATESUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary& obj) { 
      DARABONBA_PTR_TO_JSON(PassRate, passRate_);
      DARABONBA_PTR_TO_JSON(PassRateScope, passRateScope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(PassRate, passRate_);
      DARABONBA_PTR_FROM_JSON(PassRateScope, passRateScope_);
    };
    DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary() = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary(const DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary &) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary(DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary &&) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary() = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary& operator=(const DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary &) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary& operator=(DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passRate_ == nullptr
        && return this->passRateScope_ == nullptr; };
    // passRate Field Functions 
    bool hasPassRate() const { return this->passRate_ != nullptr;};
    void deletePassRate() { this->passRate_ = nullptr;};
    inline double passRate() const { DARABONBA_PTR_GET_DEFAULT(passRate_, 0.0) };
    inline DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary& setPassRate(double passRate) { DARABONBA_PTR_SET_VALUE(passRate_, passRate) };


    // passRateScope Field Functions 
    bool hasPassRateScope() const { return this->passRateScope_ != nullptr;};
    void deletePassRateScope() { this->passRateScope_ = nullptr;};
    inline string passRateScope() const { DARABONBA_PTR_GET_DEFAULT(passRateScope_, "") };
    inline DescribeNisInspectionReportSummaryResponseBodySummaryPassRateSummary& setPassRateScope(string passRateScope) { DARABONBA_PTR_SET_VALUE(passRateScope_, passRateScope) };


  protected:
    std::shared_ptr<double> passRate_ = nullptr;
    std::shared_ptr<string> passRateScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
