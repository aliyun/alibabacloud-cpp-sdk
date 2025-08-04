// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATASTATISTICSOVERVIEWFILTERDIMENSIONSTATISTICSTAGVALUECOUNTSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATASTATISTICSOVERVIEWFILTERDIMENSIONSTATISTICSTAGVALUECOUNTSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TagTaskType, tagTaskType_);
      DARABONBA_PTR_TO_JSON(ValueCount, valueCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(TagTaskType, tagTaskType_);
      DARABONBA_PTR_FROM_JSON(ValueCount, valueCount_);
    };
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic(const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic(GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic &&) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic& operator=(const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic& operator=(GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagName_ != nullptr
        && this->tagTaskType_ != nullptr && this->valueCount_ != nullptr; };
    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // tagTaskType Field Functions 
    bool hasTagTaskType() const { return this->tagTaskType_ != nullptr;};
    void deleteTagTaskType() { this->tagTaskType_ = nullptr;};
    inline string tagTaskType() const { DARABONBA_PTR_GET_DEFAULT(tagTaskType_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic& setTagTaskType(string tagTaskType) { DARABONBA_PTR_SET_VALUE(tagTaskType_, tagTaskType) };


    // valueCount Field Functions 
    bool hasValueCount() const { return this->valueCount_ != nullptr;};
    void deleteValueCount() { this->valueCount_ = nullptr;};
    inline int32_t valueCount() const { DARABONBA_PTR_GET_DEFAULT(valueCount_, 0) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic& setValueCount(int32_t valueCount) { DARABONBA_PTR_SET_VALUE(valueCount_, valueCount) };


  protected:
    std::shared_ptr<string> tagName_ = nullptr;
    std::shared_ptr<string> tagTaskType_ = nullptr;
    std::shared_ptr<int32_t> valueCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
