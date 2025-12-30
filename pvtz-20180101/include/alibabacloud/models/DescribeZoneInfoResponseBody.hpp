// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONEINFORESPONSEBODY_HPP_
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
  class DescribeZoneInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZoneInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
      DARABONBA_PTR_TO_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_TO_JSON(DnsGroup, dnsGroup_);
      DARABONBA_PTR_TO_JSON(DnsGroupChanging, dnsGroupChanging_);
      DARABONBA_PTR_TO_JSON(IsPtr, isPtr_);
      DARABONBA_PTR_TO_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      DARABONBA_PTR_TO_JSON(ZoneTag, zoneTag_);
      DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZoneInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
      DARABONBA_PTR_FROM_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_FROM_JSON(DnsGroup, dnsGroup_);
      DARABONBA_PTR_FROM_JSON(DnsGroupChanging, dnsGroupChanging_);
      DARABONBA_PTR_FROM_JSON(IsPtr, isPtr_);
      DARABONBA_PTR_FROM_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
      DARABONBA_PTR_FROM_JSON(ZoneTag, zoneTag_);
      DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
    };
    DescribeZoneInfoResponseBody() = default ;
    DescribeZoneInfoResponseBody(const DescribeZoneInfoResponseBody &) = default ;
    DescribeZoneInfoResponseBody(DescribeZoneInfoResponseBody &&) = default ;
    DescribeZoneInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZoneInfoResponseBody() = default ;
    DescribeZoneInfoResponseBody& operator=(const DescribeZoneInfoResponseBody &) = default ;
    DescribeZoneInfoResponseBody& operator=(DescribeZoneInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BindVpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindVpcs& obj) { 
        DARABONBA_PTR_TO_JSON(Vpc, vpc_);
      };
      friend void from_json(const Darabonba::Json& j, BindVpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
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
      class Vpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RegionName, regionName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
          DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
          DARABONBA_PTR_TO_JSON(VpcUserId, vpcUserId_);
        };
        friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
          DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
          DARABONBA_PTR_FROM_JSON(VpcUserId, vpcUserId_);
        };
        Vpc() = default ;
        Vpc(const Vpc &) = default ;
        Vpc(Vpc &&) = default ;
        Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vpc() = default ;
        Vpc& operator=(const Vpc &) = default ;
        Vpc& operator=(Vpc &&) = default ;
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
        inline Vpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // regionName Field Functions 
        bool hasRegionName() const { return this->regionName_ != nullptr;};
        void deleteRegionName() { this->regionName_ = nullptr;};
        inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
        inline Vpc& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline Vpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


        // vpcType Field Functions 
        bool hasVpcType() const { return this->vpcType_ != nullptr;};
        void deleteVpcType() { this->vpcType_ = nullptr;};
        inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
        inline Vpc& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


        // vpcUserId Field Functions 
        bool hasVpcUserId() const { return this->vpcUserId_ != nullptr;};
        void deleteVpcUserId() { this->vpcUserId_ = nullptr;};
        inline int64_t getVpcUserId() const { DARABONBA_PTR_GET_DEFAULT(vpcUserId_, 0L) };
        inline Vpc& setVpcUserId(int64_t vpcUserId) { DARABONBA_PTR_SET_VALUE(vpcUserId_, vpcUserId) };


      protected:
        // The region ID of the VPC.
        shared_ptr<string> regionId_ {};
        // The name of the region where the VPC resides.
        shared_ptr<string> regionName_ {};
        // The VPC ID. This ID uniquely identifies the VPC.
        shared_ptr<string> vpcId_ {};
        // The VPC name.
        shared_ptr<string> vpcName_ {};
        // The VPC type. Valid values:
        // 
        // *   STANDARD: standard VPC
        // *   EDS: Elastic Desktop Service (EDS) workspace VPC
        shared_ptr<string> vpcType_ {};
        // The user ID to which the VPC belongs. If null is returned, the VPC belongs to the current user.
        shared_ptr<int64_t> vpcUserId_ {};
      };

      virtual bool empty() const override { return this->vpc_ == nullptr; };
      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline const vector<BindVpcs::Vpc> & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, vector<BindVpcs::Vpc>) };
      inline vector<BindVpcs::Vpc> getVpc() { DARABONBA_PTR_GET(vpc_, vector<BindVpcs::Vpc>) };
      inline BindVpcs& setVpc(const vector<BindVpcs::Vpc> & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
      inline BindVpcs& setVpc(vector<BindVpcs::Vpc> && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


    protected:
      shared_ptr<vector<BindVpcs::Vpc>> vpc_ {};
    };

    class BindEdgeDnsClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindEdgeDnsClusters& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeDnsCluster, edgeDnsCluster_);
      };
      friend void from_json(const Darabonba::Json& j, BindEdgeDnsClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeDnsCluster, edgeDnsCluster_);
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
      class EdgeDnsCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EdgeDnsCluster& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(ClusterUserId, clusterUserId_);
        };
        friend void from_json(const Darabonba::Json& j, EdgeDnsCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(ClusterUserId, clusterUserId_);
        };
        EdgeDnsCluster() = default ;
        EdgeDnsCluster(const EdgeDnsCluster &) = default ;
        EdgeDnsCluster(EdgeDnsCluster &&) = default ;
        EdgeDnsCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EdgeDnsCluster() = default ;
        EdgeDnsCluster& operator=(const EdgeDnsCluster &) = default ;
        EdgeDnsCluster& operator=(EdgeDnsCluster &&) = default ;
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
        inline EdgeDnsCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline EdgeDnsCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // clusterUserId Field Functions 
        bool hasClusterUserId() const { return this->clusterUserId_ != nullptr;};
        void deleteClusterUserId() { this->clusterUserId_ = nullptr;};
        inline int64_t getClusterUserId() const { DARABONBA_PTR_GET_DEFAULT(clusterUserId_, 0L) };
        inline EdgeDnsCluster& setClusterUserId(int64_t clusterUserId) { DARABONBA_PTR_SET_VALUE(clusterUserId_, clusterUserId) };


      protected:
        shared_ptr<string> clusterId_ {};
        shared_ptr<string> clusterName_ {};
        shared_ptr<int64_t> clusterUserId_ {};
      };

      virtual bool empty() const override { return this->edgeDnsCluster_ == nullptr; };
      // edgeDnsCluster Field Functions 
      bool hasEdgeDnsCluster() const { return this->edgeDnsCluster_ != nullptr;};
      void deleteEdgeDnsCluster() { this->edgeDnsCluster_ = nullptr;};
      inline const vector<BindEdgeDnsClusters::EdgeDnsCluster> & getEdgeDnsCluster() const { DARABONBA_PTR_GET_CONST(edgeDnsCluster_, vector<BindEdgeDnsClusters::EdgeDnsCluster>) };
      inline vector<BindEdgeDnsClusters::EdgeDnsCluster> getEdgeDnsCluster() { DARABONBA_PTR_GET(edgeDnsCluster_, vector<BindEdgeDnsClusters::EdgeDnsCluster>) };
      inline BindEdgeDnsClusters& setEdgeDnsCluster(const vector<BindEdgeDnsClusters::EdgeDnsCluster> & edgeDnsCluster) { DARABONBA_PTR_SET_VALUE(edgeDnsCluster_, edgeDnsCluster) };
      inline BindEdgeDnsClusters& setEdgeDnsCluster(vector<BindEdgeDnsClusters::EdgeDnsCluster> && edgeDnsCluster) { DARABONBA_PTR_SET_RVALUE(edgeDnsCluster_, edgeDnsCluster) };


    protected:
      shared_ptr<vector<BindEdgeDnsClusters::EdgeDnsCluster>> edgeDnsCluster_ {};
    };

    virtual bool empty() const override { return this->bindEdgeDnsClusters_ == nullptr
        && this->bindVpcs_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->creator_ == nullptr && this->creatorType_ == nullptr
        && this->dnsGroup_ == nullptr && this->dnsGroupChanging_ == nullptr && this->isPtr_ == nullptr && this->proxyPattern_ == nullptr && this->recordCount_ == nullptr
        && this->remark_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->slaveDns_ == nullptr && this->updateTime_ == nullptr
        && this->updateTimestamp_ == nullptr && this->zoneId_ == nullptr && this->zoneName_ == nullptr && this->zoneTag_ == nullptr && this->zoneType_ == nullptr; };
    // bindEdgeDnsClusters Field Functions 
    bool hasBindEdgeDnsClusters() const { return this->bindEdgeDnsClusters_ != nullptr;};
    void deleteBindEdgeDnsClusters() { this->bindEdgeDnsClusters_ = nullptr;};
    inline const DescribeZoneInfoResponseBody::BindEdgeDnsClusters & getBindEdgeDnsClusters() const { DARABONBA_PTR_GET_CONST(bindEdgeDnsClusters_, DescribeZoneInfoResponseBody::BindEdgeDnsClusters) };
    inline DescribeZoneInfoResponseBody::BindEdgeDnsClusters getBindEdgeDnsClusters() { DARABONBA_PTR_GET(bindEdgeDnsClusters_, DescribeZoneInfoResponseBody::BindEdgeDnsClusters) };
    inline DescribeZoneInfoResponseBody& setBindEdgeDnsClusters(const DescribeZoneInfoResponseBody::BindEdgeDnsClusters & bindEdgeDnsClusters) { DARABONBA_PTR_SET_VALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };
    inline DescribeZoneInfoResponseBody& setBindEdgeDnsClusters(DescribeZoneInfoResponseBody::BindEdgeDnsClusters && bindEdgeDnsClusters) { DARABONBA_PTR_SET_RVALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };


    // bindVpcs Field Functions 
    bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
    void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
    inline const DescribeZoneInfoResponseBody::BindVpcs & getBindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, DescribeZoneInfoResponseBody::BindVpcs) };
    inline DescribeZoneInfoResponseBody::BindVpcs getBindVpcs() { DARABONBA_PTR_GET(bindVpcs_, DescribeZoneInfoResponseBody::BindVpcs) };
    inline DescribeZoneInfoResponseBody& setBindVpcs(const DescribeZoneInfoResponseBody::BindVpcs & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
    inline DescribeZoneInfoResponseBody& setBindVpcs(DescribeZoneInfoResponseBody::BindVpcs && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeZoneInfoResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeZoneInfoResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeZoneInfoResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline DescribeZoneInfoResponseBody& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // dnsGroup Field Functions 
    bool hasDnsGroup() const { return this->dnsGroup_ != nullptr;};
    void deleteDnsGroup() { this->dnsGroup_ = nullptr;};
    inline string getDnsGroup() const { DARABONBA_PTR_GET_DEFAULT(dnsGroup_, "") };
    inline DescribeZoneInfoResponseBody& setDnsGroup(string dnsGroup) { DARABONBA_PTR_SET_VALUE(dnsGroup_, dnsGroup) };


    // dnsGroupChanging Field Functions 
    bool hasDnsGroupChanging() const { return this->dnsGroupChanging_ != nullptr;};
    void deleteDnsGroupChanging() { this->dnsGroupChanging_ = nullptr;};
    inline bool getDnsGroupChanging() const { DARABONBA_PTR_GET_DEFAULT(dnsGroupChanging_, false) };
    inline DescribeZoneInfoResponseBody& setDnsGroupChanging(bool dnsGroupChanging) { DARABONBA_PTR_SET_VALUE(dnsGroupChanging_, dnsGroupChanging) };


    // isPtr Field Functions 
    bool hasIsPtr() const { return this->isPtr_ != nullptr;};
    void deleteIsPtr() { this->isPtr_ = nullptr;};
    inline bool getIsPtr() const { DARABONBA_PTR_GET_DEFAULT(isPtr_, false) };
    inline DescribeZoneInfoResponseBody& setIsPtr(bool isPtr) { DARABONBA_PTR_SET_VALUE(isPtr_, isPtr) };


    // proxyPattern Field Functions 
    bool hasProxyPattern() const { return this->proxyPattern_ != nullptr;};
    void deleteProxyPattern() { this->proxyPattern_ = nullptr;};
    inline string getProxyPattern() const { DARABONBA_PTR_GET_DEFAULT(proxyPattern_, "") };
    inline DescribeZoneInfoResponseBody& setProxyPattern(string proxyPattern) { DARABONBA_PTR_SET_VALUE(proxyPattern_, proxyPattern) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int32_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0) };
    inline DescribeZoneInfoResponseBody& setRecordCount(int32_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeZoneInfoResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeZoneInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeZoneInfoResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDns Field Functions 
    bool hasSlaveDns() const { return this->slaveDns_ != nullptr;};
    void deleteSlaveDns() { this->slaveDns_ = nullptr;};
    inline bool getSlaveDns() const { DARABONBA_PTR_GET_DEFAULT(slaveDns_, false) };
    inline DescribeZoneInfoResponseBody& setSlaveDns(bool slaveDns) { DARABONBA_PTR_SET_VALUE(slaveDns_, slaveDns) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeZoneInfoResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeZoneInfoResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeZoneInfoResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeZoneInfoResponseBody& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    // zoneTag Field Functions 
    bool hasZoneTag() const { return this->zoneTag_ != nullptr;};
    void deleteZoneTag() { this->zoneTag_ = nullptr;};
    inline string getZoneTag() const { DARABONBA_PTR_GET_DEFAULT(zoneTag_, "") };
    inline DescribeZoneInfoResponseBody& setZoneTag(string zoneTag) { DARABONBA_PTR_SET_VALUE(zoneTag_, zoneTag) };


    // zoneType Field Functions 
    bool hasZoneType() const { return this->zoneType_ != nullptr;};
    void deleteZoneType() { this->zoneType_ = nullptr;};
    inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
    inline DescribeZoneInfoResponseBody& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


  protected:
    shared_ptr<DescribeZoneInfoResponseBody::BindEdgeDnsClusters> bindEdgeDnsClusters_ {};
    // The VPCs associated with the zone.
    shared_ptr<DescribeZoneInfoResponseBody::BindVpcs> bindVpcs_ {};
    // The time when the zone was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The time when the zone was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTimestamp_ {};
    // The creator of the zone.
    shared_ptr<string> creator_ {};
    // The type of the creator.
    shared_ptr<string> creatorType_ {};
    // The logical location type of the built-in authoritative module in which the zone is added. Valid values:
    // 
    // *   **NORMAL_ZONE**: regular module
    // *   **FAST_ZONE**: acceleration module
    shared_ptr<string> dnsGroup_ {};
    // Indicates whether the zone is being removed to another logical location. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> dnsGroupChanging_ {};
    // Indicates whether the zone is a reverse lookup zone. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isPtr_ {};
    // Indicates whether the recursive resolution proxy for subdomain names is enabled. Valid values:
    // 
    // *   ZONE: The recursive resolution proxy for subdomain names is disabled. In this case, NXDOMAIN is returned if the queried domain name does not exist in the zone.
    // *   RECORD: The recursive resolution proxy for subdomain names is enabled. In this case, if the queried domain name does not exist in the zone, DNS requests are recursively forwarded to the forward module and then to the recursion module until DNS results are returned.
    shared_ptr<string> proxyPattern_ {};
    // The total number of DNS records added in the zone.
    shared_ptr<int32_t> recordCount_ {};
    // The description of the zone.
    shared_ptr<string> remark_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the zone belongs.
    shared_ptr<string> resourceGroupId_ {};
    // Indicates whether the secondary Domain Name System (DNS) feature is enabled for the zone. Valid values:
    // 
    // *   **true**: The secondary DNS feature is enabled.
    // *   **false**: The secondary DNS feature is disabled.
    shared_ptr<bool> slaveDns_ {};
    // The time when the zone was last updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> updateTime_ {};
    // The time when the zone was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTimestamp_ {};
    // The zone ID. This ID uniquely identifies the zone.
    shared_ptr<string> zoneId_ {};
    // The zone name.
    shared_ptr<string> zoneName_ {};
    // The tag added to the zone.
    shared_ptr<string> zoneTag_ {};
    // The zone type. Valid values:
    // 
    // *   **AUTH_ZONE**: authoritative zone
    // *   **CLOUD_PRODUCT_ZONE**: authoritative zone for cloud services
    shared_ptr<string> zoneType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
