// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYRESPONSEBODYDATAOPTIONALVALUES_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYRESPONSEBODYDATAOPTIONALVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class QueryInstanceSpec4ModifyResponseBodyDataOptionalValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryInstanceSpec4ModifyResponseBodyDataOptionalValues() = default ;
    QueryInstanceSpec4ModifyResponseBodyDataOptionalValues(const QueryInstanceSpec4ModifyResponseBodyDataOptionalValues &) = default ;
    QueryInstanceSpec4ModifyResponseBodyDataOptionalValues(QueryInstanceSpec4ModifyResponseBodyDataOptionalValues &&) = default ;
    QueryInstanceSpec4ModifyResponseBodyDataOptionalValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceSpec4ModifyResponseBodyDataOptionalValues() = default ;
    QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& operator=(const QueryInstanceSpec4ModifyResponseBodyDataOptionalValues &) = default ;
    QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& operator=(QueryInstanceSpec4ModifyResponseBodyDataOptionalValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->max_ == nullptr && return this->min_ == nullptr && return this->step_ == nullptr && return this->value_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline double step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0.0) };
    inline QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& setStep(double step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryInstanceSpec4ModifyResponseBodyDataOptionalValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<double> max_ = nullptr;
    std::shared_ptr<double> min_ = nullptr;
    std::shared_ptr<double> step_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
