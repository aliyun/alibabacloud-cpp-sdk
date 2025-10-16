// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERCONNECTORRESPONSEBODYACKCLUSTERCONNECTOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERCONNECTORRESPONSEBODYACKCLUSTERCONNECTOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClusterConnectorResponseBodyAckClusterConnector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClusterConnectorResponseBodyAckClusterConnector& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ConnectorHealthCheckStatus, connectorHealthCheckStatus_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(ConnectorStatus, connectorStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PrimaryVswitchId, primaryVswitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryVswitchIp, primaryVswitchIp_);
      DARABONBA_PTR_TO_JSON(PrimaryVswitchZoneId, primaryVswitchZoneId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(StandbyVswitchId, standbyVswitchId_);
      DARABONBA_PTR_TO_JSON(StandbyVswitchIp, standbyVswitchIp_);
      DARABONBA_PTR_TO_JSON(StandbyVswitchZoneId, standbyVswitchZoneId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(UnhealthyReason, unhealthyReason_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClusterConnectorResponseBodyAckClusterConnector& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ConnectorHealthCheckStatus, connectorHealthCheckStatus_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(ConnectorStatus, connectorStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PrimaryVswitchId, primaryVswitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryVswitchIp, primaryVswitchIp_);
      DARABONBA_PTR_FROM_JSON(PrimaryVswitchZoneId, primaryVswitchZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(StandbyVswitchId, standbyVswitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyVswitchIp, standbyVswitchIp_);
      DARABONBA_PTR_FROM_JSON(StandbyVswitchZoneId, standbyVswitchZoneId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(UnhealthyReason, unhealthyReason_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeAckClusterConnectorResponseBodyAckClusterConnector() = default ;
    DescribeAckClusterConnectorResponseBodyAckClusterConnector(const DescribeAckClusterConnectorResponseBodyAckClusterConnector &) = default ;
    DescribeAckClusterConnectorResponseBodyAckClusterConnector(DescribeAckClusterConnectorResponseBodyAckClusterConnector &&) = default ;
    DescribeAckClusterConnectorResponseBodyAckClusterConnector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClusterConnectorResponseBodyAckClusterConnector() = default ;
    DescribeAckClusterConnectorResponseBodyAckClusterConnector& operator=(const DescribeAckClusterConnectorResponseBodyAckClusterConnector &) = default ;
    DescribeAckClusterConnectorResponseBodyAckClusterConnector& operator=(DescribeAckClusterConnectorResponseBodyAckClusterConnector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->connectorHealthCheckStatus_ == nullptr && return this->connectorId_ == nullptr && return this->connectorName_ == nullptr && return this->connectorStatus_ == nullptr
        && return this->createTime_ == nullptr && return this->memberUid_ == nullptr && return this->primaryVswitchId_ == nullptr && return this->primaryVswitchIp_ == nullptr && return this->primaryVswitchZoneId_ == nullptr
        && return this->regionNo_ == nullptr && return this->standbyVswitchId_ == nullptr && return this->standbyVswitchIp_ == nullptr && return this->standbyVswitchZoneId_ == nullptr && return this->ttl_ == nullptr
        && return this->unhealthyReason_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // connectorHealthCheckStatus Field Functions 
    bool hasConnectorHealthCheckStatus() const { return this->connectorHealthCheckStatus_ != nullptr;};
    void deleteConnectorHealthCheckStatus() { this->connectorHealthCheckStatus_ = nullptr;};
    inline string connectorHealthCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorHealthCheckStatus_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setConnectorHealthCheckStatus(string connectorHealthCheckStatus) { DARABONBA_PTR_SET_VALUE(connectorHealthCheckStatus_, connectorHealthCheckStatus) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string connectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string connectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // connectorStatus Field Functions 
    bool hasConnectorStatus() const { return this->connectorStatus_ != nullptr;};
    void deleteConnectorStatus() { this->connectorStatus_ = nullptr;};
    inline string connectorStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorStatus_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setConnectorStatus(string connectorStatus) { DARABONBA_PTR_SET_VALUE(connectorStatus_, connectorStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // primaryVswitchId Field Functions 
    bool hasPrimaryVswitchId() const { return this->primaryVswitchId_ != nullptr;};
    void deletePrimaryVswitchId() { this->primaryVswitchId_ = nullptr;};
    inline string primaryVswitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchId_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setPrimaryVswitchId(string primaryVswitchId) { DARABONBA_PTR_SET_VALUE(primaryVswitchId_, primaryVswitchId) };


    // primaryVswitchIp Field Functions 
    bool hasPrimaryVswitchIp() const { return this->primaryVswitchIp_ != nullptr;};
    void deletePrimaryVswitchIp() { this->primaryVswitchIp_ = nullptr;};
    inline string primaryVswitchIp() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchIp_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setPrimaryVswitchIp(string primaryVswitchIp) { DARABONBA_PTR_SET_VALUE(primaryVswitchIp_, primaryVswitchIp) };


    // primaryVswitchZoneId Field Functions 
    bool hasPrimaryVswitchZoneId() const { return this->primaryVswitchZoneId_ != nullptr;};
    void deletePrimaryVswitchZoneId() { this->primaryVswitchZoneId_ = nullptr;};
    inline string primaryVswitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchZoneId_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setPrimaryVswitchZoneId(string primaryVswitchZoneId) { DARABONBA_PTR_SET_VALUE(primaryVswitchZoneId_, primaryVswitchZoneId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // standbyVswitchId Field Functions 
    bool hasStandbyVswitchId() const { return this->standbyVswitchId_ != nullptr;};
    void deleteStandbyVswitchId() { this->standbyVswitchId_ = nullptr;};
    inline string standbyVswitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchId_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setStandbyVswitchId(string standbyVswitchId) { DARABONBA_PTR_SET_VALUE(standbyVswitchId_, standbyVswitchId) };


    // standbyVswitchIp Field Functions 
    bool hasStandbyVswitchIp() const { return this->standbyVswitchIp_ != nullptr;};
    void deleteStandbyVswitchIp() { this->standbyVswitchIp_ = nullptr;};
    inline string standbyVswitchIp() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchIp_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setStandbyVswitchIp(string standbyVswitchIp) { DARABONBA_PTR_SET_VALUE(standbyVswitchIp_, standbyVswitchIp) };


    // standbyVswitchZoneId Field Functions 
    bool hasStandbyVswitchZoneId() const { return this->standbyVswitchZoneId_ != nullptr;};
    void deleteStandbyVswitchZoneId() { this->standbyVswitchZoneId_ = nullptr;};
    inline string standbyVswitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchZoneId_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setStandbyVswitchZoneId(string standbyVswitchZoneId) { DARABONBA_PTR_SET_VALUE(standbyVswitchZoneId_, standbyVswitchZoneId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // unhealthyReason Field Functions 
    bool hasUnhealthyReason() const { return this->unhealthyReason_ != nullptr;};
    void deleteUnhealthyReason() { this->unhealthyReason_ = nullptr;};
    inline string unhealthyReason() const { DARABONBA_PTR_GET_DEFAULT(unhealthyReason_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setUnhealthyReason(string unhealthyReason) { DARABONBA_PTR_SET_VALUE(unhealthyReason_, unhealthyReason) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> connectorHealthCheckStatus_ = nullptr;
    std::shared_ptr<string> connectorId_ = nullptr;
    std::shared_ptr<string> connectorName_ = nullptr;
    std::shared_ptr<string> connectorStatus_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> memberUid_ = nullptr;
    std::shared_ptr<string> primaryVswitchId_ = nullptr;
    std::shared_ptr<string> primaryVswitchIp_ = nullptr;
    std::shared_ptr<string> primaryVswitchZoneId_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> standbyVswitchId_ = nullptr;
    std::shared_ptr<string> standbyVswitchIp_ = nullptr;
    std::shared_ptr<string> standbyVswitchZoneId_ = nullptr;
    std::shared_ptr<int32_t> ttl_ = nullptr;
    std::shared_ptr<string> unhealthyReason_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
