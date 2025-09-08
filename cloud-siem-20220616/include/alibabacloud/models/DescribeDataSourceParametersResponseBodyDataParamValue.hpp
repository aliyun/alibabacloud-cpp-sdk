// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSRESPONSEBODYDATAPARAMVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEPARAMETERSRESPONSEBODYDATAPARAMVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDataSourceParametersResponseBodyDataParamValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceParametersResponseBodyDataParamValue& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceParametersResponseBodyDataParamValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDataSourceParametersResponseBodyDataParamValue() = default ;
    DescribeDataSourceParametersResponseBodyDataParamValue(const DescribeDataSourceParametersResponseBodyDataParamValue &) = default ;
    DescribeDataSourceParametersResponseBodyDataParamValue(DescribeDataSourceParametersResponseBodyDataParamValue &&) = default ;
    DescribeDataSourceParametersResponseBodyDataParamValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceParametersResponseBodyDataParamValue() = default ;
    DescribeDataSourceParametersResponseBodyDataParamValue& operator=(const DescribeDataSourceParametersResponseBodyDataParamValue &) = default ;
    DescribeDataSourceParametersResponseBodyDataParamValue& operator=(DescribeDataSourceParametersResponseBodyDataParamValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->value_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeDataSourceParametersResponseBodyDataParamValue& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDataSourceParametersResponseBodyDataParamValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The display value.
    std::shared_ptr<string> label_ = nullptr;
    // The actual value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
