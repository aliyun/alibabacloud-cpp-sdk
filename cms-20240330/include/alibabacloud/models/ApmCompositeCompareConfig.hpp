// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APMCOMPOSITECOMPARECONFIG_HPP_
#define ALIBABACLOUD_MODELS_APMCOMPOSITECOMPARECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ApmCompositeCompareConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApmCompositeCompareConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ApmCompositeCompareConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    ApmCompositeCompareConfig() = default ;
    ApmCompositeCompareConfig(const ApmCompositeCompareConfig &) = default ;
    ApmCompositeCompareConfig(ApmCompositeCompareConfig &&) = default ;
    ApmCompositeCompareConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApmCompositeCompareConfig() = default ;
    ApmCompositeCompareConfig& operator=(const ApmCompositeCompareConfig &) = default ;
    ApmCompositeCompareConfig& operator=(ApmCompositeCompareConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->operator_ == nullptr && this->threshold_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline ApmCompositeCompareConfig& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ApmCompositeCompareConfig& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ApmCompositeCompareConfig& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // 聚合函数
    // 
    // This parameter is required.
    shared_ptr<string> aggregate_ {};
    // 比较操作符
    // 
    // This parameter is required.
    shared_ptr<string> operator_ {};
    // 单阈值
    // 
    // This parameter is required.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
