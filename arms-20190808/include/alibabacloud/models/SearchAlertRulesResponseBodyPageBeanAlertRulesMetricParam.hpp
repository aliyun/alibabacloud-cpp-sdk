// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESMETRICPARAM_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESMETRICPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam(const SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam(SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam &&) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& operator=(const SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& operator=(SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appGroupId_ != nullptr
        && this->appId_ != nullptr && this->dimensions_ != nullptr && this->pid_ != nullptr && this->type_ != nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline string appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& setAppGroupId(string appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions>) };
    inline vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions>) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& setDimensions(const vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& setDimensions(vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application group that is associated with the alert rule. This parameter is applicable to Enterprise Distributed Application Service (EDAS) applications.
    std::shared_ptr<string> appGroupId_ = nullptr;
    // The auto-increment ID of the ARMS application. You can ignore this ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The dimensions in the condition.
    std::shared_ptr<vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions>> dimensions_ = nullptr;
    // The PID of the application that is associated with the alert rule.
    std::shared_ptr<string> pid_ = nullptr;
    // The type of the metric. Valid values:
    // 
    // *   `txn`: the number of API calls during application monitoring
    // *   `txn_type`: the types of API calls during application monitoring
    // *   `db`: database metrics
    // *   `jvm`: Java virtual machine (JVM) metrics
    // *   `host`: host metrics
    // *   `exception`: API call errors
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
