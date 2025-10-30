// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTMIDDLEVARIABLESOUTPUTTHRESHOLD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTMIDDLEVARIABLESOUTPUTTHRESHOLD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold& obj) { 
      DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(minValue, minValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold& obj) { 
      DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(minValue, minValue_);
    };
    DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold() = default ;
    DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold(const DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold &) = default ;
    DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold(DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold &&) = default ;
    DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold() = default ;
    DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold& operator=(const DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold &) = default ;
    DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold& operator=(DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold &&) = default ;
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
    inline DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline double minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
    inline DescribeEventVariableListResponseBodyResultObjectMiddleVariablesOutputThreshold& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


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
