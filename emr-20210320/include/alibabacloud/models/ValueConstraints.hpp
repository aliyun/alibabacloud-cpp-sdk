// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUECONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_VALUECONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ValueConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValueConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ValueConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ValueConstraints() = default ;
    ValueConstraints(const ValueConstraints &) = default ;
    ValueConstraints(ValueConstraints &&) = default ;
    ValueConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValueConstraints() = default ;
    ValueConstraints& operator=(const ValueConstraints &) = default ;
    ValueConstraints& operator=(ValueConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->end_ == nullptr && return this->start_ == nullptr && return this->step_ == nullptr && return this->type_ == nullptr && return this->values_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline int32_t defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, 0) };
    inline ValueConstraints& setDefaultValue(int32_t defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline ValueConstraints& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline ValueConstraints& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int32_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
    inline ValueConstraints& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ValueConstraints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<int32_t> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<int32_t>) };
    inline vector<int32_t> values() { DARABONBA_PTR_GET(values_, vector<int32_t>) };
    inline ValueConstraints& setValues(const vector<int32_t> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ValueConstraints& setValues(vector<int32_t> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // 默认值。
    std::shared_ptr<int32_t> defaultValue_ = nullptr;
    // 结束值。
    std::shared_ptr<int32_t> end_ = nullptr;
    // 起始值。
    std::shared_ptr<int32_t> start_ = nullptr;
    // 步长。
    std::shared_ptr<int32_t> step_ = nullptr;
    // 值限制类型。
    std::shared_ptr<string> type_ = nullptr;
    // 枚举值。
    std::shared_ptr<vector<int32_t>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
