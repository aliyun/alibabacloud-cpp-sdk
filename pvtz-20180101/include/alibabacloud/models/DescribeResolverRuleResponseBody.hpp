// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOLVERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOLVERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeResolverRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResolverRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
      DARABONBA_PTR_TO_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(ForwardIps, forwardIps_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResolverRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
      DARABONBA_PTR_FROM_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(ForwardIps, forwardIps_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeResolverRuleResponseBody() = default ;
    DescribeResolverRuleResponseBody(const DescribeResolverRuleResponseBody &) = default ;
    DescribeResolverRuleResponseBody(DescribeResolverRuleResponseBody &&) = default ;
    DescribeResolverRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResolverRuleResponseBody() = default ;
    DescribeResolverRuleResponseBody& operator=(const DescribeResolverRuleResponseBody &) = default ;
    DescribeResolverRuleResponseBody& operator=(DescribeResolverRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardIps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardIps& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardIps& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      ForwardIps() = default ;
      ForwardIps(const ForwardIps &) = default ;
      ForwardIps(ForwardIps &&) = default ;
      ForwardIps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardIps() = default ;
      ForwardIps& operator=(const ForwardIps &) = default ;
      ForwardIps& operator=(ForwardIps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline ForwardIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline ForwardIps& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The destination IP address.
      shared_ptr<string> ip_ {};
      // The port number.
      shared_ptr<int32_t> port_ {};
    };

    class BindVpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindVpcs& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
        DARABONBA_PTR_TO_JSON(VpcUserId, vpcUserId_);
      };
      friend void from_json(const Darabonba::Json& j, BindVpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
        DARABONBA_PTR_FROM_JSON(VpcUserId, vpcUserId_);
      };
      BindVpcs() = default ;
      BindVpcs(const BindVpcs &) = default ;
      BindVpcs(BindVpcs &&) = default ;
      BindVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindVpcs() = default ;
      BindVpcs& operator=(const BindVpcs &) = default ;
      BindVpcs& operator=(BindVpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->regionName_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr && this->vpcType_ == nullptr && this->vpcUserId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BindVpcs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline BindVpcs& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline BindVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline BindVpcs& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline BindVpcs& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


      // vpcUserId Field Functions 
      bool hasVpcUserId() const { return this->vpcUserId_ != nullptr;};
      void deleteVpcUserId() { this->vpcUserId_ = nullptr;};
      inline string getVpcUserId() const { DARABONBA_PTR_GET_DEFAULT(vpcUserId_, "") };
      inline BindVpcs& setVpcUserId(string vpcUserId) { DARABONBA_PTR_SET_VALUE(vpcUserId_, vpcUserId) };


    protected:
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The region name.
      shared_ptr<string> regionName_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The VPC name.
      shared_ptr<string> vpcName_ {};
      // The VPC type. Valid values:
      // 
      // *   STANDARD: standard VPC
      // *   EDS: Elastic Desktop Service (EDS) workspace VPC
      shared_ptr<string> vpcType_ {};
      // The ID of the user to which the VPC belongs.
      shared_ptr<string> vpcUserId_ {};
    };

    class BindEdgeDnsClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindEdgeDnsClusters& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterUserId, clusterUserId_);
      };
      friend void from_json(const Darabonba::Json& j, BindEdgeDnsClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterUserId, clusterUserId_);
      };
      BindEdgeDnsClusters() = default ;
      BindEdgeDnsClusters(const BindEdgeDnsClusters &) = default ;
      BindEdgeDnsClusters(BindEdgeDnsClusters &&) = default ;
      BindEdgeDnsClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindEdgeDnsClusters() = default ;
      BindEdgeDnsClusters& operator=(const BindEdgeDnsClusters &) = default ;
      BindEdgeDnsClusters& operator=(BindEdgeDnsClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterUserId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline BindEdgeDnsClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline BindEdgeDnsClusters& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterUserId Field Functions 
      bool hasClusterUserId() const { return this->clusterUserId_ != nullptr;};
      void deleteClusterUserId() { this->clusterUserId_ = nullptr;};
      inline int64_t getClusterUserId() const { DARABONBA_PTR_GET_DEFAULT(clusterUserId_, 0L) };
      inline BindEdgeDnsClusters& setClusterUserId(int64_t clusterUserId) { DARABONBA_PTR_SET_VALUE(clusterUserId_, clusterUserId) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> clusterName_ {};
      shared_ptr<int64_t> clusterUserId_ {};
    };

    virtual bool empty() const override { return this->bindEdgeDnsClusters_ == nullptr
        && this->bindVpcs_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->endpointId_ == nullptr && this->endpointName_ == nullptr
        && this->forwardIps_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->zoneName_ == nullptr; };
    // bindEdgeDnsClusters Field Functions 
    bool hasBindEdgeDnsClusters() const { return this->bindEdgeDnsClusters_ != nullptr;};
    void deleteBindEdgeDnsClusters() { this->bindEdgeDnsClusters_ = nullptr;};
    inline const vector<DescribeResolverRuleResponseBody::BindEdgeDnsClusters> & getBindEdgeDnsClusters() const { DARABONBA_PTR_GET_CONST(bindEdgeDnsClusters_, vector<DescribeResolverRuleResponseBody::BindEdgeDnsClusters>) };
    inline vector<DescribeResolverRuleResponseBody::BindEdgeDnsClusters> getBindEdgeDnsClusters() { DARABONBA_PTR_GET(bindEdgeDnsClusters_, vector<DescribeResolverRuleResponseBody::BindEdgeDnsClusters>) };
    inline DescribeResolverRuleResponseBody& setBindEdgeDnsClusters(const vector<DescribeResolverRuleResponseBody::BindEdgeDnsClusters> & bindEdgeDnsClusters) { DARABONBA_PTR_SET_VALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };
    inline DescribeResolverRuleResponseBody& setBindEdgeDnsClusters(vector<DescribeResolverRuleResponseBody::BindEdgeDnsClusters> && bindEdgeDnsClusters) { DARABONBA_PTR_SET_RVALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };


    // bindVpcs Field Functions 
    bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
    void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
    inline const vector<DescribeResolverRuleResponseBody::BindVpcs> & getBindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, vector<DescribeResolverRuleResponseBody::BindVpcs>) };
    inline vector<DescribeResolverRuleResponseBody::BindVpcs> getBindVpcs() { DARABONBA_PTR_GET(bindVpcs_, vector<DescribeResolverRuleResponseBody::BindVpcs>) };
    inline DescribeResolverRuleResponseBody& setBindVpcs(const vector<DescribeResolverRuleResponseBody::BindVpcs> & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
    inline DescribeResolverRuleResponseBody& setBindVpcs(vector<DescribeResolverRuleResponseBody::BindVpcs> && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeResolverRuleResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeResolverRuleResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribeResolverRuleResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline DescribeResolverRuleResponseBody& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // forwardIps Field Functions 
    bool hasForwardIps() const { return this->forwardIps_ != nullptr;};
    void deleteForwardIps() { this->forwardIps_ = nullptr;};
    inline const vector<DescribeResolverRuleResponseBody::ForwardIps> & getForwardIps() const { DARABONBA_PTR_GET_CONST(forwardIps_, vector<DescribeResolverRuleResponseBody::ForwardIps>) };
    inline vector<DescribeResolverRuleResponseBody::ForwardIps> getForwardIps() { DARABONBA_PTR_GET(forwardIps_, vector<DescribeResolverRuleResponseBody::ForwardIps>) };
    inline DescribeResolverRuleResponseBody& setForwardIps(const vector<DescribeResolverRuleResponseBody::ForwardIps> & forwardIps) { DARABONBA_PTR_SET_VALUE(forwardIps_, forwardIps) };
    inline DescribeResolverRuleResponseBody& setForwardIps(vector<DescribeResolverRuleResponseBody::ForwardIps> && forwardIps) { DARABONBA_PTR_SET_RVALUE(forwardIps_, forwardIps) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeResolverRuleResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResolverRuleResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResolverRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeResolverRuleResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeResolverRuleResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeResolverRuleResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeResolverRuleResponseBody& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    shared_ptr<vector<DescribeResolverRuleResponseBody::BindEdgeDnsClusters>> bindEdgeDnsClusters_ {};
    // The virtual private clouds (VPCs) that are associated with the forwarding rule.
    shared_ptr<vector<DescribeResolverRuleResponseBody::BindVpcs>> bindVpcs_ {};
    // The time when the forwarding rule was created.
    shared_ptr<string> createTime_ {};
    // The time when the forwarding rule was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTimestamp_ {};
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The endpoint name.
    shared_ptr<string> endpointName_ {};
    // The destination IP addresses.
    shared_ptr<vector<DescribeResolverRuleResponseBody::ForwardIps>> forwardIps_ {};
    // The ID of the forwarding rule.
    shared_ptr<string> id_ {};
    // The name of the forwarding rule.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The type of the forwarding rule. Valid value:
    // 
    // OUTBOUND: outbound forwarding rule. This type of rule forwards Domain Name System (DNS) requests to one or more external IP addresses.
    shared_ptr<string> type_ {};
    // The time when the forwarding rule was updated.
    shared_ptr<string> updateTime_ {};
    // The time when the forwarding rule was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTimestamp_ {};
    // The name of the forward zone.
    shared_ptr<string> zoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
