// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMINGTRACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMINGTRACKRESPONSEBODY_HPP_
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
  class ListNamingTrackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamingTrackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Traces, traces_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamingTrackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Traces, traces_);
    };
    ListNamingTrackResponseBody() = default ;
    ListNamingTrackResponseBody(const ListNamingTrackResponseBody &) = default ;
    ListNamingTrackResponseBody(ListNamingTrackResponseBody &&) = default ;
    ListNamingTrackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamingTrackResponseBody() = default ;
    ListNamingTrackResponseBody& operator=(const ListNamingTrackResponseBody &) = default ;
    ListNamingTrackResponseBody& operator=(ListNamingTrackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Traces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Traces& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(InstanceSize, instanceSize_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
        DARABONBA_PTR_TO_JSON(PushTimeAll, pushTimeAll_);
        DARABONBA_PTR_TO_JSON(PushTimeNetwork, pushTimeNetwork_);
        DARABONBA_PTR_TO_JSON(ServerName, serverName_);
        DARABONBA_PTR_TO_JSON(SlaTime, slaTime_);
      };
      friend void from_json(const Darabonba::Json& j, Traces& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(InstanceSize, instanceSize_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
        DARABONBA_PTR_FROM_JSON(PushTimeAll, pushTimeAll_);
        DARABONBA_PTR_FROM_JSON(PushTimeNetwork, pushTimeNetwork_);
        DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
        DARABONBA_PTR_FROM_JSON(SlaTime, slaTime_);
      };
      Traces() = default ;
      Traces(const Traces &) = default ;
      Traces(Traces &&) = default ;
      Traces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Traces() = default ;
      Traces& operator=(const Traces &) = default ;
      Traces& operator=(Traces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->group_ == nullptr && this->instanceSize_ == nullptr && this->nodeName_ == nullptr && this->pushTime_ == nullptr && this->pushTimeAll_ == nullptr
        && this->pushTimeNetwork_ == nullptr && this->serverName_ == nullptr && this->slaTime_ == nullptr; };
      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Traces& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Traces& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // instanceSize Field Functions 
      bool hasInstanceSize() const { return this->instanceSize_ != nullptr;};
      void deleteInstanceSize() { this->instanceSize_ = nullptr;};
      inline string getInstanceSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSize_, "") };
      inline Traces& setInstanceSize(string instanceSize) { DARABONBA_PTR_SET_VALUE(instanceSize_, instanceSize) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Traces& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // pushTime Field Functions 
      bool hasPushTime() const { return this->pushTime_ != nullptr;};
      void deletePushTime() { this->pushTime_ = nullptr;};
      inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
      inline Traces& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


      // pushTimeAll Field Functions 
      bool hasPushTimeAll() const { return this->pushTimeAll_ != nullptr;};
      void deletePushTimeAll() { this->pushTimeAll_ = nullptr;};
      inline string getPushTimeAll() const { DARABONBA_PTR_GET_DEFAULT(pushTimeAll_, "") };
      inline Traces& setPushTimeAll(string pushTimeAll) { DARABONBA_PTR_SET_VALUE(pushTimeAll_, pushTimeAll) };


      // pushTimeNetwork Field Functions 
      bool hasPushTimeNetwork() const { return this->pushTimeNetwork_ != nullptr;};
      void deletePushTimeNetwork() { this->pushTimeNetwork_ = nullptr;};
      inline string getPushTimeNetwork() const { DARABONBA_PTR_GET_DEFAULT(pushTimeNetwork_, "") };
      inline Traces& setPushTimeNetwork(string pushTimeNetwork) { DARABONBA_PTR_SET_VALUE(pushTimeNetwork_, pushTimeNetwork) };


      // serverName Field Functions 
      bool hasServerName() const { return this->serverName_ != nullptr;};
      void deleteServerName() { this->serverName_ = nullptr;};
      inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
      inline Traces& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


      // slaTime Field Functions 
      bool hasSlaTime() const { return this->slaTime_ != nullptr;};
      void deleteSlaTime() { this->slaTime_ = nullptr;};
      inline string getSlaTime() const { DARABONBA_PTR_GET_DEFAULT(slaTime_, "") };
      inline Traces& setSlaTime(string slaTime) { DARABONBA_PTR_SET_VALUE(slaTime_, slaTime) };


    protected:
      // The IP address of the client.
      shared_ptr<string> clientIp_ {};
      // The group.
      shared_ptr<string> group_ {};
      // The number of instances.
      shared_ptr<string> instanceSize_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The push time.
      shared_ptr<string> pushTime_ {};
      // The total push time.
      shared_ptr<string> pushTimeAll_ {};
      // The push time for the network.
      shared_ptr<string> pushTimeNetwork_ {};
      // The name of the service.
      shared_ptr<string> serverName_ {};
      // The duration that is specified in the service-level agreement (SLA).
      shared_ptr<string> slaTime_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr && this->traces_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNamingTrackResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListNamingTrackResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNamingTrackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListNamingTrackResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListNamingTrackResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamingTrackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNamingTrackResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNamingTrackResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // traces Field Functions 
    bool hasTraces() const { return this->traces_ != nullptr;};
    void deleteTraces() { this->traces_ = nullptr;};
    inline const vector<ListNamingTrackResponseBody::Traces> & getTraces() const { DARABONBA_PTR_GET_CONST(traces_, vector<ListNamingTrackResponseBody::Traces>) };
    inline vector<ListNamingTrackResponseBody::Traces> getTraces() { DARABONBA_PTR_GET(traces_, vector<ListNamingTrackResponseBody::Traces>) };
    inline ListNamingTrackResponseBody& setTraces(const vector<ListNamingTrackResponseBody::Traces> & traces) { DARABONBA_PTR_SET_VALUE(traces_, traces) };
    inline ListNamingTrackResponseBody& setTraces(vector<ListNamingTrackResponseBody::Traces> && traces) { DARABONBA_PTR_SET_RVALUE(traces_, traces) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int64_t> totalCount_ {};
    // The data information.
    shared_ptr<vector<ListNamingTrackResponseBody::Traces>> traces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
