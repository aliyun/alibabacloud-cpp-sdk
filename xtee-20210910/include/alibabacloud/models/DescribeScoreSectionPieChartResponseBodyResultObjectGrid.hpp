// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODYRESULTOBJECTGRID_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODYRESULTOBJECTGRID_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreSectionPieChartResponseBodyResultObjectGrid : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionPieChartResponseBodyResultObjectGrid& obj) { 
      DARABONBA_PTR_TO_JSON(show, show_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionPieChartResponseBodyResultObjectGrid& obj) { 
      DARABONBA_PTR_FROM_JSON(show, show_);
    };
    DescribeScoreSectionPieChartResponseBodyResultObjectGrid() = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectGrid(const DescribeScoreSectionPieChartResponseBodyResultObjectGrid &) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectGrid(DescribeScoreSectionPieChartResponseBodyResultObjectGrid &&) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectGrid(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionPieChartResponseBodyResultObjectGrid() = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectGrid& operator=(const DescribeScoreSectionPieChartResponseBodyResultObjectGrid &) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectGrid& operator=(DescribeScoreSectionPieChartResponseBodyResultObjectGrid &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->show_ != nullptr; };
    // show Field Functions 
    bool hasShow() const { return this->show_ != nullptr;};
    void deleteShow() { this->show_ = nullptr;};
    inline bool show() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
    inline DescribeScoreSectionPieChartResponseBodyResultObjectGrid& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


  protected:
    // Chart field, default false
    std::shared_ptr<bool> show_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
