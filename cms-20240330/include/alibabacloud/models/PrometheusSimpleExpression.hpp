// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMETHEUSSIMPLEEXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_PROMETHEUSSIMPLEEXPRESSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PrometheusSimpleExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrometheusSimpleExpression& obj) { 
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, PrometheusSimpleExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    PrometheusSimpleExpression() = default ;
    PrometheusSimpleExpression(const PrometheusSimpleExpression &) = default ;
    PrometheusSimpleExpression(PrometheusSimpleExpression &&) = default ;
    PrometheusSimpleExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrometheusSimpleExpression() = default ;
    PrometheusSimpleExpression& operator=(const PrometheusSimpleExpression &) = default ;
    PrometheusSimpleExpression& operator=(PrometheusSimpleExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operator_ == nullptr
        && this->queryName_ == nullptr && this->threshold_ == nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline PrometheusSimpleExpression& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline PrometheusSimpleExpression& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline PrometheusSimpleExpression& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    shared_ptr<string> operator_ {};
    shared_ptr<string> queryName_ {};
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
