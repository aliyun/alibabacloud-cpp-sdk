// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPROPETIESRESPONSEBODYPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPROPETIESRESPONSEBODYPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeComponentPropetiesResponseBodyProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentPropetiesResponseBodyProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(PropertyCode, propertyCode_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentPropetiesResponseBodyProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(PropertyCode, propertyCode_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeComponentPropetiesResponseBodyProperties() = default ;
    DescribeComponentPropetiesResponseBodyProperties(const DescribeComponentPropetiesResponseBodyProperties &) = default ;
    DescribeComponentPropetiesResponseBodyProperties(DescribeComponentPropetiesResponseBodyProperties &&) = default ;
    DescribeComponentPropetiesResponseBodyProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentPropetiesResponseBodyProperties() = default ;
    DescribeComponentPropetiesResponseBodyProperties& operator=(const DescribeComponentPropetiesResponseBodyProperties &) = default ;
    DescribeComponentPropetiesResponseBodyProperties& operator=(DescribeComponentPropetiesResponseBodyProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->orderIndex_ == nullptr && return this->propertyCode_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeComponentPropetiesResponseBodyProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline string orderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, "") };
    inline DescribeComponentPropetiesResponseBodyProperties& setOrderIndex(string orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // propertyCode Field Functions 
    bool hasPropertyCode() const { return this->propertyCode_ != nullptr;};
    void deletePropertyCode() { this->propertyCode_ = nullptr;};
    inline string propertyCode() const { DARABONBA_PTR_GET_DEFAULT(propertyCode_, "") };
    inline DescribeComponentPropetiesResponseBodyProperties& setPropertyCode(string propertyCode) { DARABONBA_PTR_SET_VALUE(propertyCode_, propertyCode) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeComponentPropetiesResponseBodyProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> orderIndex_ = nullptr;
    std::shared_ptr<string> propertyCode_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
