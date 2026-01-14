// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAnsServiceClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnsServiceClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnsServiceClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAnsServiceClustersResponseBody() = default ;
    ListAnsServiceClustersResponseBody(const ListAnsServiceClustersResponseBody &) = default ;
    ListAnsServiceClustersResponseBody(ListAnsServiceClustersResponseBody &&) = default ;
    ListAnsServiceClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnsServiceClustersResponseBody() = default ;
    ListAnsServiceClustersResponseBody& operator=(const ListAnsServiceClustersResponseBody &) = default ;
    ListAnsServiceClustersResponseBody& operator=(ListAnsServiceClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppDetail, appDetail_);
        DARABONBA_PTR_TO_JSON(Clusters, clusters_);
        DARABONBA_PTR_TO_JSON(Ephemeral, ephemeral_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProtectThreshold, protectThreshold_);
        DARABONBA_PTR_TO_JSON(SelectorType, selectorType_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppDetail, appDetail_);
        DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
        DARABONBA_PTR_FROM_JSON(Ephemeral, ephemeral_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProtectThreshold, protectThreshold_);
        DARABONBA_PTR_FROM_JSON(SelectorType, selectorType_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
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
      class Clusters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultCheckPort, defaultCheckPort_);
          DARABONBA_PTR_TO_JSON(DefaultPort, defaultPort_);
          DARABONBA_PTR_TO_JSON(HealthCheckerType, healthCheckerType_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(UseIPPort4Check, useIPPort4Check_);
        };
        friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultCheckPort, defaultCheckPort_);
          DARABONBA_PTR_FROM_JSON(DefaultPort, defaultPort_);
          DARABONBA_PTR_FROM_JSON(HealthCheckerType, healthCheckerType_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(UseIPPort4Check, useIPPort4Check_);
        };
        Clusters() = default ;
        Clusters(const Clusters &) = default ;
        Clusters(Clusters &&) = default ;
        Clusters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Clusters() = default ;
        Clusters& operator=(const Clusters &) = default ;
        Clusters& operator=(Clusters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultCheckPort_ == nullptr
        && this->defaultPort_ == nullptr && this->healthCheckerType_ == nullptr && this->metadata_ == nullptr && this->name_ == nullptr && this->serviceName_ == nullptr
        && this->useIPPort4Check_ == nullptr; };
        // defaultCheckPort Field Functions 
        bool hasDefaultCheckPort() const { return this->defaultCheckPort_ != nullptr;};
        void deleteDefaultCheckPort() { this->defaultCheckPort_ = nullptr;};
        inline int32_t getDefaultCheckPort() const { DARABONBA_PTR_GET_DEFAULT(defaultCheckPort_, 0) };
        inline Clusters& setDefaultCheckPort(int32_t defaultCheckPort) { DARABONBA_PTR_SET_VALUE(defaultCheckPort_, defaultCheckPort) };


        // defaultPort Field Functions 
        bool hasDefaultPort() const { return this->defaultPort_ != nullptr;};
        void deleteDefaultPort() { this->defaultPort_ = nullptr;};
        inline int32_t getDefaultPort() const { DARABONBA_PTR_GET_DEFAULT(defaultPort_, 0) };
        inline Clusters& setDefaultPort(int32_t defaultPort) { DARABONBA_PTR_SET_VALUE(defaultPort_, defaultPort) };


        // healthCheckerType Field Functions 
        bool hasHealthCheckerType() const { return this->healthCheckerType_ != nullptr;};
        void deleteHealthCheckerType() { this->healthCheckerType_ = nullptr;};
        inline string getHealthCheckerType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckerType_, "") };
        inline Clusters& setHealthCheckerType(string healthCheckerType) { DARABONBA_PTR_SET_VALUE(healthCheckerType_, healthCheckerType) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Clusters& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Clusters& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Clusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline Clusters& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // useIPPort4Check Field Functions 
        bool hasUseIPPort4Check() const { return this->useIPPort4Check_ != nullptr;};
        void deleteUseIPPort4Check() { this->useIPPort4Check_ = nullptr;};
        inline bool getUseIPPort4Check() const { DARABONBA_PTR_GET_DEFAULT(useIPPort4Check_, false) };
        inline Clusters& setUseIPPort4Check(bool useIPPort4Check) { DARABONBA_PTR_SET_VALUE(useIPPort4Check_, useIPPort4Check) };


      protected:
        // The default port used for a health check.
        shared_ptr<int32_t> defaultCheckPort_ {};
        // The default port.
        shared_ptr<int32_t> defaultPort_ {};
        // The type of the health check.
        shared_ptr<string> healthCheckerType_ {};
        // The metadata of the cluster.
        Darabonba::Json metadata_ {};
        // The cluster name.
        shared_ptr<string> name_ {};
        // The full name of the service.
        shared_ptr<string> serviceName_ {};
        // Indicates whether an end-to-end health check was initiated by the server. This parameter is valid only if the service is not a temporary service.
        shared_ptr<bool> useIPPort4Check_ {};
      };

      class AppDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppDetail& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CheckInternal, checkInternal_);
          DARABONBA_PTR_TO_JSON(CheckPath, checkPath_);
          DARABONBA_PTR_TO_JSON(CheckTimeout, checkTimeout_);
          DARABONBA_PTR_TO_JSON(CheckType, checkType_);
          DARABONBA_PTR_TO_JSON(HealthyCheckTimes, healthyCheckTimes_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(UnhealthyCheckTimes, unhealthyCheckTimes_);
        };
        friend void from_json(const Darabonba::Json& j, AppDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CheckInternal, checkInternal_);
          DARABONBA_PTR_FROM_JSON(CheckPath, checkPath_);
          DARABONBA_PTR_FROM_JSON(CheckTimeout, checkTimeout_);
          DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
          DARABONBA_PTR_FROM_JSON(HealthyCheckTimes, healthyCheckTimes_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(UnhealthyCheckTimes, unhealthyCheckTimes_);
        };
        AppDetail() = default ;
        AppDetail(const AppDetail &) = default ;
        AppDetail(AppDetail &&) = default ;
        AppDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppDetail() = default ;
        AppDetail& operator=(const AppDetail &) = default ;
        AppDetail& operator=(AppDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->checkInternal_ == nullptr && this->checkPath_ == nullptr && this->checkTimeout_ == nullptr && this->checkType_ == nullptr
        && this->healthyCheckTimes_ == nullptr && this->port_ == nullptr && this->unhealthyCheckTimes_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline AppDetail& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppDetail& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // checkInternal Field Functions 
        bool hasCheckInternal() const { return this->checkInternal_ != nullptr;};
        void deleteCheckInternal() { this->checkInternal_ = nullptr;};
        inline int32_t getCheckInternal() const { DARABONBA_PTR_GET_DEFAULT(checkInternal_, 0) };
        inline AppDetail& setCheckInternal(int32_t checkInternal) { DARABONBA_PTR_SET_VALUE(checkInternal_, checkInternal) };


        // checkPath Field Functions 
        bool hasCheckPath() const { return this->checkPath_ != nullptr;};
        void deleteCheckPath() { this->checkPath_ = nullptr;};
        inline string getCheckPath() const { DARABONBA_PTR_GET_DEFAULT(checkPath_, "") };
        inline AppDetail& setCheckPath(string checkPath) { DARABONBA_PTR_SET_VALUE(checkPath_, checkPath) };


        // checkTimeout Field Functions 
        bool hasCheckTimeout() const { return this->checkTimeout_ != nullptr;};
        void deleteCheckTimeout() { this->checkTimeout_ = nullptr;};
        inline int32_t getCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(checkTimeout_, 0) };
        inline AppDetail& setCheckTimeout(int32_t checkTimeout) { DARABONBA_PTR_SET_VALUE(checkTimeout_, checkTimeout) };


        // checkType Field Functions 
        bool hasCheckType() const { return this->checkType_ != nullptr;};
        void deleteCheckType() { this->checkType_ = nullptr;};
        inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
        inline AppDetail& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


        // healthyCheckTimes Field Functions 
        bool hasHealthyCheckTimes() const { return this->healthyCheckTimes_ != nullptr;};
        void deleteHealthyCheckTimes() { this->healthyCheckTimes_ = nullptr;};
        inline int32_t getHealthyCheckTimes() const { DARABONBA_PTR_GET_DEFAULT(healthyCheckTimes_, 0) };
        inline AppDetail& setHealthyCheckTimes(int32_t healthyCheckTimes) { DARABONBA_PTR_SET_VALUE(healthyCheckTimes_, healthyCheckTimes) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline AppDetail& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // unhealthyCheckTimes Field Functions 
        bool hasUnhealthyCheckTimes() const { return this->unhealthyCheckTimes_ != nullptr;};
        void deleteUnhealthyCheckTimes() { this->unhealthyCheckTimes_ = nullptr;};
        inline int32_t getUnhealthyCheckTimes() const { DARABONBA_PTR_GET_DEFAULT(unhealthyCheckTimes_, 0) };
        inline AppDetail& setUnhealthyCheckTimes(int32_t unhealthyCheckTimes) { DARABONBA_PTR_SET_VALUE(unhealthyCheckTimes_, unhealthyCheckTimes) };


      protected:
        // The ID of the application for which Microservices Governance is enabled.
        shared_ptr<string> appId_ {};
        // The name of the application for which Microservices Governance is enabled.
        shared_ptr<string> appName_ {};
        // The health check interval. Unit: seconds.
        shared_ptr<int32_t> checkInternal_ {};
        // The path of the health check. This parameter is required only when the CheckType parameter is set to http.
        shared_ptr<string> checkPath_ {};
        // The timeout period of the health check response. Unit: seconds.
        shared_ptr<int32_t> checkTimeout_ {};
        // The type of the health check. Valid values:
        // 
        // *   connection: connection status check
        // *   tcp: TCP connection check
        // *   http: HTTP connection check
        shared_ptr<string> checkType_ {};
        // The maximum number of health check retries when the instance state changes from unhealthy to healthy.
        shared_ptr<int32_t> healthyCheckTimes_ {};
        // The port number of the application for which Microservices Governance is enabled.
        shared_ptr<int32_t> port_ {};
        // The maximum number of health check retries when the instance state changes from healthy to unhealthy.
        shared_ptr<int32_t> unhealthyCheckTimes_ {};
      };

      virtual bool empty() const override { return this->appDetail_ == nullptr
        && this->clusters_ == nullptr && this->ephemeral_ == nullptr && this->groupName_ == nullptr && this->metadata_ == nullptr && this->name_ == nullptr
        && this->protectThreshold_ == nullptr && this->selectorType_ == nullptr && this->source_ == nullptr; };
      // appDetail Field Functions 
      bool hasAppDetail() const { return this->appDetail_ != nullptr;};
      void deleteAppDetail() { this->appDetail_ = nullptr;};
      inline const Data::AppDetail & getAppDetail() const { DARABONBA_PTR_GET_CONST(appDetail_, Data::AppDetail) };
      inline Data::AppDetail getAppDetail() { DARABONBA_PTR_GET(appDetail_, Data::AppDetail) };
      inline Data& setAppDetail(const Data::AppDetail & appDetail) { DARABONBA_PTR_SET_VALUE(appDetail_, appDetail) };
      inline Data& setAppDetail(Data::AppDetail && appDetail) { DARABONBA_PTR_SET_RVALUE(appDetail_, appDetail) };


      // clusters Field Functions 
      bool hasClusters() const { return this->clusters_ != nullptr;};
      void deleteClusters() { this->clusters_ = nullptr;};
      inline const vector<Data::Clusters> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<Data::Clusters>) };
      inline vector<Data::Clusters> getClusters() { DARABONBA_PTR_GET(clusters_, vector<Data::Clusters>) };
      inline Data& setClusters(const vector<Data::Clusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
      inline Data& setClusters(vector<Data::Clusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


      // ephemeral Field Functions 
      bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
      void deleteEphemeral() { this->ephemeral_ = nullptr;};
      inline bool getEphemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
      inline Data& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Data& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protectThreshold Field Functions 
      bool hasProtectThreshold() const { return this->protectThreshold_ != nullptr;};
      void deleteProtectThreshold() { this->protectThreshold_ = nullptr;};
      inline float getProtectThreshold() const { DARABONBA_PTR_GET_DEFAULT(protectThreshold_, 0.0) };
      inline Data& setProtectThreshold(float protectThreshold) { DARABONBA_PTR_SET_VALUE(protectThreshold_, protectThreshold) };


      // selectorType Field Functions 
      bool hasSelectorType() const { return this->selectorType_ != nullptr;};
      void deleteSelectorType() { this->selectorType_ = nullptr;};
      inline string getSelectorType() const { DARABONBA_PTR_GET_DEFAULT(selectorType_, "") };
      inline Data& setSelectorType(string selectorType) { DARABONBA_PTR_SET_VALUE(selectorType_, selectorType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The information about the associated application for which Microservices Governance is enabled when the Source parameter is set to governance.
      shared_ptr<Data::AppDetail> appDetail_ {};
      // The cluster information.
      shared_ptr<vector<Data::Clusters>> clusters_ {};
      // Indicates whether the service is a temporary service. Valid values:
      // 
      // *   `true`: yes
      // *   `false`: no
      shared_ptr<bool> ephemeral_ {};
      // The service group to which the service belongs.
      shared_ptr<string> groupName_ {};
      // The metadata of the service.
      Darabonba::Json metadata_ {};
      // The name of the service.
      shared_ptr<string> name_ {};
      // The protection threshold.
      shared_ptr<float> protectThreshold_ {};
      // The election mode.
      shared_ptr<string> selectorType_ {};
      // The source type of the service. Valid values:
      // 
      // *   console: The service was registered in the console.
      // *   sdk: The service was registered by using the SDK.
      // *   governance: The service was registered on Microservices Governance.
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAnsServiceClustersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAnsServiceClustersResponseBody::Data) };
    inline ListAnsServiceClustersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAnsServiceClustersResponseBody::Data) };
    inline ListAnsServiceClustersResponseBody& setData(const ListAnsServiceClustersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAnsServiceClustersResponseBody& setData(ListAnsServiceClustersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAnsServiceClustersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListAnsServiceClustersResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAnsServiceClustersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAnsServiceClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnsServiceClustersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListAnsServiceClustersResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
