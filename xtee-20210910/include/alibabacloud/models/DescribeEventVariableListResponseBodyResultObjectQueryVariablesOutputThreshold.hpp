// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTQUERYVARIABLESOUTPUTTHRESHOLD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTQUERYVARIABLESOUTPUTTHRESHOLD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold& obj) { 
      DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(minValue, minValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold& obj) { 
      DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(minValue, minValue_);
    };
    DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold() = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold(const DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold &) = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold(DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold &&) = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold() = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold& operator=(const DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold &) = default ;
    DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold& operator=(DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxValue_ != nullptr
        && this->minValue_ != nullptr; };
    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline double maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline double minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
    inline DescribeEventVariableListResponseBodyResultObjectQueryVariablesOutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


  protected:
    // The maximum value.
    std::shared_ptr<double> maxValue_ = nullptr;
    // The minimum value.
    std::shared_ptr<double> minValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
