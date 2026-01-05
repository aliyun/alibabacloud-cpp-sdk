// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterMigrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterMigrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DBClusterEndpointList, DBClusterEndpointList_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterReadWriteMode, DBClusterReadWriteMode_);
      DARABONBA_PTR_TO_JSON(DelayedSeconds, delayedSeconds_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(RdsEndpointList, rdsEndpointList_);
      DARABONBA_PTR_TO_JSON(RdsReadWriteMode, rdsReadWriteMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceRDSDBInstanceId, sourceRDSDBInstanceId_);
      DARABONBA_PTR_TO_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_TO_JSON(Topologies, topologies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterMigrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DBClusterEndpointList, DBClusterEndpointList_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterReadWriteMode, DBClusterReadWriteMode_);
      DARABONBA_PTR_FROM_JSON(DelayedSeconds, delayedSeconds_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(RdsEndpointList, rdsEndpointList_);
      DARABONBA_PTR_FROM_JSON(RdsReadWriteMode, rdsReadWriteMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceRDSDBInstanceId, sourceRDSDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_FROM_JSON(Topologies, topologies_);
    };
    DescribeDBClusterMigrationResponseBody() = default ;
    DescribeDBClusterMigrationResponseBody(const DescribeDBClusterMigrationResponseBody &) = default ;
    DescribeDBClusterMigrationResponseBody(DescribeDBClusterMigrationResponseBody &&) = default ;
    DescribeDBClusterMigrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterMigrationResponseBody() = default ;
    DescribeDBClusterMigrationResponseBody& operator=(const DescribeDBClusterMigrationResponseBody &) = default ;
    DescribeDBClusterMigrationResponseBody& operator=(DescribeDBClusterMigrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RdsEndpointList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RdsEndpointList& obj) { 
        DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_TO_JSON(CustinsType, custinsType_);
        DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      };
      friend void from_json(const Darabonba::Json& j, RdsEndpointList& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_FROM_JSON(CustinsType, custinsType_);
        DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      };
      RdsEndpointList() = default ;
      RdsEndpointList(const RdsEndpointList &) = default ;
      RdsEndpointList(RdsEndpointList &&) = default ;
      RdsEndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RdsEndpointList() = default ;
      RdsEndpointList& operator=(const RdsEndpointList &) = default ;
      RdsEndpointList& operator=(RdsEndpointList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddressItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressItems& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, AddressItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        AddressItems() = default ;
        AddressItems(const AddressItems &) = default ;
        AddressItems(AddressItems &&) = default ;
        AddressItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddressItems() = default ;
        AddressItems& operator=(const AddressItems &) = default ;
        AddressItems& operator=(AddressItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->IPAddress_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr && this->SSLEnabled_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline AddressItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline AddressItems& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline AddressItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline AddressItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // SSLEnabled Field Functions 
        bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
        void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
        inline string getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
        inline AddressItems& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline AddressItems& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline AddressItems& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // *   **Enabled**
        // *   **Disabled**
        shared_ptr<string> connectionString_ {};
        // The type of the source database. Valid values:
        // 
        // *   **PolarDBMySQL**: The source database is a PolarDB for MySQL database when the major version of your PolarDB cluster is upgraded.
        // *   **RDS**: The source database is an ApsaraDB RDS database when data is migrated from ApsaraDB RDS to PolarDB for MySQL.
        shared_ptr<string> IPAddress_ {};
        // The ID of the endpoint.
        shared_ptr<string> netType_ {};
        // The type of the endpoint. Valid values:
        // 
        // *   **Normal**: the standard endpoint
        // *   **ReadWriteSplitting**: the read/write splitting endpoint
        shared_ptr<string> port_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // - **Enabled**
        // - **Disabled**
        shared_ptr<string> SSLEnabled_ {};
        // The instance type.
        shared_ptr<string> VPCId_ {};
        // The IP address of the endpoint.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->addressItems_ == nullptr
        && this->custinsType_ == nullptr && this->DBEndpointId_ == nullptr && this->endpointType_ == nullptr; };
      // addressItems Field Functions 
      bool hasAddressItems() const { return this->addressItems_ != nullptr;};
      void deleteAddressItems() { this->addressItems_ = nullptr;};
      inline const vector<RdsEndpointList::AddressItems> & getAddressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<RdsEndpointList::AddressItems>) };
      inline vector<RdsEndpointList::AddressItems> getAddressItems() { DARABONBA_PTR_GET(addressItems_, vector<RdsEndpointList::AddressItems>) };
      inline RdsEndpointList& setAddressItems(const vector<RdsEndpointList::AddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
      inline RdsEndpointList& setAddressItems(vector<RdsEndpointList::AddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


      // custinsType Field Functions 
      bool hasCustinsType() const { return this->custinsType_ != nullptr;};
      void deleteCustinsType() { this->custinsType_ = nullptr;};
      inline string getCustinsType() const { DARABONBA_PTR_GET_DEFAULT(custinsType_, "") };
      inline RdsEndpointList& setCustinsType(string custinsType) { DARABONBA_PTR_SET_VALUE(custinsType_, custinsType) };


      // DBEndpointId Field Functions 
      bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
      void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
      inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
      inline RdsEndpointList& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline RdsEndpointList& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    protected:
      // The VPC ID.
      shared_ptr<vector<RdsEndpointList::AddressItems>> addressItems_ {};
      // The instance type.
      shared_ptr<string> custinsType_ {};
      // The ID of the endpoint.
      shared_ptr<string> DBEndpointId_ {};
      // The type of the endpoint. Valid values:
      // 
      // - **Normal**: the standard endpoint
      // - **ReadWriteSplitting**: the read/write splitting endpoint
      shared_ptr<string> endpointType_ {};
    };

    class DBClusterEndpointList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusterEndpointList& obj) { 
        DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusterEndpointList& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
      };
      DBClusterEndpointList() = default ;
      DBClusterEndpointList(const DBClusterEndpointList &) = default ;
      DBClusterEndpointList(DBClusterEndpointList &&) = default ;
      DBClusterEndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClusterEndpointList() = default ;
      DBClusterEndpointList& operator=(const DBClusterEndpointList &) = default ;
      DBClusterEndpointList& operator=(DBClusterEndpointList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddressItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressItems& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, AddressItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        AddressItems() = default ;
        AddressItems(const AddressItems &) = default ;
        AddressItems(AddressItems &&) = default ;
        AddressItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddressItems() = default ;
        AddressItems& operator=(const AddressItems &) = default ;
        AddressItems& operator=(AddressItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->IPAddress_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr && this->SSLEnabled_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline AddressItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline AddressItems& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline AddressItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline AddressItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // SSLEnabled Field Functions 
        bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
        void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
        inline string getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
        inline AddressItems& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline AddressItems& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline AddressItems& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // *   **Enabled**
        // *   **Disabled**
        shared_ptr<string> connectionString_ {};
        // The description of a migration exception. If no exception occurs during the migration, an empty string is returned.
        shared_ptr<string> IPAddress_ {};
        // The ID of the endpoint.
        shared_ptr<string> netType_ {};
        // The type of the endpoint. Valid values:
        // 
        // *   **Cluster**: the default cluster endpoint
        // *   **Primary**: the primary endpoint
        // *   **Custom**: the custom endpoint
        shared_ptr<string> port_ {};
        // The ID of the request.
        shared_ptr<string> SSLEnabled_ {};
        // The read/write mode. Valid values:
        // 
        // *   ReadWrite: receives and forwards read and write requests (automatic read-write splitting).
        // *   ReadOnly (default): receives and forwards read requests only.
        shared_ptr<string> VPCId_ {};
        // The IP address of the endpoint.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->addressItems_ == nullptr
        && this->DBEndpointId_ == nullptr && this->endpointType_ == nullptr && this->readWriteMode_ == nullptr; };
      // addressItems Field Functions 
      bool hasAddressItems() const { return this->addressItems_ != nullptr;};
      void deleteAddressItems() { this->addressItems_ = nullptr;};
      inline const vector<DBClusterEndpointList::AddressItems> & getAddressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<DBClusterEndpointList::AddressItems>) };
      inline vector<DBClusterEndpointList::AddressItems> getAddressItems() { DARABONBA_PTR_GET(addressItems_, vector<DBClusterEndpointList::AddressItems>) };
      inline DBClusterEndpointList& setAddressItems(const vector<DBClusterEndpointList::AddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
      inline DBClusterEndpointList& setAddressItems(vector<DBClusterEndpointList::AddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


      // DBEndpointId Field Functions 
      bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
      void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
      inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
      inline DBClusterEndpointList& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline DBClusterEndpointList& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // readWriteMode Field Functions 
      bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
      void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
      inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
      inline DBClusterEndpointList& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    protected:
      // The VPC ID.
      shared_ptr<vector<DBClusterEndpointList::AddressItems>> addressItems_ {};
      // The expiration time of the replication between ApsaraDB RDS and PolarDB. The time is in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> DBEndpointId_ {};
      // The ID of the cluster.
      shared_ptr<string> endpointType_ {};
      // The synchronization direction. Valid values:
      // 
      // *   **RDS2POLARDB**: Data is replicated from an ApsaraDB RDS instance to a PolarDB cluster.
      // *   **POLARDB2RDS**: Data is replicated from a PolarDB cluster to an ApsaraDB RDS instance.
      shared_ptr<string> readWriteMode_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->DBClusterEndpointList_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterReadWriteMode_ == nullptr && this->delayedSeconds_ == nullptr && this->dtsInstanceId_ == nullptr
        && this->expiredTime_ == nullptr && this->migrationStatus_ == nullptr && this->rdsEndpointList_ == nullptr && this->rdsReadWriteMode_ == nullptr && this->requestId_ == nullptr
        && this->sourceRDSDBInstanceId_ == nullptr && this->srcDbType_ == nullptr && this->topologies_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeDBClusterMigrationResponseBody& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // DBClusterEndpointList Field Functions 
    bool hasDBClusterEndpointList() const { return this->DBClusterEndpointList_ != nullptr;};
    void deleteDBClusterEndpointList() { this->DBClusterEndpointList_ = nullptr;};
    inline const vector<DescribeDBClusterMigrationResponseBody::DBClusterEndpointList> & getDBClusterEndpointList() const { DARABONBA_PTR_GET_CONST(DBClusterEndpointList_, vector<DescribeDBClusterMigrationResponseBody::DBClusterEndpointList>) };
    inline vector<DescribeDBClusterMigrationResponseBody::DBClusterEndpointList> getDBClusterEndpointList() { DARABONBA_PTR_GET(DBClusterEndpointList_, vector<DescribeDBClusterMigrationResponseBody::DBClusterEndpointList>) };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterEndpointList(const vector<DescribeDBClusterMigrationResponseBody::DBClusterEndpointList> & dBClusterEndpointList) { DARABONBA_PTR_SET_VALUE(DBClusterEndpointList_, dBClusterEndpointList) };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterEndpointList(vector<DescribeDBClusterMigrationResponseBody::DBClusterEndpointList> && dBClusterEndpointList) { DARABONBA_PTR_SET_RVALUE(DBClusterEndpointList_, dBClusterEndpointList) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterReadWriteMode Field Functions 
    bool hasDBClusterReadWriteMode() const { return this->DBClusterReadWriteMode_ != nullptr;};
    void deleteDBClusterReadWriteMode() { this->DBClusterReadWriteMode_ = nullptr;};
    inline string getDBClusterReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(DBClusterReadWriteMode_, "") };
    inline DescribeDBClusterMigrationResponseBody& setDBClusterReadWriteMode(string DBClusterReadWriteMode) { DARABONBA_PTR_SET_VALUE(DBClusterReadWriteMode_, DBClusterReadWriteMode) };


    // delayedSeconds Field Functions 
    bool hasDelayedSeconds() const { return this->delayedSeconds_ != nullptr;};
    void deleteDelayedSeconds() { this->delayedSeconds_ = nullptr;};
    inline int32_t getDelayedSeconds() const { DARABONBA_PTR_GET_DEFAULT(delayedSeconds_, 0) };
    inline DescribeDBClusterMigrationResponseBody& setDelayedSeconds(int32_t delayedSeconds) { DARABONBA_PTR_SET_VALUE(delayedSeconds_, delayedSeconds) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDBClusterMigrationResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
    inline DescribeDBClusterMigrationResponseBody& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // rdsEndpointList Field Functions 
    bool hasRdsEndpointList() const { return this->rdsEndpointList_ != nullptr;};
    void deleteRdsEndpointList() { this->rdsEndpointList_ = nullptr;};
    inline const vector<DescribeDBClusterMigrationResponseBody::RdsEndpointList> & getRdsEndpointList() const { DARABONBA_PTR_GET_CONST(rdsEndpointList_, vector<DescribeDBClusterMigrationResponseBody::RdsEndpointList>) };
    inline vector<DescribeDBClusterMigrationResponseBody::RdsEndpointList> getRdsEndpointList() { DARABONBA_PTR_GET(rdsEndpointList_, vector<DescribeDBClusterMigrationResponseBody::RdsEndpointList>) };
    inline DescribeDBClusterMigrationResponseBody& setRdsEndpointList(const vector<DescribeDBClusterMigrationResponseBody::RdsEndpointList> & rdsEndpointList) { DARABONBA_PTR_SET_VALUE(rdsEndpointList_, rdsEndpointList) };
    inline DescribeDBClusterMigrationResponseBody& setRdsEndpointList(vector<DescribeDBClusterMigrationResponseBody::RdsEndpointList> && rdsEndpointList) { DARABONBA_PTR_SET_RVALUE(rdsEndpointList_, rdsEndpointList) };


    // rdsReadWriteMode Field Functions 
    bool hasRdsReadWriteMode() const { return this->rdsReadWriteMode_ != nullptr;};
    void deleteRdsReadWriteMode() { this->rdsReadWriteMode_ = nullptr;};
    inline string getRdsReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(rdsReadWriteMode_, "") };
    inline DescribeDBClusterMigrationResponseBody& setRdsReadWriteMode(string rdsReadWriteMode) { DARABONBA_PTR_SET_VALUE(rdsReadWriteMode_, rdsReadWriteMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceRDSDBInstanceId Field Functions 
    bool hasSourceRDSDBInstanceId() const { return this->sourceRDSDBInstanceId_ != nullptr;};
    void deleteSourceRDSDBInstanceId() { this->sourceRDSDBInstanceId_ = nullptr;};
    inline string getSourceRDSDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceRDSDBInstanceId_, "") };
    inline DescribeDBClusterMigrationResponseBody& setSourceRDSDBInstanceId(string sourceRDSDBInstanceId) { DARABONBA_PTR_SET_VALUE(sourceRDSDBInstanceId_, sourceRDSDBInstanceId) };


    // srcDbType Field Functions 
    bool hasSrcDbType() const { return this->srcDbType_ != nullptr;};
    void deleteSrcDbType() { this->srcDbType_ = nullptr;};
    inline string getSrcDbType() const { DARABONBA_PTR_GET_DEFAULT(srcDbType_, "") };
    inline DescribeDBClusterMigrationResponseBody& setSrcDbType(string srcDbType) { DARABONBA_PTR_SET_VALUE(srcDbType_, srcDbType) };


    // topologies Field Functions 
    bool hasTopologies() const { return this->topologies_ != nullptr;};
    void deleteTopologies() { this->topologies_ = nullptr;};
    inline string getTopologies() const { DARABONBA_PTR_GET_DEFAULT(topologies_, "") };
    inline DescribeDBClusterMigrationResponseBody& setTopologies(string topologies) { DARABONBA_PTR_SET_VALUE(topologies_, topologies) };


  protected:
    // The mode of the source ApsaraDB RDS instance. Valid values:
    // 
    // *   **rw**: read and write mode
    // *   **ro**: read-only mode
    shared_ptr<string> comment_ {};
    // The port number.
    shared_ptr<vector<DescribeDBClusterMigrationResponseBody::DBClusterEndpointList>> DBClusterEndpointList_ {};
    // The replication latency between the ApsaraDB RDS instance and the PolarDB cluster. Unit: seconds.
    shared_ptr<string> DBClusterId_ {};
    // Details about the endpoints.
    shared_ptr<string> DBClusterReadWriteMode_ {};
    // The vSwitch ID.
    shared_ptr<int32_t> delayedSeconds_ {};
    // The network type of the endpoint. Valid values:
    // 
    // *   **Public**: the public endpoint
    // *   **Private**: the internal endpoint (VPC)
    // *   **Inner**: the internal endpoint (classic network)
    shared_ptr<string> dtsInstanceId_ {};
    // The mode of the PolarDB cluster. Valid values:
    // 
    // *   **rw**: read and write mode
    // *   **ro**: read-only mode
    shared_ptr<string> expiredTime_ {};
    // The endpoint.
    shared_ptr<string> migrationStatus_ {};
    // The endpoints of the ApsaraDB RDS instance.
    shared_ptr<vector<DescribeDBClusterMigrationResponseBody::RdsEndpointList>> rdsEndpointList_ {};
    // The ID of the synchronous task.
    shared_ptr<string> rdsReadWriteMode_ {};
    // The ID of the source ApsaraDB RDS instance.
    shared_ptr<string> requestId_ {};
    // The endpoints of the ApsaraDB RDS instance.
    shared_ptr<string> sourceRDSDBInstanceId_ {};
    // The type of the source database. Valid values:
    // 
    // - **PolarDBMySQL**: The source database is a PolarDB for MySQL database when the major version of your PolarDB cluster is upgraded.
    // - **RDS**: The source database is an ApsaraDB RDS database when data is migrated from ApsaraDB RDS to PolarDB for MySQL.
    shared_ptr<string> srcDbType_ {};
    // The migration state of the PolarDB cluster. Valid values:
    // 
    // *   **NO_MIGRATION**: No migration task is running.
    // *   **RDS2POLARDB_CLONING**: Data is being replicated.
    // *   **RDS2POLARDB_SYNCING**: Data is being replicated. During the replication, the PolarDB cluster is running in read-only mode and the source ApsaraDB RDS instance is running in read and write mode.
    // *   **SWITCHING**: Databases are being switched.
    // *   **POLARDB2RDS_SYNCING**: Databases are switched. The PolarDB cluster is running in read and write mode and the source ApsaraDB RDS instance is running in read-only mode. In this state, you can modify the endpoints for your applications.
    // *   **ROLLBACK**: The migration is being rolled back. After the rollback is complete, the value **RDS2POLARDB_SYNCING** is returned.
    // *   **CLOSING_MIGRATION**: The migration task is being terminated.
    shared_ptr<string> topologies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
