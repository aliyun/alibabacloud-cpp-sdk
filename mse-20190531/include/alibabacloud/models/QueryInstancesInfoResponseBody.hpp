// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCESINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCESINFORESPONSEBODY_HPP_
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
  class QueryInstancesInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstancesInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstancesInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryInstancesInfoResponseBody() = default ;
    QueryInstancesInfoResponseBody(const QueryInstancesInfoResponseBody &) = default ;
    QueryInstancesInfoResponseBody(QueryInstancesInfoResponseBody &&) = default ;
    QueryInstancesInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstancesInfoResponseBody() = default ;
    QueryInstancesInfoResponseBody& operator=(const QueryInstancesInfoResponseBody &) = default ;
    QueryInstancesInfoResponseBody& operator=(QueryInstancesInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(PodName, podName_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(SingleTunnelVip, singleTunnelVip_);
        DARABONBA_PTR_TO_JSON(Zone, zone_);
        DARABONBA_PTR_TO_JSON(ZoneDistributed, zoneDistributed_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(PodName, podName_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(SingleTunnelVip, singleTunnelVip_);
        DARABONBA_PTR_FROM_JSON(Zone, zone_);
        DARABONBA_PTR_FROM_JSON(ZoneDistributed, zoneDistributed_);
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
      virtual bool empty() const override { return this->clientPort_ == nullptr
        && this->creationTimestamp_ == nullptr && this->healthStatus_ == nullptr && this->internetIp_ == nullptr && this->ip_ == nullptr && this->podName_ == nullptr
        && this->role_ == nullptr && this->singleTunnelVip_ == nullptr && this->zone_ == nullptr && this->zoneDistributed_ == nullptr; };
      // clientPort Field Functions 
      bool hasClientPort() const { return this->clientPort_ != nullptr;};
      void deleteClientPort() { this->clientPort_ = nullptr;};
      inline string getClientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, "") };
      inline Data& setClientPort(string clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


      // creationTimestamp Field Functions 
      bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
      void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
      inline string getCreationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
      inline Data& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


      // healthStatus Field Functions 
      bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
      void deleteHealthStatus() { this->healthStatus_ = nullptr;};
      inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
      inline Data& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Data& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // podName Field Functions 
      bool hasPodName() const { return this->podName_ != nullptr;};
      void deletePodName() { this->podName_ = nullptr;};
      inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
      inline Data& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Data& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // singleTunnelVip Field Functions 
      bool hasSingleTunnelVip() const { return this->singleTunnelVip_ != nullptr;};
      void deleteSingleTunnelVip() { this->singleTunnelVip_ = nullptr;};
      inline string getSingleTunnelVip() const { DARABONBA_PTR_GET_DEFAULT(singleTunnelVip_, "") };
      inline Data& setSingleTunnelVip(string singleTunnelVip) { DARABONBA_PTR_SET_VALUE(singleTunnelVip_, singleTunnelVip) };


      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
      inline Data& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


      // zoneDistributed Field Functions 
      bool hasZoneDistributed() const { return this->zoneDistributed_ != nullptr;};
      void deleteZoneDistributed() { this->zoneDistributed_ = nullptr;};
      inline bool getZoneDistributed() const { DARABONBA_PTR_GET_DEFAULT(zoneDistributed_, false) };
      inline Data& setZoneDistributed(bool zoneDistributed) { DARABONBA_PTR_SET_VALUE(zoneDistributed_, zoneDistributed) };


    protected:
      // The enabled port.
      shared_ptr<string> clientPort_ {};
      // The creation time.
      shared_ptr<string> creationTimestamp_ {};
      // A reserved parameter.
      shared_ptr<string> healthStatus_ {};
      // The public IP address.
      shared_ptr<string> internetIp_ {};
      // The IP address of the pod.
      shared_ptr<string> ip_ {};
      // The pod name.
      shared_ptr<string> podName_ {};
      // A reserved parameter.
      shared_ptr<string> role_ {};
      // The internal IP address.
      shared_ptr<string> singleTunnelVip_ {};
      // The zone ID.
      shared_ptr<string> zone_ {};
      // Indicates whether all pods in the cluster are distributed in the specified zones.
      shared_ptr<bool> zoneDistributed_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryInstancesInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryInstancesInfoResponseBody::Data>) };
    inline vector<QueryInstancesInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryInstancesInfoResponseBody::Data>) };
    inline QueryInstancesInfoResponseBody& setData(const vector<QueryInstancesInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInstancesInfoResponseBody& setData(vector<QueryInstancesInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryInstancesInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline QueryInstancesInfoResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryInstancesInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInstancesInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryInstancesInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<vector<QueryInstancesInfoResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code.
    shared_ptr<string> httpCode_ {};
    // The message that is returned.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned.
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
