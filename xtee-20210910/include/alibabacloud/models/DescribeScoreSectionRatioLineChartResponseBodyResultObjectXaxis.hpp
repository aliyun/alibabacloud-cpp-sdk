// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONRATIOLINECHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONRATIOLINECHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
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
  class DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis() = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis(const DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis &) = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis(DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis &&) = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis() = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis& operator=(const DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis &) = default ;
    DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis& operator=(DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis &&) = default ;
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
    inline DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeScoreSectionRatioLineChartResponseBodyResultObjectXaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Chart data list
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
