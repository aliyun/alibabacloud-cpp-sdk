// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONNUMLINECHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORESECTIONNUMLINECHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
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
  class DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries() = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries(const DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries &) = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries(DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries &&) = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries() = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries& operator=(const DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries &) = default ;
    DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries& operator=(DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<string> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
    inline vector<string> data() { DARABONBA_PTR_GET(data_, vector<string>) };
    inline DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeScoreSectionNumLineChartResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // List of current category results.
    std::shared_ptr<vector<string>> data_ = nullptr;
    // Category name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
