// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOURCECONFIGUNIFIED_HPP_
#define ALIBABACLOUD_MODELS_DATASOURCECONFIGUNIFIED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Stores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DatasourceConfigUnified : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasourceConfigUnified& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_TO_JSON(legacyType, legacyType_);
      DARABONBA_PTR_TO_JSON(productCategory, productCategory_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(stores, stores_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DatasourceConfigUnified& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(legacyRaw, legacyRaw_);
      DARABONBA_PTR_FROM_JSON(legacyType, legacyType_);
      DARABONBA_PTR_FROM_JSON(productCategory, productCategory_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(stores, stores_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DatasourceConfigUnified() = default ;
    DatasourceConfigUnified(const DatasourceConfigUnified &) = default ;
    DatasourceConfigUnified(DatasourceConfigUnified &&) = default ;
    DatasourceConfigUnified(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasourceConfigUnified() = default ;
    DatasourceConfigUnified& operator=(const DatasourceConfigUnified &) = default ;
    DatasourceConfigUnified& operator=(DatasourceConfigUnified &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->legacyRaw_ == nullptr && this->legacyType_ == nullptr && this->productCategory_ == nullptr && this->project_ == nullptr && this->regionId_ == nullptr
        && this->stores_ == nullptr && this->type_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DatasourceConfigUnified& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // legacyRaw Field Functions 
    bool hasLegacyRaw() const { return this->legacyRaw_ != nullptr;};
    void deleteLegacyRaw() { this->legacyRaw_ = nullptr;};
    inline string getLegacyRaw() const { DARABONBA_PTR_GET_DEFAULT(legacyRaw_, "") };
    inline DatasourceConfigUnified& setLegacyRaw(string legacyRaw) { DARABONBA_PTR_SET_VALUE(legacyRaw_, legacyRaw) };


    // legacyType Field Functions 
    bool hasLegacyType() const { return this->legacyType_ != nullptr;};
    void deleteLegacyType() { this->legacyType_ = nullptr;};
    inline string getLegacyType() const { DARABONBA_PTR_GET_DEFAULT(legacyType_, "") };
    inline DatasourceConfigUnified& setLegacyType(string legacyType) { DARABONBA_PTR_SET_VALUE(legacyType_, legacyType) };


    // productCategory Field Functions 
    bool hasProductCategory() const { return this->productCategory_ != nullptr;};
    void deleteProductCategory() { this->productCategory_ = nullptr;};
    inline string getProductCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
    inline DatasourceConfigUnified& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DatasourceConfigUnified& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DatasourceConfigUnified& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stores Field Functions 
    bool hasStores() const { return this->stores_ != nullptr;};
    void deleteStores() { this->stores_ = nullptr;};
    inline const vector<Stores> & getStores() const { DARABONBA_PTR_GET_CONST(stores_, vector<Stores>) };
    inline vector<Stores> getStores() { DARABONBA_PTR_GET(stores_, vector<Stores>) };
    inline DatasourceConfigUnified& setStores(const vector<Stores> & stores) { DARABONBA_PTR_SET_VALUE(stores_, stores) };
    inline DatasourceConfigUnified& setStores(vector<Stores> && stores) { DARABONBA_PTR_SET_RVALUE(stores_, stores) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DatasourceConfigUnified& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Prometheus instance ID (required when type=PROMETHEUS; ignored for other types).
    shared_ptr<string> instanceId_ {};
    // The original V1 datasource JSON string returned as a fallback when type=UNKNOWN and the read path fails to parse the datasource. If the frontend detects that this field is not empty, display it as read-only.
    shared_ptr<string> legacyRaw_ {};
    // Returned when type=UNKNOWN, indicating that this rule cannot be edited through the new API. Submit a ticket to contact the CloudMonitor team.
    shared_ptr<string> legacyType_ {};
    // The Alibaba Cloud service category (optional when type=CLOUD_MONITORING). If the source does not contain this information, the value unknown is returned.
    shared_ptr<string> productCategory_ {};
    // The Simple Log Service project name (required when type=SLS; all stores share the same project).
    shared_ptr<string> project_ {};
    // The region ID (optional for PROMETHEUS / UMODEL / APM / SLS types; defaults to the same region as the rule or gateway. CLOUD_MONITORING does not use this field; use AlertRuleV2.regionId instead).
    shared_ptr<string> regionId_ {};
    // The list of Simple Log Service stores (used when type=SLS; at least one store is required). Each store contains store and storeType fields. The project and regionId fields have been moved to the top level. The deprecated fields with the same names that remain in stores cause a 400 error if used in write paths.
    shared_ptr<vector<Stores>> stores_ {};
    // The datasource type. Valid values: PROMETHEUS (instanceId is required; regionId is optional). UMODEL (regionId is optional; other settings are carried in queryConfig/conditionConfig). APM (regionId is optional). CLOUD_MONITORING (regionId and productCategory are optional). UNKNOWN (read-only fallback; do not use in write paths). Do not use non-enumerated values (such as CMS_BASIC_DS or SLS_DS). The backend returns an Invalidtype 400 error.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
