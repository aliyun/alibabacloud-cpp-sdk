// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONPIECHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreSectionPieChartResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionPieChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(roseType, roseType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionPieChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(roseType, roseType_);
    };
    DescribeScoreSectionPieChartResponseBodyResultObjectSeries() = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeries(const DescribeScoreSectionPieChartResponseBodyResultObjectSeries &) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeries(DescribeScoreSectionPieChartResponseBodyResultObjectSeries &&) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionPieChartResponseBodyResultObjectSeries() = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeries& operator=(const DescribeScoreSectionPieChartResponseBodyResultObjectSeries &) = default ;
    DescribeScoreSectionPieChartResponseBodyResultObjectSeries& operator=(DescribeScoreSectionPieChartResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr && this->roseType_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData>) };
    inline vector<Models::DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData>) };
    inline DescribeScoreSectionPieChartResponseBodyResultObjectSeries& setData(const vector<Models::DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeScoreSectionPieChartResponseBodyResultObjectSeries& setData(vector<Models::DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeScoreSectionPieChartResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roseType Field Functions 
    bool hasRoseType() const { return this->roseType_ != nullptr;};
    void deleteRoseType() { this->roseType_ = nullptr;};
    inline bool roseType() const { DARABONBA_PTR_GET_DEFAULT(roseType_, false) };
    inline DescribeScoreSectionPieChartResponseBodyResultObjectSeries& setRoseType(bool roseType) { DARABONBA_PTR_SET_VALUE(roseType_, roseType) };


  protected:
    // Chart data list
    std::shared_ptr<vector<Models::DescribeScoreSectionPieChartResponseBodyResultObjectSeriesData>> data_ = nullptr;
    // Category name.
    std::shared_ptr<string> name_ = nullptr;
    // Chart field, default false
    std::shared_ptr<bool> roseType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
