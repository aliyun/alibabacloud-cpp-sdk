// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetListenerHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerHealthStatus, listenerHealthStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerHealthStatus, listenerHealthStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetListenerHealthStatusResponseBody() = default ;
    GetListenerHealthStatusResponseBody(const GetListenerHealthStatusResponseBody &) = default ;
    GetListenerHealthStatusResponseBody(GetListenerHealthStatusResponseBody &&) = default ;
    GetListenerHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBody() = default ;
    GetListenerHealthStatusResponseBody& operator=(const GetListenerHealthStatusResponseBody &) = default ;
    GetListenerHealthStatusResponseBody& operator=(GetListenerHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListenerHealthStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListenerHealthStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
        DARABONBA_PTR_TO_JSON(ServerGroupInfos, serverGroupInfos_);
      };
      friend void from_json(const Darabonba::Json& j, ListenerHealthStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
        DARABONBA_PTR_FROM_JSON(ServerGroupInfos, serverGroupInfos_);
      };
      ListenerHealthStatus() = default ;
      ListenerHealthStatus(const ListenerHealthStatus &) = default ;
      ListenerHealthStatus(ListenerHealthStatus &&) = default ;
      ListenerHealthStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListenerHealthStatus() = default ;
      ListenerHealthStatus& operator=(const ListenerHealthStatus &) = default ;
      ListenerHealthStatus& operator=(ListenerHealthStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServerGroupInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServerGroupInfos& obj) { 
          DARABONBA_PTR_TO_JSON(HeathCheckEnabled, heathCheckEnabled_);
          DARABONBA_PTR_TO_JSON(NonNormalServers, nonNormalServers_);
          DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, ServerGroupInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(HeathCheckEnabled, heathCheckEnabled_);
          DARABONBA_PTR_FROM_JSON(NonNormalServers, nonNormalServers_);
          DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
        };
        ServerGroupInfos() = default ;
        ServerGroupInfos(const ServerGroupInfos &) = default ;
        ServerGroupInfos(ServerGroupInfos &&) = default ;
        ServerGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServerGroupInfos() = default ;
        ServerGroupInfos& operator=(const ServerGroupInfos &) = default ;
        ServerGroupInfos& operator=(ServerGroupInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NonNormalServers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NonNormalServers& obj) { 
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Reason, reason_);
            DARABONBA_PTR_TO_JSON(ServerId, serverId_);
            DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, NonNormalServers& obj) { 
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Reason, reason_);
            DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
            DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          NonNormalServers() = default ;
          NonNormalServers(const NonNormalServers &) = default ;
          NonNormalServers(NonNormalServers &&) = default ;
          NonNormalServers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NonNormalServers() = default ;
          NonNormalServers& operator=(const NonNormalServers &) = default ;
          NonNormalServers& operator=(NonNormalServers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Reason : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Reason& obj) { 
              DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
            };
            friend void from_json(const Darabonba::Json& j, Reason& obj) { 
              DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
            };
            Reason() = default ;
            Reason(const Reason &) = default ;
            Reason(Reason &&) = default ;
            Reason(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Reason() = default ;
            Reason& operator=(const Reason &) = default ;
            Reason& operator=(Reason &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->reasonCode_ == nullptr; };
            // reasonCode Field Functions 
            bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
            void deleteReasonCode() { this->reasonCode_ = nullptr;};
            inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
            inline Reason& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


          protected:
            // The reason why the **status** is abnormal. Valid values:
            // 
            // *   **CONNECT_TIMEOUT**: The NLB instance failed to connect to the backend server within the specified period of time.
            // *   **CONNECT_FAILED**: The NLB instance failed to connect to the backend server.
            // *   **RECV_RESPONSE_TIMEOUT**: The NLB instance failed to receive a response from the backend server within the specified period of time.
            // *   **CONNECT_INTERRUPT**: The connection between the health check and the backend servers was interrupted.
            // *   **HTTP_CODE_NOT_MATCH**: The HTTP status code from the backend servers was not the expected one.
            // *   **HTTP_INVALID_HEADER**: The format of the response from the backend servers is invalid.
            shared_ptr<string> reasonCode_ {};
          };

          virtual bool empty() const override { return this->port_ == nullptr
        && this->reason_ == nullptr && this->serverId_ == nullptr && this->serverIp_ == nullptr && this->status_ == nullptr; };
          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline NonNormalServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline const NonNormalServers::Reason & getReason() const { DARABONBA_PTR_GET_CONST(reason_, NonNormalServers::Reason) };
          inline NonNormalServers::Reason getReason() { DARABONBA_PTR_GET(reason_, NonNormalServers::Reason) };
          inline NonNormalServers& setReason(const NonNormalServers::Reason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
          inline NonNormalServers& setReason(NonNormalServers::Reason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


          // serverId Field Functions 
          bool hasServerId() const { return this->serverId_ != nullptr;};
          void deleteServerId() { this->serverId_ = nullptr;};
          inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
          inline NonNormalServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


          // serverIp Field Functions 
          bool hasServerIp() const { return this->serverIp_ != nullptr;};
          void deleteServerIp() { this->serverIp_ = nullptr;};
          inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
          inline NonNormalServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline NonNormalServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The backend port.
          shared_ptr<int32_t> port_ {};
          // The cause of the health check failure.
          shared_ptr<NonNormalServers::Reason> reason_ {};
          // The ID of the backend server.
          shared_ptr<string> serverId_ {};
          // The IP address of the backend server.
          shared_ptr<string> serverIp_ {};
          // The health check status. Valid values:
          // 
          // *   **Initial**: indicates that health checks are configured for the NLB instance, but no data was found.
          // *   **Unhealthy**: indicates that the backend server consecutively fails health checks.
          // *   **Unavailable**: indicates that health checks are disabled.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->heathCheckEnabled_ == nullptr
        && this->nonNormalServers_ == nullptr && this->serverGroupId_ == nullptr; };
        // heathCheckEnabled Field Functions 
        bool hasHeathCheckEnabled() const { return this->heathCheckEnabled_ != nullptr;};
        void deleteHeathCheckEnabled() { this->heathCheckEnabled_ = nullptr;};
        inline bool getHeathCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(heathCheckEnabled_, false) };
        inline ServerGroupInfos& setHeathCheckEnabled(bool heathCheckEnabled) { DARABONBA_PTR_SET_VALUE(heathCheckEnabled_, heathCheckEnabled) };


        // nonNormalServers Field Functions 
        bool hasNonNormalServers() const { return this->nonNormalServers_ != nullptr;};
        void deleteNonNormalServers() { this->nonNormalServers_ = nullptr;};
        inline const vector<ServerGroupInfos::NonNormalServers> & getNonNormalServers() const { DARABONBA_PTR_GET_CONST(nonNormalServers_, vector<ServerGroupInfos::NonNormalServers>) };
        inline vector<ServerGroupInfos::NonNormalServers> getNonNormalServers() { DARABONBA_PTR_GET(nonNormalServers_, vector<ServerGroupInfos::NonNormalServers>) };
        inline ServerGroupInfos& setNonNormalServers(const vector<ServerGroupInfos::NonNormalServers> & nonNormalServers) { DARABONBA_PTR_SET_VALUE(nonNormalServers_, nonNormalServers) };
        inline ServerGroupInfos& setNonNormalServers(vector<ServerGroupInfos::NonNormalServers> && nonNormalServers) { DARABONBA_PTR_SET_RVALUE(nonNormalServers_, nonNormalServers) };


        // serverGroupId Field Functions 
        bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
        void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
        inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
        inline ServerGroupInfos& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


      protected:
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **true**: enabled
        // *   **false**: disabled
        shared_ptr<bool> heathCheckEnabled_ {};
        // A list of unhealthy backend servers.
        shared_ptr<vector<ServerGroupInfos::NonNormalServers>> nonNormalServers_ {};
        // The ID of the server group.
        shared_ptr<string> serverGroupId_ {};
      };

      virtual bool empty() const override { return this->listenerId_ == nullptr
        && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->serverGroupInfos_ == nullptr; };
      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline ListenerHealthStatus& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
      inline ListenerHealthStatus& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      // listenerProtocol Field Functions 
      bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
      void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
      inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
      inline ListenerHealthStatus& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


      // serverGroupInfos Field Functions 
      bool hasServerGroupInfos() const { return this->serverGroupInfos_ != nullptr;};
      void deleteServerGroupInfos() { this->serverGroupInfos_ = nullptr;};
      inline const vector<ListenerHealthStatus::ServerGroupInfos> & getServerGroupInfos() const { DARABONBA_PTR_GET_CONST(serverGroupInfos_, vector<ListenerHealthStatus::ServerGroupInfos>) };
      inline vector<ListenerHealthStatus::ServerGroupInfos> getServerGroupInfos() { DARABONBA_PTR_GET(serverGroupInfos_, vector<ListenerHealthStatus::ServerGroupInfos>) };
      inline ListenerHealthStatus& setServerGroupInfos(const vector<ListenerHealthStatus::ServerGroupInfos> & serverGroupInfos) { DARABONBA_PTR_SET_VALUE(serverGroupInfos_, serverGroupInfos) };
      inline ListenerHealthStatus& setServerGroupInfos(vector<ListenerHealthStatus::ServerGroupInfos> && serverGroupInfos) { DARABONBA_PTR_SET_RVALUE(serverGroupInfos_, serverGroupInfos) };


    protected:
      // The ID of the listener of the NLB instance.
      shared_ptr<string> listenerId_ {};
      // The listening port.
      shared_ptr<int32_t> listenerPort_ {};
      // The listening protocol. Valid values: **TCP**, **UDP**, and **TCPSSL**.
      shared_ptr<string> listenerProtocol_ {};
      // The information about the server groups.
      shared_ptr<vector<ListenerHealthStatus::ServerGroupInfos>> serverGroupInfos_ {};
    };

    virtual bool empty() const override { return this->listenerHealthStatus_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // listenerHealthStatus Field Functions 
    bool hasListenerHealthStatus() const { return this->listenerHealthStatus_ != nullptr;};
    void deleteListenerHealthStatus() { this->listenerHealthStatus_ = nullptr;};
    inline const vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus> & getListenerHealthStatus() const { DARABONBA_PTR_GET_CONST(listenerHealthStatus_, vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus>) };
    inline vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus> getListenerHealthStatus() { DARABONBA_PTR_GET(listenerHealthStatus_, vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus>) };
    inline GetListenerHealthStatusResponseBody& setListenerHealthStatus(const vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus> & listenerHealthStatus) { DARABONBA_PTR_SET_VALUE(listenerHealthStatus_, listenerHealthStatus) };
    inline GetListenerHealthStatusResponseBody& setListenerHealthStatus(vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus> && listenerHealthStatus) { DARABONBA_PTR_SET_RVALUE(listenerHealthStatus_, listenerHealthStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetListenerHealthStatusResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetListenerHealthStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetListenerHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetListenerHealthStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The health check status of the server group of the listener.
    shared_ptr<vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus>> listenerHealthStatus_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used for the next query. Valid values:
    // 
    // - If **NextToken** is empty, it indicates that no next query is to be sent.
    // - If a value of **NextToken** is returned, the value is the token used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
