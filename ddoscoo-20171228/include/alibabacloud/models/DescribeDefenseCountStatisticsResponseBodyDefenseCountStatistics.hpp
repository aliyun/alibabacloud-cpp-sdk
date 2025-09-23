// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSRESPONSEBODYDEFENSECOUNTSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSRESPONSEBODYDEFENSECOUNTSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseCountTotalUsageOfCurrentMonth, defenseCountTotalUsageOfCurrentMonth_);
      DARABONBA_PTR_TO_JSON(FlowPackCountRemain, flowPackCountRemain_);
      DARABONBA_PTR_TO_JSON(MaxUsableDefenseCountCurrentMonth, maxUsableDefenseCountCurrentMonth_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseCountTotalUsageOfCurrentMonth, defenseCountTotalUsageOfCurrentMonth_);
      DARABONBA_PTR_FROM_JSON(FlowPackCountRemain, flowPackCountRemain_);
      DARABONBA_PTR_FROM_JSON(MaxUsableDefenseCountCurrentMonth, maxUsableDefenseCountCurrentMonth_);
    };
    DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics() = default ;
    DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics(const DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics &) = default ;
    DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics(DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics &&) = default ;
    DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics() = default ;
    DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics& operator=(const DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics &) = default ;
    DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics& operator=(DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseCountTotalUsageOfCurrentMonth_ != nullptr
        && this->flowPackCountRemain_ != nullptr && this->maxUsableDefenseCountCurrentMonth_ != nullptr; };
    // defenseCountTotalUsageOfCurrentMonth Field Functions 
    bool hasDefenseCountTotalUsageOfCurrentMonth() const { return this->defenseCountTotalUsageOfCurrentMonth_ != nullptr;};
    void deleteDefenseCountTotalUsageOfCurrentMonth() { this->defenseCountTotalUsageOfCurrentMonth_ = nullptr;};
    inline int32_t defenseCountTotalUsageOfCurrentMonth() const { DARABONBA_PTR_GET_DEFAULT(defenseCountTotalUsageOfCurrentMonth_, 0) };
    inline DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics& setDefenseCountTotalUsageOfCurrentMonth(int32_t defenseCountTotalUsageOfCurrentMonth) { DARABONBA_PTR_SET_VALUE(defenseCountTotalUsageOfCurrentMonth_, defenseCountTotalUsageOfCurrentMonth) };


    // flowPackCountRemain Field Functions 
    bool hasFlowPackCountRemain() const { return this->flowPackCountRemain_ != nullptr;};
    void deleteFlowPackCountRemain() { this->flowPackCountRemain_ = nullptr;};
    inline int32_t flowPackCountRemain() const { DARABONBA_PTR_GET_DEFAULT(flowPackCountRemain_, 0) };
    inline DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics& setFlowPackCountRemain(int32_t flowPackCountRemain) { DARABONBA_PTR_SET_VALUE(flowPackCountRemain_, flowPackCountRemain) };


    // maxUsableDefenseCountCurrentMonth Field Functions 
    bool hasMaxUsableDefenseCountCurrentMonth() const { return this->maxUsableDefenseCountCurrentMonth_ != nullptr;};
    void deleteMaxUsableDefenseCountCurrentMonth() { this->maxUsableDefenseCountCurrentMonth_ = nullptr;};
    inline int32_t maxUsableDefenseCountCurrentMonth() const { DARABONBA_PTR_GET_DEFAULT(maxUsableDefenseCountCurrentMonth_, 0) };
    inline DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics& setMaxUsableDefenseCountCurrentMonth(int32_t maxUsableDefenseCountCurrentMonth) { DARABONBA_PTR_SET_VALUE(maxUsableDefenseCountCurrentMonth_, maxUsableDefenseCountCurrentMonth) };


  protected:
    std::shared_ptr<int32_t> defenseCountTotalUsageOfCurrentMonth_ = nullptr;
    std::shared_ptr<int32_t> flowPackCountRemain_ = nullptr;
    std::shared_ptr<int32_t> maxUsableDefenseCountCurrentMonth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
