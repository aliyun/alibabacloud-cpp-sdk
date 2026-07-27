// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARELIST_HPP_
#define ALIBABACLOUD_MODELS_COMPARELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CompareList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareList& obj) { 
      DARABONBA_PTR_TO_JSON(aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
      DARABONBA_PTR_TO_JSON(yoyTimeUnit, yoyTimeUnit_);
      DARABONBA_PTR_TO_JSON(yoyTimeValue, yoyTimeValue_);
    };
    friend void from_json(const Darabonba::Json& j, CompareList& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(yoyTimeUnit, yoyTimeUnit_);
      DARABONBA_PTR_FROM_JSON(yoyTimeValue, yoyTimeValue_);
    };
    CompareList() = default ;
    CompareList(const CompareList &) = default ;
    CompareList(CompareList &&) = default ;
    CompareList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareList() = default ;
    CompareList& operator=(const CompareList &) = default ;
    CompareList& operator=(CompareList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->operator_ == nullptr && this->threshold_ == nullptr && this->yoyTimeUnit_ == nullptr && this->yoyTimeValue_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline CompareList& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CompareList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CompareList& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // yoyTimeUnit Field Functions 
    bool hasYoyTimeUnit() const { return this->yoyTimeUnit_ != nullptr;};
    void deleteYoyTimeUnit() { this->yoyTimeUnit_ = nullptr;};
    inline string getYoyTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeUnit_, "") };
    inline CompareList& setYoyTimeUnit(string yoyTimeUnit) { DARABONBA_PTR_SET_VALUE(yoyTimeUnit_, yoyTimeUnit) };


    // yoyTimeValue Field Functions 
    bool hasYoyTimeValue() const { return this->yoyTimeValue_ != nullptr;};
    void deleteYoyTimeValue() { this->yoyTimeValue_ = nullptr;};
    inline int32_t getYoyTimeValue() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeValue_, 0) };
    inline CompareList& setYoyTimeValue(int32_t yoyTimeValue) { DARABONBA_PTR_SET_VALUE(yoyTimeValue_, yoyTimeValue) };


  protected:
    // This parameter is required.
    shared_ptr<string> aggregate_ {};
    // This parameter is required.
    shared_ptr<string> operator_ {};
    // This parameter is required.
    shared_ptr<float> threshold_ {};
    shared_ptr<string> yoyTimeUnit_ {};
    shared_ptr<int32_t> yoyTimeValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
