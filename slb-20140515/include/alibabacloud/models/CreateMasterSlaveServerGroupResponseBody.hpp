// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPRESPONSEBODY_HPP_
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
  class CreateMasterSlaveServerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMasterSlaveServerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMasterSlaveServerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMasterSlaveServerGroupResponseBody() = default ;
    CreateMasterSlaveServerGroupResponseBody(const CreateMasterSlaveServerGroupResponseBody &) = default ;
    CreateMasterSlaveServerGroupResponseBody(CreateMasterSlaveServerGroupResponseBody &&) = default ;
    CreateMasterSlaveServerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMasterSlaveServerGroupResponseBody() = default ;
    CreateMasterSlaveServerGroupResponseBody& operator=(const CreateMasterSlaveServerGroupResponseBody &) = default ;
    CreateMasterSlaveServerGroupResponseBody& operator=(CreateMasterSlaveServerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MasterSlaveBackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MasterSlaveBackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
      };
      friend void from_json(const Darabonba::Json& j, MasterSlaveBackendServers& obj) { 
        DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
      };
      MasterSlaveBackendServers() = default ;
      MasterSlaveBackendServers(const MasterSlaveBackendServers &) = default ;
      MasterSlaveBackendServers(MasterSlaveBackendServers &&) = default ;
      MasterSlaveBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MasterSlaveBackendServers() = default ;
      MasterSlaveBackendServers& operator=(const MasterSlaveBackendServers &) = default ;
      MasterSlaveBackendServers& operator=(MasterSlaveBackendServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MasterSlaveBackendServer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterSlaveBackendServer& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ServerId, serverId_);
          DARABONBA_PTR_TO_JSON(ServerType, serverType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, MasterSlaveBackendServer& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
          DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        MasterSlaveBackendServer() = default ;
        MasterSlaveBackendServer(const MasterSlaveBackendServer &) = default ;
        MasterSlaveBackendServer(MasterSlaveBackendServer &&) = default ;
        MasterSlaveBackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterSlaveBackendServer() = default ;
        MasterSlaveBackendServer& operator=(const MasterSlaveBackendServer &) = default ;
        MasterSlaveBackendServer& operator=(MasterSlaveBackendServer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->serverType_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MasterSlaveBackendServer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline MasterSlaveBackendServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // serverId Field Functions 
        bool hasServerId() const { return this->serverId_ != nullptr;};
        void deleteServerId() { this->serverId_ = nullptr;};
        inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
        inline MasterSlaveBackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


        // serverType Field Functions 
        bool hasServerType() const { return this->serverType_ != nullptr;};
        void deleteServerType() { this->serverType_ = nullptr;};
        inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
        inline MasterSlaveBackendServer& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MasterSlaveBackendServer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline MasterSlaveBackendServer& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> serverId_ {};
        shared_ptr<string> serverType_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->masterSlaveBackendServer_ == nullptr; };
      // masterSlaveBackendServer Field Functions 
      bool hasMasterSlaveBackendServer() const { return this->masterSlaveBackendServer_ != nullptr;};
      void deleteMasterSlaveBackendServer() { this->masterSlaveBackendServer_ = nullptr;};
      inline const vector<MasterSlaveBackendServers::MasterSlaveBackendServer> & getMasterSlaveBackendServer() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServer_, vector<MasterSlaveBackendServers::MasterSlaveBackendServer>) };
      inline vector<MasterSlaveBackendServers::MasterSlaveBackendServer> getMasterSlaveBackendServer() { DARABONBA_PTR_GET(masterSlaveBackendServer_, vector<MasterSlaveBackendServers::MasterSlaveBackendServer>) };
      inline MasterSlaveBackendServers& setMasterSlaveBackendServer(const vector<MasterSlaveBackendServers::MasterSlaveBackendServer> & masterSlaveBackendServer) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };
      inline MasterSlaveBackendServers& setMasterSlaveBackendServer(vector<MasterSlaveBackendServers::MasterSlaveBackendServer> && masterSlaveBackendServer) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };


    protected:
      shared_ptr<vector<MasterSlaveBackendServers::MasterSlaveBackendServer>> masterSlaveBackendServer_ {};
    };

    virtual bool empty() const override { return this->masterSlaveBackendServers_ == nullptr
        && this->masterSlaveServerGroupId_ == nullptr && this->requestId_ == nullptr; };
    // masterSlaveBackendServers Field Functions 
    bool hasMasterSlaveBackendServers() const { return this->masterSlaveBackendServers_ != nullptr;};
    void deleteMasterSlaveBackendServers() { this->masterSlaveBackendServers_ = nullptr;};
    inline const CreateMasterSlaveServerGroupResponseBody::MasterSlaveBackendServers & getMasterSlaveBackendServers() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServers_, CreateMasterSlaveServerGroupResponseBody::MasterSlaveBackendServers) };
    inline CreateMasterSlaveServerGroupResponseBody::MasterSlaveBackendServers getMasterSlaveBackendServers() { DARABONBA_PTR_GET(masterSlaveBackendServers_, CreateMasterSlaveServerGroupResponseBody::MasterSlaveBackendServers) };
    inline CreateMasterSlaveServerGroupResponseBody& setMasterSlaveBackendServers(const CreateMasterSlaveServerGroupResponseBody::MasterSlaveBackendServers & masterSlaveBackendServers) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };
    inline CreateMasterSlaveServerGroupResponseBody& setMasterSlaveBackendServers(CreateMasterSlaveServerGroupResponseBody::MasterSlaveBackendServers && masterSlaveBackendServers) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string getMasterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline CreateMasterSlaveServerGroupResponseBody& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMasterSlaveServerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateMasterSlaveServerGroupResponseBody::MasterSlaveBackendServers> masterSlaveBackendServers_ {};
    // The ID of the active/standby server group.
    shared_ptr<string> masterSlaveServerGroupId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
