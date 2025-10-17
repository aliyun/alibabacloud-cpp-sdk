// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATASTATISTICSOVERVIEW_HPP_
#define ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATASTATISTICSOVERVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics.hpp>
#include <alibabacloud/models/GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(filterDimensionStatistics, filterDimensionStatistics_);
      DARABONBA_PTR_TO_JSON(tagDimensionStatistics, tagDimensionStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(filterDimensionStatistics, filterDimensionStatistics_);
      DARABONBA_PTR_FROM_JSON(tagDimensionStatistics, tagDimensionStatistics_);
    };
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview(const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview(GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview &&) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& operator=(const GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& operator=(GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->filterDimensionStatistics_ == nullptr && return this->tagDimensionStatistics_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // filterDimensionStatistics Field Functions 
    bool hasFilterDimensionStatistics() const { return this->filterDimensionStatistics_ != nullptr;};
    void deleteFilterDimensionStatistics() { this->filterDimensionStatistics_ = nullptr;};
    inline const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics & filterDimensionStatistics() const { DARABONBA_PTR_GET_CONST(filterDimensionStatistics_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics) };
    inline Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics filterDimensionStatistics() { DARABONBA_PTR_GET(filterDimensionStatistics_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& setFilterDimensionStatistics(const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics & filterDimensionStatistics) { DARABONBA_PTR_SET_VALUE(filterDimensionStatistics_, filterDimensionStatistics) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& setFilterDimensionStatistics(Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics && filterDimensionStatistics) { DARABONBA_PTR_SET_RVALUE(filterDimensionStatistics_, filterDimensionStatistics) };


    // tagDimensionStatistics Field Functions 
    bool hasTagDimensionStatistics() const { return this->tagDimensionStatistics_ != nullptr;};
    void deleteTagDimensionStatistics() { this->tagDimensionStatistics_ = nullptr;};
    inline const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics & tagDimensionStatistics() const { DARABONBA_PTR_GET_CONST(tagDimensionStatistics_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics) };
    inline Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics tagDimensionStatistics() { DARABONBA_PTR_GET(tagDimensionStatistics_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& setTagDimensionStatistics(const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics & tagDimensionStatistics) { DARABONBA_PTR_SET_VALUE(tagDimensionStatistics_, tagDimensionStatistics) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview& setTagDimensionStatistics(Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics && tagDimensionStatistics) { DARABONBA_PTR_SET_RVALUE(tagDimensionStatistics_, tagDimensionStatistics) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics> filterDimensionStatistics_ = nullptr;
    std::shared_ptr<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics> tagDimensionStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
