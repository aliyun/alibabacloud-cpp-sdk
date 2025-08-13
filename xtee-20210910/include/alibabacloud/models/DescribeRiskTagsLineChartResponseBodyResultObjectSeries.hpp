// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTAGSLINECHARTRESPONSEBODYRESULTOBJECTSERIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRiskTagsLineChartResponseBodyResultObjectSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTagsLineChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTagsLineChartResponseBodyResultObjectSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeRiskTagsLineChartResponseBodyResultObjectSeries() = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectSeries(const DescribeRiskTagsLineChartResponseBodyResultObjectSeries &) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectSeries(DescribeRiskTagsLineChartResponseBodyResultObjectSeries &&) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTagsLineChartResponseBodyResultObjectSeries() = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectSeries& operator=(const DescribeRiskTagsLineChartResponseBodyResultObjectSeries &) = default ;
    DescribeRiskTagsLineChartResponseBodyResultObjectSeries& operator=(DescribeRiskTagsLineChartResponseBodyResultObjectSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline float data() const { DARABONBA_PTR_GET_DEFAULT(data_, 0.0) };
    inline DescribeRiskTagsLineChartResponseBodyResultObjectSeries& setData(float data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRiskTagsLineChartResponseBodyResultObjectSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Data
    std::shared_ptr<float> data_ = nullptr;
    // Name
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
