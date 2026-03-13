// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20130221
{
namespace Models
{
  class DescribeBackendServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackendServersResponseBody() = default ;
    DescribeBackendServersResponseBody(const DescribeBackendServersResponseBody &) = default ;
    DescribeBackendServersResponseBody(DescribeBackendServersResponseBody &&) = default ;
    DescribeBackendServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendServersResponseBody() = default ;
    DescribeBackendServersResponseBody& operator=(const DescribeBackendServersResponseBody &) = default ;
    DescribeBackendServersResponseBody& operator=(DescribeBackendServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(Listener, listener_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(Listener, listener_);
      };
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Listener : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Listener& obj) { 
          DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
        };
        friend void from_json(const Darabonba::Json& j, Listener& obj) { 
          DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
        };
        Listener() = default ;
        Listener(const Listener &) = default ;
        Listener(Listener &&) = default ;
        Listener(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Listener() = default ;
        Listener& operator=(const Listener &) = default ;
        Listener& operator=(Listener &&) = default ;
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
              DARABONBA_PTR_TO_JSON(ServerHealthStatus, serverHealthStatus_);
              DARABONBA_PTR_TO_JSON(ServerId, serverId_);
            };
            friend void from_json(const Darabonba::Json& j, BackendServer& obj) { 
              DARABONBA_PTR_FROM_JSON(ServerHealthStatus, serverHealthStatus_);
              DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
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
            virtual bool empty() const override { return this->serverHealthStatus_ == nullptr
        && this->serverId_ == nullptr; };
            // serverHealthStatus Field Functions 
            bool hasServerHealthStatus() const { return this->serverHealthStatus_ != nullptr;};
            void deleteServerHealthStatus() { this->serverHealthStatus_ = nullptr;};
            inline string getServerHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(serverHealthStatus_, "") };
            inline BackendServer& setServerHealthStatus(string serverHealthStatus) { DARABONBA_PTR_SET_VALUE(serverHealthStatus_, serverHealthStatus) };


            // serverId Field Functions 
            bool hasServerId() const { return this->serverId_ != nullptr;};
            void deleteServerId() { this->serverId_ = nullptr;};
            inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
            inline BackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


          protected:
            shared_ptr<string> serverHealthStatus_ {};
            shared_ptr<string> serverId_ {};
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
        && this->listenerPort_ == nullptr; };
        // backendServers Field Functions 
        bool hasBackendServers() const { return this->backendServers_ != nullptr;};
        void deleteBackendServers() { this->backendServers_ = nullptr;};
        inline const Listener::BackendServers & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, Listener::BackendServers) };
        inline Listener::BackendServers getBackendServers() { DARABONBA_PTR_GET(backendServers_, Listener::BackendServers) };
        inline Listener& setBackendServers(const Listener::BackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
        inline Listener& setBackendServers(Listener::BackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
        inline Listener& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      protected:
        shared_ptr<Listener::BackendServers> backendServers_ {};
        shared_ptr<int32_t> listenerPort_ {};
      };

      virtual bool empty() const override { return this->listener_ == nullptr; };
      // listener Field Functions 
      bool hasListener() const { return this->listener_ != nullptr;};
      void deleteListener() { this->listener_ = nullptr;};
      inline const vector<Listeners::Listener> & getListener() const { DARABONBA_PTR_GET_CONST(listener_, vector<Listeners::Listener>) };
      inline vector<Listeners::Listener> getListener() { DARABONBA_PTR_GET(listener_, vector<Listeners::Listener>) };
      inline Listeners& setListener(const vector<Listeners::Listener> & listener) { DARABONBA_PTR_SET_VALUE(listener_, listener) };
      inline Listeners& setListener(vector<Listeners::Listener> && listener) { DARABONBA_PTR_SET_RVALUE(listener_, listener) };


    protected:
      shared_ptr<vector<Listeners::Listener>> listener_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->requestId_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const DescribeBackendServersResponseBody::Listeners & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, DescribeBackendServersResponseBody::Listeners) };
    inline DescribeBackendServersResponseBody::Listeners getListeners() { DARABONBA_PTR_GET(listeners_, DescribeBackendServersResponseBody::Listeners) };
    inline DescribeBackendServersResponseBody& setListeners(const DescribeBackendServersResponseBody::Listeners & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeBackendServersResponseBody& setListeners(DescribeBackendServersResponseBody::Listeners && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackendServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeBackendServersResponseBody::Listeners> listeners_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20130221
#endif
