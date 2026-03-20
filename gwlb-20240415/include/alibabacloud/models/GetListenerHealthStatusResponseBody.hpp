// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
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
        DARABONBA_PTR_TO_JSON(ServerGroupInfos, serverGroupInfos_);
      };
      friend void from_json(const Darabonba::Json& j, ListenerHealthStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
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
          DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
          DARABONBA_PTR_TO_JSON(Servers, servers_);
        };
        friend void from_json(const Darabonba::Json& j, ServerGroupInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
          DARABONBA_PTR_FROM_JSON(Servers, servers_);
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
        class Servers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Servers& obj) { 
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Reason, reason_);
            DARABONBA_PTR_TO_JSON(ServerId, serverId_);
            DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Servers& obj) { 
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Reason, reason_);
            DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
            DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Servers() = default ;
          Servers(const Servers &) = default ;
          Servers(Servers &&) = default ;
          Servers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Servers() = default ;
          Servers& operator=(const Servers &) = default ;
          Servers& operator=(Servers &&) = default ;
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
            // The reason why **Status** indicates an unhealthy status. Valid values:
            // 
            // *   **CONNECT_TIMEOUT**: The GWLB instance failed to connect to the backend server within the specified period of time.
            // *   **CONNECT_FAILED**: The GWLB instance failed to connect to the backend server.
            // *   **RECV_RESPONSE_TIMEOUT**: The GWLB instance failed to receive a response from the backend server within the specified period of time.
            // *   **CONNECT_INTERRUPT**: The connection between the health check and the backend server was interrupted.
            // *   **HTTP_CODE_NOT_MATCH**: The HTTP status code from the backend server is not the expected one.
            // *   **HTTP_INVALID_HEADER**: The format of the response from the backend servers is invalid.
            shared_ptr<string> reasonCode_ {};
          };

          virtual bool empty() const override { return this->port_ == nullptr
        && this->reason_ == nullptr && this->serverId_ == nullptr && this->serverIp_ == nullptr && this->status_ == nullptr; };
          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline Servers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline const Servers::Reason & getReason() const { DARABONBA_PTR_GET_CONST(reason_, Servers::Reason) };
          inline Servers::Reason getReason() { DARABONBA_PTR_GET(reason_, Servers::Reason) };
          inline Servers& setReason(const Servers::Reason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
          inline Servers& setReason(Servers::Reason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


          // serverId Field Functions 
          bool hasServerId() const { return this->serverId_ != nullptr;};
          void deleteServerId() { this->serverId_ = nullptr;};
          inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
          inline Servers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


          // serverIp Field Functions 
          bool hasServerIp() const { return this->serverIp_ != nullptr;};
          void deleteServerIp() { this->serverIp_ = nullptr;};
          inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
          inline Servers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Servers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The backend port.
          shared_ptr<int32_t> port_ {};
          // The reason why **Status** indicates an unhealthy status.
          shared_ptr<Servers::Reason> reason_ {};
          // The backend server ID.
          shared_ptr<string> serverId_ {};
          // The IP address of the server.
          shared_ptr<string> serverIp_ {};
          // The health status of the backend server. Valid values:
          // 
          // *   **Initial**: Health checks are configured for the GWLB instance, but no data is found.
          // *   **Unhealthy**: The backend server consecutively fails health checks.
          // *   **Unused**: The backend server is not in use.
          // *   **Unavailable**: Health checks are disabled.
          // *   **Healthy**: The backend server is healthy.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->healthCheckEnabled_ == nullptr
        && this->serverGroupId_ == nullptr && this->servers_ == nullptr; };
        // healthCheckEnabled Field Functions 
        bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
        void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
        inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
        inline ServerGroupInfos& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


        // serverGroupId Field Functions 
        bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
        void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
        inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
        inline ServerGroupInfos& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


        // servers Field Functions 
        bool hasServers() const { return this->servers_ != nullptr;};
        void deleteServers() { this->servers_ = nullptr;};
        inline const vector<ServerGroupInfos::Servers> & getServers() const { DARABONBA_PTR_GET_CONST(servers_, vector<ServerGroupInfos::Servers>) };
        inline vector<ServerGroupInfos::Servers> getServers() { DARABONBA_PTR_GET(servers_, vector<ServerGroupInfos::Servers>) };
        inline ServerGroupInfos& setServers(const vector<ServerGroupInfos::Servers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
        inline ServerGroupInfos& setServers(vector<ServerGroupInfos::Servers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


      protected:
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> healthCheckEnabled_ {};
        // The server group ID.
        shared_ptr<string> serverGroupId_ {};
        // The backend servers.
        shared_ptr<vector<ServerGroupInfos::Servers>> servers_ {};
      };

      virtual bool empty() const override { return this->listenerId_ == nullptr
        && this->serverGroupInfos_ == nullptr; };
      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline ListenerHealthStatus& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // serverGroupInfos Field Functions 
      bool hasServerGroupInfos() const { return this->serverGroupInfos_ != nullptr;};
      void deleteServerGroupInfos() { this->serverGroupInfos_ = nullptr;};
      inline const vector<ListenerHealthStatus::ServerGroupInfos> & getServerGroupInfos() const { DARABONBA_PTR_GET_CONST(serverGroupInfos_, vector<ListenerHealthStatus::ServerGroupInfos>) };
      inline vector<ListenerHealthStatus::ServerGroupInfos> getServerGroupInfos() { DARABONBA_PTR_GET(serverGroupInfos_, vector<ListenerHealthStatus::ServerGroupInfos>) };
      inline ListenerHealthStatus& setServerGroupInfos(const vector<ListenerHealthStatus::ServerGroupInfos> & serverGroupInfos) { DARABONBA_PTR_SET_VALUE(serverGroupInfos_, serverGroupInfos) };
      inline ListenerHealthStatus& setServerGroupInfos(vector<ListenerHealthStatus::ServerGroupInfos> && serverGroupInfos) { DARABONBA_PTR_SET_RVALUE(serverGroupInfos_, serverGroupInfos) };


    protected:
      // The listener ID.
      shared_ptr<string> listenerId_ {};
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
    // The health check status of the server groups that are associated with the listener.
    shared_ptr<vector<GetListenerHealthStatusResponseBody::ListenerHealthStatus>> listenerHealthStatus_ {};
    // The number of entries per page. Valid values: 1 to 1000. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
