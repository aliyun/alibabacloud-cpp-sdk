// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYSUMMARYSSTANDARDS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYSUMMARYSSTANDARDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCheckSummaryResponseBodySummarysStandardsStandardStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSummaryResponseBodySummarysStandards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSummaryResponseBodySummarysStandards& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PassCount, passCount_);
      DARABONBA_PTR_TO_JSON(RiskLevelHighCount, riskLevelHighCount_);
      DARABONBA_PTR_TO_JSON(RiskLevelLowCount, riskLevelLowCount_);
      DARABONBA_PTR_TO_JSON(RiskLevelMediumCount, riskLevelMediumCount_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(StandardStatistic, standardStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSummaryResponseBodySummarysStandards& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
      DARABONBA_PTR_FROM_JSON(RiskLevelHighCount, riskLevelHighCount_);
      DARABONBA_PTR_FROM_JSON(RiskLevelLowCount, riskLevelLowCount_);
      DARABONBA_PTR_FROM_JSON(RiskLevelMediumCount, riskLevelMediumCount_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(StandardStatistic, standardStatistic_);
    };
    GetCheckSummaryResponseBodySummarysStandards() = default ;
    GetCheckSummaryResponseBodySummarysStandards(const GetCheckSummaryResponseBodySummarysStandards &) = default ;
    GetCheckSummaryResponseBodySummarysStandards(GetCheckSummaryResponseBodySummarysStandards &&) = default ;
    GetCheckSummaryResponseBodySummarysStandards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSummaryResponseBodySummarysStandards() = default ;
    GetCheckSummaryResponseBodySummarysStandards& operator=(const GetCheckSummaryResponseBodySummarysStandards &) = default ;
    GetCheckSummaryResponseBodySummarysStandards& operator=(GetCheckSummaryResponseBodySummarysStandards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failCount_ != nullptr
        && this->id_ != nullptr && this->passCount_ != nullptr && this->riskLevelHighCount_ != nullptr && this->riskLevelLowCount_ != nullptr && this->riskLevelMediumCount_ != nullptr
        && this->showName_ != nullptr && this->standardStatistic_ != nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysStandards& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCheckSummaryResponseBodySummarysStandards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // passCount Field Functions 
    bool hasPassCount() const { return this->passCount_ != nullptr;};
    void deletePassCount() { this->passCount_ = nullptr;};
    inline int32_t passCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysStandards& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


    // riskLevelHighCount Field Functions 
    bool hasRiskLevelHighCount() const { return this->riskLevelHighCount_ != nullptr;};
    void deleteRiskLevelHighCount() { this->riskLevelHighCount_ = nullptr;};
    inline int32_t riskLevelHighCount() const { DARABONBA_PTR_GET_DEFAULT(riskLevelHighCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysStandards& setRiskLevelHighCount(int32_t riskLevelHighCount) { DARABONBA_PTR_SET_VALUE(riskLevelHighCount_, riskLevelHighCount) };


    // riskLevelLowCount Field Functions 
    bool hasRiskLevelLowCount() const { return this->riskLevelLowCount_ != nullptr;};
    void deleteRiskLevelLowCount() { this->riskLevelLowCount_ = nullptr;};
    inline int32_t riskLevelLowCount() const { DARABONBA_PTR_GET_DEFAULT(riskLevelLowCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysStandards& setRiskLevelLowCount(int32_t riskLevelLowCount) { DARABONBA_PTR_SET_VALUE(riskLevelLowCount_, riskLevelLowCount) };


    // riskLevelMediumCount Field Functions 
    bool hasRiskLevelMediumCount() const { return this->riskLevelMediumCount_ != nullptr;};
    void deleteRiskLevelMediumCount() { this->riskLevelMediumCount_ = nullptr;};
    inline int32_t riskLevelMediumCount() const { DARABONBA_PTR_GET_DEFAULT(riskLevelMediumCount_, 0) };
    inline GetCheckSummaryResponseBodySummarysStandards& setRiskLevelMediumCount(int32_t riskLevelMediumCount) { DARABONBA_PTR_SET_VALUE(riskLevelMediumCount_, riskLevelMediumCount) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetCheckSummaryResponseBodySummarysStandards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // standardStatistic Field Functions 
    bool hasStandardStatistic() const { return this->standardStatistic_ != nullptr;};
    void deleteStandardStatistic() { this->standardStatistic_ = nullptr;};
    inline const Models::GetCheckSummaryResponseBodySummarysStandardsStandardStatistic & standardStatistic() const { DARABONBA_PTR_GET_CONST(standardStatistic_, Models::GetCheckSummaryResponseBodySummarysStandardsStandardStatistic) };
    inline Models::GetCheckSummaryResponseBodySummarysStandardsStandardStatistic standardStatistic() { DARABONBA_PTR_GET(standardStatistic_, Models::GetCheckSummaryResponseBodySummarysStandardsStandardStatistic) };
    inline GetCheckSummaryResponseBodySummarysStandards& setStandardStatistic(const Models::GetCheckSummaryResponseBodySummarysStandardsStandardStatistic & standardStatistic) { DARABONBA_PTR_SET_VALUE(standardStatistic_, standardStatistic) };
    inline GetCheckSummaryResponseBodySummarysStandards& setStandardStatistic(Models::GetCheckSummaryResponseBodySummarysStandardsStandardStatistic && standardStatistic) { DARABONBA_PTR_SET_RVALUE(standardStatistic_, standardStatistic) };


  protected:
    // The number of check items that failed to pass the check.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of check items that pass the check.
    std::shared_ptr<int32_t> passCount_ = nullptr;
    // The number of **high-risk** items.
    std::shared_ptr<int32_t> riskLevelHighCount_ = nullptr;
    // The number of **low-risk** items.
    std::shared_ptr<int32_t> riskLevelLowCount_ = nullptr;
    // The number of **medium-risk** items.
    std::shared_ptr<int32_t> riskLevelMediumCount_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> showName_ = nullptr;
    // The standard statistics of the check items.
    std::shared_ptr<Models::GetCheckSummaryResponseBodySummarysStandardsStandardStatistic> standardStatistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
