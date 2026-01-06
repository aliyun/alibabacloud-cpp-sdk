// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDBInstanceTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDBInstanceTopologyResponseBody() = default ;
    GetDBInstanceTopologyResponseBody(const GetDBInstanceTopologyResponseBody &) = default ;
    GetDBInstanceTopologyResponseBody(GetDBInstanceTopologyResponseBody &&) = default ;
    GetDBInstanceTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBInstanceTopologyResponseBody() = default ;
    GetDBInstanceTopologyResponseBody& operator=(const GetDBInstanceTopologyResponseBody &) = default ;
    GetDBInstanceTopologyResponseBody& operator=(GetDBInstanceTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Connections, connections_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Connections, connections_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
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
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
          DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->dedicatedHostGroupId_ == nullptr && this->dedicatedHostId_ == nullptr && this->nodeId_ == nullptr && this->role_ == nullptr && this->zoneId_ == nullptr; };
        // DBInstanceName Field Functions 
        bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
        void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
        inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
        inline Nodes& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


        // dedicatedHostGroupId Field Functions 
        bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
        void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
        inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
        inline Nodes& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


        // dedicatedHostId Field Functions 
        bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
        void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
        inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
        inline Nodes& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Nodes& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Nodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The ID of the instance.
        shared_ptr<string> DBInstanceName_ {};
        // The ID of the dedicated cluster.
        // 
        // > : If the instance does not reside in the specified dedicated cluster, no value is returned.
        shared_ptr<string> dedicatedHostGroupId_ {};
        // The host ID of the instance in the dedicated cluster.
        // 
        // > : If the instance does not reside in the specified dedicated cluster, no value is returned.
        shared_ptr<string> dedicatedHostId_ {};
        // The ID of the instance.
        // 
        // > : The value \\*\\*-1\\*\\* is returned for an instance that does not reside in a dedicated cluster.
        shared_ptr<string> nodeId_ {};
        // The type of the node. The following result is returned:
        // 
        // *   **Master**: a primary node
        // *   **Slave**: a secondary node
        shared_ptr<string> role_ {};
        // The zone ID of the instance.
        shared_ptr<string> zoneId_ {};
      };

      class Connections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Connections& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Connections& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Connections() = default ;
        Connections(const Connections &) = default ;
        Connections(Connections &&) = default ;
        Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Connections() = default ;
        Connections& operator=(const Connections &) = default ;
        Connections& operator=(Connections &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->DBInstanceName_ == nullptr && this->netType_ == nullptr && this->zoneId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline Connections& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // DBInstanceName Field Functions 
        bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
        void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
        inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
        inline Connections& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline Connections& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Connections& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The endpoint that is used to connect to the database instance.
        shared_ptr<string> connectionString_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceName_ {};
        // The network type of the endpoint. Valid values:
        // 
        // *   **vpc**
        // *   **public**
        shared_ptr<string> netType_ {};
        // The zone ID of the instance.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->connections_ == nullptr
        && this->DBInstanceName_ == nullptr && this->nodes_ == nullptr; };
      // connections Field Functions 
      bool hasConnections() const { return this->connections_ != nullptr;};
      void deleteConnections() { this->connections_ = nullptr;};
      inline const vector<Data::Connections> & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Data::Connections>) };
      inline vector<Data::Connections> getConnections() { DARABONBA_PTR_GET(connections_, vector<Data::Connections>) };
      inline Data& setConnections(const vector<Data::Connections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
      inline Data& setConnections(vector<Data::Connections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      // The network connection information of the instance.
      shared_ptr<vector<Data::Connections>> connections_ {};
      // The instance ID.
      shared_ptr<string> DBInstanceName_ {};
      // The queried nodes.
      shared_ptr<vector<Data::Nodes>> nodes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDBInstanceTopologyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDBInstanceTopologyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDBInstanceTopologyResponseBody::Data) };
    inline GetDBInstanceTopologyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDBInstanceTopologyResponseBody::Data) };
    inline GetDBInstanceTopologyResponseBody& setData(const GetDBInstanceTopologyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDBInstanceTopologyResponseBody& setData(GetDBInstanceTopologyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDBInstanceTopologyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDBInstanceTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An internal parameter. You can ignore this parameter.
    shared_ptr<string> code_ {};
    // The details about the topology.
    shared_ptr<GetDBInstanceTopologyResponseBody::Data> data_ {};
    // An internal parameter. You can ignore this parameter.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
