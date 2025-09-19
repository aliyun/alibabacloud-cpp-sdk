// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYRESPONSEBODYINTERCEPTIONSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYRESPONSEBODYINTERCEPTIONSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionSummaryResponseBodyInterceptionSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionSummaryResponseBodyInterceptionSummary& obj) { 
      DARABONBA_PTR_TO_JSON(CloseClusterCount, closeClusterCount_);
      DARABONBA_PTR_TO_JSON(CloseRuleCount, closeRuleCount_);
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(InterceptionCountInDays, interceptionCountInDays_);
      DARABONBA_PTR_TO_JSON(OpenClusterCount, openClusterCount_);
      DARABONBA_PTR_TO_JSON(OpenRuleCount, openRuleCount_);
      DARABONBA_PTR_TO_JSON(RiskCount180Day, riskCount180Day_);
      DARABONBA_PTR_TO_JSON(RiskCount30Day, riskCount30Day_);
      DARABONBA_PTR_TO_JSON(RiskCountToday, riskCountToday_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionSummaryResponseBodyInterceptionSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(CloseClusterCount, closeClusterCount_);
      DARABONBA_PTR_FROM_JSON(CloseRuleCount, closeRuleCount_);
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(InterceptionCountInDays, interceptionCountInDays_);
      DARABONBA_PTR_FROM_JSON(OpenClusterCount, openClusterCount_);
      DARABONBA_PTR_FROM_JSON(OpenRuleCount, openRuleCount_);
      DARABONBA_PTR_FROM_JSON(RiskCount180Day, riskCount180Day_);
      DARABONBA_PTR_FROM_JSON(RiskCount30Day, riskCount30Day_);
      DARABONBA_PTR_FROM_JSON(RiskCountToday, riskCountToday_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    GetInterceptionSummaryResponseBodyInterceptionSummary() = default ;
    GetInterceptionSummaryResponseBodyInterceptionSummary(const GetInterceptionSummaryResponseBodyInterceptionSummary &) = default ;
    GetInterceptionSummaryResponseBodyInterceptionSummary(GetInterceptionSummaryResponseBodyInterceptionSummary &&) = default ;
    GetInterceptionSummaryResponseBodyInterceptionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionSummaryResponseBodyInterceptionSummary() = default ;
    GetInterceptionSummaryResponseBodyInterceptionSummary& operator=(const GetInterceptionSummaryResponseBodyInterceptionSummary &) = default ;
    GetInterceptionSummaryResponseBodyInterceptionSummary& operator=(GetInterceptionSummaryResponseBodyInterceptionSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->closeClusterCount_ != nullptr
        && this->closeRuleCount_ != nullptr && this->clusterCount_ != nullptr && this->interceptionCountInDays_ != nullptr && this->openClusterCount_ != nullptr && this->openRuleCount_ != nullptr
        && this->riskCount180Day_ != nullptr && this->riskCount30Day_ != nullptr && this->riskCountToday_ != nullptr && this->ruleCount_ != nullptr; };
    // closeClusterCount Field Functions 
    bool hasCloseClusterCount() const { return this->closeClusterCount_ != nullptr;};
    void deleteCloseClusterCount() { this->closeClusterCount_ = nullptr;};
    inline int32_t closeClusterCount() const { DARABONBA_PTR_GET_DEFAULT(closeClusterCount_, 0) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setCloseClusterCount(int32_t closeClusterCount) { DARABONBA_PTR_SET_VALUE(closeClusterCount_, closeClusterCount) };


    // closeRuleCount Field Functions 
    bool hasCloseRuleCount() const { return this->closeRuleCount_ != nullptr;};
    void deleteCloseRuleCount() { this->closeRuleCount_ = nullptr;};
    inline int32_t closeRuleCount() const { DARABONBA_PTR_GET_DEFAULT(closeRuleCount_, 0) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setCloseRuleCount(int32_t closeRuleCount) { DARABONBA_PTR_SET_VALUE(closeRuleCount_, closeRuleCount) };


    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int32_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // interceptionCountInDays Field Functions 
    bool hasInterceptionCountInDays() const { return this->interceptionCountInDays_ != nullptr;};
    void deleteInterceptionCountInDays() { this->interceptionCountInDays_ = nullptr;};
    inline int32_t interceptionCountInDays() const { DARABONBA_PTR_GET_DEFAULT(interceptionCountInDays_, 0) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setInterceptionCountInDays(int32_t interceptionCountInDays) { DARABONBA_PTR_SET_VALUE(interceptionCountInDays_, interceptionCountInDays) };


    // openClusterCount Field Functions 
    bool hasOpenClusterCount() const { return this->openClusterCount_ != nullptr;};
    void deleteOpenClusterCount() { this->openClusterCount_ = nullptr;};
    inline int32_t openClusterCount() const { DARABONBA_PTR_GET_DEFAULT(openClusterCount_, 0) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setOpenClusterCount(int32_t openClusterCount) { DARABONBA_PTR_SET_VALUE(openClusterCount_, openClusterCount) };


    // openRuleCount Field Functions 
    bool hasOpenRuleCount() const { return this->openRuleCount_ != nullptr;};
    void deleteOpenRuleCount() { this->openRuleCount_ = nullptr;};
    inline int32_t openRuleCount() const { DARABONBA_PTR_GET_DEFAULT(openRuleCount_, 0) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setOpenRuleCount(int32_t openRuleCount) { DARABONBA_PTR_SET_VALUE(openRuleCount_, openRuleCount) };


    // riskCount180Day Field Functions 
    bool hasRiskCount180Day() const { return this->riskCount180Day_ != nullptr;};
    void deleteRiskCount180Day() { this->riskCount180Day_ = nullptr;};
    inline int64_t riskCount180Day() const { DARABONBA_PTR_GET_DEFAULT(riskCount180Day_, 0L) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setRiskCount180Day(int64_t riskCount180Day) { DARABONBA_PTR_SET_VALUE(riskCount180Day_, riskCount180Day) };


    // riskCount30Day Field Functions 
    bool hasRiskCount30Day() const { return this->riskCount30Day_ != nullptr;};
    void deleteRiskCount30Day() { this->riskCount30Day_ = nullptr;};
    inline int64_t riskCount30Day() const { DARABONBA_PTR_GET_DEFAULT(riskCount30Day_, 0L) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setRiskCount30Day(int64_t riskCount30Day) { DARABONBA_PTR_SET_VALUE(riskCount30Day_, riskCount30Day) };


    // riskCountToday Field Functions 
    bool hasRiskCountToday() const { return this->riskCountToday_ != nullptr;};
    void deleteRiskCountToday() { this->riskCountToday_ = nullptr;};
    inline int64_t riskCountToday() const { DARABONBA_PTR_GET_DEFAULT(riskCountToday_, 0L) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setRiskCountToday(int64_t riskCountToday) { DARABONBA_PTR_SET_VALUE(riskCountToday_, riskCountToday) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // The number of clusters that are not protected.
    std::shared_ptr<int32_t> closeClusterCount_ = nullptr;
    // The number of disabled cluster defense rules.
    std::shared_ptr<int32_t> closeRuleCount_ = nullptr;
    // The total number of clusters.
    std::shared_ptr<int32_t> clusterCount_ = nullptr;
    // The total number of interception records for the specified cluster.
    std::shared_ptr<int32_t> interceptionCountInDays_ = nullptr;
    // The number of clusters that are protected.
    std::shared_ptr<int32_t> openClusterCount_ = nullptr;
    // The number of enabled cluster defense rules.
    std::shared_ptr<int32_t> openRuleCount_ = nullptr;
    // The number of security risks that are detected in the last 180 days.
    std::shared_ptr<int64_t> riskCount180Day_ = nullptr;
    // The number of security risks that are detected in the last 30 days.
    std::shared_ptr<int64_t> riskCount30Day_ = nullptr;
    // The number of security risks that are detected in the last 24 hours.
    std::shared_ptr<int64_t> riskCountToday_ = nullptr;
    // The total number of cluster defense rules.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
