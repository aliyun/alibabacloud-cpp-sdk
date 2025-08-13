// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKMOBILEPROVINCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKMOBILEPROVINCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& obj) { 
      DARABONBA_PTR_TO_JSON(animation, animation_);
      DARABONBA_PTR_TO_JSON(grid, grid_);
      DARABONBA_PTR_TO_JSON(series, series_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& obj) { 
      DARABONBA_PTR_FROM_JSON(animation, animation_);
      DARABONBA_PTR_FROM_JSON(grid, grid_);
      DARABONBA_PTR_FROM_JSON(series, series_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince &&) = default ;
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
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


    // grid Field Functions 
    bool hasGrid() const { return this->grid_ != nullptr;};
    void deleteGrid() { this->grid_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid & grid() const { DARABONBA_PTR_GET_CONST(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid grid() { DARABONBA_PTR_GET(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& setGrid(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& setGrid(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries>) };
    inline vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries>) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& setSeries(const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince& setSeries(vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


  protected:
    // Indicator, default true
    std::shared_ptr<bool> animation_ = nullptr;
    // Belongs to grid.
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceGrid> grid_ = nullptr;
    // Chart data
    std::shared_ptr<vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvinceSeries>> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
