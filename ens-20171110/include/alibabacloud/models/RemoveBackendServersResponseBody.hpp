// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveBackendServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveBackendServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveBackendServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveBackendServersResponseBody() = default ;
    RemoveBackendServersResponseBody(const RemoveBackendServersResponseBody &) = default ;
    RemoveBackendServersResponseBody(RemoveBackendServersResponseBody &&) = default ;
    RemoveBackendServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveBackendServersResponseBody() = default ;
    RemoveBackendServersResponseBody& operator=(const RemoveBackendServersResponseBody &) = default ;
    RemoveBackendServersResponseBody& operator=(RemoveBackendServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
      };
      friend void from_json(const Darabonba::Json& j, BackendServers& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
      };
      BackendServers() = default ;
      BackendServers(const BackendServers &) = default ;
      BackendServers(BackendServers &&) = default ;
      BackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendServers() = default ;
      BackendServers& operator=(const BackendServers &) = default ;
      BackendServers& operator=(BackendServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackendServer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendServer& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ServerId, serverId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, BackendServer& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        BackendServer() = default ;
        BackendServer(const BackendServer &) = default ;
        BackendServer(BackendServer &&) = default ;
        BackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendServer() = default ;
        BackendServer& operator=(const BackendServer &) = default ;
        BackendServer& operator=(BackendServer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline BackendServer& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline BackendServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // serverId Field Functions 
        bool hasServerId() const { return this->serverId_ != nullptr;};
        void deleteServerId() { this->serverId_ = nullptr;};
        inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
        inline BackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BackendServer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline BackendServer& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The IP address of the backend server.
        shared_ptr<string> ip_ {};
        // The backend port that is used by the ELB instance.
        shared_ptr<int32_t> port_ {};
        // The instance ID of the backend server.
        shared_ptr<string> serverId_ {};
        // The type of the backend server. Valid values:
        // 
        // *   **ens**: an ENS instance.
        // *   **eni**: an ENI.
        shared_ptr<string> type_ {};
        // The weight of the backend server.
        // 
        // >  The value 0 indicates that requests are not forwarded to the backend server.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->backendServer_ == nullptr; };
      // backendServer Field Functions 
      bool hasBackendServer() const { return this->backendServer_ != nullptr;};
      void deleteBackendServer() { this->backendServer_ = nullptr;};
      inline const vector<BackendServers::BackendServer> & getBackendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<BackendServers::BackendServer>) };
      inline vector<BackendServers::BackendServer> getBackendServer() { DARABONBA_PTR_GET(backendServer_, vector<BackendServers::BackendServer>) };
      inline BackendServers& setBackendServer(const vector<BackendServers::BackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
      inline BackendServers& setBackendServer(vector<BackendServers::BackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


    protected:
      shared_ptr<vector<BackendServers::BackendServer>> backendServer_ {};
    };

    virtual bool empty() const override { return this->backendServers_ == nullptr
        && this->requestId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const RemoveBackendServersResponseBody::BackendServers & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, RemoveBackendServersResponseBody::BackendServers) };
    inline RemoveBackendServersResponseBody::BackendServers getBackendServers() { DARABONBA_PTR_GET(backendServers_, RemoveBackendServersResponseBody::BackendServers) };
    inline RemoveBackendServersResponseBody& setBackendServers(const RemoveBackendServersResponseBody::BackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline RemoveBackendServersResponseBody& setBackendServers(RemoveBackendServersResponseBody::BackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveBackendServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of backend servers that you want to add to the SLB instance.
    shared_ptr<RemoveBackendServersResponseBody::BackendServers> backendServers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
