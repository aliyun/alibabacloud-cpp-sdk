// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSTRENDRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSTRENDRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsTrendResponseBodyResultObjectSeriesData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsTrendResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsTrendResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsTrendResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeTagsTrendResponseBodyResultObjectSeries() = default ;
    DescribeTagsTrendResponseBodyResultObjectSeries(const DescribeTagsTrendResponseBodyResultObjectSeries &) = default ;
    DescribeTagsTrendResponseBodyResultObjectSeries(DescribeTagsTrendResponseBodyResultObjectSeries &&) = default ;
    DescribeTagsTrendResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsTrendResponseBodyResultObjectSeries() = default ;
    DescribeTagsTrendResponseBodyResultObjectSeries& operator=(const DescribeTagsTrendResponseBodyResultObjectSeries &) = default ;
    DescribeTagsTrendResponseBodyResultObjectSeries& operator=(DescribeTagsTrendResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeTagsTrendResponseBodyResultObjectSeriesData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeTagsTrendResponseBodyResultObjectSeriesData>) };
    inline vector<Models::DescribeTagsTrendResponseBodyResultObjectSeriesData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeTagsTrendResponseBodyResultObjectSeriesData>) };
    inline DescribeTagsTrendResponseBodyResultObjectSeries& setData(const vector<Models::DescribeTagsTrendResponseBodyResultObjectSeriesData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTagsTrendResponseBodyResultObjectSeries& setData(vector<Models::DescribeTagsTrendResponseBodyResultObjectSeriesData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTagsTrendResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Chart data list
    std::shared_ptr<vector<Models::DescribeTagsTrendResponseBodyResultObjectSeriesData>> data_ = nullptr;
    // Category name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
