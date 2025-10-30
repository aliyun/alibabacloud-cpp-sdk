// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& obj) { 
      DARABONBA_PTR_TO_JSON(animation, animation_);
      DARABONBA_PTR_TO_JSON(grid, grid_);
      DARABONBA_PTR_TO_JSON(series, series_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& obj) { 
      DARABONBA_PTR_FROM_JSON(animation, animation_);
      DARABONBA_PTR_FROM_JSON(grid, grid_);
      DARABONBA_PTR_FROM_JSON(series, series_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince &&) = default ;
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
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& setAnimation(bool animation) { DARABONBA_PTR_SET_VALUE(animation_, animation) };


    // grid Field Functions 
    bool hasGrid() const { return this->grid_ != nullptr;};
    void deleteGrid() { this->grid_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid & grid() const { DARABONBA_PTR_GET_CONST(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid grid() { DARABONBA_PTR_GET(grid_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& setGrid(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid & grid) { DARABONBA_PTR_SET_VALUE(grid_, grid) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& setGrid(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid && grid) { DARABONBA_PTR_SET_RVALUE(grid_, grid) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries>) };
    inline vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries>) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& setSeries(const vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince& setSeries(vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


  protected:
    // Chart identifier, default is true
    std::shared_ptr<bool> animation_ = nullptr;
    // Belonging grid.
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid> grid_ = nullptr;
    // Chart data
    std::shared_ptr<vector<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceSeries>> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
