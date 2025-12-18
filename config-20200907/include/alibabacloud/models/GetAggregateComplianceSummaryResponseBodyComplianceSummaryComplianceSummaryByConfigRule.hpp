// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARYCOMPLIANCESUMMARYBYCONFIGRULE_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARYCOMPLIANCESUMMARYBYCONFIGRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
      DARABONBA_PTR_TO_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceSummaryTimestamp, complianceSummaryTimestamp_);
      DARABONBA_PTR_FROM_JSON(CompliantCount, compliantCount_);
      DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule() = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule(const GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule &) = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule(GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule &&) = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule() = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& operator=(const GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule &) = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& operator=(GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceSummaryTimestamp_ == nullptr
        && return this->compliantCount_ == nullptr && return this->nonCompliantCount_ == nullptr && return this->totalCount_ == nullptr; };
    // complianceSummaryTimestamp Field Functions 
    bool hasComplianceSummaryTimestamp() const { return this->complianceSummaryTimestamp_ != nullptr;};
    void deleteComplianceSummaryTimestamp() { this->complianceSummaryTimestamp_ = nullptr;};
    inline int64_t complianceSummaryTimestamp() const { DARABONBA_PTR_GET_DEFAULT(complianceSummaryTimestamp_, 0L) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& setComplianceSummaryTimestamp(int64_t complianceSummaryTimestamp) { DARABONBA_PTR_SET_VALUE(complianceSummaryTimestamp_, complianceSummaryTimestamp) };


    // compliantCount Field Functions 
    bool hasCompliantCount() const { return this->compliantCount_ != nullptr;};
    void deleteCompliantCount() { this->compliantCount_ = nullptr;};
    inline int32_t compliantCount() const { DARABONBA_PTR_GET_DEFAULT(compliantCount_, 0) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& setCompliantCount(int32_t compliantCount) { DARABONBA_PTR_SET_VALUE(compliantCount_, compliantCount) };


    // nonCompliantCount Field Functions 
    bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
    void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
    inline int32_t nonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the compliance statistics were collected. Unit: milliseconds.
    std::shared_ptr<int64_t> complianceSummaryTimestamp_ = nullptr;
    // The number of compliant rules.
    std::shared_ptr<int32_t> compliantCount_ = nullptr;
    // The number of non-compliant rules.
    std::shared_ptr<int32_t> nonCompliantCount_ = nullptr;
    // The total number of rules.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
