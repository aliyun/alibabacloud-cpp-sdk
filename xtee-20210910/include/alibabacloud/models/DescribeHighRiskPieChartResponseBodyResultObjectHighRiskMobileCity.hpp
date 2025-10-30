// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKMOBILECITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKMOBILECITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& obj) { 
      DARABONBA_PTR_TO_JSON(animation, animation_);
      DARABONBA_PTR_TO_JSON(grid, grid_);
      DARABONBA_PTR_TO_JSON(series, series_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& obj) { 
      DARABONBA_PTR_FROM_JSON(animation, animation_);
      DARABONBA_PTR_FROM_JSON(grid, grid_);
      DARABONBA_PTR_FROM_JSON(series, series_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->animation_ == nullptr
        && return this->grid_ == nullptr && return this->series_ == nullptr; };
    // animation Field Functions 
    bool hasAnimation() const { return this->animation_ != nullptr;};
    void deleteAnimation() { this->animation_ = nullptr;};
    inline bool animation() const { DARABONBA_PTR_GET_DEFAULT(animation_, false) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


    // grid Field Functions 
    bool hasGrid() const { return this->grid_ != nullptr;};
    void deleteGrid() { this->grid_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid & grid() const { DARABONBA_PTR_GET_CONST(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid grid() { DARABONBA_PTR_GET(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& setGrid(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& setGrid(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries>) };
    inline vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries>) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& setSeries(const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity& setSeries(vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


  protected:
    // Chart flag, default is true
    std::shared_ptr<bool> animation_ = nullptr;
    // Belongs to grid.
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCityGrid> grid_ = nullptr;
    // Chart data
    std::shared_ptr<vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCitySeries>> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
