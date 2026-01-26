// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvServiceMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvServiceMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvServiceMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEnvServiceMonitorsResponseBody() = default ;
    ListEnvServiceMonitorsResponseBody(const ListEnvServiceMonitorsResponseBody &) = default ;
    ListEnvServiceMonitorsResponseBody(ListEnvServiceMonitorsResponseBody &&) = default ;
    ListEnvServiceMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvServiceMonitorsResponseBody() = default ;
    ListEnvServiceMonitorsResponseBody& operator=(const ListEnvServiceMonitorsResponseBody &) = default ;
    ListEnvServiceMonitorsResponseBody& operator=(ListEnvServiceMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AddonName, addonName_);
        DARABONBA_PTR_TO_JSON(AddonReleaseName, addonReleaseName_);
        DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
        DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(MatchedServiceCount, matchedServiceCount_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ServiceMonitorName, serviceMonitorName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
        DARABONBA_PTR_FROM_JSON(AddonReleaseName, addonReleaseName_);
        DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
        DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(MatchedServiceCount, matchedServiceCount_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ServiceMonitorName, serviceMonitorName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(MatchedTargetCount, matchedTargetCount_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(MatchedTargetCount, matchedTargetCount_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->interval_ == nullptr
        && this->matchedTargetCount_ == nullptr && this->path_ == nullptr && this->port_ == nullptr && this->targetPort_ == nullptr; };
        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
        inline Endpoints& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // matchedTargetCount Field Functions 
        bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
        void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
        inline int32_t getMatchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, 0) };
        inline Endpoints& setMatchedTargetCount(int32_t matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Endpoints& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Endpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // targetPort Field Functions 
        bool hasTargetPort() const { return this->targetPort_ != nullptr;};
        void deleteTargetPort() { this->targetPort_ = nullptr;};
        inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
        inline Endpoints& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


      protected:
        // The collection interval.
        shared_ptr<string> interval_ {};
        // The number of pods that match the ServiceMonitor endpoint.
        shared_ptr<int32_t> matchedTargetCount_ {};
        // The collection path.
        shared_ptr<string> path_ {};
        // The external port.
        shared_ptr<string> port_ {};
        // The destination port.
        shared_ptr<int32_t> targetPort_ {};
      };

      virtual bool empty() const override { return this->addonName_ == nullptr
        && this->addonReleaseName_ == nullptr && this->addonVersion_ == nullptr && this->configYaml_ == nullptr && this->creationTimestamp_ == nullptr && this->endpoints_ == nullptr
        && this->environmentId_ == nullptr && this->matchedServiceCount_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr && this->serviceMonitorName_ == nullptr
        && this->status_ == nullptr; };
      // addonName Field Functions 
      bool hasAddonName() const { return this->addonName_ != nullptr;};
      void deleteAddonName() { this->addonName_ = nullptr;};
      inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
      inline Data& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


      // addonReleaseName Field Functions 
      bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
      void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
      inline string getAddonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
      inline Data& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


      // addonVersion Field Functions 
      bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
      void deleteAddonVersion() { this->addonVersion_ = nullptr;};
      inline string getAddonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
      inline Data& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


      // configYaml Field Functions 
      bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
      void deleteConfigYaml() { this->configYaml_ = nullptr;};
      inline string getConfigYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
      inline Data& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


      // creationTimestamp Field Functions 
      bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
      void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
      inline string getCreationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
      inline Data& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<Data::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Data::Endpoints>) };
      inline vector<Data::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<Data::Endpoints>) };
      inline Data& setEndpoints(const vector<Data::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline Data& setEndpoints(vector<Data::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // matchedServiceCount Field Functions 
      bool hasMatchedServiceCount() const { return this->matchedServiceCount_ != nullptr;};
      void deleteMatchedServiceCount() { this->matchedServiceCount_ = nullptr;};
      inline int32_t getMatchedServiceCount() const { DARABONBA_PTR_GET_DEFAULT(matchedServiceCount_, 0) };
      inline Data& setMatchedServiceCount(int32_t matchedServiceCount) { DARABONBA_PTR_SET_VALUE(matchedServiceCount_, matchedServiceCount) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // serviceMonitorName Field Functions 
      bool hasServiceMonitorName() const { return this->serviceMonitorName_ != nullptr;};
      void deleteServiceMonitorName() { this->serviceMonitorName_ = nullptr;};
      inline string getServiceMonitorName() const { DARABONBA_PTR_GET_DEFAULT(serviceMonitorName_, "") };
      inline Data& setServiceMonitorName(string serviceMonitorName) { DARABONBA_PTR_SET_VALUE(serviceMonitorName_, serviceMonitorName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the add-on to which the ServiceMonitor belongs.
      shared_ptr<string> addonName_ {};
      // The instance name of the add-on.
      shared_ptr<string> addonReleaseName_ {};
      // The version of the add-on.
      shared_ptr<string> addonVersion_ {};
      // The YAML configuration string.
      shared_ptr<string> configYaml_ {};
      // The time when the ServiceMonitor was created. The value of this parameter is a timestamp.
      shared_ptr<string> creationTimestamp_ {};
      // The endpoints of the ServiceMonitor.
      shared_ptr<vector<Data::Endpoints>> endpoints_ {};
      // The environment ID.
      shared_ptr<string> environmentId_ {};
      // The number of matched services.
      shared_ptr<int32_t> matchedServiceCount_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The name of the ServiceMonitor.
      shared_ptr<string> serviceMonitorName_ {};
      // The status of the ServiceMonitor.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEnvServiceMonitorsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEnvServiceMonitorsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEnvServiceMonitorsResponseBody::Data>) };
    inline vector<ListEnvServiceMonitorsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEnvServiceMonitorsResponseBody::Data>) };
    inline ListEnvServiceMonitorsResponseBody& setData(const vector<ListEnvServiceMonitorsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvServiceMonitorsResponseBody& setData(vector<ListEnvServiceMonitorsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvServiceMonitorsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvServiceMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<vector<ListEnvServiceMonitorsResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
