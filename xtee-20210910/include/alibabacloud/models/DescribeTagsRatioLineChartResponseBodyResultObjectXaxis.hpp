// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRATIOLINECHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRATIOLINECHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
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
  class DescribeTagsRatioLineChartResponseBodyResultObjectXaxis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsRatioLineChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsRatioLineChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeTagsRatioLineChartResponseBodyResultObjectXaxis() = default ;
    DescribeTagsRatioLineChartResponseBodyResultObjectXaxis(const DescribeTagsRatioLineChartResponseBodyResultObjectXaxis &) = default ;
    DescribeTagsRatioLineChartResponseBodyResultObjectXaxis(DescribeTagsRatioLineChartResponseBodyResultObjectXaxis &&) = default ;
    DescribeTagsRatioLineChartResponseBodyResultObjectXaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsRatioLineChartResponseBodyResultObjectXaxis() = default ;
    DescribeTagsRatioLineChartResponseBodyResultObjectXaxis& operator=(const DescribeTagsRatioLineChartResponseBodyResultObjectXaxis &) = default ;
    DescribeTagsRatioLineChartResponseBodyResultObjectXaxis& operator=(DescribeTagsRatioLineChartResponseBodyResultObjectXaxis &&) = default ;
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
    inline DescribeTagsRatioLineChartResponseBodyResultObjectXaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTagsRatioLineChartResponseBodyResultObjectXaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // X-axis data
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
