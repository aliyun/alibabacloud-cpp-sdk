// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetPrometheusIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPrometheusIntegrationResponseBody() = default ;
    GetPrometheusIntegrationResponseBody(const GetPrometheusIntegrationResponseBody &) = default ;
    GetPrometheusIntegrationResponseBody(GetPrometheusIntegrationResponseBody &&) = default ;
    GetPrometheusIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusIntegrationResponseBody() = default ;
    GetPrometheusIntegrationResponseBody& operator=(const GetPrometheusIntegrationResponseBody &) = default ;
    GetPrometheusIntegrationResponseBody& operator=(GetPrometheusIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
        DARABONBA_PTR_TO_JSON(ShowDescribe, showDescribe_);
        DARABONBA_PTR_TO_JSON(ShowLog, showLog_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        DARABONBA_PTR_FROM_JSON(ShowDescribe, showDescribe_);
        DARABONBA_PTR_FROM_JSON(ShowLog, showLog_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->canDelete_ == nullptr
        && this->canEditor_ == nullptr && this->clusterId_ == nullptr && this->containerName_ == nullptr && this->describe_ == nullptr && this->exporterType_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->integrationType_ == nullptr && this->namespace_ == nullptr && this->needUpgrade_ == nullptr
        && this->param_ == nullptr && this->showDescribe_ == nullptr && this->showLog_ == nullptr && this->status_ == nullptr && this->target_ == nullptr
        && this->version_ == nullptr; };
      // canDelete Field Functions 
      bool hasCanDelete() const { return this->canDelete_ != nullptr;};
      void deleteCanDelete() { this->canDelete_ = nullptr;};
      inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
      inline Data& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


      // canEditor Field Functions 
      bool hasCanEditor() const { return this->canEditor_ != nullptr;};
      void deleteCanEditor() { this->canEditor_ = nullptr;};
      inline bool getCanEditor() const { DARABONBA_PTR_GET_DEFAULT(canEditor_, false) };
      inline Data& setCanEditor(bool canEditor) { DARABONBA_PTR_SET_VALUE(canEditor_, canEditor) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // containerName Field Functions 
      bool hasContainerName() const { return this->containerName_ != nullptr;};
      void deleteContainerName() { this->containerName_ = nullptr;};
      inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
      inline Data& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


      // describe Field Functions 
      bool hasDescribe() const { return this->describe_ != nullptr;};
      void deleteDescribe() { this->describe_ = nullptr;};
      inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
      inline Data& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


      // exporterType Field Functions 
      bool hasExporterType() const { return this->exporterType_ != nullptr;};
      void deleteExporterType() { this->exporterType_ = nullptr;};
      inline string getExporterType() const { DARABONBA_PTR_GET_DEFAULT(exporterType_, "") };
      inline Data& setExporterType(string exporterType) { DARABONBA_PTR_SET_VALUE(exporterType_, exporterType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline Data& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // integrationType Field Functions 
      bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
      void deleteIntegrationType() { this->integrationType_ = nullptr;};
      inline string getIntegrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
      inline Data& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // needUpgrade Field Functions 
      bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
      void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
      inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
      inline Data& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline Data& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


      // showDescribe Field Functions 
      bool hasShowDescribe() const { return this->showDescribe_ != nullptr;};
      void deleteShowDescribe() { this->showDescribe_ = nullptr;};
      inline bool getShowDescribe() const { DARABONBA_PTR_GET_DEFAULT(showDescribe_, false) };
      inline Data& setShowDescribe(bool showDescribe) { DARABONBA_PTR_SET_VALUE(showDescribe_, showDescribe) };


      // showLog Field Functions 
      bool hasShowLog() const { return this->showLog_ != nullptr;};
      void deleteShowLog() { this->showLog_ = nullptr;};
      inline string getShowLog() const { DARABONBA_PTR_GET_DEFAULT(showLog_, "") };
      inline Data& setShowLog(string showLog) { DARABONBA_PTR_SET_VALUE(showLog_, showLog) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Data& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Indicates whether the exporter can be deleted.
      shared_ptr<bool> canDelete_ {};
      // Indicates whether the exporter can be modified.
      shared_ptr<bool> canEditor_ {};
      // The ID of the Prometheus instance.
      shared_ptr<string> clusterId_ {};
      // The container name.
      shared_ptr<string> containerName_ {};
      // The description of the exporter.
      shared_ptr<string> describe_ {};
      // The type of the exporter.
      shared_ptr<string> exporterType_ {};
      // The ID of the exporter.
      shared_ptr<int64_t> instanceId_ {};
      // The name of the exporter.
      shared_ptr<string> instanceName_ {};
      // The integration type. Valid values: kafka, mysql, redis, snmp, emr, nubela, and tidb.
      shared_ptr<string> integrationType_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // Indicates whether an upgrade is required.
      shared_ptr<bool> needUpgrade_ {};
      // The parameters of the exporter. Format: JSON string.
      shared_ptr<string> param_ {};
      // Indicates whether the description is displayed.
      shared_ptr<bool> showDescribe_ {};
      // Indicates whether the exporter logs are displayed.
      shared_ptr<string> showLog_ {};
      // The status of the exporter.
      shared_ptr<string> status_ {};
      // The monitored IP address.
      shared_ptr<string> target_ {};
      // The version information.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPrometheusIntegrationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPrometheusIntegrationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPrometheusIntegrationResponseBody::Data) };
    inline GetPrometheusIntegrationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPrometheusIntegrationResponseBody::Data) };
    inline GetPrometheusIntegrationResponseBody& setData(const GetPrometheusIntegrationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPrometheusIntegrationResponseBody& setData(GetPrometheusIntegrationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPrometheusIntegrationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The status code 200 indicates that the request was successful. If another status code is returned, the request failed.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<GetPrometheusIntegrationResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
