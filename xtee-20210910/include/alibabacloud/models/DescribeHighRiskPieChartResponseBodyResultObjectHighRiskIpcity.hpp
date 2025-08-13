// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPCITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPCITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& obj) { 
      DARABONBA_PTR_TO_JSON(animation, animation_);
      DARABONBA_PTR_TO_JSON(grid, grid_);
      DARABONBA_PTR_TO_JSON(series, series_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& obj) { 
      DARABONBA_PTR_FROM_JSON(animation, animation_);
      DARABONBA_PTR_FROM_JSON(grid, grid_);
      DARABONBA_PTR_FROM_JSON(series, series_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->animation_ != nullptr
        && this->grid_ != nullptr && this->series_ != nullptr; };
    // animation Field Functions 
    bool hasAnimation() const { return this->animation_ != nullptr;};
    void deleteAnimation() { this->animation_ = nullptr;};
    inline bool animation() const { DARABONBA_PTR_GET_DEFAULT(animation_, false) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


    // grid Field Functions 
    bool hasGrid() const { return this->grid_ != nullptr;};
    void deleteGrid() { this->grid_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid & grid() const { DARABONBA_PTR_GET_CONST(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid grid() { DARABONBA_PTR_GET(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& setGrid(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& setGrid(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries>) };
    inline vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries>) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& setSeries(const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity& setSeries(vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


  protected:
    // Chart flag, default true
    std::shared_ptr<bool> animation_ = nullptr;
    // Belonging grid.
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCityGrid> grid_ = nullptr;
    // Chart data
    std::shared_ptr<vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCitySeries>> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
