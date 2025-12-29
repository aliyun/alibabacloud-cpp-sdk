// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICINPUT_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleAlertMetricInputFilterValue.hpp>
#include <alibabacloud/models/AlertRuleAlertMetricInputParamValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleAlertMetricInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleAlertMetricInput& obj) { 
      DARABONBA_PTR_TO_JSON(filterValues, filterValues_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(metricId, metricId_);
      DARABONBA_PTR_TO_JSON(paramValues, paramValues_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleAlertMetricInput& obj) { 
      DARABONBA_PTR_FROM_JSON(filterValues, filterValues_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(metricId, metricId_);
      DARABONBA_PTR_FROM_JSON(paramValues, paramValues_);
    };
    AlertRuleAlertMetricInput() = default ;
    AlertRuleAlertMetricInput(const AlertRuleAlertMetricInput &) = default ;
    AlertRuleAlertMetricInput(AlertRuleAlertMetricInput &&) = default ;
    AlertRuleAlertMetricInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleAlertMetricInput() = default ;
    AlertRuleAlertMetricInput& operator=(const AlertRuleAlertMetricInput &) = default ;
    AlertRuleAlertMetricInput& operator=(AlertRuleAlertMetricInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterValues_ == nullptr
        && this->groupId_ == nullptr && this->metricId_ == nullptr && this->paramValues_ == nullptr; };
    // filterValues Field Functions 
    bool hasFilterValues() const { return this->filterValues_ != nullptr;};
    void deleteFilterValues() { this->filterValues_ = nullptr;};
    inline const vector<AlertRuleAlertMetricInputFilterValue> & getFilterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, vector<AlertRuleAlertMetricInputFilterValue>) };
    inline vector<AlertRuleAlertMetricInputFilterValue> getFilterValues() { DARABONBA_PTR_GET(filterValues_, vector<AlertRuleAlertMetricInputFilterValue>) };
    inline AlertRuleAlertMetricInput& setFilterValues(const vector<AlertRuleAlertMetricInputFilterValue> & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
    inline AlertRuleAlertMetricInput& setFilterValues(vector<AlertRuleAlertMetricInputFilterValue> && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AlertRuleAlertMetricInput& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricId Field Functions 
    bool hasMetricId() const { return this->metricId_ != nullptr;};
    void deleteMetricId() { this->metricId_ = nullptr;};
    inline string getMetricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
    inline AlertRuleAlertMetricInput& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline const vector<AlertRuleAlertMetricInputParamValue> & getParamValues() const { DARABONBA_PTR_GET_CONST(paramValues_, vector<AlertRuleAlertMetricInputParamValue>) };
    inline vector<AlertRuleAlertMetricInputParamValue> getParamValues() { DARABONBA_PTR_GET(paramValues_, vector<AlertRuleAlertMetricInputParamValue>) };
    inline AlertRuleAlertMetricInput& setParamValues(const vector<AlertRuleAlertMetricInputParamValue> & paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };
    inline AlertRuleAlertMetricInput& setParamValues(vector<AlertRuleAlertMetricInputParamValue> && paramValues) { DARABONBA_PTR_SET_RVALUE(paramValues_, paramValues) };


  protected:
    shared_ptr<vector<AlertRuleAlertMetricInputFilterValue>> filterValues_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<string> metricId_ {};
    shared_ptr<vector<AlertRuleAlertMetricInputParamValue>> paramValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
