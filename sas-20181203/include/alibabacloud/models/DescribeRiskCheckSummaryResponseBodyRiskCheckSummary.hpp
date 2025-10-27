// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups.hpp>
#include <alibabacloud/models/DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckSummaryResponseBodyRiskCheckSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedAssetCount, affectedAssetCount_);
      DARABONBA_PTR_TO_JSON(DisabledRiskCount, disabledRiskCount_);
      DARABONBA_PTR_TO_JSON(EnabledRiskCount, enabledRiskCount_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(ItemCount, itemCount_);
      DARABONBA_PTR_TO_JSON(PreviousCount, previousCount_);
      DARABONBA_PTR_TO_JSON(PreviousTime, previousTime_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(RiskLevelCount, riskLevelCount_);
      DARABONBA_PTR_TO_JSON(RiskRate, riskRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedAssetCount, affectedAssetCount_);
      DARABONBA_PTR_FROM_JSON(DisabledRiskCount, disabledRiskCount_);
      DARABONBA_PTR_FROM_JSON(EnabledRiskCount, enabledRiskCount_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(ItemCount, itemCount_);
      DARABONBA_PTR_FROM_JSON(PreviousCount, previousCount_);
      DARABONBA_PTR_FROM_JSON(PreviousTime, previousTime_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(RiskLevelCount, riskLevelCount_);
      DARABONBA_PTR_FROM_JSON(RiskRate, riskRate_);
    };
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummary() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummary(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummary &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummary(DescribeRiskCheckSummaryResponseBodyRiskCheckSummary &&) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckSummaryResponseBodyRiskCheckSummary() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& operator=(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummary &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& operator=(DescribeRiskCheckSummaryResponseBodyRiskCheckSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectedAssetCount_ == nullptr
        && return this->disabledRiskCount_ == nullptr && return this->enabledRiskCount_ == nullptr && return this->groups_ == nullptr && return this->itemCount_ == nullptr && return this->previousCount_ == nullptr
        && return this->previousTime_ == nullptr && return this->riskCount_ == nullptr && return this->riskLevelCount_ == nullptr && return this->riskRate_ == nullptr; };
    // affectedAssetCount Field Functions 
    bool hasAffectedAssetCount() const { return this->affectedAssetCount_ != nullptr;};
    void deleteAffectedAssetCount() { this->affectedAssetCount_ = nullptr;};
    inline int32_t affectedAssetCount() const { DARABONBA_PTR_GET_DEFAULT(affectedAssetCount_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setAffectedAssetCount(int32_t affectedAssetCount) { DARABONBA_PTR_SET_VALUE(affectedAssetCount_, affectedAssetCount) };


    // disabledRiskCount Field Functions 
    bool hasDisabledRiskCount() const { return this->disabledRiskCount_ != nullptr;};
    void deleteDisabledRiskCount() { this->disabledRiskCount_ = nullptr;};
    inline int32_t disabledRiskCount() const { DARABONBA_PTR_GET_DEFAULT(disabledRiskCount_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setDisabledRiskCount(int32_t disabledRiskCount) { DARABONBA_PTR_SET_VALUE(disabledRiskCount_, disabledRiskCount) };


    // enabledRiskCount Field Functions 
    bool hasEnabledRiskCount() const { return this->enabledRiskCount_ != nullptr;};
    void deleteEnabledRiskCount() { this->enabledRiskCount_ = nullptr;};
    inline int32_t enabledRiskCount() const { DARABONBA_PTR_GET_DEFAULT(enabledRiskCount_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setEnabledRiskCount(int32_t enabledRiskCount) { DARABONBA_PTR_SET_VALUE(enabledRiskCount_, enabledRiskCount) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups>) };
    inline vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups> groups() { DARABONBA_PTR_GET(groups_, vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups>) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setGroups(const vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setGroups(vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // itemCount Field Functions 
    bool hasItemCount() const { return this->itemCount_ != nullptr;};
    void deleteItemCount() { this->itemCount_ = nullptr;};
    inline int32_t itemCount() const { DARABONBA_PTR_GET_DEFAULT(itemCount_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setItemCount(int32_t itemCount) { DARABONBA_PTR_SET_VALUE(itemCount_, itemCount) };


    // previousCount Field Functions 
    bool hasPreviousCount() const { return this->previousCount_ != nullptr;};
    void deletePreviousCount() { this->previousCount_ = nullptr;};
    inline int32_t previousCount() const { DARABONBA_PTR_GET_DEFAULT(previousCount_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setPreviousCount(int32_t previousCount) { DARABONBA_PTR_SET_VALUE(previousCount_, previousCount) };


    // previousTime Field Functions 
    bool hasPreviousTime() const { return this->previousTime_ != nullptr;};
    void deletePreviousTime() { this->previousTime_ = nullptr;};
    inline int64_t previousTime() const { DARABONBA_PTR_GET_DEFAULT(previousTime_, 0L) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setPreviousTime(int64_t previousTime) { DARABONBA_PTR_SET_VALUE(previousTime_, previousTime) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int32_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // riskLevelCount Field Functions 
    bool hasRiskLevelCount() const { return this->riskLevelCount_ != nullptr;};
    void deleteRiskLevelCount() { this->riskLevelCount_ = nullptr;};
    inline const vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount> & riskLevelCount() const { DARABONBA_PTR_GET_CONST(riskLevelCount_, vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount>) };
    inline vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount> riskLevelCount() { DARABONBA_PTR_GET(riskLevelCount_, vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount>) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setRiskLevelCount(const vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount> & riskLevelCount) { DARABONBA_PTR_SET_VALUE(riskLevelCount_, riskLevelCount) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setRiskLevelCount(vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount> && riskLevelCount) { DARABONBA_PTR_SET_RVALUE(riskLevelCount_, riskLevelCount) };


    // riskRate Field Functions 
    bool hasRiskRate() const { return this->riskRate_ != nullptr;};
    void deleteRiskRate() { this->riskRate_ = nullptr;};
    inline float riskRate() const { DARABONBA_PTR_GET_DEFAULT(riskRate_, 0.0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummary& setRiskRate(float riskRate) { DARABONBA_PTR_SET_VALUE(riskRate_, riskRate) };


  protected:
    // The number of affected assets.
    std::shared_ptr<int32_t> affectedAssetCount_ = nullptr;
    // The number of the check items that failed the check.
    std::shared_ptr<int32_t> disabledRiskCount_ = nullptr;
    // The number of the check items that passed the check.
    std::shared_ptr<int32_t> enabledRiskCount_ = nullptr;
    // An array that consists of the statistics for each type of check item.
    std::shared_ptr<vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryGroups>> groups_ = nullptr;
    // The number of check items.
    std::shared_ptr<int32_t> itemCount_ = nullptr;
    // The number of risk items detected in the last check.
    std::shared_ptr<int32_t> previousCount_ = nullptr;
    // The timestamp of the last check. Unit: milliseconds.
    std::shared_ptr<int64_t> previousTime_ = nullptr;
    // The number of detected risk items.
    std::shared_ptr<int32_t> riskCount_ = nullptr;
    // An array that consists of the number of check items at each risk level.
    std::shared_ptr<vector<Models::DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount>> riskLevelCount_ = nullptr;
    // The proportion of risk items to all check items.
    std::shared_ptr<float> riskRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
