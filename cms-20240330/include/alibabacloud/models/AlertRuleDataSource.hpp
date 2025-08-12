// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleDataSourceDsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(appType, appType_);
      DARABONBA_PTR_TO_JSON(dsList, dsList_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(appType, appType_);
      DARABONBA_PTR_FROM_JSON(dsList, dsList_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleDataSource() = default ;
    AlertRuleDataSource(const AlertRuleDataSource &) = default ;
    AlertRuleDataSource(AlertRuleDataSource &&) = default ;
    AlertRuleDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleDataSource() = default ;
    AlertRuleDataSource& operator=(const AlertRuleDataSource &) = default ;
    AlertRuleDataSource& operator=(AlertRuleDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->dsList_ != nullptr && this->instanceId_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr && this->type_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline AlertRuleDataSource& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // dsList Field Functions 
    bool hasDsList() const { return this->dsList_ != nullptr;};
    void deleteDsList() { this->dsList_ = nullptr;};
    inline const vector<AlertRuleDataSourceDsList> & dsList() const { DARABONBA_PTR_GET_CONST(dsList_, vector<AlertRuleDataSourceDsList>) };
    inline vector<AlertRuleDataSourceDsList> dsList() { DARABONBA_PTR_GET(dsList_, vector<AlertRuleDataSourceDsList>) };
    inline AlertRuleDataSource& setDsList(const vector<AlertRuleDataSourceDsList> & dsList) { DARABONBA_PTR_SET_VALUE(dsList_, dsList) };
    inline AlertRuleDataSource& setDsList(vector<AlertRuleDataSourceDsList> && dsList) { DARABONBA_PTR_SET_RVALUE(dsList_, dsList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AlertRuleDataSource& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline AlertRuleDataSource& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AlertRuleDataSource& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<vector<AlertRuleDataSourceDsList>> dsList_ = nullptr;
    // 实例id，当type=PROMETHEUS_DS/ENTERPRISE_DS时必填，为prometheus实例的clusterId或指标仓库名称
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // 数据源类型
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
