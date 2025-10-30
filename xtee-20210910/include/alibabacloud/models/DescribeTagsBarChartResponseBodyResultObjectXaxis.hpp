// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSBARCHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSBARCHARTRESPONSEBODYRESULTOBJECTXAXIS_HPP_
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
  class DescribeTagsBarChartResponseBodyResultObjectXaxis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsBarChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsBarChartResponseBodyResultObjectXaxis& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeTagsBarChartResponseBodyResultObjectXaxis() = default ;
    DescribeTagsBarChartResponseBodyResultObjectXaxis(const DescribeTagsBarChartResponseBodyResultObjectXaxis &) = default ;
    DescribeTagsBarChartResponseBodyResultObjectXaxis(DescribeTagsBarChartResponseBodyResultObjectXaxis &&) = default ;
    DescribeTagsBarChartResponseBodyResultObjectXaxis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsBarChartResponseBodyResultObjectXaxis() = default ;
    DescribeTagsBarChartResponseBodyResultObjectXaxis& operator=(const DescribeTagsBarChartResponseBodyResultObjectXaxis &) = default ;
    DescribeTagsBarChartResponseBodyResultObjectXaxis& operator=(DescribeTagsBarChartResponseBodyResultObjectXaxis &&) = default ;
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
    inline DescribeTagsBarChartResponseBodyResultObjectXaxis& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTagsBarChartResponseBodyResultObjectXaxis& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // xaxis data items
    std::shared_ptr<vector<string>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
