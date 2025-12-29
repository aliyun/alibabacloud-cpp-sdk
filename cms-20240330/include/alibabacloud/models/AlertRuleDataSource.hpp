// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DsList& obj) { 
        DARABONBA_PTR_TO_JSON(project, project_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(store, store_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DsList& obj) { 
        DARABONBA_PTR_FROM_JSON(project, project_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(store, store_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      DsList() = default ;
      DsList(const DsList &) = default ;
      DsList(DsList &&) = default ;
      DsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DsList() = default ;
      DsList& operator=(const DsList &) = default ;
      DsList& operator=(DsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->project_ == nullptr
        && this->regionId_ == nullptr && this->store_ == nullptr && this->type_ == nullptr; };
      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline DsList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DsList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // store Field Functions 
      bool hasStore() const { return this->store_ != nullptr;};
      void deleteStore() { this->store_ = nullptr;};
      inline string getStore() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
      inline DsList& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DsList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> project_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> store_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appType_ == nullptr
        && this->dsList_ == nullptr && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline AlertRuleDataSource& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // dsList Field Functions 
    bool hasDsList() const { return this->dsList_ != nullptr;};
    void deleteDsList() { this->dsList_ = nullptr;};
    inline const vector<AlertRuleDataSource::DsList> & getDsList() const { DARABONBA_PTR_GET_CONST(dsList_, vector<AlertRuleDataSource::DsList>) };
    inline vector<AlertRuleDataSource::DsList> getDsList() { DARABONBA_PTR_GET(dsList_, vector<AlertRuleDataSource::DsList>) };
    inline AlertRuleDataSource& setDsList(const vector<AlertRuleDataSource::DsList> & dsList) { DARABONBA_PTR_SET_VALUE(dsList_, dsList) };
    inline AlertRuleDataSource& setDsList(vector<AlertRuleDataSource::DsList> && dsList) { DARABONBA_PTR_SET_RVALUE(dsList_, dsList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AlertRuleDataSource& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline AlertRuleDataSource& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AlertRuleDataSource& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> appType_ {};
    shared_ptr<vector<AlertRuleDataSource::DsList>> dsList_ {};
    // 实例id，当type=PROMETHEUS_DS/ENTERPRISE_DS时必填，为prometheus实例的clusterId或指标仓库名称
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> regionId_ {};
    // 数据源类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
