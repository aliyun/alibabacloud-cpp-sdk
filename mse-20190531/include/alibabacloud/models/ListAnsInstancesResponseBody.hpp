// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANSINSTANCESRESPONSEBODY_HPP_
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
  class ListAnsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnsInstancesResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAnsInstancesResponseBody& obj) { 
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
    ListAnsInstancesResponseBody() = default ;
    ListAnsInstancesResponseBody(const ListAnsInstancesResponseBody &) = default ;
    ListAnsInstancesResponseBody(ListAnsInstancesResponseBody &&) = default ;
    ListAnsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnsInstancesResponseBody() = default ;
    ListAnsInstancesResponseBody& operator=(const ListAnsInstancesResponseBody &) = default ;
    ListAnsInstancesResponseBody& operator=(ListAnsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(DatumKey, datumKey_);
        DARABONBA_PTR_TO_JSON(DefaultKey, defaultKey_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Ephemeral, ephemeral_);
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(Healthy, healthy_);
        DARABONBA_PTR_TO_JSON(InstanceHeartBeatInterval, instanceHeartBeatInterval_);
        DARABONBA_PTR_TO_JSON(InstanceHeartBeatTimeOut, instanceHeartBeatTimeOut_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(IpDeleteTimeout, ipDeleteTimeout_);
        DARABONBA_PTR_TO_JSON(LastBeat, lastBeat_);
        DARABONBA_PTR_TO_JSON(Marked, marked_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(OkCount, okCount_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(DatumKey, datumKey_);
        DARABONBA_PTR_FROM_JSON(DefaultKey, defaultKey_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Ephemeral, ephemeral_);
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(Healthy, healthy_);
        DARABONBA_PTR_FROM_JSON(InstanceHeartBeatInterval, instanceHeartBeatInterval_);
        DARABONBA_PTR_FROM_JSON(InstanceHeartBeatTimeOut, instanceHeartBeatTimeOut_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(IpDeleteTimeout, ipDeleteTimeout_);
        DARABONBA_PTR_FROM_JSON(LastBeat, lastBeat_);
        DARABONBA_PTR_FROM_JSON(Marked, marked_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(OkCount, okCount_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
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
        && this->clusterName_ == nullptr && this->datumKey_ == nullptr && this->defaultKey_ == nullptr && this->enabled_ == nullptr && this->ephemeral_ == nullptr
        && this->failCount_ == nullptr && this->healthy_ == nullptr && this->instanceHeartBeatInterval_ == nullptr && this->instanceHeartBeatTimeOut_ == nullptr && this->instanceId_ == nullptr
        && this->ip_ == nullptr && this->ipDeleteTimeout_ == nullptr && this->lastBeat_ == nullptr && this->marked_ == nullptr && this->metadata_ == nullptr
        && this->okCount_ == nullptr && this->port_ == nullptr && this->serviceName_ == nullptr && this->weight_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline Data& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // datumKey Field Functions 
      bool hasDatumKey() const { return this->datumKey_ != nullptr;};
      void deleteDatumKey() { this->datumKey_ = nullptr;};
      inline string getDatumKey() const { DARABONBA_PTR_GET_DEFAULT(datumKey_, "") };
      inline Data& setDatumKey(string datumKey) { DARABONBA_PTR_SET_VALUE(datumKey_, datumKey) };


      // defaultKey Field Functions 
      bool hasDefaultKey() const { return this->defaultKey_ != nullptr;};
      void deleteDefaultKey() { this->defaultKey_ = nullptr;};
      inline string getDefaultKey() const { DARABONBA_PTR_GET_DEFAULT(defaultKey_, "") };
      inline Data& setDefaultKey(string defaultKey) { DARABONBA_PTR_SET_VALUE(defaultKey_, defaultKey) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // ephemeral Field Functions 
      bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
      void deleteEphemeral() { this->ephemeral_ = nullptr;};
      inline bool getEphemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
      inline Data& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline Data& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // healthy Field Functions 
      bool hasHealthy() const { return this->healthy_ != nullptr;};
      void deleteHealthy() { this->healthy_ = nullptr;};
      inline bool getHealthy() const { DARABONBA_PTR_GET_DEFAULT(healthy_, false) };
      inline Data& setHealthy(bool healthy) { DARABONBA_PTR_SET_VALUE(healthy_, healthy) };


      // instanceHeartBeatInterval Field Functions 
      bool hasInstanceHeartBeatInterval() const { return this->instanceHeartBeatInterval_ != nullptr;};
      void deleteInstanceHeartBeatInterval() { this->instanceHeartBeatInterval_ = nullptr;};
      inline int32_t getInstanceHeartBeatInterval() const { DARABONBA_PTR_GET_DEFAULT(instanceHeartBeatInterval_, 0) };
      inline Data& setInstanceHeartBeatInterval(int32_t instanceHeartBeatInterval) { DARABONBA_PTR_SET_VALUE(instanceHeartBeatInterval_, instanceHeartBeatInterval) };


      // instanceHeartBeatTimeOut Field Functions 
      bool hasInstanceHeartBeatTimeOut() const { return this->instanceHeartBeatTimeOut_ != nullptr;};
      void deleteInstanceHeartBeatTimeOut() { this->instanceHeartBeatTimeOut_ = nullptr;};
      inline int32_t getInstanceHeartBeatTimeOut() const { DARABONBA_PTR_GET_DEFAULT(instanceHeartBeatTimeOut_, 0) };
      inline Data& setInstanceHeartBeatTimeOut(int32_t instanceHeartBeatTimeOut) { DARABONBA_PTR_SET_VALUE(instanceHeartBeatTimeOut_, instanceHeartBeatTimeOut) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Data& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // ipDeleteTimeout Field Functions 
      bool hasIpDeleteTimeout() const { return this->ipDeleteTimeout_ != nullptr;};
      void deleteIpDeleteTimeout() { this->ipDeleteTimeout_ = nullptr;};
      inline int32_t getIpDeleteTimeout() const { DARABONBA_PTR_GET_DEFAULT(ipDeleteTimeout_, 0) };
      inline Data& setIpDeleteTimeout(int32_t ipDeleteTimeout) { DARABONBA_PTR_SET_VALUE(ipDeleteTimeout_, ipDeleteTimeout) };


      // lastBeat Field Functions 
      bool hasLastBeat() const { return this->lastBeat_ != nullptr;};
      void deleteLastBeat() { this->lastBeat_ = nullptr;};
      inline int64_t getLastBeat() const { DARABONBA_PTR_GET_DEFAULT(lastBeat_, 0L) };
      inline Data& setLastBeat(int64_t lastBeat) { DARABONBA_PTR_SET_VALUE(lastBeat_, lastBeat) };


      // marked Field Functions 
      bool hasMarked() const { return this->marked_ != nullptr;};
      void deleteMarked() { this->marked_ = nullptr;};
      inline bool getMarked() const { DARABONBA_PTR_GET_DEFAULT(marked_, false) };
      inline Data& setMarked(bool marked) { DARABONBA_PTR_SET_VALUE(marked_, marked) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Data& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // okCount Field Functions 
      bool hasOkCount() const { return this->okCount_ != nullptr;};
      void deleteOkCount() { this->okCount_ = nullptr;};
      inline int32_t getOkCount() const { DARABONBA_PTR_GET_DEFAULT(okCount_, 0) };
      inline Data& setOkCount(int32_t okCount) { DARABONBA_PTR_SET_VALUE(okCount_, okCount) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Data& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Data& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The name of the application.
      shared_ptr<string> app_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The reference key.
      shared_ptr<string> datumKey_ {};
      // The default key.
      shared_ptr<string> defaultKey_ {};
      // The effective status of the instance. Valid values:
      // 
      // *   `true`: The instance takes effect.
      // *   `false`: The instance does not take effect.
      shared_ptr<bool> enabled_ {};
      // Indicates whether the information about the ephemeral node is obtained. Valid values:
      // 
      // *   `true`: yes
      // *   `false`: no
      shared_ptr<bool> ephemeral_ {};
      // The number of counted failures.
      shared_ptr<int32_t> failCount_ {};
      // The health status of the instance. Valid values:
      // 
      // *   `true`: The instance is healthy.
      // *   `false`: The instance is unhealthy.
      shared_ptr<bool> healthy_ {};
      // The heartbeat interval of the instance. Unit: seconds.
      shared_ptr<int32_t> instanceHeartBeatInterval_ {};
      // The timeout period of the instance heartbeat.
      shared_ptr<int32_t> instanceHeartBeatTimeOut_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The public IP address.
      shared_ptr<string> ip_ {};
      // The timeout period for removing an IP address.
      shared_ptr<int32_t> ipDeleteTimeout_ {};
      // The last heartbeat time.
      shared_ptr<int64_t> lastBeat_ {};
      // Indicates whether the instance was marked. Valid values:
      // 
      // *   `true`: The instance marking was successful.
      // *   `false`: The instance marking failed.
      shared_ptr<bool> marked_ {};
      // The metadata.
      Darabonba::Json metadata_ {};
      // The number of counted successes.
      shared_ptr<int32_t> okCount_ {};
      // The port number.
      shared_ptr<int32_t> port_ {};
      // The name of the service.
      shared_ptr<string> serviceName_ {};
      // The weight.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAnsInstancesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAnsInstancesResponseBody::Data>) };
    inline vector<ListAnsInstancesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAnsInstancesResponseBody::Data>) };
    inline ListAnsInstancesResponseBody& setData(const vector<ListAnsInstancesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAnsInstancesResponseBody& setData(vector<ListAnsInstancesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAnsInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListAnsInstancesResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAnsInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAnsInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAnsInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAnsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnsInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAnsInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the data.
    shared_ptr<vector<ListAnsInstancesResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The number of the page to return.
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
