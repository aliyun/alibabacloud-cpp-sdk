// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHITRULETRENDRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHITRULETRENDRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHitRuleTrendResponseBodyResultObjectSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHitRuleTrendResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHitRuleTrendResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHitRuleTrendResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeHitRuleTrendResponseBodyResultObjectSeries() = default ;
    DescribeHitRuleTrendResponseBodyResultObjectSeries(const DescribeHitRuleTrendResponseBodyResultObjectSeries &) = default ;
    DescribeHitRuleTrendResponseBodyResultObjectSeries(DescribeHitRuleTrendResponseBodyResultObjectSeries &&) = default ;
    DescribeHitRuleTrendResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHitRuleTrendResponseBodyResultObjectSeries() = default ;
    DescribeHitRuleTrendResponseBodyResultObjectSeries& operator=(const DescribeHitRuleTrendResponseBodyResultObjectSeries &) = default ;
    DescribeHitRuleTrendResponseBodyResultObjectSeries& operator=(DescribeHitRuleTrendResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->name_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeriesData>) };
    inline vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeriesData>) };
    inline DescribeHitRuleTrendResponseBodyResultObjectSeries& setData(const vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeHitRuleTrendResponseBodyResultObjectSeries& setData(vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHitRuleTrendResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Returned data object
    std::shared_ptr<vector<Models::DescribeHitRuleTrendResponseBodyResultObjectSeriesData>> data_ = nullptr;
    // Display title
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
