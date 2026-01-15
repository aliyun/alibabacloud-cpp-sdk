// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODY_HPP_
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
  class DescribeDBClusterNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterNetInfos, DBClusterNetInfos_);
      DARABONBA_PTR_TO_JSON(DBNodeNetInfos, DBNodeNetInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetInfos, DBClusterNetInfos_);
      DARABONBA_PTR_FROM_JSON(DBNodeNetInfos, DBNodeNetInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterNetInfoResponseBody() = default ;
    DescribeDBClusterNetInfoResponseBody(const DescribeDBClusterNetInfoResponseBody &) = default ;
    DescribeDBClusterNetInfoResponseBody(DescribeDBClusterNetInfoResponseBody &&) = default ;
    DescribeDBClusterNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBody() = default ;
    DescribeDBClusterNetInfoResponseBody& operator=(const DescribeDBClusterNetInfoResponseBody &) = default ;
    DescribeDBClusterNetInfoResponseBody& operator=(DescribeDBClusterNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBNodeNetInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodeNetInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeNetInfo, DBNodeNetInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodeNetInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeNetInfo, DBNodeNetInfo_);
      };
      DBNodeNetInfos() = default ;
      DBNodeNetInfos(const DBNodeNetInfos &) = default ;
      DBNodeNetInfos(DBNodeNetInfos &&) = default ;
      DBNodeNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodeNetInfos() = default ;
      DBNodeNetInfos& operator=(const DBNodeNetInfos &) = default ;
      DBNodeNetInfos& operator=(DBNodeNetInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBNodeNetInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBNodeNetInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
          DARABONBA_PTR_TO_JSON(NetInfos, netInfos_);
        };
        friend void from_json(const Darabonba::Json& j, DBNodeNetInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
          DARABONBA_PTR_FROM_JSON(NetInfos, netInfos_);
        };
        DBNodeNetInfo() = default ;
        DBNodeNetInfo(const DBNodeNetInfo &) = default ;
        DBNodeNetInfo(DBNodeNetInfo &&) = default ;
        DBNodeNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBNodeNetInfo() = default ;
        DBNodeNetInfo& operator=(const DBNodeNetInfo &) = default ;
        DBNodeNetInfo& operator=(DBNodeNetInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NetInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetInfos& obj) { 
            DARABONBA_PTR_TO_JSON(NetInfo, netInfo_);
          };
          friend void from_json(const Darabonba::Json& j, NetInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(NetInfo, netInfo_);
          };
          NetInfos() = default ;
          NetInfos(const NetInfos &) = default ;
          NetInfos(NetInfos &&) = default ;
          NetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetInfos() = default ;
          NetInfos& operator=(const NetInfos &) = default ;
          NetInfos& operator=(NetInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NetInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NetInfo& obj) { 
              DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
              DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
              DARABONBA_PTR_TO_JSON(IPType, IPType_);
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
              DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            };
            friend void from_json(const Darabonba::Json& j, NetInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
              DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
              DARABONBA_PTR_FROM_JSON(IPType, IPType_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
              DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
              DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            };
            NetInfo() = default ;
            NetInfo(const NetInfo &) = default ;
            NetInfo(NetInfo &&) = default ;
            NetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NetInfo() = default ;
            NetInfo& operator=(const NetInfo &) = default ;
            NetInfo& operator=(NetInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->IPAddress_ == nullptr && this->IPType_ == nullptr && this->port_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
            // connectionString Field Functions 
            bool hasConnectionString() const { return this->connectionString_ != nullptr;};
            void deleteConnectionString() { this->connectionString_ = nullptr;};
            inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
            inline NetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


            // IPAddress Field Functions 
            bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
            void deleteIPAddress() { this->IPAddress_ = nullptr;};
            inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
            inline NetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


            // IPType Field Functions 
            bool hasIPType() const { return this->IPType_ != nullptr;};
            void deleteIPType() { this->IPType_ = nullptr;};
            inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
            inline NetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
            inline NetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // VPCId Field Functions 
            bool hasVPCId() const { return this->VPCId_ != nullptr;};
            void deleteVPCId() { this->VPCId_ = nullptr;};
            inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
            inline NetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


            // vSwitchId Field Functions 
            bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
            void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
            inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
            inline NetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          protected:
            shared_ptr<string> connectionString_ {};
            shared_ptr<string> IPAddress_ {};
            shared_ptr<string> IPType_ {};
            shared_ptr<string> port_ {};
            shared_ptr<string> VPCId_ {};
            shared_ptr<string> vSwitchId_ {};
          };

          virtual bool empty() const override { return this->netInfo_ == nullptr; };
          // netInfo Field Functions 
          bool hasNetInfo() const { return this->netInfo_ != nullptr;};
          void deleteNetInfo() { this->netInfo_ = nullptr;};
          inline const vector<NetInfos::NetInfo> & getNetInfo() const { DARABONBA_PTR_GET_CONST(netInfo_, vector<NetInfos::NetInfo>) };
          inline vector<NetInfos::NetInfo> getNetInfo() { DARABONBA_PTR_GET(netInfo_, vector<NetInfos::NetInfo>) };
          inline NetInfos& setNetInfo(const vector<NetInfos::NetInfo> & netInfo) { DARABONBA_PTR_SET_VALUE(netInfo_, netInfo) };
          inline NetInfos& setNetInfo(vector<NetInfos::NetInfo> && netInfo) { DARABONBA_PTR_SET_RVALUE(netInfo_, netInfo) };


        protected:
          shared_ptr<vector<NetInfos::NetInfo>> netInfo_ {};
        };

        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBNodeRole_ == nullptr && this->netInfos_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBNodeNetInfo& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBNodeRole Field Functions 
        bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
        void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
        inline string getDBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
        inline DBNodeNetInfo& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


        // netInfos Field Functions 
        bool hasNetInfos() const { return this->netInfos_ != nullptr;};
        void deleteNetInfos() { this->netInfos_ = nullptr;};
        inline const DBNodeNetInfo::NetInfos & getNetInfos() const { DARABONBA_PTR_GET_CONST(netInfos_, DBNodeNetInfo::NetInfos) };
        inline DBNodeNetInfo::NetInfos getNetInfos() { DARABONBA_PTR_GET(netInfos_, DBNodeNetInfo::NetInfos) };
        inline DBNodeNetInfo& setNetInfos(const DBNodeNetInfo::NetInfos & netInfos) { DARABONBA_PTR_SET_VALUE(netInfos_, netInfos) };
        inline DBNodeNetInfo& setNetInfos(DBNodeNetInfo::NetInfos && netInfos) { DARABONBA_PTR_SET_RVALUE(netInfos_, netInfos) };


      protected:
        shared_ptr<string> DBInstanceId_ {};
        shared_ptr<string> DBNodeRole_ {};
        shared_ptr<DBNodeNetInfo::NetInfos> netInfos_ {};
      };

      virtual bool empty() const override { return this->DBNodeNetInfo_ == nullptr; };
      // DBNodeNetInfo Field Functions 
      bool hasDBNodeNetInfo() const { return this->DBNodeNetInfo_ != nullptr;};
      void deleteDBNodeNetInfo() { this->DBNodeNetInfo_ = nullptr;};
      inline const vector<DBNodeNetInfos::DBNodeNetInfo> & getDBNodeNetInfo() const { DARABONBA_PTR_GET_CONST(DBNodeNetInfo_, vector<DBNodeNetInfos::DBNodeNetInfo>) };
      inline vector<DBNodeNetInfos::DBNodeNetInfo> getDBNodeNetInfo() { DARABONBA_PTR_GET(DBNodeNetInfo_, vector<DBNodeNetInfos::DBNodeNetInfo>) };
      inline DBNodeNetInfos& setDBNodeNetInfo(const vector<DBNodeNetInfos::DBNodeNetInfo> & dBNodeNetInfo) { DARABONBA_PTR_SET_VALUE(DBNodeNetInfo_, dBNodeNetInfo) };
      inline DBNodeNetInfos& setDBNodeNetInfo(vector<DBNodeNetInfos::DBNodeNetInfo> && dBNodeNetInfo) { DARABONBA_PTR_SET_RVALUE(DBNodeNetInfo_, dBNodeNetInfo) };


    protected:
      shared_ptr<vector<DBNodeNetInfos::DBNodeNetInfo>> DBNodeNetInfo_ {};
    };

    class DBClusterNetInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusterNetInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterNetInfo, DBClusterNetInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusterNetInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterNetInfo, DBClusterNetInfo_);
      };
      DBClusterNetInfos() = default ;
      DBClusterNetInfos(const DBClusterNetInfos &) = default ;
      DBClusterNetInfos(DBClusterNetInfos &&) = default ;
      DBClusterNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClusterNetInfos() = default ;
      DBClusterNetInfos& operator=(const DBClusterNetInfos &) = default ;
      DBClusterNetInfos& operator=(DBClusterNetInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBClusterNetInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBClusterNetInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(ConnectionStringType, connectionStringType_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(IPType, IPType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, DBClusterNetInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(ConnectionStringType, connectionStringType_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(IPType, IPType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        DBClusterNetInfo() = default ;
        DBClusterNetInfo(const DBClusterNetInfo &) = default ;
        DBClusterNetInfo(DBClusterNetInfo &&) = default ;
        DBClusterNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBClusterNetInfo() = default ;
        DBClusterNetInfo& operator=(const DBClusterNetInfo &) = default ;
        DBClusterNetInfo& operator=(DBClusterNetInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->connectionStringType_ == nullptr && this->IPAddress_ == nullptr && this->IPType_ == nullptr && this->port_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBClusterNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // connectionStringType Field Functions 
        bool hasConnectionStringType() const { return this->connectionStringType_ != nullptr;};
        void deleteConnectionStringType() { this->connectionStringType_ = nullptr;};
        inline string getConnectionStringType() const { DARABONBA_PTR_GET_DEFAULT(connectionStringType_, "") };
        inline DBClusterNetInfo& setConnectionStringType(string connectionStringType) { DARABONBA_PTR_SET_VALUE(connectionStringType_, connectionStringType) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline DBClusterNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // IPType Field Functions 
        bool hasIPType() const { return this->IPType_ != nullptr;};
        void deleteIPType() { this->IPType_ = nullptr;};
        inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
        inline DBClusterNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DBClusterNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline DBClusterNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBClusterNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        shared_ptr<string> connectionString_ {};
        shared_ptr<string> connectionStringType_ {};
        shared_ptr<string> IPAddress_ {};
        shared_ptr<string> IPType_ {};
        shared_ptr<string> port_ {};
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->DBClusterNetInfo_ == nullptr; };
      // DBClusterNetInfo Field Functions 
      bool hasDBClusterNetInfo() const { return this->DBClusterNetInfo_ != nullptr;};
      void deleteDBClusterNetInfo() { this->DBClusterNetInfo_ = nullptr;};
      inline const vector<DBClusterNetInfos::DBClusterNetInfo> & getDBClusterNetInfo() const { DARABONBA_PTR_GET_CONST(DBClusterNetInfo_, vector<DBClusterNetInfos::DBClusterNetInfo>) };
      inline vector<DBClusterNetInfos::DBClusterNetInfo> getDBClusterNetInfo() { DARABONBA_PTR_GET(DBClusterNetInfo_, vector<DBClusterNetInfos::DBClusterNetInfo>) };
      inline DBClusterNetInfos& setDBClusterNetInfo(const vector<DBClusterNetInfos::DBClusterNetInfo> & dBClusterNetInfo) { DARABONBA_PTR_SET_VALUE(DBClusterNetInfo_, dBClusterNetInfo) };
      inline DBClusterNetInfos& setDBClusterNetInfo(vector<DBClusterNetInfos::DBClusterNetInfo> && dBClusterNetInfo) { DARABONBA_PTR_SET_RVALUE(DBClusterNetInfo_, dBClusterNetInfo) };


    protected:
      shared_ptr<vector<DBClusterNetInfos::DBClusterNetInfo>> DBClusterNetInfo_ {};
    };

    virtual bool empty() const override { return this->clusterNetworkType_ == nullptr
        && this->DBClusterNetInfos_ == nullptr && this->DBNodeNetInfos_ == nullptr && this->requestId_ == nullptr; };
    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string getClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeDBClusterNetInfoResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // DBClusterNetInfos Field Functions 
    bool hasDBClusterNetInfos() const { return this->DBClusterNetInfos_ != nullptr;};
    void deleteDBClusterNetInfos() { this->DBClusterNetInfos_ = nullptr;};
    inline const DescribeDBClusterNetInfoResponseBody::DBClusterNetInfos & getDBClusterNetInfos() const { DARABONBA_PTR_GET_CONST(DBClusterNetInfos_, DescribeDBClusterNetInfoResponseBody::DBClusterNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody::DBClusterNetInfos getDBClusterNetInfos() { DARABONBA_PTR_GET(DBClusterNetInfos_, DescribeDBClusterNetInfoResponseBody::DBClusterNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBClusterNetInfos(const DescribeDBClusterNetInfoResponseBody::DBClusterNetInfos & dBClusterNetInfos) { DARABONBA_PTR_SET_VALUE(DBClusterNetInfos_, dBClusterNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBClusterNetInfos(DescribeDBClusterNetInfoResponseBody::DBClusterNetInfos && dBClusterNetInfos) { DARABONBA_PTR_SET_RVALUE(DBClusterNetInfos_, dBClusterNetInfos) };


    // DBNodeNetInfos Field Functions 
    bool hasDBNodeNetInfos() const { return this->DBNodeNetInfos_ != nullptr;};
    void deleteDBNodeNetInfos() { this->DBNodeNetInfos_ = nullptr;};
    inline const DescribeDBClusterNetInfoResponseBody::DBNodeNetInfos & getDBNodeNetInfos() const { DARABONBA_PTR_GET_CONST(DBNodeNetInfos_, DescribeDBClusterNetInfoResponseBody::DBNodeNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody::DBNodeNetInfos getDBNodeNetInfos() { DARABONBA_PTR_GET(DBNodeNetInfos_, DescribeDBClusterNetInfoResponseBody::DBNodeNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBNodeNetInfos(const DescribeDBClusterNetInfoResponseBody::DBNodeNetInfos & dBNodeNetInfos) { DARABONBA_PTR_SET_VALUE(DBNodeNetInfos_, dBNodeNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBNodeNetInfos(DescribeDBClusterNetInfoResponseBody::DBNodeNetInfos && dBNodeNetInfos) { DARABONBA_PTR_SET_RVALUE(DBNodeNetInfos_, dBNodeNetInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> clusterNetworkType_ {};
    shared_ptr<DescribeDBClusterNetInfoResponseBody::DBClusterNetInfos> DBClusterNetInfos_ {};
    shared_ptr<DescribeDBClusterNetInfoResponseBody::DBNodeNetInfos> DBNodeNetInfos_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
