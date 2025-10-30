// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECTSERIESDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTTRENDRESPONSEBODYRESULTOBJECTSERIESDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDecisionResultTrendResponseBodyResultObjectSeriesData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDecisionResultTrendResponseBodyResultObjectSeriesData& obj) { 
      DARABONBA_PTR_TO_JSON(num, num_);
      DARABONBA_PTR_TO_JSON(scale, scale_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDecisionResultTrendResponseBodyResultObjectSeriesData& obj) { 
      DARABONBA_PTR_FROM_JSON(num, num_);
      DARABONBA_PTR_FROM_JSON(scale, scale_);
    };
    DescribeDecisionResultTrendResponseBodyResultObjectSeriesData() = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeriesData(const DescribeDecisionResultTrendResponseBodyResultObjectSeriesData &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeriesData(DescribeDecisionResultTrendResponseBodyResultObjectSeriesData &&) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeriesData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDecisionResultTrendResponseBodyResultObjectSeriesData() = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeriesData& operator=(const DescribeDecisionResultTrendResponseBodyResultObjectSeriesData &) = default ;
    DescribeDecisionResultTrendResponseBodyResultObjectSeriesData& operator=(DescribeDecisionResultTrendResponseBodyResultObjectSeriesData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->num_ == nullptr
        && return this->scale_ == nullptr; };
    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int64_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
    inline DescribeDecisionResultTrendResponseBodyResultObjectSeriesData& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline string scale() const { DARABONBA_PTR_GET_DEFAULT(scale_, "") };
    inline DescribeDecisionResultTrendResponseBodyResultObjectSeriesData& setScale(string scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


  protected:
    // Number
    std::shared_ptr<int64_t> num_ = nullptr;
    // ratio
    std::shared_ptr<string> scale_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
