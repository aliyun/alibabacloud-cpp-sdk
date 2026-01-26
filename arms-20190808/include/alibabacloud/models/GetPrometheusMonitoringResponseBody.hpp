// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSMONITORINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSMONITORINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetPrometheusMonitoringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusMonitoringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusMonitoringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPrometheusMonitoringResponseBody() = default ;
    GetPrometheusMonitoringResponseBody(const GetPrometheusMonitoringResponseBody &) = default ;
    GetPrometheusMonitoringResponseBody(GetPrometheusMonitoringResponseBody &&) = default ;
    GetPrometheusMonitoringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusMonitoringResponseBody() = default ;
    GetPrometheusMonitoringResponseBody& operator=(const GetPrometheusMonitoringResponseBody &) = default ;
    GetPrometheusMonitoringResponseBody& operator=(GetPrometheusMonitoringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_TO_JSON(MonitoringName, monitoringName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_FROM_JSON(MonitoringName, monitoringName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->configYaml_ == nullptr && this->monitoringName_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // configYaml Field Functions 
      bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
      void deleteConfigYaml() { this->configYaml_ = nullptr;};
      inline string getConfigYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
      inline Data& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


      // monitoringName Field Functions 
      bool hasMonitoringName() const { return this->monitoringName_ != nullptr;};
      void deleteMonitoringName() { this->monitoringName_ = nullptr;};
      inline string getMonitoringName() const { DARABONBA_PTR_GET_DEFAULT(monitoringName_, "") };
      inline Data& setMonitoringName(string monitoringName) { DARABONBA_PTR_SET_VALUE(monitoringName_, monitoringName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the Prometheus instance.
      shared_ptr<string> clusterId_ {};
      // The monitoring configuration. The value is a YAML string.
      shared_ptr<string> configYaml_ {};
      // The name of the monitoring configuration.
      shared_ptr<string> monitoringName_ {};
      // The status of the monitoring configuration. Valid values: run and stop.
      shared_ptr<string> status_ {};
      // The type of the monitoring configuration. Valid values: serviceMonitor, podMonitor, customJob, and probe.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPrometheusMonitoringResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPrometheusMonitoringResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPrometheusMonitoringResponseBody::Data) };
    inline GetPrometheusMonitoringResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPrometheusMonitoringResponseBody::Data) };
    inline GetPrometheusMonitoringResponseBody& setData(const GetPrometheusMonitoringResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPrometheusMonitoringResponseBody& setData(GetPrometheusMonitoringResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPrometheusMonitoringResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusMonitoringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<GetPrometheusMonitoringResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
