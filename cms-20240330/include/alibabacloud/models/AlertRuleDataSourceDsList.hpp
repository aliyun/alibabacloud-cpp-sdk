// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEDATASOURCEDSLIST_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEDATASOURCEDSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleDataSourceDsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleDataSourceDsList& obj) { 
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(store, store_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleDataSourceDsList& obj) { 
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(store, store_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleDataSourceDsList() = default ;
    AlertRuleDataSourceDsList(const AlertRuleDataSourceDsList &) = default ;
    AlertRuleDataSourceDsList(AlertRuleDataSourceDsList &&) = default ;
    AlertRuleDataSourceDsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleDataSourceDsList() = default ;
    AlertRuleDataSourceDsList& operator=(const AlertRuleDataSourceDsList &) = default ;
    AlertRuleDataSourceDsList& operator=(AlertRuleDataSourceDsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->project_ == nullptr
        && return this->regionId_ == nullptr && return this->store_ == nullptr && return this->type_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline AlertRuleDataSourceDsList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AlertRuleDataSourceDsList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // store Field Functions 
    bool hasStore() const { return this->store_ != nullptr;};
    void deleteStore() { this->store_ = nullptr;};
    inline string store() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
    inline AlertRuleDataSourceDsList& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleDataSourceDsList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> store_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
