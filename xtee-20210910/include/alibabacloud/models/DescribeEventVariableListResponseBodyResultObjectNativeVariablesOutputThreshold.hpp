// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTNATIVEVARIABLESOUTPUTTHRESHOLD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTNATIVEVARIABLESOUTPUTTHRESHOLD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold& obj) { 
      DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(minValue, minValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold& obj) { 
      DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(minValue, minValue_);
    };
    DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold() = default ;
    DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold(const DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold &) = default ;
    DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold(DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold &&) = default ;
    DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold() = default ;
    DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold& operator=(const DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold &) = default ;
    DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold& operator=(DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxValue_ == nullptr
        && return this->minValue_ == nullptr; };
    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline double maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
    inline DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline double minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
    inline DescribeEventVariableListResponseBodyResultObjectNativeVariablesOutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


  protected:
    // Maximum value.
    std::shared_ptr<double> maxValue_ = nullptr;
    // Minimum value.
    std::shared_ptr<double> minValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
