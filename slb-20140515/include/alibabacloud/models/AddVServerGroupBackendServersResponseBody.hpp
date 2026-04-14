// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVSERVERGROUPBACKENDSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDVSERVERGROUPBACKENDSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class AddVServerGroupBackendServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVServerGroupBackendServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddVServerGroupBackendServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    AddVServerGroupBackendServersResponseBody() = default ;
    AddVServerGroupBackendServersResponseBody(const AddVServerGroupBackendServersResponseBody &) = default ;
    AddVServerGroupBackendServersResponseBody(AddVServerGroupBackendServersResponseBody &&) = default ;
    AddVServerGroupBackendServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVServerGroupBackendServersResponseBody() = default ;
    AddVServerGroupBackendServersResponseBody& operator=(const AddVServerGroupBackendServersResponseBody &) = default ;
    AddVServerGroupBackendServersResponseBody& operator=(AddVServerGroupBackendServersResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ServerId, serverId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, BackendServer& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BackendServer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> serverId_ {};
        shared_ptr<string> type_ {};
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
        && this->requestId_ == nullptr && this->VServerGroupId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const AddVServerGroupBackendServersResponseBody::BackendServers & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, AddVServerGroupBackendServersResponseBody::BackendServers) };
    inline AddVServerGroupBackendServersResponseBody::BackendServers getBackendServers() { DARABONBA_PTR_GET(backendServers_, AddVServerGroupBackendServersResponseBody::BackendServers) };
    inline AddVServerGroupBackendServersResponseBody& setBackendServers(const AddVServerGroupBackendServersResponseBody::BackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline AddVServerGroupBackendServersResponseBody& setBackendServers(AddVServerGroupBackendServersResponseBody::BackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddVServerGroupBackendServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline AddVServerGroupBackendServersResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    shared_ptr<AddVServerGroupBackendServersResponseBody::BackendServers> backendServers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the vServer group.
    shared_ptr<string> VServerGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
