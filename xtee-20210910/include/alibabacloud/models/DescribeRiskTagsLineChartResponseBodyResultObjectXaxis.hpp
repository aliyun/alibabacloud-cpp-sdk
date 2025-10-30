// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRiskTagsLineChartResponseBodyResultObjectXaxis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTagsLineChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTagsLineChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DescribeRiskTagsLineChartResponseBodyResultObjectXaxis() = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectXaxis(const DescribeRiskTagsLineChartResponseBodyResultObjectXaxis &) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectXaxis(DescribeRiskTagsLineChartResponseBodyResultObjectXaxis &&) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectXaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTagsLineChartResponseBodyResultObjectXaxis() = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectXaxis& operator=(const DescribeRiskTagsLineChartResponseBodyResultObjectXaxis &) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectXaxis& operator=(DescribeRiskTagsLineChartResponseBodyResultObjectXaxis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<string> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
    inline vector<string> data() { DARABONBA_PTR_GET(data_, vector<string>) };
    inline DescribeRiskTagsLineChartResponseBodyResultObjectXaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRiskTagsLineChartResponseBodyResultObjectXaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Data returned by the chart
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
