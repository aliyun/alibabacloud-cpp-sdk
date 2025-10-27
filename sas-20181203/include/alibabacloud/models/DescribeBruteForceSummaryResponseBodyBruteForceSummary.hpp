// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCESUMMARYRESPONSEBODYBRUTEFORCESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCESUMMARYRESPONSEBODYBRUTEFORCESUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBruteForceSummaryResponseBodyBruteForceSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBruteForceSummaryResponseBodyBruteForceSummary& obj) { 
      DARABONBA_PTR_TO_JSON(AllStrategyCount, allStrategyCount_);
      DARABONBA_PTR_TO_JSON(AntiBruteForceRuleCount, antiBruteForceRuleCount_);
      DARABONBA_PTR_TO_JSON(CustomEffectiveCount, customEffectiveCount_);
      DARABONBA_PTR_TO_JSON(CustomRecordCount, customRecordCount_);
      DARABONBA_PTR_TO_JSON(EffectiveCount, effectiveCount_);
      DARABONBA_PTR_TO_JSON(SystemEffectiveCount, systemEffectiveCount_);
      DARABONBA_PTR_TO_JSON(SystemRecordCount, systemRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBruteForceSummaryResponseBodyBruteForceSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(AllStrategyCount, allStrategyCount_);
      DARABONBA_PTR_FROM_JSON(AntiBruteForceRuleCount, antiBruteForceRuleCount_);
      DARABONBA_PTR_FROM_JSON(CustomEffectiveCount, customEffectiveCount_);
      DARABONBA_PTR_FROM_JSON(CustomRecordCount, customRecordCount_);
      DARABONBA_PTR_FROM_JSON(EffectiveCount, effectiveCount_);
      DARABONBA_PTR_FROM_JSON(SystemEffectiveCount, systemEffectiveCount_);
      DARABONBA_PTR_FROM_JSON(SystemRecordCount, systemRecordCount_);
    };
    DescribeBruteForceSummaryResponseBodyBruteForceSummary() = default ;
    DescribeBruteForceSummaryResponseBodyBruteForceSummary(const DescribeBruteForceSummaryResponseBodyBruteForceSummary &) = default ;
    DescribeBruteForceSummaryResponseBodyBruteForceSummary(DescribeBruteForceSummaryResponseBodyBruteForceSummary &&) = default ;
    DescribeBruteForceSummaryResponseBodyBruteForceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBruteForceSummaryResponseBodyBruteForceSummary() = default ;
    DescribeBruteForceSummaryResponseBodyBruteForceSummary& operator=(const DescribeBruteForceSummaryResponseBodyBruteForceSummary &) = default ;
    DescribeBruteForceSummaryResponseBodyBruteForceSummary& operator=(DescribeBruteForceSummaryResponseBodyBruteForceSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allStrategyCount_ == nullptr
        && return this->antiBruteForceRuleCount_ == nullptr && return this->customEffectiveCount_ == nullptr && return this->customRecordCount_ == nullptr && return this->effectiveCount_ == nullptr && return this->systemEffectiveCount_ == nullptr
        && return this->systemRecordCount_ == nullptr; };
    // allStrategyCount Field Functions 
    bool hasAllStrategyCount() const { return this->allStrategyCount_ != nullptr;};
    void deleteAllStrategyCount() { this->allStrategyCount_ = nullptr;};
    inline int32_t allStrategyCount() const { DARABONBA_PTR_GET_DEFAULT(allStrategyCount_, 0) };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary& setAllStrategyCount(int32_t allStrategyCount) { DARABONBA_PTR_SET_VALUE(allStrategyCount_, allStrategyCount) };


    // antiBruteForceRuleCount Field Functions 
    bool hasAntiBruteForceRuleCount() const { return this->antiBruteForceRuleCount_ != nullptr;};
    void deleteAntiBruteForceRuleCount() { this->antiBruteForceRuleCount_ = nullptr;};
    inline string antiBruteForceRuleCount() const { DARABONBA_PTR_GET_DEFAULT(antiBruteForceRuleCount_, "") };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary& setAntiBruteForceRuleCount(string antiBruteForceRuleCount) { DARABONBA_PTR_SET_VALUE(antiBruteForceRuleCount_, antiBruteForceRuleCount) };


    // customEffectiveCount Field Functions 
    bool hasCustomEffectiveCount() const { return this->customEffectiveCount_ != nullptr;};
    void deleteCustomEffectiveCount() { this->customEffectiveCount_ = nullptr;};
    inline string customEffectiveCount() const { DARABONBA_PTR_GET_DEFAULT(customEffectiveCount_, "") };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary& setCustomEffectiveCount(string customEffectiveCount) { DARABONBA_PTR_SET_VALUE(customEffectiveCount_, customEffectiveCount) };


    // customRecordCount Field Functions 
    bool hasCustomRecordCount() const { return this->customRecordCount_ != nullptr;};
    void deleteCustomRecordCount() { this->customRecordCount_ = nullptr;};
    inline string customRecordCount() const { DARABONBA_PTR_GET_DEFAULT(customRecordCount_, "") };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary& setCustomRecordCount(string customRecordCount) { DARABONBA_PTR_SET_VALUE(customRecordCount_, customRecordCount) };


    // effectiveCount Field Functions 
    bool hasEffectiveCount() const { return this->effectiveCount_ != nullptr;};
    void deleteEffectiveCount() { this->effectiveCount_ = nullptr;};
    inline int32_t effectiveCount() const { DARABONBA_PTR_GET_DEFAULT(effectiveCount_, 0) };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary& setEffectiveCount(int32_t effectiveCount) { DARABONBA_PTR_SET_VALUE(effectiveCount_, effectiveCount) };


    // systemEffectiveCount Field Functions 
    bool hasSystemEffectiveCount() const { return this->systemEffectiveCount_ != nullptr;};
    void deleteSystemEffectiveCount() { this->systemEffectiveCount_ = nullptr;};
    inline string systemEffectiveCount() const { DARABONBA_PTR_GET_DEFAULT(systemEffectiveCount_, "") };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary& setSystemEffectiveCount(string systemEffectiveCount) { DARABONBA_PTR_SET_VALUE(systemEffectiveCount_, systemEffectiveCount) };


    // systemRecordCount Field Functions 
    bool hasSystemRecordCount() const { return this->systemRecordCount_ != nullptr;};
    void deleteSystemRecordCount() { this->systemRecordCount_ = nullptr;};
    inline string systemRecordCount() const { DARABONBA_PTR_GET_DEFAULT(systemRecordCount_, "") };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary& setSystemRecordCount(string systemRecordCount) { DARABONBA_PTR_SET_VALUE(systemRecordCount_, systemRecordCount) };


  protected:
    // The number of anti-brute force IP blocking policies.
    std::shared_ptr<int32_t> allStrategyCount_ = nullptr;
    // The number of defense policies.
    std::shared_ptr<string> antiBruteForceRuleCount_ = nullptr;
    // The number of custom blocking rules that are in effect.
    std::shared_ptr<string> customEffectiveCount_ = nullptr;
    // The number of custom blocking rules.
    std::shared_ptr<string> customRecordCount_ = nullptr;
    // The number of anti-brute force IP blocking policies enabled.
    std::shared_ptr<int32_t> effectiveCount_ = nullptr;
    // The number of system blocking rules that are in effect.
    std::shared_ptr<string> systemEffectiveCount_ = nullptr;
    // The number of system blocking rules.
    std::shared_ptr<string> systemRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
