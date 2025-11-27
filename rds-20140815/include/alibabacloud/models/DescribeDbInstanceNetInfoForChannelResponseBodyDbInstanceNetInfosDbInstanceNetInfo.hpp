// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFOFORCHANNELRESPONSEBODYDBINSTANCENETINFOSDBINSTANCENETINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights.hpp>
#include <alibabacloud/models/DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& obj) { 
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
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo(DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo &&) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& operator=(const DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo &) = default ;
    DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& operator=(DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availability_ == nullptr
        && return this->connectionString_ == nullptr && return this->connectionStringType_ == nullptr && return this->DBInstanceWeights_ == nullptr && return this->distributionType_ == nullptr && return this->IPAddress_ == nullptr
        && return this->IPType_ == nullptr && return this->maxDelayTime_ == nullptr && return this->port_ == nullptr && return this->securityIPGroups_ == nullptr && return this->upgradeable_ == nullptr
        && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->expiredTime_ == nullptr; };
    // availability Field Functions 
    bool hasAvailability() const { return this->availability_ != nullptr;};
    void deleteAvailability() { this->availability_ = nullptr;};
    inline string availability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // connectionStringType Field Functions 
    bool hasConnectionStringType() const { return this->connectionStringType_ != nullptr;};
    void deleteConnectionStringType() { this->connectionStringType_ = nullptr;};
    inline string connectionStringType() const { DARABONBA_PTR_GET_DEFAULT(connectionStringType_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setConnectionStringType(string connectionStringType) { DARABONBA_PTR_SET_VALUE(connectionStringType_, connectionStringType) };


    // DBInstanceWeights Field Functions 
    bool hasDBInstanceWeights() const { return this->DBInstanceWeights_ != nullptr;};
    void deleteDBInstanceWeights() { this->DBInstanceWeights_ = nullptr;};
    inline const Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights & DBInstanceWeights() const { DARABONBA_PTR_GET_CONST(DBInstanceWeights_, Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights) };
    inline Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights DBInstanceWeights() { DARABONBA_PTR_GET(DBInstanceWeights_, Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights) };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setDBInstanceWeights(const Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights & DBInstanceWeights) { DARABONBA_PTR_SET_VALUE(DBInstanceWeights_, DBInstanceWeights) };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setDBInstanceWeights(Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights && DBInstanceWeights) { DARABONBA_PTR_SET_RVALUE(DBInstanceWeights_, DBInstanceWeights) };


    // distributionType Field Functions 
    bool hasDistributionType() const { return this->distributionType_ != nullptr;};
    void deleteDistributionType() { this->distributionType_ = nullptr;};
    inline string distributionType() const { DARABONBA_PTR_GET_DEFAULT(distributionType_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setDistributionType(string distributionType) { DARABONBA_PTR_SET_VALUE(distributionType_, distributionType) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string IPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // maxDelayTime Field Functions 
    bool hasMaxDelayTime() const { return this->maxDelayTime_ != nullptr;};
    void deleteMaxDelayTime() { this->maxDelayTime_ = nullptr;};
    inline string maxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(maxDelayTime_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setMaxDelayTime(string maxDelayTime) { DARABONBA_PTR_SET_VALUE(maxDelayTime_, maxDelayTime) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // securityIPGroups Field Functions 
    bool hasSecurityIPGroups() const { return this->securityIPGroups_ != nullptr;};
    void deleteSecurityIPGroups() { this->securityIPGroups_ = nullptr;};
    inline const Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups & securityIPGroups() const { DARABONBA_PTR_GET_CONST(securityIPGroups_, Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups) };
    inline Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups securityIPGroups() { DARABONBA_PTR_GET(securityIPGroups_, Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups) };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setSecurityIPGroups(const Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups & securityIPGroups) { DARABONBA_PTR_SET_VALUE(securityIPGroups_, securityIPGroups) };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setSecurityIPGroups(Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups && securityIPGroups) { DARABONBA_PTR_SET_RVALUE(securityIPGroups_, securityIPGroups) };


    // upgradeable Field Functions 
    bool hasUpgradeable() const { return this->upgradeable_ != nullptr;};
    void deleteUpgradeable() { this->upgradeable_ = nullptr;};
    inline string upgradeable() const { DARABONBA_PTR_GET_DEFAULT(upgradeable_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setUpgradeable(string upgradeable) { DARABONBA_PTR_SET_VALUE(upgradeable_, upgradeable) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfo& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


  protected:
    // The availability of the instance. Valid values:
    // 
    // *   **Unavailable**
    // *   **Available**
    std::shared_ptr<string> availability_ = nullptr;
    // The endpoint of the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The type of the endpoint. Valid values:
    // 
    // *   **Normal**: a regular endpoint
    // *   **ReadWriteSplitting**: a read/write splitting endpoint that is assigned after the shared proxy feature is enabled.
    std::shared_ptr<string> connectionStringType_ = nullptr;
    // The information about read weights to implement read/write splitting after the shared proxy feature is enabled.
    std::shared_ptr<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoDBInstanceWeights> DBInstanceWeights_ = nullptr;
    // The policy that is used to assign read weights. This parameter is returned only for a read/write splitting endpoint that is assigned after the shared proxy feature is enabled. Valid values:
    // 
    // *   **Standard**: The system automatically allocates read weights to the instance and its read-only instances based on the specifications of the instances.
    // *   **Custom**: You must manually allocate read weights to the instance and its read-only instances.
    std::shared_ptr<string> distributionType_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The network type of the IP address. Valid values:
    // 
    // *   **Public**: the Internet
    // *   **Inner**: the classic network
    // *   **Private**: a virtual private cloud (VPC)
    std::shared_ptr<string> IPType_ = nullptr;
    // The latency threshold that is allowed for read/write splitting of the shared proxy feature. Unit: seconds.
    // 
    // >  This parameter is returned only when **ConnectionStringType** is set to **ReadWriteSplitting**.
    std::shared_ptr<string> maxDelayTime_ = nullptr;
    // The port number of the instance.
    std::shared_ptr<string> port_ = nullptr;
    // The details of the IP address whitelist.
    std::shared_ptr<Models::DescribeDBInstanceNetInfoForChannelResponseBodyDBInstanceNetInfosDBInstanceNetInfoSecurityIPGroups> securityIPGroups_ = nullptr;
    // An internal parameter. You do not need to specify this parameter.
    std::shared_ptr<string> upgradeable_ = nullptr;
    // The VPC ID of the instance.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID of the instance.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The expiration time of the endpoint of the classic network type. Unit: seconds.
    std::shared_ptr<string> expiredTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
