// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCEFORISVRESPONSEBODYMODULESPROPERTIESPROPERTYVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCEFORISVRESPONSEBODYMODULESPROPERTIESPROPERTYVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues() = default ;
    DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues(const DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues &) = default ;
    DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues(DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues &&) = default ;
    DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues() = default ;
    DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& operator=(const DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues &) = default ;
    DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& operator=(DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->max_ != nullptr && this->min_ != nullptr && this->remark_ != nullptr && this->step_ != nullptr && this->type_ != nullptr
        && this->value_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline string max() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
    inline DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline string min() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
    inline DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeImageInstanceForIsvResponseBodyModulesPropertiesPropertyValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> max_ = nullptr;
    std::shared_ptr<string> min_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> step_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
