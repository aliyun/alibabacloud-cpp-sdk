// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSRESPONSEBODY_HPP_
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
  class ListServerGroupServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Servers, servers_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Servers, servers_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServerGroupServersResponseBody() = default ;
    ListServerGroupServersResponseBody(const ListServerGroupServersResponseBody &) = default ;
    ListServerGroupServersResponseBody(ListServerGroupServersResponseBody &&) = default ;
    ListServerGroupServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupServersResponseBody() = default ;
    ListServerGroupServersResponseBody& operator=(const ListServerGroupServersResponseBody &) = default ;
    ListServerGroupServersResponseBody& operator=(ListServerGroupServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Servers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Servers& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Servers& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
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
      virtual bool empty() const override { return this->port_ == nullptr
        && this->serverGroupId_ == nullptr && this->serverId_ == nullptr && this->serverIp_ == nullptr && this->serverType_ == nullptr && this->status_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Servers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // serverGroupId Field Functions 
      bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
      void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
      inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
      inline Servers& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


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


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline Servers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Servers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The backend server port. Valid values:
      // 
      // *   **6081**
      shared_ptr<int32_t> port_ {};
      // The server group ID.
      shared_ptr<string> serverGroupId_ {};
      // The backend server ID.
      shared_ptr<string> serverId_ {};
      // The IP address of the backend server.
      shared_ptr<string> serverIp_ {};
      // The type of the backend server. Valid values:
      // 
      // *   **Ecs**: Elastic Compute Service (ECS) instance
      // *   **Eni**: elastic network interface (ENI)
      // *   **Eci**: elastic container instance
      // *   **Ip**: IP address
      shared_ptr<string> serverType_ {};
      // Indicates the status of the backend server. Valid values:
      // 
      // *   **Adding**: The backend server is being added.
      // *   **Available**: The backend server is available.
      // *   **Draining**: The backend server is in connection draining.
      // *   **Removing**: The backend server is being removed.
      // *   **Replacing**: The backend server is being replaced.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->servers_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerGroupServersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerGroupServersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServerGroupServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline const vector<ListServerGroupServersResponseBody::Servers> & getServers() const { DARABONBA_PTR_GET_CONST(servers_, vector<ListServerGroupServersResponseBody::Servers>) };
    inline vector<ListServerGroupServersResponseBody::Servers> getServers() { DARABONBA_PTR_GET(servers_, vector<ListServerGroupServersResponseBody::Servers>) };
    inline ListServerGroupServersResponseBody& setServers(const vector<ListServerGroupServersResponseBody::Servers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
    inline ListServerGroupServersResponseBody& setServers(vector<ListServerGroupServersResponseBody::Servers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServerGroupServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page.
    // 
    // Valid values: 1 to 1000.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If NextToken is empty, no next page exists.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The backend servers.
    shared_ptr<vector<ListServerGroupServersResponseBody::Servers>> servers_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
