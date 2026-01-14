// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEUREKAINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEUREKAINSTANCESRESPONSEBODY_HPP_
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
  class ListEurekaInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEurekaInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEurekaInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEurekaInstancesResponseBody() = default ;
    ListEurekaInstancesResponseBody(const ListEurekaInstancesResponseBody &) = default ;
    ListEurekaInstancesResponseBody(ListEurekaInstancesResponseBody &&) = default ;
    ListEurekaInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEurekaInstancesResponseBody() = default ;
    ListEurekaInstancesResponseBody& operator=(const ListEurekaInstancesResponseBody &) = default ;
    ListEurekaInstancesResponseBody& operator=(ListEurekaInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(DurationInSecs, durationInSecs_);
        DARABONBA_PTR_TO_JSON(HomePageUrl, homePageUrl_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IpAddr, ipAddr_);
        DARABONBA_PTR_TO_JSON(LastDirtyTimestamp, lastDirtyTimestamp_);
        DARABONBA_PTR_TO_JSON(LastUpdatedTimestamp, lastUpdatedTimestamp_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RenewalIntervalInSecs, renewalIntervalInSecs_);
        DARABONBA_PTR_TO_JSON(SecurePort, securePort_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VipAddress, vipAddress_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(DurationInSecs, durationInSecs_);
        DARABONBA_PTR_FROM_JSON(HomePageUrl, homePageUrl_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IpAddr, ipAddr_);
        DARABONBA_PTR_FROM_JSON(LastDirtyTimestamp, lastDirtyTimestamp_);
        DARABONBA_PTR_FROM_JSON(LastUpdatedTimestamp, lastUpdatedTimestamp_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RenewalIntervalInSecs, renewalIntervalInSecs_);
        DARABONBA_PTR_FROM_JSON(SecurePort, securePort_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VipAddress, vipAddress_);
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
      virtual bool empty() const override { return this->app_ == nullptr
        && this->durationInSecs_ == nullptr && this->homePageUrl_ == nullptr && this->hostName_ == nullptr && this->instanceId_ == nullptr && this->ipAddr_ == nullptr
        && this->lastDirtyTimestamp_ == nullptr && this->lastUpdatedTimestamp_ == nullptr && this->metadata_ == nullptr && this->port_ == nullptr && this->renewalIntervalInSecs_ == nullptr
        && this->securePort_ == nullptr && this->status_ == nullptr && this->vipAddress_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline Data& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // durationInSecs Field Functions 
      bool hasDurationInSecs() const { return this->durationInSecs_ != nullptr;};
      void deleteDurationInSecs() { this->durationInSecs_ = nullptr;};
      inline int32_t getDurationInSecs() const { DARABONBA_PTR_GET_DEFAULT(durationInSecs_, 0) };
      inline Data& setDurationInSecs(int32_t durationInSecs) { DARABONBA_PTR_SET_VALUE(durationInSecs_, durationInSecs) };


      // homePageUrl Field Functions 
      bool hasHomePageUrl() const { return this->homePageUrl_ != nullptr;};
      void deleteHomePageUrl() { this->homePageUrl_ = nullptr;};
      inline string getHomePageUrl() const { DARABONBA_PTR_GET_DEFAULT(homePageUrl_, "") };
      inline Data& setHomePageUrl(string homePageUrl) { DARABONBA_PTR_SET_VALUE(homePageUrl_, homePageUrl) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Data& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ipAddr Field Functions 
      bool hasIpAddr() const { return this->ipAddr_ != nullptr;};
      void deleteIpAddr() { this->ipAddr_ = nullptr;};
      inline string getIpAddr() const { DARABONBA_PTR_GET_DEFAULT(ipAddr_, "") };
      inline Data& setIpAddr(string ipAddr) { DARABONBA_PTR_SET_VALUE(ipAddr_, ipAddr) };


      // lastDirtyTimestamp Field Functions 
      bool hasLastDirtyTimestamp() const { return this->lastDirtyTimestamp_ != nullptr;};
      void deleteLastDirtyTimestamp() { this->lastDirtyTimestamp_ = nullptr;};
      inline int64_t getLastDirtyTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastDirtyTimestamp_, 0L) };
      inline Data& setLastDirtyTimestamp(int64_t lastDirtyTimestamp) { DARABONBA_PTR_SET_VALUE(lastDirtyTimestamp_, lastDirtyTimestamp) };


      // lastUpdatedTimestamp Field Functions 
      bool hasLastUpdatedTimestamp() const { return this->lastUpdatedTimestamp_ != nullptr;};
      void deleteLastUpdatedTimestamp() { this->lastUpdatedTimestamp_ = nullptr;};
      inline int64_t getLastUpdatedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedTimestamp_, 0L) };
      inline Data& setLastUpdatedTimestamp(int64_t lastUpdatedTimestamp) { DARABONBA_PTR_SET_VALUE(lastUpdatedTimestamp_, lastUpdatedTimestamp) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Data& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Data& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // renewalIntervalInSecs Field Functions 
      bool hasRenewalIntervalInSecs() const { return this->renewalIntervalInSecs_ != nullptr;};
      void deleteRenewalIntervalInSecs() { this->renewalIntervalInSecs_ = nullptr;};
      inline int32_t getRenewalIntervalInSecs() const { DARABONBA_PTR_GET_DEFAULT(renewalIntervalInSecs_, 0) };
      inline Data& setRenewalIntervalInSecs(int32_t renewalIntervalInSecs) { DARABONBA_PTR_SET_VALUE(renewalIntervalInSecs_, renewalIntervalInSecs) };


      // securePort Field Functions 
      bool hasSecurePort() const { return this->securePort_ != nullptr;};
      void deleteSecurePort() { this->securePort_ = nullptr;};
      inline int32_t getSecurePort() const { DARABONBA_PTR_GET_DEFAULT(securePort_, 0) };
      inline Data& setSecurePort(int32_t securePort) { DARABONBA_PTR_SET_VALUE(securePort_, securePort) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vipAddress Field Functions 
      bool hasVipAddress() const { return this->vipAddress_ != nullptr;};
      void deleteVipAddress() { this->vipAddress_ = nullptr;};
      inline string getVipAddress() const { DARABONBA_PTR_GET_DEFAULT(vipAddress_, "") };
      inline Data& setVipAddress(string vipAddress) { DARABONBA_PTR_SET_VALUE(vipAddress_, vipAddress) };


    protected:
      // The name of the application.
      shared_ptr<string> app_ {};
      // The timeout period of the instance.\\
      // After the specified timeout period expires, the service is unavailable by default and is deleted.
      shared_ptr<int32_t> durationInSecs_ {};
      // The URL of the homepage.
      shared_ptr<string> homePageUrl_ {};
      // The hostname.
      shared_ptr<string> hostName_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The IP address.
      shared_ptr<string> ipAddr_ {};
      // The time when the instance was last modified.
      shared_ptr<int64_t> lastDirtyTimestamp_ {};
      // The time when the instance heartbeat was last checked.
      shared_ptr<int64_t> lastUpdatedTimestamp_ {};
      // The metadata.
      Darabonba::Json metadata_ {};
      // The service port number.
      shared_ptr<int32_t> port_ {};
      // The maximum interval between two heartbeat checks after a heartbeat check times out.\\
      // Default value: 10.
      shared_ptr<int32_t> renewalIntervalInSecs_ {};
      // The security port.
      shared_ptr<int32_t> securePort_ {};
      // The number of service providers. The value is in the following format: Number of healthy instances/Total number of instances.
      shared_ptr<string> status_ {};
      // The virtual IP address (VIP).
      shared_ptr<string> vipAddress_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEurekaInstancesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEurekaInstancesResponseBody::Data>) };
    inline vector<ListEurekaInstancesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEurekaInstancesResponseBody::Data>) };
    inline ListEurekaInstancesResponseBody& setData(const vector<ListEurekaInstancesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEurekaInstancesResponseBody& setData(vector<ListEurekaInstancesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListEurekaInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListEurekaInstancesResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEurekaInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEurekaInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEurekaInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEurekaInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEurekaInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEurekaInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the data.
    shared_ptr<vector<ListEurekaInstancesResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of returned instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
