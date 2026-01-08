// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACKCLUSTERCONNECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACKCLUSTERCONNECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateAckClusterConnectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAckClusterConnectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AckClusterConnector, ackClusterConnector_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAckClusterConnectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AckClusterConnector, ackClusterConnector_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAckClusterConnectorResponseBody() = default ;
    CreateAckClusterConnectorResponseBody(const CreateAckClusterConnectorResponseBody &) = default ;
    CreateAckClusterConnectorResponseBody(CreateAckClusterConnectorResponseBody &&) = default ;
    CreateAckClusterConnectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAckClusterConnectorResponseBody() = default ;
    CreateAckClusterConnectorResponseBody& operator=(const CreateAckClusterConnectorResponseBody &) = default ;
    CreateAckClusterConnectorResponseBody& operator=(CreateAckClusterConnectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AckClusterConnector : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AckClusterConnector& obj) { 
        DARABONBA_PTR_TO_JSON(AckClientHostIp, ackClientHostIp_);
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
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, AckClusterConnector& obj) { 
        DARABONBA_PTR_FROM_JSON(AckClientHostIp, ackClientHostIp_);
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
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      AckClusterConnector() = default ;
      AckClusterConnector(const AckClusterConnector &) = default ;
      AckClusterConnector(AckClusterConnector &&) = default ;
      AckClusterConnector(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AckClusterConnector() = default ;
      AckClusterConnector& operator=(const AckClusterConnector &) = default ;
      AckClusterConnector& operator=(AckClusterConnector &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ackClientHostIp_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->connectorHealthCheckStatus_ == nullptr && this->connectorId_ == nullptr && this->connectorName_ == nullptr
        && this->connectorStatus_ == nullptr && this->createTime_ == nullptr && this->memberUid_ == nullptr && this->primaryVswitchId_ == nullptr && this->primaryVswitchIp_ == nullptr
        && this->primaryVswitchZoneId_ == nullptr && this->regionNo_ == nullptr && this->standbyVswitchId_ == nullptr && this->standbyVswitchIp_ == nullptr && this->standbyVswitchZoneId_ == nullptr
        && this->taskId_ == nullptr && this->ttl_ == nullptr && this->vpcId_ == nullptr; };
      // ackClientHostIp Field Functions 
      bool hasAckClientHostIp() const { return this->ackClientHostIp_ != nullptr;};
      void deleteAckClientHostIp() { this->ackClientHostIp_ = nullptr;};
      inline string getAckClientHostIp() const { DARABONBA_PTR_GET_DEFAULT(ackClientHostIp_, "") };
      inline AckClusterConnector& setAckClientHostIp(string ackClientHostIp) { DARABONBA_PTR_SET_VALUE(ackClientHostIp_, ackClientHostIp) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline AckClusterConnector& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline AckClusterConnector& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // connectorHealthCheckStatus Field Functions 
      bool hasConnectorHealthCheckStatus() const { return this->connectorHealthCheckStatus_ != nullptr;};
      void deleteConnectorHealthCheckStatus() { this->connectorHealthCheckStatus_ = nullptr;};
      inline string getConnectorHealthCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorHealthCheckStatus_, "") };
      inline AckClusterConnector& setConnectorHealthCheckStatus(string connectorHealthCheckStatus) { DARABONBA_PTR_SET_VALUE(connectorHealthCheckStatus_, connectorHealthCheckStatus) };


      // connectorId Field Functions 
      bool hasConnectorId() const { return this->connectorId_ != nullptr;};
      void deleteConnectorId() { this->connectorId_ = nullptr;};
      inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
      inline AckClusterConnector& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


      // connectorName Field Functions 
      bool hasConnectorName() const { return this->connectorName_ != nullptr;};
      void deleteConnectorName() { this->connectorName_ = nullptr;};
      inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
      inline AckClusterConnector& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


      // connectorStatus Field Functions 
      bool hasConnectorStatus() const { return this->connectorStatus_ != nullptr;};
      void deleteConnectorStatus() { this->connectorStatus_ = nullptr;};
      inline string getConnectorStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorStatus_, "") };
      inline AckClusterConnector& setConnectorStatus(string connectorStatus) { DARABONBA_PTR_SET_VALUE(connectorStatus_, connectorStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AckClusterConnector& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline AckClusterConnector& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // primaryVswitchId Field Functions 
      bool hasPrimaryVswitchId() const { return this->primaryVswitchId_ != nullptr;};
      void deletePrimaryVswitchId() { this->primaryVswitchId_ = nullptr;};
      inline string getPrimaryVswitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchId_, "") };
      inline AckClusterConnector& setPrimaryVswitchId(string primaryVswitchId) { DARABONBA_PTR_SET_VALUE(primaryVswitchId_, primaryVswitchId) };


      // primaryVswitchIp Field Functions 
      bool hasPrimaryVswitchIp() const { return this->primaryVswitchIp_ != nullptr;};
      void deletePrimaryVswitchIp() { this->primaryVswitchIp_ = nullptr;};
      inline string getPrimaryVswitchIp() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchIp_, "") };
      inline AckClusterConnector& setPrimaryVswitchIp(string primaryVswitchIp) { DARABONBA_PTR_SET_VALUE(primaryVswitchIp_, primaryVswitchIp) };


      // primaryVswitchZoneId Field Functions 
      bool hasPrimaryVswitchZoneId() const { return this->primaryVswitchZoneId_ != nullptr;};
      void deletePrimaryVswitchZoneId() { this->primaryVswitchZoneId_ = nullptr;};
      inline string getPrimaryVswitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryVswitchZoneId_, "") };
      inline AckClusterConnector& setPrimaryVswitchZoneId(string primaryVswitchZoneId) { DARABONBA_PTR_SET_VALUE(primaryVswitchZoneId_, primaryVswitchZoneId) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline AckClusterConnector& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // standbyVswitchId Field Functions 
      bool hasStandbyVswitchId() const { return this->standbyVswitchId_ != nullptr;};
      void deleteStandbyVswitchId() { this->standbyVswitchId_ = nullptr;};
      inline string getStandbyVswitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchId_, "") };
      inline AckClusterConnector& setStandbyVswitchId(string standbyVswitchId) { DARABONBA_PTR_SET_VALUE(standbyVswitchId_, standbyVswitchId) };


      // standbyVswitchIp Field Functions 
      bool hasStandbyVswitchIp() const { return this->standbyVswitchIp_ != nullptr;};
      void deleteStandbyVswitchIp() { this->standbyVswitchIp_ = nullptr;};
      inline string getStandbyVswitchIp() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchIp_, "") };
      inline AckClusterConnector& setStandbyVswitchIp(string standbyVswitchIp) { DARABONBA_PTR_SET_VALUE(standbyVswitchIp_, standbyVswitchIp) };


      // standbyVswitchZoneId Field Functions 
      bool hasStandbyVswitchZoneId() const { return this->standbyVswitchZoneId_ != nullptr;};
      void deleteStandbyVswitchZoneId() { this->standbyVswitchZoneId_ = nullptr;};
      inline string getStandbyVswitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyVswitchZoneId_, "") };
      inline AckClusterConnector& setStandbyVswitchZoneId(string standbyVswitchZoneId) { DARABONBA_PTR_SET_VALUE(standbyVswitchZoneId_, standbyVswitchZoneId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline AckClusterConnector& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline AckClusterConnector& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline AckClusterConnector& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> ackClientHostIp_ {};
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> clusterName_ {};
      shared_ptr<string> connectorHealthCheckStatus_ {};
      shared_ptr<string> connectorId_ {};
      shared_ptr<string> connectorName_ {};
      shared_ptr<string> connectorStatus_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> memberUid_ {};
      shared_ptr<string> primaryVswitchId_ {};
      shared_ptr<string> primaryVswitchIp_ {};
      shared_ptr<string> primaryVswitchZoneId_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> standbyVswitchId_ {};
      shared_ptr<string> standbyVswitchIp_ {};
      shared_ptr<string> standbyVswitchZoneId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<int32_t> ttl_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->ackClusterConnector_ == nullptr
        && this->requestId_ == nullptr; };
    // ackClusterConnector Field Functions 
    bool hasAckClusterConnector() const { return this->ackClusterConnector_ != nullptr;};
    void deleteAckClusterConnector() { this->ackClusterConnector_ = nullptr;};
    inline const CreateAckClusterConnectorResponseBody::AckClusterConnector & getAckClusterConnector() const { DARABONBA_PTR_GET_CONST(ackClusterConnector_, CreateAckClusterConnectorResponseBody::AckClusterConnector) };
    inline CreateAckClusterConnectorResponseBody::AckClusterConnector getAckClusterConnector() { DARABONBA_PTR_GET(ackClusterConnector_, CreateAckClusterConnectorResponseBody::AckClusterConnector) };
    inline CreateAckClusterConnectorResponseBody& setAckClusterConnector(const CreateAckClusterConnectorResponseBody::AckClusterConnector & ackClusterConnector) { DARABONBA_PTR_SET_VALUE(ackClusterConnector_, ackClusterConnector) };
    inline CreateAckClusterConnectorResponseBody& setAckClusterConnector(CreateAckClusterConnectorResponseBody::AckClusterConnector && ackClusterConnector) { DARABONBA_PTR_SET_RVALUE(ackClusterConnector_, ackClusterConnector) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAckClusterConnectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateAckClusterConnectorResponseBody::AckClusterConnector> ackClusterConnector_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
