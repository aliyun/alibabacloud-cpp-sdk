// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCEGRID_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECTHIGHRISKIPPROVINCEGRID_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid& obj) { 
      DARABONBA_PTR_TO_JSON(show, show_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid& obj) { 
      DARABONBA_PTR_FROM_JSON(show, show_);
    };
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid() = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid& operator=(const DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid& operator=(DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->show_ != nullptr; };
    // show Field Functions 
    bool hasShow() const { return this->show_ != nullptr;};
    void deleteShow() { this->show_ = nullptr;};
    inline bool show() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
    inline DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvinceGrid& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


  protected:
    // Chart identifier, default is false
    std::shared_ptr<bool> show_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
