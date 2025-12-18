// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARYCOMPLIANCESUMMARYBYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARYCOMPLIANCESUMMARYBYRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
      DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_TO_JSON(HighRiskRuleNonCompliantResourceCount, highRiskRuleNonCompliantResourceCount_);
      DARABONBA_PTR_TO_JSON(LowRiskRuleNonCompliantResourceCount, lowRiskRuleNonCompliantResourceCount_);
      DARABONBA_PTR_TO_JSON(MediumRiskRuleNonCompliantResourceCount, mediumRiskRuleNonCompliantResourceCount_);
      DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
      DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_FROM_JSON(HighRiskRuleNonCompliantResourceCount, highRiskRuleNonCompliantResourceCount_);
      DARABONBA_PTR_FROM_JSON(LowRiskRuleNonCompliantResourceCount, lowRiskRuleNonCompliantResourceCount_);
      DARABONBA_PTR_FROM_JSON(MediumRiskRuleNonCompliantResourceCount, mediumRiskRuleNonCompliantResourceCount_);
      DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource() = default ;
    GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource(const GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource &) = default ;
    GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource(GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource &&) = default ;
    GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource() = default ;
    GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& operator=(const GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource &) = default ;
    GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& operator=(GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceSummaryTimestamp_ == nullptr
        && return this->compliantCount_ == nullptr && return this->highRiskRuleNonCompliantResourceCount_ == nullptr && return this->lowRiskRuleNonCompliantResourceCount_ == nullptr && return this->mediumRiskRuleNonCompliantResourceCount_ == nullptr && return this->nonCompliantCount_ == nullptr
        && return this->totalCount_ == nullptr; };
    // complianceSummaryTimestamp Field Functions 
    bool hasComplianceSummaryTimestamp() const { return this->complianceSummaryTimestamp_ != nullptr;};
    void deleteComplianceSummaryTimestamp() { this->complianceSummaryTimestamp_ = nullptr;};
    inline int64_t complianceSummaryTimestamp() const { DARABONBA_PTR_GET_DEFAULT(complianceSummaryTimestamp_, 0L) };
    inline GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& setComplianceSummaryTimestamp(int64_t complianceSummaryTimestamp) { DARABONBA_PTR_SET_VALUE(complianceSummaryTimestamp_, complianceSummaryTimestamp) };


    // compliantCount Field Functions 
    bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
    void deleteCompliantCount() { this->compliantCount_ = nullptr;};
    inline int32_t compliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
    inline GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


    // highRiskRuleNonCompliantResourceCount Field Functions 
    bool hasHighRiskRuleNonCompliantResourceCount() const { return this->highRiskRuleNonCompliantResourceCount_ != nullptr;};
    void deleteHighRiskRuleNonCompliantResourceCount() { this->highRiskRuleNonCompliantResourceCount_ = nullptr;};
    inline int32_t highRiskRuleNonCompliantResourceCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskRuleNonCompliantResourceCount_, 0) };
    inline GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& setHighRiskRuleNonCompliantResourceCount(int32_t highRiskRuleNonCompliantResourceCount) { DARABONBA_PTR_SET_VALUE(highRiskRuleNonCompliantResourceCount_, highRiskRuleNonCompliantResourceCount) };


    // lowRiskRuleNonCompliantResourceCount Field Functions 
    bool hasLowRiskRuleNonCompliantResourceCount() const { return this->lowRiskRuleNonCompliantResourceCount_ != nullptr;};
    void deleteLowRiskRuleNonCompliantResourceCount() { this->lowRiskRuleNonCompliantResourceCount_ = nullptr;};
    inline int32_t lowRiskRuleNonCompliantResourceCount() const { DARABONBA_PTR_GET_DEFAULT(lowRiskRuleNonCompliantResourceCount_, 0) };
    inline GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& setLowRiskRuleNonCompliantResourceCount(int32_t lowRiskRuleNonCompliantResourceCount) { DARABONBA_PTR_SET_VALUE(lowRiskRuleNonCompliantResourceCount_, lowRiskRuleNonCompliantResourceCount) };


    // mediumRiskRuleNonCompliantResourceCount Field Functions 
    bool hasMediumRiskRuleNonCompliantResourceCount() const { return this->mediumRiskRuleNonCompliantResourceCount_ != nullptr;};
    void deleteMediumRiskRuleNonCompliantResourceCount() { this->mediumRiskRuleNonCompliantResourceCount_ = nullptr;};
    inline int32_t mediumRiskRuleNonCompliantResourceCount() const { DARABONBA_PTR_GET_DEFAULT(mediumRiskRuleNonCompliantResourceCount_, 0) };
    inline GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& setMediumRiskRuleNonCompliantResourceCount(int32_t mediumRiskRuleNonCompliantResourceCount) { DARABONBA_PTR_SET_VALUE(mediumRiskRuleNonCompliantResourceCount_, mediumRiskRuleNonCompliantResourceCount) };


    // nonCompliantCount Field Functions 
    bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
    void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
    inline int32_t nonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
    inline GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the compliance summary was generated. Unit: milliseconds.
    std::shared_ptr<int64_t> complianceSummaryTimestamp_ = nullptr;
    // The number of resources evaluated as compliant.
    std::shared_ptr<int32_t> compliantCount_ = nullptr;
    std::shared_ptr<int32_t> highRiskRuleNonCompliantResourceCount_ = nullptr;
    std::shared_ptr<int32_t> lowRiskRuleNonCompliantResourceCount_ = nullptr;
    std::shared_ptr<int32_t> mediumRiskRuleNonCompliantResourceCount_ = nullptr;
    // The number of resources evaluated as non-compliant.
    std::shared_ptr<int32_t> nonCompliantCount_ = nullptr;
    // The total number of resources.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
