// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYRESPONSEBODYCLUSTERRULESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYRESPONSEBODYCLUSTERRULESUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterRuleSummaryResponseBodyClusterRuleSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRuleSummaryResponseBodyClusterRuleSummary& obj) { 
      DARABONBA_PTR_TO_JSON(CloseRuleCount, closeRuleCount_);
      DARABONBA_PTR_TO_JSON(InterceptionCount7Day, interceptionCount7Day_);
      DARABONBA_PTR_TO_JSON(InterceptionSwitch, interceptionSwitch_);
      DARABONBA_PTR_TO_JSON(InterceptionType, interceptionType_);
      DARABONBA_PTR_TO_JSON(OpenRuleCount, openRuleCount_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(SuggestRuleCount, suggestRuleCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRuleSummaryResponseBodyClusterRuleSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(CloseRuleCount, closeRuleCount_);
      DARABONBA_PTR_FROM_JSON(InterceptionCount7Day, interceptionCount7Day_);
      DARABONBA_PTR_FROM_JSON(InterceptionSwitch, interceptionSwitch_);
      DARABONBA_PTR_FROM_JSON(InterceptionType, interceptionType_);
      DARABONBA_PTR_FROM_JSON(OpenRuleCount, openRuleCount_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(SuggestRuleCount, suggestRuleCount_);
    };
    GetClusterRuleSummaryResponseBodyClusterRuleSummary() = default ;
    GetClusterRuleSummaryResponseBodyClusterRuleSummary(const GetClusterRuleSummaryResponseBodyClusterRuleSummary &) = default ;
    GetClusterRuleSummaryResponseBodyClusterRuleSummary(GetClusterRuleSummaryResponseBodyClusterRuleSummary &&) = default ;
    GetClusterRuleSummaryResponseBodyClusterRuleSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRuleSummaryResponseBodyClusterRuleSummary() = default ;
    GetClusterRuleSummaryResponseBodyClusterRuleSummary& operator=(const GetClusterRuleSummaryResponseBodyClusterRuleSummary &) = default ;
    GetClusterRuleSummaryResponseBodyClusterRuleSummary& operator=(GetClusterRuleSummaryResponseBodyClusterRuleSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->closeRuleCount_ != nullptr
        && this->interceptionCount7Day_ != nullptr && this->interceptionSwitch_ != nullptr && this->interceptionType_ != nullptr && this->openRuleCount_ != nullptr && this->ruleCount_ != nullptr
        && this->suggestRuleCount_ != nullptr; };
    // closeRuleCount Field Functions 
    bool hasCloseRuleCount() const { return this->closeRuleCount_ != nullptr;};
    void deleteCloseRuleCount() { this->closeRuleCount_ = nullptr;};
    inline int32_t closeRuleCount() const { DARABONBA_PTR_GET_DEFAULT(closeRuleCount_, 0) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary& setCloseRuleCount(int32_t closeRuleCount) { DARABONBA_PTR_SET_VALUE(closeRuleCount_, closeRuleCount) };


    // interceptionCount7Day Field Functions 
    bool hasInterceptionCount7Day() const { return this->interceptionCount7Day_ != nullptr;};
    void deleteInterceptionCount7Day() { this->interceptionCount7Day_ = nullptr;};
    inline int64_t interceptionCount7Day() const { DARABONBA_PTR_GET_DEFAULT(interceptionCount7Day_, 0L) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary& setInterceptionCount7Day(int64_t interceptionCount7Day) { DARABONBA_PTR_SET_VALUE(interceptionCount7Day_, interceptionCount7Day) };


    // interceptionSwitch Field Functions 
    bool hasInterceptionSwitch() const { return this->interceptionSwitch_ != nullptr;};
    void deleteInterceptionSwitch() { this->interceptionSwitch_ = nullptr;};
    inline int32_t interceptionSwitch() const { DARABONBA_PTR_GET_DEFAULT(interceptionSwitch_, 0) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary& setInterceptionSwitch(int32_t interceptionSwitch) { DARABONBA_PTR_SET_VALUE(interceptionSwitch_, interceptionSwitch) };


    // interceptionType Field Functions 
    bool hasInterceptionType() const { return this->interceptionType_ != nullptr;};
    void deleteInterceptionType() { this->interceptionType_ = nullptr;};
    inline int32_t interceptionType() const { DARABONBA_PTR_GET_DEFAULT(interceptionType_, 0) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary& setInterceptionType(int32_t interceptionType) { DARABONBA_PTR_SET_VALUE(interceptionType_, interceptionType) };


    // openRuleCount Field Functions 
    bool hasOpenRuleCount() const { return this->openRuleCount_ != nullptr;};
    void deleteOpenRuleCount() { this->openRuleCount_ = nullptr;};
    inline int32_t openRuleCount() const { DARABONBA_PTR_GET_DEFAULT(openRuleCount_, 0) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary& setOpenRuleCount(int32_t openRuleCount) { DARABONBA_PTR_SET_VALUE(openRuleCount_, openRuleCount) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // suggestRuleCount Field Functions 
    bool hasSuggestRuleCount() const { return this->suggestRuleCount_ != nullptr;};
    void deleteSuggestRuleCount() { this->suggestRuleCount_ = nullptr;};
    inline int32_t suggestRuleCount() const { DARABONBA_PTR_GET_DEFAULT(suggestRuleCount_, 0) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary& setSuggestRuleCount(int32_t suggestRuleCount) { DARABONBA_PTR_SET_VALUE(suggestRuleCount_, suggestRuleCount) };


  protected:
    // The number of disabled cluster defense rules.
    std::shared_ptr<int32_t> closeRuleCount_ = nullptr;
    // The number of alerts that are triggered by the cluster defense rules in the last seven days.
    std::shared_ptr<int64_t> interceptionCount7Day_ = nullptr;
    // The status of the container firewall feature. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> interceptionSwitch_ = nullptr;
    // The interception mode.
    std::shared_ptr<int32_t> interceptionType_ = nullptr;
    // The number of enabled cluster defense rules.
    std::shared_ptr<int32_t> openRuleCount_ = nullptr;
    // The total number of configured cluster defense rules.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // The number of recommended cluster defense rules.
    std::shared_ptr<int32_t> suggestRuleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
