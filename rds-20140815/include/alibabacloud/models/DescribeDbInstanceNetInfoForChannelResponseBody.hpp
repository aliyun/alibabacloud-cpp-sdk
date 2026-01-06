// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODY_HPP_
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
  class DescribeDBInstanceNetInfoForChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoForChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoForChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceNetInfoForChannelResponseBody() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody(const DescribeDBInstanceNetInfoForChannelResponseBody &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody(DescribeDBInstanceNetInfoForChannelResponseBody &&) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoForChannelResponseBody() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody& operator=(const DescribeDBInstanceNetInfoForChannelResponseBody &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBody& operator=(DescribeDBInstanceNetInfoForChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstanceNetInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstanceNetInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstanceNetInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceNetInfo, DBInstanceNetInfo_);
      };
      DBInstanceNetInfos() = default ;
      DBInstanceNetInfos(const DBInstanceNetInfos &) = default ;
      DBInstanceNetInfos(DBInstanceNetInfos &&) = default ;
      DBInstanceNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstanceNetInfos() = default ;
      DBInstanceNetInfos& operator=(const DBInstanceNetInfos &) = default ;
      DBInstanceNetInfos& operator=(DBInstanceNetInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceNetInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceNetInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Availability, availability_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(ConnectionStringType, connectionStringType_);
          DARABONBA_PTR_TO_JSON(DBInstanceWeights, DBInstanceWeights_);
          DARABONBA_PTR_TO_JSON(DistributionType, distributionType_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(IPType, IPType_);
          DARABONBA_PTR_TO_JSON(MaxDelayTime, maxDelayTime_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SecurityIPGroups, securityIPGroups_);
          DARABONBA_PTR_TO_JSON(Upgradeable, upgradeable_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(expiredTime, expiredTime_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceNetInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Availability, availability_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(ConnectionStringType, connectionStringType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceWeights, DBInstanceWeights_);
          DARABONBA_PTR_FROM_JSON(DistributionType, distributionType_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(IPType, IPType_);
          DARABONBA_PTR_FROM_JSON(MaxDelayTime, maxDelayTime_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SecurityIPGroups, securityIPGroups_);
          DARABONBA_PTR_FROM_JSON(Upgradeable, upgradeable_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(expiredTime, expiredTime_);
        };
        DBInstanceNetInfo() = default ;
        DBInstanceNetInfo(const DBInstanceNetInfo &) = default ;
        DBInstanceNetInfo(DBInstanceNetInfo &&) = default ;
        DBInstanceNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceNetInfo() = default ;
        DBInstanceNetInfo& operator=(const DBInstanceNetInfo &) = default ;
        DBInstanceNetInfo& operator=(DBInstanceNetInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecurityIPGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityIPGroups& obj) { 
            DARABONBA_PTR_TO_JSON(securityIPGroup, securityIPGroup_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityIPGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(securityIPGroup, securityIPGroup_);
          };
          SecurityIPGroups() = default ;
          SecurityIPGroups(const SecurityIPGroups &) = default ;
          SecurityIPGroups(SecurityIPGroups &&) = default ;
          SecurityIPGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityIPGroups() = default ;
          SecurityIPGroups& operator=(const SecurityIPGroups &) = default ;
          SecurityIPGroups& operator=(SecurityIPGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SecurityIPGroup : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SecurityIPGroup& obj) { 
              DARABONBA_PTR_TO_JSON(SecurityIPGroupName, securityIPGroupName_);
              DARABONBA_PTR_TO_JSON(SecurityIPs, securityIPs_);
            };
            friend void from_json(const Darabonba::Json& j, SecurityIPGroup& obj) { 
              DARABONBA_PTR_FROM_JSON(SecurityIPGroupName, securityIPGroupName_);
              DARABONBA_PTR_FROM_JSON(SecurityIPs, securityIPs_);
            };
            SecurityIPGroup() = default ;
            SecurityIPGroup(const SecurityIPGroup &) = default ;
            SecurityIPGroup(SecurityIPGroup &&) = default ;
            SecurityIPGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SecurityIPGroup() = default ;
            SecurityIPGroup& operator=(const SecurityIPGroup &) = default ;
            SecurityIPGroup& operator=(SecurityIPGroup &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->securityIPGroupName_ == nullptr
        && this->securityIPs_ == nullptr; };
            // securityIPGroupName Field Functions 
            bool hasSecurityIPGroupName() const { return this->securityIPGroupName_ != nullptr;};
            void deleteSecurityIPGroupName() { this->securityIPGroupName_ = nullptr;};
            inline string getSecurityIPGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityIPGroupName_, "") };
            inline SecurityIPGroup& setSecurityIPGroupName(string securityIPGroupName) { DARABONBA_PTR_SET_VALUE(securityIPGroupName_, securityIPGroupName) };


            // securityIPs Field Functions 
            bool hasSecurityIPs() const { return this->securityIPs_ != nullptr;};
            void deleteSecurityIPs() { this->securityIPs_ = nullptr;};
            inline string getSecurityIPs() const { DARABONBA_PTR_GET_DEFAULT(securityIPs_, "") };
            inline SecurityIPGroup& setSecurityIPs(string securityIPs) { DARABONBA_PTR_SET_VALUE(securityIPs_, securityIPs) };


          protected:
            // The name of the IP address whitelist.
            shared_ptr<string> securityIPGroupName_ {};
            // The IP addresses that is contained in the IP address whitelist.
            shared_ptr<string> securityIPs_ {};
          };

          virtual bool empty() const override { return this->securityIPGroup_ == nullptr; };
          // securityIPGroup Field Functions 
          bool hasSecurityIPGroup() const { return this->securityIPGroup_ != nullptr;};
          void deleteSecurityIPGroup() { this->securityIPGroup_ = nullptr;};
          inline const vector<SecurityIPGroups::SecurityIPGroup> & getSecurityIPGroup() const { DARABONBA_PTR_GET_CONST(securityIPGroup_, vector<SecurityIPGroups::SecurityIPGroup>) };
          inline vector<SecurityIPGroups::SecurityIPGroup> getSecurityIPGroup() { DARABONBA_PTR_GET(securityIPGroup_, vector<SecurityIPGroups::SecurityIPGroup>) };
          inline SecurityIPGroups& setSecurityIPGroup(const vector<SecurityIPGroups::SecurityIPGroup> & securityIPGroup) { DARABONBA_PTR_SET_VALUE(securityIPGroup_, securityIPGroup) };
          inline SecurityIPGroups& setSecurityIPGroup(vector<SecurityIPGroups::SecurityIPGroup> && securityIPGroup) { DARABONBA_PTR_SET_RVALUE(securityIPGroup_, securityIPGroup) };


        protected:
          shared_ptr<vector<SecurityIPGroups::SecurityIPGroup>> securityIPGroup_ {};
        };

        class DBInstanceWeights : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DBInstanceWeights& obj) { 
            DARABONBA_PTR_TO_JSON(DBInstanceWeight, DBInstanceWeight_);
          };
          friend void from_json(const Darabonba::Json& j, DBInstanceWeights& obj) { 
            DARABONBA_PTR_FROM_JSON(DBInstanceWeight, DBInstanceWeight_);
          };
          DBInstanceWeights() = default ;
          DBInstanceWeights(const DBInstanceWeights &) = default ;
          DBInstanceWeights(DBInstanceWeights &&) = default ;
          DBInstanceWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DBInstanceWeights() = default ;
          DBInstanceWeights& operator=(const DBInstanceWeights &) = default ;
          DBInstanceWeights& operator=(DBInstanceWeights &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DBInstanceWeight : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DBInstanceWeight& obj) { 
              DARABONBA_PTR_TO_JSON(Availability, availability_);
              DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
              DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
              DARABONBA_PTR_TO_JSON(Weight, weight_);
            };
            friend void from_json(const Darabonba::Json& j, DBInstanceWeight& obj) { 
              DARABONBA_PTR_FROM_JSON(Availability, availability_);
              DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
              DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
              DARABONBA_PTR_FROM_JSON(Weight, weight_);
            };
            DBInstanceWeight() = default ;
            DBInstanceWeight(const DBInstanceWeight &) = default ;
            DBInstanceWeight(DBInstanceWeight &&) = default ;
            DBInstanceWeight(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DBInstanceWeight() = default ;
            DBInstanceWeight& operator=(const DBInstanceWeight &) = default ;
            DBInstanceWeight& operator=(DBInstanceWeight &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->availability_ == nullptr
        && this->DBInstanceId_ == nullptr && this->DBInstanceType_ == nullptr && this->weight_ == nullptr; };
            // availability Field Functions 
            bool hasAvailability() const { return this->availability_ != nullptr;};
            void deleteAvailability() { this->availability_ = nullptr;};
            inline string getAvailability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
            inline DBInstanceWeight& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


            // DBInstanceId Field Functions 
            bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
            void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
            inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
            inline DBInstanceWeight& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


            // DBInstanceType Field Functions 
            bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
            void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
            inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
            inline DBInstanceWeight& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


            // weight Field Functions 
            bool hasWeight() const { return this->weight_ != nullptr;};
            void deleteWeight() { this->weight_ = nullptr;};
            inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
            inline DBInstanceWeight& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          protected:
            // The availability of the instance. Valid values:
            // 
            // *   **Unavailable**
            // *   **Available**
            shared_ptr<string> availability_ {};
            // The instance ID.
            shared_ptr<string> DBInstanceId_ {};
            // The instance type. Valid values:
            // 
            // *   **Master**: primary instance
            // *   **Readonly**: read-only instance
            shared_ptr<string> DBInstanceType_ {};
            // The weight of the instance.
            shared_ptr<string> weight_ {};
          };

          virtual bool empty() const override { return this->DBInstanceWeight_ == nullptr; };
          // DBInstanceWeight Field Functions 
          bool hasDBInstanceWeight() const { return this->DBInstanceWeight_ != nullptr;};
          void deleteDBInstanceWeight() { this->DBInstanceWeight_ = nullptr;};
          inline const vector<DBInstanceWeights::DBInstanceWeight> & getDBInstanceWeight() const { DARABONBA_PTR_GET_CONST(DBInstanceWeight_, vector<DBInstanceWeights::DBInstanceWeight>) };
          inline vector<DBInstanceWeights::DBInstanceWeight> getDBInstanceWeight() { DARABONBA_PTR_GET(DBInstanceWeight_, vector<DBInstanceWeights::DBInstanceWeight>) };
          inline DBInstanceWeights& setDBInstanceWeight(const vector<DBInstanceWeights::DBInstanceWeight> & dBInstanceWeight) { DARABONBA_PTR_SET_VALUE(DBInstanceWeight_, dBInstanceWeight) };
          inline DBInstanceWeights& setDBInstanceWeight(vector<DBInstanceWeights::DBInstanceWeight> && dBInstanceWeight) { DARABONBA_PTR_SET_RVALUE(DBInstanceWeight_, dBInstanceWeight) };


        protected:
          shared_ptr<vector<DBInstanceWeights::DBInstanceWeight>> DBInstanceWeight_ {};
        };

        virtual bool empty() const override { return this->availability_ == nullptr
        && this->connectionString_ == nullptr && this->connectionStringType_ == nullptr && this->DBInstanceWeights_ == nullptr && this->distributionType_ == nullptr && this->IPAddress_ == nullptr
        && this->IPType_ == nullptr && this->maxDelayTime_ == nullptr && this->port_ == nullptr && this->securityIPGroups_ == nullptr && this->upgradeable_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->expiredTime_ == nullptr; };
        // availability Field Functions 
        bool hasAvailability() const { return this->availability_ != nullptr;};
        void deleteAvailability() { this->availability_ = nullptr;};
        inline string getAvailability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
        inline DBInstanceNetInfo& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBInstanceNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // connectionStringType Field Functions 
        bool hasConnectionStringType() const { return this->connectionStringType_ != nullptr;};
        void deleteConnectionStringType() { this->connectionStringType_ = nullptr;};
        inline string getConnectionStringType() const { DARABONBA_PTR_GET_DEFAULT(connectionStringType_, "") };
        inline DBInstanceNetInfo& setConnectionStringType(string connectionStringType) { DARABONBA_PTR_SET_VALUE(connectionStringType_, connectionStringType) };


        // DBInstanceWeights Field Functions 
        bool hasDBInstanceWeights() const { return this->DBInstanceWeights_ != nullptr;};
        void deleteDBInstanceWeights() { this->DBInstanceWeights_ = nullptr;};
        inline const DBInstanceNetInfo::DBInstanceWeights & getDBInstanceWeights() const { DARABONBA_PTR_GET_CONST(DBInstanceWeights_, DBInstanceNetInfo::DBInstanceWeights) };
        inline DBInstanceNetInfo::DBInstanceWeights getDBInstanceWeights() { DARABONBA_PTR_GET(DBInstanceWeights_, DBInstanceNetInfo::DBInstanceWeights) };
        inline DBInstanceNetInfo& setDBInstanceWeights(const DBInstanceNetInfo::DBInstanceWeights & dBInstanceWeights) { DARABONBA_PTR_SET_VALUE(DBInstanceWeights_, dBInstanceWeights) };
        inline DBInstanceNetInfo& setDBInstanceWeights(DBInstanceNetInfo::DBInstanceWeights && dBInstanceWeights) { DARABONBA_PTR_SET_RVALUE(DBInstanceWeights_, dBInstanceWeights) };


        // distributionType Field Functions 
        bool hasDistributionType() const { return this->distributionType_ != nullptr;};
        void deleteDistributionType() { this->distributionType_ = nullptr;};
        inline string getDistributionType() const { DARABONBA_PTR_GET_DEFAULT(distributionType_, "") };
        inline DBInstanceNetInfo& setDistributionType(string distributionType) { DARABONBA_PTR_SET_VALUE(distributionType_, distributionType) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline DBInstanceNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // IPType Field Functions 
        bool hasIPType() const { return this->IPType_ != nullptr;};
        void deleteIPType() { this->IPType_ = nullptr;};
        inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
        inline DBInstanceNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


        // maxDelayTime Field Functions 
        bool hasMaxDelayTime() const { return this->maxDelayTime_ != nullptr;};
        void deleteMaxDelayTime() { this->maxDelayTime_ = nullptr;};
        inline string getMaxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(maxDelayTime_, "") };
        inline DBInstanceNetInfo& setMaxDelayTime(string maxDelayTime) { DARABONBA_PTR_SET_VALUE(maxDelayTime_, maxDelayTime) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DBInstanceNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // securityIPGroups Field Functions 
        bool hasSecurityIPGroups() const { return this->securityIPGroups_ != nullptr;};
        void deleteSecurityIPGroups() { this->securityIPGroups_ = nullptr;};
        inline const DBInstanceNetInfo::SecurityIPGroups & getSecurityIPGroups() const { DARABONBA_PTR_GET_CONST(securityIPGroups_, DBInstanceNetInfo::SecurityIPGroups) };
        inline DBInstanceNetInfo::SecurityIPGroups getSecurityIPGroups() { DARABONBA_PTR_GET(securityIPGroups_, DBInstanceNetInfo::SecurityIPGroups) };
        inline DBInstanceNetInfo& setSecurityIPGroups(const DBInstanceNetInfo::SecurityIPGroups & securityIPGroups) { DARABONBA_PTR_SET_VALUE(securityIPGroups_, securityIPGroups) };
        inline DBInstanceNetInfo& setSecurityIPGroups(DBInstanceNetInfo::SecurityIPGroups && securityIPGroups) { DARABONBA_PTR_SET_RVALUE(securityIPGroups_, securityIPGroups) };


        // upgradeable Field Functions 
        bool hasUpgradeable() const { return this->upgradeable_ != nullptr;};
        void deleteUpgradeable() { this->upgradeable_ = nullptr;};
        inline string getUpgradeable() const { DARABONBA_PTR_GET_DEFAULT(upgradeable_, "") };
        inline DBInstanceNetInfo& setUpgradeable(string upgradeable) { DARABONBA_PTR_SET_VALUE(upgradeable_, upgradeable) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline DBInstanceNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstanceNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline DBInstanceNetInfo& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      protected:
        // The availability of the instance. Valid values:
        // 
        // *   **Unavailable**
        // *   **Available**
        shared_ptr<string> availability_ {};
        // The endpoint of the instance.
        shared_ptr<string> connectionString_ {};
        // The type of the endpoint. Valid values:
        // 
        // *   **Normal**: a regular endpoint
        // *   **ReadWriteSplitting**: a read/write splitting endpoint that is assigned after the shared proxy feature is enabled.
        shared_ptr<string> connectionStringType_ {};
        // The information about read weights to implement read/write splitting after the shared proxy feature is enabled.
        shared_ptr<DBInstanceNetInfo::DBInstanceWeights> DBInstanceWeights_ {};
        // The policy that is used to assign read weights. This parameter is returned only for a read/write splitting endpoint that is assigned after the shared proxy feature is enabled. Valid values:
        // 
        // *   **Standard**: The system automatically allocates read weights to the instance and its read-only instances based on the specifications of the instances.
        // *   **Custom**: You must manually allocate read weights to the instance and its read-only instances.
        shared_ptr<string> distributionType_ {};
        // The IP address of the instance.
        shared_ptr<string> IPAddress_ {};
        // The network type of the IP address. Valid values:
        // 
        // *   **Public**: the Internet
        // *   **Inner**: the classic network
        // *   **Private**: a virtual private cloud (VPC)
        shared_ptr<string> IPType_ {};
        // The latency threshold that is allowed for read/write splitting of the shared proxy feature. Unit: seconds.
        // 
        // >  This parameter is returned only when **ConnectionStringType** is set to **ReadWriteSplitting**.
        shared_ptr<string> maxDelayTime_ {};
        // The port number of the instance.
        shared_ptr<string> port_ {};
        // The details of the IP address whitelist.
        shared_ptr<DBInstanceNetInfo::SecurityIPGroups> securityIPGroups_ {};
        // An internal parameter. You do not need to specify this parameter.
        shared_ptr<string> upgradeable_ {};
        // The VPC ID of the instance.
        shared_ptr<string> VPCId_ {};
        // The vSwitch ID of the instance.
        shared_ptr<string> vSwitchId_ {};
        // The expiration time of the endpoint of the classic network type. Unit: seconds.
        shared_ptr<string> expiredTime_ {};
      };

      virtual bool empty() const override { return this->DBInstanceNetInfo_ == nullptr; };
      // DBInstanceNetInfo Field Functions 
      bool hasDBInstanceNetInfo() const { return this->DBInstanceNetInfo_ != nullptr;};
      void deleteDBInstanceNetInfo() { this->DBInstanceNetInfo_ = nullptr;};
      inline const vector<DBInstanceNetInfos::DBInstanceNetInfo> & getDBInstanceNetInfo() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfo_, vector<DBInstanceNetInfos::DBInstanceNetInfo>) };
      inline vector<DBInstanceNetInfos::DBInstanceNetInfo> getDBInstanceNetInfo() { DARABONBA_PTR_GET(DBInstanceNetInfo_, vector<DBInstanceNetInfos::DBInstanceNetInfo>) };
      inline DBInstanceNetInfos& setDBInstanceNetInfo(const vector<DBInstanceNetInfos::DBInstanceNetInfo> & dBInstanceNetInfo) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfo_, dBInstanceNetInfo) };
      inline DBInstanceNetInfos& setDBInstanceNetInfo(vector<DBInstanceNetInfos::DBInstanceNetInfo> && dBInstanceNetInfo) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfo_, dBInstanceNetInfo) };


    protected:
      shared_ptr<vector<DBInstanceNetInfos::DBInstanceNetInfo>> DBInstanceNetInfo_ {};
    };

    virtual bool empty() const override { return this->DBInstanceNetInfos_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceNetInfos Field Functions 
    bool hasDBInstanceNetInfos() const { return this->DBInstanceNetInfos_ != nullptr;};
    void deleteDBInstanceNetInfos() { this->DBInstanceNetInfos_ = nullptr;};
    inline const DescribeDBInstanceNetInfoForChannelResponseBody::DBInstanceNetInfos & getDBInstanceNetInfos() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfos_, DescribeDBInstanceNetInfoForChannelResponseBody::DBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoForChannelResponseBody::DBInstanceNetInfos getDBInstanceNetInfos() { DARABONBA_PTR_GET(DBInstanceNetInfos_, DescribeDBInstanceNetInfoForChannelResponseBody::DBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setDBInstanceNetInfos(const DescribeDBInstanceNetInfoForChannelResponseBody::DBInstanceNetInfos & dBInstanceNetInfos) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfos_, dBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setDBInstanceNetInfos(DescribeDBInstanceNetInfoForChannelResponseBody::DBInstanceNetInfos && dBInstanceNetInfos) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfos_, dBInstanceNetInfos) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the instance connection.
    shared_ptr<DescribeDBInstanceNetInfoForChannelResponseBody::DBInstanceNetInfos> DBInstanceNetInfos_ {};
    // The network type of the instance. Valid values:
    // 
    // *   **VPC**: a virtual private cloud (VPC)
    // *   **Classic**: classic network
    shared_ptr<string> instanceNetworkType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
