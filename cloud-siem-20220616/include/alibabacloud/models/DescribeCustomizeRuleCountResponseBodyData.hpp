// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULECOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULECOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCustomizeRuleCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeRuleCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationRuleNum, aggregationRuleNum_);
      DARABONBA_PTR_TO_JSON(CustomizeRuleNum, customizeRuleNum_);
      DARABONBA_PTR_TO_JSON(ExpertRuleNum, expertRuleNum_);
      DARABONBA_PTR_TO_JSON(GraphComputingRuleNum, graphComputingRuleNum_);
      DARABONBA_PTR_TO_JSON(HighRuleNum, highRuleNum_);
      DARABONBA_PTR_TO_JSON(InUseRuleNum, inUseRuleNum_);
      DARABONBA_PTR_TO_JSON(LowRuleNum, lowRuleNum_);
      DARABONBA_PTR_TO_JSON(MediumRuleNum, mediumRuleNum_);
      DARABONBA_PTR_TO_JSON(PredefinedRuleNum, predefinedRuleNum_);
      DARABONBA_PTR_TO_JSON(SingleAlertRuleNum, singleAlertRuleNum_);
      DARABONBA_PTR_TO_JSON(TotalRuleNum, totalRuleNum_);
      DARABONBA_PTR_TO_JSON(UnEventRuleNum, unEventRuleNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeRuleCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationRuleNum, aggregationRuleNum_);
      DARABONBA_PTR_FROM_JSON(CustomizeRuleNum, customizeRuleNum_);
      DARABONBA_PTR_FROM_JSON(ExpertRuleNum, expertRuleNum_);
      DARABONBA_PTR_FROM_JSON(GraphComputingRuleNum, graphComputingRuleNum_);
      DARABONBA_PTR_FROM_JSON(HighRuleNum, highRuleNum_);
      DARABONBA_PTR_FROM_JSON(InUseRuleNum, inUseRuleNum_);
      DARABONBA_PTR_FROM_JSON(LowRuleNum, lowRuleNum_);
      DARABONBA_PTR_FROM_JSON(MediumRuleNum, mediumRuleNum_);
      DARABONBA_PTR_FROM_JSON(PredefinedRuleNum, predefinedRuleNum_);
      DARABONBA_PTR_FROM_JSON(SingleAlertRuleNum, singleAlertRuleNum_);
      DARABONBA_PTR_FROM_JSON(TotalRuleNum, totalRuleNum_);
      DARABONBA_PTR_FROM_JSON(UnEventRuleNum, unEventRuleNum_);
    };
    DescribeCustomizeRuleCountResponseBodyData() = default ;
    DescribeCustomizeRuleCountResponseBodyData(const DescribeCustomizeRuleCountResponseBodyData &) = default ;
    DescribeCustomizeRuleCountResponseBodyData(DescribeCustomizeRuleCountResponseBodyData &&) = default ;
    DescribeCustomizeRuleCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeRuleCountResponseBodyData() = default ;
    DescribeCustomizeRuleCountResponseBodyData& operator=(const DescribeCustomizeRuleCountResponseBodyData &) = default ;
    DescribeCustomizeRuleCountResponseBodyData& operator=(DescribeCustomizeRuleCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregationRuleNum_ != nullptr
        && this->customizeRuleNum_ != nullptr && this->expertRuleNum_ != nullptr && this->graphComputingRuleNum_ != nullptr && this->highRuleNum_ != nullptr && this->inUseRuleNum_ != nullptr
        && this->lowRuleNum_ != nullptr && this->mediumRuleNum_ != nullptr && this->predefinedRuleNum_ != nullptr && this->singleAlertRuleNum_ != nullptr && this->totalRuleNum_ != nullptr
        && this->unEventRuleNum_ != nullptr; };
    // aggregationRuleNum Field Functions 
    bool hasAggregationRuleNum() const { return this->aggregationRuleNum_ != nullptr;};
    void deleteAggregationRuleNum() { this->aggregationRuleNum_ = nullptr;};
    inline int32_t aggregationRuleNum() const { DARABONBA_PTR_GET_DEFAULT(aggregationRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setAggregationRuleNum(int32_t aggregationRuleNum) { DARABONBA_PTR_SET_VALUE(aggregationRuleNum_, aggregationRuleNum) };


    // customizeRuleNum Field Functions 
    bool hasCustomizeRuleNum() const { return this->customizeRuleNum_ != nullptr;};
    void deleteCustomizeRuleNum() { this->customizeRuleNum_ = nullptr;};
    inline int32_t customizeRuleNum() const { DARABONBA_PTR_GET_DEFAULT(customizeRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setCustomizeRuleNum(int32_t customizeRuleNum) { DARABONBA_PTR_SET_VALUE(customizeRuleNum_, customizeRuleNum) };


    // expertRuleNum Field Functions 
    bool hasExpertRuleNum() const { return this->expertRuleNum_ != nullptr;};
    void deleteExpertRuleNum() { this->expertRuleNum_ = nullptr;};
    inline int32_t expertRuleNum() const { DARABONBA_PTR_GET_DEFAULT(expertRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setExpertRuleNum(int32_t expertRuleNum) { DARABONBA_PTR_SET_VALUE(expertRuleNum_, expertRuleNum) };


    // graphComputingRuleNum Field Functions 
    bool hasGraphComputingRuleNum() const { return this->graphComputingRuleNum_ != nullptr;};
    void deleteGraphComputingRuleNum() { this->graphComputingRuleNum_ = nullptr;};
    inline int32_t graphComputingRuleNum() const { DARABONBA_PTR_GET_DEFAULT(graphComputingRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setGraphComputingRuleNum(int32_t graphComputingRuleNum) { DARABONBA_PTR_SET_VALUE(graphComputingRuleNum_, graphComputingRuleNum) };


    // highRuleNum Field Functions 
    bool hasHighRuleNum() const { return this->highRuleNum_ != nullptr;};
    void deleteHighRuleNum() { this->highRuleNum_ = nullptr;};
    inline int32_t highRuleNum() const { DARABONBA_PTR_GET_DEFAULT(highRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setHighRuleNum(int32_t highRuleNum) { DARABONBA_PTR_SET_VALUE(highRuleNum_, highRuleNum) };


    // inUseRuleNum Field Functions 
    bool hasInUseRuleNum() const { return this->inUseRuleNum_ != nullptr;};
    void deleteInUseRuleNum() { this->inUseRuleNum_ = nullptr;};
    inline int32_t inUseRuleNum() const { DARABONBA_PTR_GET_DEFAULT(inUseRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setInUseRuleNum(int32_t inUseRuleNum) { DARABONBA_PTR_SET_VALUE(inUseRuleNum_, inUseRuleNum) };


    // lowRuleNum Field Functions 
    bool hasLowRuleNum() const { return this->lowRuleNum_ != nullptr;};
    void deleteLowRuleNum() { this->lowRuleNum_ = nullptr;};
    inline int32_t lowRuleNum() const { DARABONBA_PTR_GET_DEFAULT(lowRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setLowRuleNum(int32_t lowRuleNum) { DARABONBA_PTR_SET_VALUE(lowRuleNum_, lowRuleNum) };


    // mediumRuleNum Field Functions 
    bool hasMediumRuleNum() const { return this->mediumRuleNum_ != nullptr;};
    void deleteMediumRuleNum() { this->mediumRuleNum_ = nullptr;};
    inline int32_t mediumRuleNum() const { DARABONBA_PTR_GET_DEFAULT(mediumRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setMediumRuleNum(int32_t mediumRuleNum) { DARABONBA_PTR_SET_VALUE(mediumRuleNum_, mediumRuleNum) };


    // predefinedRuleNum Field Functions 
    bool hasPredefinedRuleNum() const { return this->predefinedRuleNum_ != nullptr;};
    void deletePredefinedRuleNum() { this->predefinedRuleNum_ = nullptr;};
    inline int32_t predefinedRuleNum() const { DARABONBA_PTR_GET_DEFAULT(predefinedRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setPredefinedRuleNum(int32_t predefinedRuleNum) { DARABONBA_PTR_SET_VALUE(predefinedRuleNum_, predefinedRuleNum) };


    // singleAlertRuleNum Field Functions 
    bool hasSingleAlertRuleNum() const { return this->singleAlertRuleNum_ != nullptr;};
    void deleteSingleAlertRuleNum() { this->singleAlertRuleNum_ = nullptr;};
    inline int32_t singleAlertRuleNum() const { DARABONBA_PTR_GET_DEFAULT(singleAlertRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setSingleAlertRuleNum(int32_t singleAlertRuleNum) { DARABONBA_PTR_SET_VALUE(singleAlertRuleNum_, singleAlertRuleNum) };


    // totalRuleNum Field Functions 
    bool hasTotalRuleNum() const { return this->totalRuleNum_ != nullptr;};
    void deleteTotalRuleNum() { this->totalRuleNum_ = nullptr;};
    inline int32_t totalRuleNum() const { DARABONBA_PTR_GET_DEFAULT(totalRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setTotalRuleNum(int32_t totalRuleNum) { DARABONBA_PTR_SET_VALUE(totalRuleNum_, totalRuleNum) };


    // unEventRuleNum Field Functions 
    bool hasUnEventRuleNum() const { return this->unEventRuleNum_ != nullptr;};
    void deleteUnEventRuleNum() { this->unEventRuleNum_ = nullptr;};
    inline int32_t unEventRuleNum() const { DARABONBA_PTR_GET_DEFAULT(unEventRuleNum_, 0) };
    inline DescribeCustomizeRuleCountResponseBodyData& setUnEventRuleNum(int32_t unEventRuleNum) { DARABONBA_PTR_SET_VALUE(unEventRuleNum_, unEventRuleNum) };


  protected:
    // 同类聚合规则数。
    std::shared_ptr<int32_t> aggregationRuleNum_ = nullptr;
    // 自定义规则数。
    std::shared_ptr<int32_t> customizeRuleNum_ = nullptr;
    // 专家规则数。
    std::shared_ptr<int32_t> expertRuleNum_ = nullptr;
    // 图计算规则数。
    std::shared_ptr<int32_t> graphComputingRuleNum_ = nullptr;
    // The number of rules that are used to identify high-risk threats.
    std::shared_ptr<int32_t> highRuleNum_ = nullptr;
    // The total number of rules.
    std::shared_ptr<int32_t> inUseRuleNum_ = nullptr;
    // The number of rules that are used to identify low-risk threats.
    std::shared_ptr<int32_t> lowRuleNum_ = nullptr;
    // The number of rules that are used to identify medium-risk threats.
    std::shared_ptr<int32_t> mediumRuleNum_ = nullptr;
    // 预定义规则数。
    std::shared_ptr<int32_t> predefinedRuleNum_ = nullptr;
    // 告警透传规则数。
    std::shared_ptr<int32_t> singleAlertRuleNum_ = nullptr;
    // 总规则数。
    std::shared_ptr<int32_t> totalRuleNum_ = nullptr;
    // 不产生事件规则数。
    std::shared_ptr<int32_t> unEventRuleNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
