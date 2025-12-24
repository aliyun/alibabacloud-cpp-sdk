// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODYPREDICTIVEVALUESPREDICTIVEVALUE_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODYPREDICTIVEVALUESPREDICTIVEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue& obj) { 
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue() = default ;
    QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue(const QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue &) = default ;
    QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue(QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue &&) = default ;
    QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue() = default ;
    QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue& operator=(const QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue &) = default ;
    QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue& operator=(QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->time_ == nullptr
        && return this->value_ == nullptr; };
    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
