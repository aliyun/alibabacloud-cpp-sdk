// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATASTATISTICSOVERVIEWFILTERDIMENSIONSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATASTATISTICSOVERVIEWFILTERDIMENSIONSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(tagValueCountStatistic, tagValueCountStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(tagValueCountStatistic, tagValueCountStatistic_);
    };
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics(const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics(GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics &&) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics& operator=(const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics& operator=(GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagValueCountStatistic_ != nullptr; };
    // tagValueCountStatistic Field Functions 
    bool hasTagValueCountStatistic() const { return this->tagValueCountStatistic_ != nullptr;};
    void deleteTagValueCountStatistic() { this->tagValueCountStatistic_ = nullptr;};
    inline const vector<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic> & tagValueCountStatistic() const { DARABONBA_PTR_GET_CONST(tagValueCountStatistic_, vector<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic>) };
    inline vector<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic> tagValueCountStatistic() { DARABONBA_PTR_GET(tagValueCountStatistic_, vector<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic>) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics& setTagValueCountStatistic(const vector<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic> & tagValueCountStatistic) { DARABONBA_PTR_SET_VALUE(tagValueCountStatistic_, tagValueCountStatistic) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics& setTagValueCountStatistic(vector<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic> && tagValueCountStatistic) { DARABONBA_PTR_SET_RVALUE(tagValueCountStatistic_, tagValueCountStatistic) };


  protected:
    std::shared_ptr<vector<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic>> tagValueCountStatistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
