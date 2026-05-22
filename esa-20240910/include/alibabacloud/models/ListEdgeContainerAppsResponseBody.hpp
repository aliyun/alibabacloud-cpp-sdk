// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEdgeContainerAppsResponseBody() = default ;
    ListEdgeContainerAppsResponseBody(const ListEdgeContainerAppsResponseBody &) = default ;
    ListEdgeContainerAppsResponseBody(ListEdgeContainerAppsResponseBody &&) = default ;
    ListEdgeContainerAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppsResponseBody() = default ;
    ListEdgeContainerAppsResponseBody& operator=(const ListEdgeContainerAppsResponseBody &) = default ;
    ListEdgeContainerAppsResponseBody& operator=(ListEdgeContainerAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Apps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apps& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Percentage, percentage_);
        DARABONBA_PTR_TO_JSON(QuicCid, quicCid_);
        DARABONBA_PTR_TO_JSON(Remarks, remarks_);
        DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VersionCount, versionCount_);
      };
      friend void from_json(const Darabonba::Json& j, Apps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
        DARABONBA_PTR_FROM_JSON(QuicCid, quicCid_);
        DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
        DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VersionCount, versionCount_);
      };
      Apps() = default ;
      Apps(const Apps &) = default ;
      Apps(Apps &&) = default ;
      Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apps() = default ;
      Apps& operator=(const Apps &) = default ;
      Apps& operator=(Apps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HealthCheck : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HealthCheck& obj) { 
          DARABONBA_PTR_TO_JSON(FailTimes, failTimes_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SuccTimes, succTimes_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, HealthCheck& obj) { 
          DARABONBA_PTR_FROM_JSON(FailTimes, failTimes_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SuccTimes, succTimes_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        HealthCheck() = default ;
        HealthCheck(const HealthCheck &) = default ;
        HealthCheck(HealthCheck &&) = default ;
        HealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HealthCheck() = default ;
        HealthCheck& operator=(const HealthCheck &) = default ;
        HealthCheck& operator=(HealthCheck &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failTimes_ == nullptr
        && this->host_ == nullptr && this->httpCode_ == nullptr && this->interval_ == nullptr && this->method_ == nullptr && this->port_ == nullptr
        && this->succTimes_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr && this->uri_ == nullptr; };
        // failTimes Field Functions 
        bool hasFailTimes() const { return this->failTimes_ != nullptr;};
        void deleteFailTimes() { this->failTimes_ = nullptr;};
        inline int32_t getFailTimes() const { DARABONBA_PTR_GET_DEFAULT(failTimes_, 0) };
        inline HealthCheck& setFailTimes(int32_t failTimes) { DARABONBA_PTR_SET_VALUE(failTimes_, failTimes) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline HealthCheck& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // httpCode Field Functions 
        bool hasHttpCode() const { return this->httpCode_ != nullptr;};
        void deleteHttpCode() { this->httpCode_ = nullptr;};
        inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
        inline HealthCheck& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline HealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline HealthCheck& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline HealthCheck& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // succTimes Field Functions 
        bool hasSuccTimes() const { return this->succTimes_ != nullptr;};
        void deleteSuccTimes() { this->succTimes_ = nullptr;};
        inline int32_t getSuccTimes() const { DARABONBA_PTR_GET_DEFAULT(succTimes_, 0) };
        inline HealthCheck& setSuccTimes(int32_t succTimes) { DARABONBA_PTR_SET_VALUE(succTimes_, succTimes) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline HealthCheck& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HealthCheck& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline HealthCheck& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // The number of consecutive failed health checks for an application to be considered unhealthy.
        shared_ptr<int32_t> failTimes_ {};
        // The domain name that is used for health checks.
        shared_ptr<string> host_ {};
        // The range of health check status codes that indicate successful health checks.
        shared_ptr<string> httpCode_ {};
        // The interval between health checks. Unit: seconds.
        shared_ptr<int32_t> interval_ {};
        // The HTTP method used for health checks.
        shared_ptr<string> method_ {};
        // The health check port.
        shared_ptr<int32_t> port_ {};
        // The number of consecutive successful health checks for an application to be considered healthy.
        shared_ptr<int32_t> succTimes_ {};
        // The timeout period of health checks. Unit: seconds.
        shared_ptr<int32_t> timeout_ {};
        // The type of health checks. Valid values:
        // 
        // *   l7
        // *   l4
        shared_ptr<string> type_ {};
        // The health check URL.
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->createTime_ == nullptr && this->domainName_ == nullptr && this->gatewayType_ == nullptr && this->healthCheck_ == nullptr && this->name_ == nullptr
        && this->percentage_ == nullptr && this->quicCid_ == nullptr && this->remarks_ == nullptr && this->servicePort_ == nullptr && this->status_ == nullptr
        && this->targetPort_ == nullptr && this->updateTime_ == nullptr && this->versionCount_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Apps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Apps& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Apps& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // gatewayType Field Functions 
      bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
      void deleteGatewayType() { this->gatewayType_ = nullptr;};
      inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
      inline Apps& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


      // healthCheck Field Functions 
      bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
      void deleteHealthCheck() { this->healthCheck_ = nullptr;};
      inline const Apps::HealthCheck & getHealthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Apps::HealthCheck) };
      inline Apps::HealthCheck getHealthCheck() { DARABONBA_PTR_GET(healthCheck_, Apps::HealthCheck) };
      inline Apps& setHealthCheck(const Apps::HealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
      inline Apps& setHealthCheck(Apps::HealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Apps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // percentage Field Functions 
      bool hasPercentage() const { return this->percentage_ != nullptr;};
      void deletePercentage() { this->percentage_ = nullptr;};
      inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
      inline Apps& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


      // quicCid Field Functions 
      bool hasQuicCid() const { return this->quicCid_ != nullptr;};
      void deleteQuicCid() { this->quicCid_ = nullptr;};
      inline string getQuicCid() const { DARABONBA_PTR_GET_DEFAULT(quicCid_, "") };
      inline Apps& setQuicCid(string quicCid) { DARABONBA_PTR_SET_VALUE(quicCid_, quicCid) };


      // remarks Field Functions 
      bool hasRemarks() const { return this->remarks_ != nullptr;};
      void deleteRemarks() { this->remarks_ = nullptr;};
      inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
      inline Apps& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
      inline Apps& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Apps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetPort Field Functions 
      bool hasTargetPort() const { return this->targetPort_ != nullptr;};
      void deleteTargetPort() { this->targetPort_ = nullptr;};
      inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
      inline Apps& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Apps& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // versionCount Field Functions 
      bool hasVersionCount() const { return this->versionCount_ != nullptr;};
      void deleteVersionCount() { this->versionCount_ = nullptr;};
      inline int32_t getVersionCount() const { DARABONBA_PTR_GET_DEFAULT(versionCount_, 0) };
      inline Apps& setVersionCount(int32_t versionCount) { DARABONBA_PTR_SET_VALUE(versionCount_, versionCount) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The time when the version was created.
      shared_ptr<string> createTime_ {};
      // The domain name associated with the application.
      shared_ptr<string> domainName_ {};
      // The type of the gateway. Valid values:
      // 
      // *   l7: Layer 7 gateway.
      // *   l4: Layer 4 gateway.
      shared_ptr<string> gatewayType_ {};
      // The information about health checks.
      shared_ptr<Apps::HealthCheck> healthCheck_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The progress of the application creation task in percentage.
      shared_ptr<int32_t> percentage_ {};
      // Indicates whether QUIC is enabled.
      shared_ptr<string> quicCid_ {};
      // The remarks.
      shared_ptr<string> remarks_ {};
      // The server port. Valid values: 1 to 65535.
      shared_ptr<int32_t> servicePort_ {};
      // The status of the application. Valid values:
      // 
      // *   creating: The application is being created.
      // *   failed: The application failed to be created.
      // *   created: The application is created.
      shared_ptr<string> status_ {};
      // The backend port, which is also the service port of the application. Valid values: 1 to 65535.
      shared_ptr<int32_t> targetPort_ {};
      // The time when the application was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
      // The number of versions of the application.
      shared_ptr<int32_t> versionCount_ {};
    };

    virtual bool empty() const override { return this->apps_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<ListEdgeContainerAppsResponseBody::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<ListEdgeContainerAppsResponseBody::Apps>) };
    inline vector<ListEdgeContainerAppsResponseBody::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<ListEdgeContainerAppsResponseBody::Apps>) };
    inline ListEdgeContainerAppsResponseBody& setApps(const vector<ListEdgeContainerAppsResponseBody::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline ListEdgeContainerAppsResponseBody& setApps(vector<ListEdgeContainerAppsResponseBody::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEdgeContainerAppsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeContainerAppsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEdgeContainerAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEdgeContainerAppsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried applications.
    shared_ptr<vector<ListEdgeContainerAppsResponseBody::Apps>> apps_ {};
    // The page number. Default value: **1**. Valid values: 1 to 65535.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
