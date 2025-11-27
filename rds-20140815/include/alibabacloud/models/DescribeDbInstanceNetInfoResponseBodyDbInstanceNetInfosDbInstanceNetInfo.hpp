// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights.hpp>
#include <alibabacloud/models/DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BabelfishPort, babelfishPort_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ConnectionStringType, connectionStringType_);
      DARABONBA_PTR_TO_JSON(DBInstanceWeights, DBInstanceWeights_);
      DARABONBA_PTR_TO_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(IPType, IPType_);
      DARABONBA_PTR_TO_JSON(MaxDelayTime, maxDelayTime_);
      DARABONBA_PTR_TO_JSON(PGBouncerPort, PGBouncerPort_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SecurityIPGroups, securityIPGroups_);
      DARABONBA_PTR_TO_JSON(Upgradeable, upgradeable_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BabelfishPort, babelfishPort_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringType, connectionStringType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceWeights, DBInstanceWeights_);
      DARABONBA_PTR_FROM_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(IPType, IPType_);
      DARABONBA_PTR_FROM_JSON(MaxDelayTime, maxDelayTime_);
      DARABONBA_PTR_FROM_JSON(PGBouncerPort, PGBouncerPort_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SecurityIPGroups, securityIPGroups_);
      DARABONBA_PTR_FROM_JSON(Upgradeable, upgradeable_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &&) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& operator=(const DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& operator=(DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->babelfishPort_ == nullptr
        && return this->connectionString_ == nullptr && return this->connectionStringType_ == nullptr && return this->DBInstanceWeights_ == nullptr && return this->distributionType_ == nullptr && return this->expiredTime_ == nullptr
        && return this->IPAddress_ == nullptr && return this->IPType_ == nullptr && return this->maxDelayTime_ == nullptr && return this->PGBouncerPort_ == nullptr && return this->port_ == nullptr
        && return this->securityIPGroups_ == nullptr && return this->upgradeable_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr; };
    // babelfishPort Field Functions 
    bool hasBabelfishPort() const { return this->babelfishPort_ != nullptr;};
    void deleteBabelfishPort() { this->babelfishPort_ = nullptr;};
    inline string babelfishPort() const { DARABONBA_PTR_GET_DEFAULT(babelfishPort_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setBabelfishPort(string babelfishPort) { DARABONBA_PTR_SET_VALUE(babelfishPort_, babelfishPort) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // connectionStringType Field Functions 
    bool hasConnectionStringType() const { return this->connectionStringType_ != nullptr;};
    void deleteConnectionStringType() { this->connectionStringType_ = nullptr;};
    inline string connectionStringType() const { DARABONBA_PTR_GET_DEFAULT(connectionStringType_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setConnectionStringType(string connectionStringType) { DARABONBA_PTR_SET_VALUE(connectionStringType_, connectionStringType) };


    // DBInstanceWeights Field Functions 
    bool hasDBInstanceWeights() const { return this->DBInstanceWeights_ != nullptr;};
    void deleteDBInstanceWeights() { this->DBInstanceWeights_ = nullptr;};
    inline const Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights & DBInstanceWeights() const { DARABONBA_PTR_GET_CONST(DBInstanceWeights_, Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights) };
    inline Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights DBInstanceWeights() { DARABONBA_PTR_GET(DBInstanceWeights_, Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setDBInstanceWeights(const Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights & DBInstanceWeights) { DARABONBA_PTR_SET_VALUE(DBInstanceWeights_, DBInstanceWeights) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setDBInstanceWeights(Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights && DBInstanceWeights) { DARABONBA_PTR_SET_RVALUE(DBInstanceWeights_, DBInstanceWeights) };


    // distributionType Field Functions 
    bool hasDistributionType() const { return this->distributionType_ != nullptr;};
    void deleteDistributionType() { this->distributionType_ = nullptr;};
    inline string distributionType() const { DARABONBA_PTR_GET_DEFAULT(distributionType_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setDistributionType(string distributionType) { DARABONBA_PTR_SET_VALUE(distributionType_, distributionType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string IPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // maxDelayTime Field Functions 
    bool hasMaxDelayTime() const { return this->maxDelayTime_ != nullptr;};
    void deleteMaxDelayTime() { this->maxDelayTime_ = nullptr;};
    inline string maxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(maxDelayTime_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setMaxDelayTime(string maxDelayTime) { DARABONBA_PTR_SET_VALUE(maxDelayTime_, maxDelayTime) };


    // PGBouncerPort Field Functions 
    bool hasPGBouncerPort() const { return this->PGBouncerPort_ != nullptr;};
    void deletePGBouncerPort() { this->PGBouncerPort_ = nullptr;};
    inline string PGBouncerPort() const { DARABONBA_PTR_GET_DEFAULT(PGBouncerPort_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setPGBouncerPort(string PGBouncerPort) { DARABONBA_PTR_SET_VALUE(PGBouncerPort_, PGBouncerPort) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // securityIPGroups Field Functions 
    bool hasSecurityIPGroups() const { return this->securityIPGroups_ != nullptr;};
    void deleteSecurityIPGroups() { this->securityIPGroups_ = nullptr;};
    inline const Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups & securityIPGroups() const { DARABONBA_PTR_GET_CONST(securityIPGroups_, Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups) };
    inline Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups securityIPGroups() { DARABONBA_PTR_GET(securityIPGroups_, Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setSecurityIPGroups(const Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups & securityIPGroups) { DARABONBA_PTR_SET_VALUE(securityIPGroups_, securityIPGroups) };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setSecurityIPGroups(Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups && securityIPGroups) { DARABONBA_PTR_SET_RVALUE(securityIPGroups_, securityIPGroups) };


    // upgradeable Field Functions 
    bool hasUpgradeable() const { return this->upgradeable_ != nullptr;};
    void deleteUpgradeable() { this->upgradeable_ = nullptr;};
    inline string upgradeable() const { DARABONBA_PTR_GET_DEFAULT(upgradeable_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setUpgradeable(string upgradeable) { DARABONBA_PTR_SET_VALUE(upgradeable_, upgradeable) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The Tabular Data Stream (TDS) port of the instance for which Babelfish is enabled.
    // 
    // >  This parameter applies only to ApsaraDB RDS for PostgreSQL instances. For more information about Babelfish for ApsaraDB RDS for PostgreSQL, see [Introduction to Babelfish](https://help.aliyun.com/document_detail/428613.html).
    std::shared_ptr<string> babelfishPort_ = nullptr;
    // The endpoint of the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The type of the endpoint. Valid values:
    // 
    // *   **Normal**: a regular endpoint
    // *   **ReadWriteSplitting**: a read/write splitting endpoint
    std::shared_ptr<string> connectionStringType_ = nullptr;
    // The information about the instance weight.
    // 
    // >  This parameter is returned only when the read/write splitting feature is enabled for the instance.
    std::shared_ptr<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights> DBInstanceWeights_ = nullptr;
    // The policy that is used to assign read weights. This parameter is returned only for a read/write splitting endpoint. Valid values:
    // 
    // *   **Standard**: The system automatically allocates read weights to the instance and its read-only instances based on the specifications of the instances.
    // *   **Custom**: You must manually allocate read weights to the instance and its read-only instances.
    std::shared_ptr<string> distributionType_ = nullptr;
    // The remaining validity period of the instance in the classic network in hybrid access mode. Unit: seconds.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The network type.
    // 
    // *   Valid values when the instance resides in the classic network:
    // 
    //     *   **Inner**
    //     *   **Public**
    // 
    // *   Valid values when the instance resides in a virtual private cloud (VPC):
    // 
    //     *   **Private**
    //     *   **Public**
    std::shared_ptr<string> IPType_ = nullptr;
    // The latency threshold. This parameter is returned only for a read/write splitting endpoint. Unit: seconds.
    // 
    // >  If the latency on a read-only instance exceeds the specified threshold, ApsaraDB RDS no longer forwards read requests to the read-only instance.
    std::shared_ptr<string> maxDelayTime_ = nullptr;
    // The PgBouncer port.
    // 
    // >  This parameter is returned only when PgBouncer is enabled for the instance that runs PostgreSQL.
    std::shared_ptr<string> PGBouncerPort_ = nullptr;
    // The port that is used to connect to the instance.
    std::shared_ptr<string> port_ = nullptr;
    // The IP addresses in the whitelist for the instance.
    std::shared_ptr<Models::DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups> securityIPGroups_ = nullptr;
    // Indicates whether the IP version can be updated. Valid values:
    // 
    // *   **Enable**
    // *   **Disabled**
    // 
    // >  The IP version can be updated from IPv4 to IPv6.
    std::shared_ptr<string> upgradeable_ = nullptr;
    // The VPC ID of the instance.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
