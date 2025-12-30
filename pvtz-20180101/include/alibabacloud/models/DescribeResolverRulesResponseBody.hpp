// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOLVERRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOLVERRULESRESPONSEBODY_HPP_
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
  class DescribeResolverRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResolverRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResolverRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeResolverRulesResponseBody() = default ;
    DescribeResolverRulesResponseBody(const DescribeResolverRulesResponseBody &) = default ;
    DescribeResolverRulesResponseBody(DescribeResolverRulesResponseBody &&) = default ;
    DescribeResolverRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResolverRulesResponseBody() = default ;
    DescribeResolverRulesResponseBody& operator=(const DescribeResolverRulesResponseBody &) = default ;
    DescribeResolverRulesResponseBody& operator=(DescribeResolverRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
        DARABONBA_PTR_TO_JSON(BindVpcs, bindVpcs_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_TO_JSON(ForwardIps, forwardIps_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PriorityForwardConfigs, priorityForwardConfigs_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(BindEdgeDnsClusters, bindEdgeDnsClusters_);
        DARABONBA_PTR_FROM_JSON(BindVpcs, bindVpcs_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_FROM_JSON(ForwardIps, forwardIps_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PriorityForwardConfigs, priorityForwardConfigs_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PriorityForwardConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriorityForwardConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(AlidnsServiceAddresses, alidnsServiceAddresses_);
          DARABONBA_PTR_TO_JSON(CustomAddresses, customAddresses_);
          DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, PriorityForwardConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(AlidnsServiceAddresses, alidnsServiceAddresses_);
          DARABONBA_PTR_FROM_JSON(CustomAddresses, customAddresses_);
          DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        PriorityForwardConfigs() = default ;
        PriorityForwardConfigs(const PriorityForwardConfigs &) = default ;
        PriorityForwardConfigs(PriorityForwardConfigs &&) = default ;
        PriorityForwardConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriorityForwardConfigs() = default ;
        PriorityForwardConfigs& operator=(const PriorityForwardConfigs &) = default ;
        PriorityForwardConfigs& operator=(PriorityForwardConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alidnsServiceAddresses_ == nullptr
        && this->customAddresses_ == nullptr && this->enableStatus_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr; };
        // alidnsServiceAddresses Field Functions 
        bool hasAlidnsServiceAddresses() const { return this->alidnsServiceAddresses_ != nullptr;};
        void deleteAlidnsServiceAddresses() { this->alidnsServiceAddresses_ = nullptr;};
        inline const vector<string> & getAlidnsServiceAddresses() const { DARABONBA_PTR_GET_CONST(alidnsServiceAddresses_, vector<string>) };
        inline vector<string> getAlidnsServiceAddresses() { DARABONBA_PTR_GET(alidnsServiceAddresses_, vector<string>) };
        inline PriorityForwardConfigs& setAlidnsServiceAddresses(const vector<string> & alidnsServiceAddresses) { DARABONBA_PTR_SET_VALUE(alidnsServiceAddresses_, alidnsServiceAddresses) };
        inline PriorityForwardConfigs& setAlidnsServiceAddresses(vector<string> && alidnsServiceAddresses) { DARABONBA_PTR_SET_RVALUE(alidnsServiceAddresses_, alidnsServiceAddresses) };


        // customAddresses Field Functions 
        bool hasCustomAddresses() const { return this->customAddresses_ != nullptr;};
        void deleteCustomAddresses() { this->customAddresses_ = nullptr;};
        inline const vector<string> & getCustomAddresses() const { DARABONBA_PTR_GET_CONST(customAddresses_, vector<string>) };
        inline vector<string> getCustomAddresses() { DARABONBA_PTR_GET(customAddresses_, vector<string>) };
        inline PriorityForwardConfigs& setCustomAddresses(const vector<string> & customAddresses) { DARABONBA_PTR_SET_VALUE(customAddresses_, customAddresses) };
        inline PriorityForwardConfigs& setCustomAddresses(vector<string> && customAddresses) { DARABONBA_PTR_SET_RVALUE(customAddresses_, customAddresses) };


        // enableStatus Field Functions 
        bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
        void deleteEnableStatus() { this->enableStatus_ = nullptr;};
        inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
        inline PriorityForwardConfigs& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PriorityForwardConfigs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline PriorityForwardConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        shared_ptr<vector<string>> alidnsServiceAddresses_ {};
        shared_ptr<vector<string>> customAddresses_ {};
        shared_ptr<string> enableStatus_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> protocol_ {};
      };

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
        // The IP address of the destination server.
        shared_ptr<string> ip_ {};
        // The port of the destination server.
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
        // The region ID of the VPC.
        shared_ptr<string> regionId_ {};
        // The name of the region to which the VPC belongs.
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
        // The user ID to which the VPC belongs.
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
        && this->forwardIps_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->priorityForwardConfigs_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->zoneName_ == nullptr; };
      // bindEdgeDnsClusters Field Functions 
      bool hasBindEdgeDnsClusters() const { return this->bindEdgeDnsClusters_ != nullptr;};
      void deleteBindEdgeDnsClusters() { this->bindEdgeDnsClusters_ = nullptr;};
      inline const vector<Rules::BindEdgeDnsClusters> & getBindEdgeDnsClusters() const { DARABONBA_PTR_GET_CONST(bindEdgeDnsClusters_, vector<Rules::BindEdgeDnsClusters>) };
      inline vector<Rules::BindEdgeDnsClusters> getBindEdgeDnsClusters() { DARABONBA_PTR_GET(bindEdgeDnsClusters_, vector<Rules::BindEdgeDnsClusters>) };
      inline Rules& setBindEdgeDnsClusters(const vector<Rules::BindEdgeDnsClusters> & bindEdgeDnsClusters) { DARABONBA_PTR_SET_VALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };
      inline Rules& setBindEdgeDnsClusters(vector<Rules::BindEdgeDnsClusters> && bindEdgeDnsClusters) { DARABONBA_PTR_SET_RVALUE(bindEdgeDnsClusters_, bindEdgeDnsClusters) };


      // bindVpcs Field Functions 
      bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
      void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
      inline const vector<Rules::BindVpcs> & getBindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, vector<Rules::BindVpcs>) };
      inline vector<Rules::BindVpcs> getBindVpcs() { DARABONBA_PTR_GET(bindVpcs_, vector<Rules::BindVpcs>) };
      inline Rules& setBindVpcs(const vector<Rules::BindVpcs> & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
      inline Rules& setBindVpcs(vector<Rules::BindVpcs> && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Rules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Rules& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Rules& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointName Field Functions 
      bool hasEndpointName() const { return this->endpointName_ != nullptr;};
      void deleteEndpointName() { this->endpointName_ = nullptr;};
      inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
      inline Rules& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


      // forwardIps Field Functions 
      bool hasForwardIps() const { return this->forwardIps_ != nullptr;};
      void deleteForwardIps() { this->forwardIps_ = nullptr;};
      inline const vector<Rules::ForwardIps> & getForwardIps() const { DARABONBA_PTR_GET_CONST(forwardIps_, vector<Rules::ForwardIps>) };
      inline vector<Rules::ForwardIps> getForwardIps() { DARABONBA_PTR_GET(forwardIps_, vector<Rules::ForwardIps>) };
      inline Rules& setForwardIps(const vector<Rules::ForwardIps> & forwardIps) { DARABONBA_PTR_SET_VALUE(forwardIps_, forwardIps) };
      inline Rules& setForwardIps(vector<Rules::ForwardIps> && forwardIps) { DARABONBA_PTR_SET_RVALUE(forwardIps_, forwardIps) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Rules& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priorityForwardConfigs Field Functions 
      bool hasPriorityForwardConfigs() const { return this->priorityForwardConfigs_ != nullptr;};
      void deletePriorityForwardConfigs() { this->priorityForwardConfigs_ = nullptr;};
      inline const vector<Rules::PriorityForwardConfigs> & getPriorityForwardConfigs() const { DARABONBA_PTR_GET_CONST(priorityForwardConfigs_, vector<Rules::PriorityForwardConfigs>) };
      inline vector<Rules::PriorityForwardConfigs> getPriorityForwardConfigs() { DARABONBA_PTR_GET(priorityForwardConfigs_, vector<Rules::PriorityForwardConfigs>) };
      inline Rules& setPriorityForwardConfigs(const vector<Rules::PriorityForwardConfigs> & priorityForwardConfigs) { DARABONBA_PTR_SET_VALUE(priorityForwardConfigs_, priorityForwardConfigs) };
      inline Rules& setPriorityForwardConfigs(vector<Rules::PriorityForwardConfigs> && priorityForwardConfigs) { DARABONBA_PTR_SET_RVALUE(priorityForwardConfigs_, priorityForwardConfigs) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Rules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Rules& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Rules& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      // zoneName Field Functions 
      bool hasZoneName() const { return this->zoneName_ != nullptr;};
      void deleteZoneName() { this->zoneName_ = nullptr;};
      inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
      inline Rules& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    protected:
      shared_ptr<vector<Rules::BindEdgeDnsClusters>> bindEdgeDnsClusters_ {};
      // The VPCs associated with the forwarding rule.
      shared_ptr<vector<Rules::BindVpcs>> bindVpcs_ {};
      // The time when the forwarding was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the forwarding rule was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTimestamp_ {};
      // The endpoint ID.
      shared_ptr<string> endpointId_ {};
      // The endpoint name.
      shared_ptr<string> endpointName_ {};
      // The IP addresses and ports of the external DNS servers. Enter the IP addresses and ports of the destination servers to which the DNS requests are forwarded.
      shared_ptr<vector<Rules::ForwardIps>> forwardIps_ {};
      // The ID of the forwarding rule.
      shared_ptr<string> id_ {};
      // The name of the forwarding rule.
      shared_ptr<string> name_ {};
      shared_ptr<vector<Rules::PriorityForwardConfigs>> priorityForwardConfigs_ {};
      // The type of the forwarding rule.
      // 
      // The parameter value can only be OUTBOUND, which indicates that Domain Name System (DNS) requests are forwarded to one or more external IP addresses.
      shared_ptr<string> type_ {};
      // The time when the forwarding rule was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
      // The time when the forwarding rule was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> updateTimestamp_ {};
      // The zone for which you want to forward DNS requests.
      shared_ptr<string> zoneName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeResolverRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeResolverRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResolverRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeResolverRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeResolverRulesResponseBody::Rules>) };
    inline vector<DescribeResolverRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeResolverRulesResponseBody::Rules>) };
    inline DescribeResolverRulesResponseBody& setRules(const vector<DescribeResolverRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeResolverRulesResponseBody& setRules(vector<DescribeResolverRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeResolverRulesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeResolverRulesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The forwarding rules.
    shared_ptr<vector<DescribeResolverRulesResponseBody::Rules>> rules_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
