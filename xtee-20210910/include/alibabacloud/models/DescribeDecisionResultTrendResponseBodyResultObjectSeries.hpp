// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDecisionResultTrendResponseBodyResultObjectSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDecisionResultTrendResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDecisionResultTrendResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDecisionResultTrendResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeDecisionResultTrendResponseBodyResultObjectSeries() = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeries(const DescribeDecisionResultTrendResponseBodyResultObjectSeries &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeries(DescribeDecisionResultTrendResponseBodyResultObjectSeries &&) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDecisionResultTrendResponseBodyResultObjectSeries() = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeries& operator=(const DescribeDecisionResultTrendResponseBodyResultObjectSeries &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeries& operator=(DescribeDecisionResultTrendResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeriesData>) };
    inline vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeriesData>) };
    inline DescribeDecisionResultTrendResponseBodyResultObjectSeries& setData(const vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDecisionResultTrendResponseBodyResultObjectSeries& setData(vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDecisionResultTrendResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Returned data object
    std::shared_ptr<vector<Models::DescribeDecisionResultTrendResponseBodyResultObjectSeriesData>> data_ = nullptr;
    // Name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
