// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODYSUMMARYRISKSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTSUMMARYRESPONSEBODYSUMMARYRISKSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
    };
    DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary() = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary(const DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary &) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary(DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary &&) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary() = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& operator=(const DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary &) = default ;
    DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& operator=(DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCount_ == nullptr
        && return this->riskCount_ == nullptr && return this->riskLevel_ == nullptr && return this->riskType_ == nullptr; };
    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int32_t resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
    inline DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int32_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
    inline DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline DescribeNisInspectionReportSummaryResponseBodySummaryRiskSummary& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


  protected:
    std::shared_ptr<int32_t> resourceCount_ = nullptr;
    std::shared_ptr<int32_t> riskCount_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> riskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
