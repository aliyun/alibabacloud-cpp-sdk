// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINTEGRATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINTEGRATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusIntegrationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusIntegrationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_TO_JSON(CanEditor, canEditor_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(ExporterType, exporterType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(ShowDescribe, showDescribe_);
      DARABONBA_PTR_TO_JSON(ShowLog, showLog_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusIntegrationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_FROM_JSON(CanEditor, canEditor_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(ExporterType, exporterType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(ShowDescribe, showDescribe_);
      DARABONBA_PTR_FROM_JSON(ShowLog, showLog_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListPrometheusIntegrationResponseBodyData() = default ;
    ListPrometheusIntegrationResponseBodyData(const ListPrometheusIntegrationResponseBodyData &) = default ;
    ListPrometheusIntegrationResponseBodyData(ListPrometheusIntegrationResponseBodyData &&) = default ;
    ListPrometheusIntegrationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusIntegrationResponseBodyData() = default ;
    ListPrometheusIntegrationResponseBodyData& operator=(const ListPrometheusIntegrationResponseBodyData &) = default ;
    ListPrometheusIntegrationResponseBodyData& operator=(ListPrometheusIntegrationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canDelete_ != nullptr
        && this->canEditor_ != nullptr && this->clusterId_ != nullptr && this->containerName_ != nullptr && this->describe_ != nullptr && this->exporterType_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->integrationType_ != nullptr && this->namespace_ != nullptr && this->needUpgrade_ != nullptr
        && this->param_ != nullptr && this->podName_ != nullptr && this->showDescribe_ != nullptr && this->showLog_ != nullptr && this->status_ != nullptr
        && this->target_ != nullptr && this->version_ != nullptr; };
    // canDelete Field Functions 
    bool hasCanDelete() const { return this->canDelete_ != nullptr;};
    void deleteCanDelete() { this->canDelete_ = nullptr;};
    inline bool canDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
    inline ListPrometheusIntegrationResponseBodyData& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


    // canEditor Field Functions 
    bool hasCanEditor() const { return this->canEditor_ != nullptr;};
    void deleteCanEditor() { this->canEditor_ = nullptr;};
    inline bool canEditor() const { DARABONBA_PTR_GET_DEFAULT(canEditor_, false) };
    inline ListPrometheusIntegrationResponseBodyData& setCanEditor(bool canEditor) { DARABONBA_PTR_SET_VALUE(canEditor_, canEditor) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // exporterType Field Functions 
    bool hasExporterType() const { return this->exporterType_ != nullptr;};
    void deleteExporterType() { this->exporterType_ = nullptr;};
    inline string exporterType() const { DARABONBA_PTR_GET_DEFAULT(exporterType_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setExporterType(string exporterType) { DARABONBA_PTR_SET_VALUE(exporterType_, exporterType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListPrometheusIntegrationResponseBodyData& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // needUpgrade Field Functions 
    bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
    void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
    inline bool needUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
    inline ListPrometheusIntegrationResponseBodyData& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // showDescribe Field Functions 
    bool hasShowDescribe() const { return this->showDescribe_ != nullptr;};
    void deleteShowDescribe() { this->showDescribe_ = nullptr;};
    inline bool showDescribe() const { DARABONBA_PTR_GET_DEFAULT(showDescribe_, false) };
    inline ListPrometheusIntegrationResponseBodyData& setShowDescribe(bool showDescribe) { DARABONBA_PTR_SET_VALUE(showDescribe_, showDescribe) };


    // showLog Field Functions 
    bool hasShowLog() const { return this->showLog_ != nullptr;};
    void deleteShowLog() { this->showLog_ = nullptr;};
    inline bool showLog() const { DARABONBA_PTR_GET_DEFAULT(showLog_, false) };
    inline ListPrometheusIntegrationResponseBodyData& setShowLog(bool showLog) { DARABONBA_PTR_SET_VALUE(showLog_, showLog) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPrometheusIntegrationResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Indicates whether the exporter can be deleted.
    std::shared_ptr<bool> canDelete_ = nullptr;
    // Indicates whether the exporter can be edited.
    std::shared_ptr<bool> canEditor_ = nullptr;
    // The ID of the Prometheus instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The description of the exporter.
    std::shared_ptr<string> describe_ = nullptr;
    // The type of the exporter.
    std::shared_ptr<string> exporterType_ = nullptr;
    // The ID of the exporter.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the exporter.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The integration type. Valid values: kafka, mysql, redis, snmp, emr, nubela, and tidb.
    std::shared_ptr<string> integrationType_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // Indicates whether an upgrade is required.
    std::shared_ptr<bool> needUpgrade_ = nullptr;
    // The configurations of the exporter. The value is a JSON string.
    std::shared_ptr<string> param_ = nullptr;
    // The pod name of the exporter.
    std::shared_ptr<string> podName_ = nullptr;
    // Indicates whether the description is displayed.
    std::shared_ptr<bool> showDescribe_ = nullptr;
    // Indicates whether the exporter logs are displayed.
    std::shared_ptr<bool> showLog_ = nullptr;
    // The status of the exporter.
    std::shared_ptr<string> status_ = nullptr;
    // The monitored IP address.
    std::shared_ptr<string> target_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
