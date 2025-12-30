// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(IpAllocationPolicy, ipAllocationPolicy_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_TO_JSON(VpdSubnets, vpdSubnets_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(IpAllocationPolicy, ipAllocationPolicy_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_FROM_JSON(VpdSubnets, vpdSubnets_);
    };
    ExtendClusterRequest() = default ;
    ExtendClusterRequest(const ExtendClusterRequest &) = default ;
    ExtendClusterRequest(ExtendClusterRequest &&) = default ;
    ExtendClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequest() = default ;
    ExtendClusterRequest& operator=(const ExtendClusterRequest &) = default ;
    ExtendClusterRequest& operator=(ExtendClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
        DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
        DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeTag, nodeTag_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
        DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
        DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeTag, nodeTag_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      NodeGroups() = default ;
      NodeGroups(const NodeGroups &) = default ;
      NodeGroups(NodeGroups &&) = default ;
      NodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeGroups() = default ;
      NodeGroups& operator=(const NodeGroups &) = default ;
      NodeGroups& operator=(NodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
          DARABONBA_PTR_TO_JSON(Hostname, hostname_);
          DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
          DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataDisk : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
            DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(DeleteWithNode, deleteWithNode_);
            DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
            DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
            DARABONBA_PTR_TO_JSON(Size, size_);
          };
          friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
            DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(DeleteWithNode, deleteWithNode_);
            DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
            DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
          };
          DataDisk() = default ;
          DataDisk(const DataDisk &) = default ;
          DataDisk(DataDisk &&) = default ;
          DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataDisk() = default ;
          DataDisk& operator=(const DataDisk &) = default ;
          DataDisk& operator=(DataDisk &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->burstingEnabled_ == nullptr
        && this->category_ == nullptr && this->deleteWithNode_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr && this->size_ == nullptr; };
          // burstingEnabled Field Functions 
          bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
          void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
          inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
          inline DataDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // deleteWithNode Field Functions 
          bool hasDeleteWithNode() const { return this->deleteWithNode_ != nullptr;};
          void deleteDeleteWithNode() { this->deleteWithNode_ = nullptr;};
          inline bool getDeleteWithNode() const { DARABONBA_PTR_GET_DEFAULT(deleteWithNode_, false) };
          inline DataDisk& setDeleteWithNode(bool deleteWithNode) { DARABONBA_PTR_SET_VALUE(deleteWithNode_, deleteWithNode) };


          // performanceLevel Field Functions 
          bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
          void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
          inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
          inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


          // provisionedIops Field Functions 
          bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
          void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
          inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
          inline DataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
          inline DataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        protected:
          shared_ptr<bool> burstingEnabled_ {};
          // Type
          shared_ptr<string> category_ {};
          // Whether the data disk is deleted with the node
          shared_ptr<bool> deleteWithNode_ {};
          // Data Disk Performance Level
          shared_ptr<string> performanceLevel_ {};
          shared_ptr<int64_t> provisionedIops_ {};
          // Disk Size
          shared_ptr<int32_t> size_ {};
        };

        virtual bool empty() const override { return this->dataDisk_ == nullptr
        && this->hostname_ == nullptr && this->loginPassword_ == nullptr && this->nodeId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // dataDisk Field Functions 
        bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
        void deleteDataDisk() { this->dataDisk_ = nullptr;};
        inline const vector<Nodes::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Nodes::DataDisk>) };
        inline vector<Nodes::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Nodes::DataDisk>) };
        inline Nodes& setDataDisk(const vector<Nodes::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
        inline Nodes& setDataDisk(vector<Nodes::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline Nodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // loginPassword Field Functions 
        bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
        void deleteLoginPassword() { this->loginPassword_ = nullptr;};
        inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
        inline Nodes& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Nodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Nodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // Data Disk Specifications
        shared_ptr<vector<Nodes::DataDisk>> dataDisk_ {};
        // Hostname
        shared_ptr<string> hostname_ {};
        // Login Password
        shared_ptr<string> loginPassword_ {};
        // Node ID
        shared_ptr<string> nodeId_ {};
        // VSwitch ID
        shared_ptr<string> vSwitchId_ {};
        // VPC ID
        shared_ptr<string> vpcId_ {};
      };

      class NodeTag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeTag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NodeTag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        NodeTag() = default ;
        NodeTag(const NodeTag &) = default ;
        NodeTag(NodeTag &&) = default ;
        NodeTag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeTag() = default ;
        NodeTag& operator=(const NodeTag &) = default ;
        NodeTag& operator=(NodeTag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline NodeTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline NodeTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Node tag key
        shared_ptr<string> key_ {};
        // Node tag value
        shared_ptr<string> value_ {};
      };

      class HyperNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HyperNodes& obj) { 
          DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
          DARABONBA_PTR_TO_JSON(Hostname, hostname_);
          DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
          DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, HyperNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
          DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
          DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        HyperNodes() = default ;
        HyperNodes(const HyperNodes &) = default ;
        HyperNodes(HyperNodes &&) = default ;
        HyperNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HyperNodes() = default ;
        HyperNodes& operator=(const HyperNodes &) = default ;
        HyperNodes& operator=(HyperNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataDisk : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
            DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(DeleteWithNode, deleteWithNode_);
            DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
            DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
            DARABONBA_PTR_TO_JSON(Size, size_);
          };
          friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
            DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(DeleteWithNode, deleteWithNode_);
            DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
            DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
          };
          DataDisk() = default ;
          DataDisk(const DataDisk &) = default ;
          DataDisk(DataDisk &&) = default ;
          DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataDisk() = default ;
          DataDisk& operator=(const DataDisk &) = default ;
          DataDisk& operator=(DataDisk &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->burstingEnabled_ == nullptr
        && this->category_ == nullptr && this->deleteWithNode_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr && this->size_ == nullptr; };
          // burstingEnabled Field Functions 
          bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
          void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
          inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
          inline DataDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // deleteWithNode Field Functions 
          bool hasDeleteWithNode() const { return this->deleteWithNode_ != nullptr;};
          void deleteDeleteWithNode() { this->deleteWithNode_ = nullptr;};
          inline bool getDeleteWithNode() const { DARABONBA_PTR_GET_DEFAULT(deleteWithNode_, false) };
          inline DataDisk& setDeleteWithNode(bool deleteWithNode) { DARABONBA_PTR_SET_VALUE(deleteWithNode_, deleteWithNode) };


          // performanceLevel Field Functions 
          bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
          void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
          inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
          inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


          // provisionedIops Field Functions 
          bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
          void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
          inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
          inline DataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
          inline DataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        protected:
          shared_ptr<bool> burstingEnabled_ {};
          shared_ptr<string> category_ {};
          shared_ptr<bool> deleteWithNode_ {};
          shared_ptr<string> performanceLevel_ {};
          shared_ptr<int64_t> provisionedIops_ {};
          shared_ptr<int32_t> size_ {};
        };

        virtual bool empty() const override { return this->dataDisk_ == nullptr
        && this->hostname_ == nullptr && this->hyperNodeId_ == nullptr && this->loginPassword_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // dataDisk Field Functions 
        bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
        void deleteDataDisk() { this->dataDisk_ = nullptr;};
        inline const vector<HyperNodes::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<HyperNodes::DataDisk>) };
        inline vector<HyperNodes::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<HyperNodes::DataDisk>) };
        inline HyperNodes& setDataDisk(const vector<HyperNodes::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
        inline HyperNodes& setDataDisk(vector<HyperNodes::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline HyperNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // hyperNodeId Field Functions 
        bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
        void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
        inline string getHyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
        inline HyperNodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


        // loginPassword Field Functions 
        bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
        void deleteLoginPassword() { this->loginPassword_ = nullptr;};
        inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
        inline HyperNodes& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline HyperNodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline HyperNodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<vector<HyperNodes::DataDisk>> dataDisk_ {};
        shared_ptr<string> hostname_ {};
        shared_ptr<string> hyperNodeId_ {};
        shared_ptr<string> loginPassword_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoRenew_ == nullptr && this->chargeType_ == nullptr && this->hostnames_ == nullptr && this->hyperNodes_ == nullptr && this->loginPassword_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeTag_ == nullptr && this->nodes_ == nullptr && this->period_ == nullptr && this->userData_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
      inline NodeGroups& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline NodeGroups& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline NodeGroups& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // hostnames Field Functions 
      bool hasHostnames() const { return this->hostnames_ != nullptr;};
      void deleteHostnames() { this->hostnames_ = nullptr;};
      inline const vector<string> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
      inline vector<string> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
      inline NodeGroups& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
      inline NodeGroups& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


      // hyperNodes Field Functions 
      bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
      void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
      inline const vector<NodeGroups::HyperNodes> & getHyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<NodeGroups::HyperNodes>) };
      inline vector<NodeGroups::HyperNodes> getHyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<NodeGroups::HyperNodes>) };
      inline NodeGroups& setHyperNodes(const vector<NodeGroups::HyperNodes> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
      inline NodeGroups& setHyperNodes(vector<NodeGroups::HyperNodes> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


      // loginPassword Field Functions 
      bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
      void deleteLoginPassword() { this->loginPassword_ = nullptr;};
      inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
      inline NodeGroups& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline NodeGroups& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeTag Field Functions 
      bool hasNodeTag() const { return this->nodeTag_ != nullptr;};
      void deleteNodeTag() { this->nodeTag_ = nullptr;};
      inline const vector<NodeGroups::NodeTag> & getNodeTag() const { DARABONBA_PTR_GET_CONST(nodeTag_, vector<NodeGroups::NodeTag>) };
      inline vector<NodeGroups::NodeTag> getNodeTag() { DARABONBA_PTR_GET(nodeTag_, vector<NodeGroups::NodeTag>) };
      inline NodeGroups& setNodeTag(const vector<NodeGroups::NodeTag> & nodeTag) { DARABONBA_PTR_SET_VALUE(nodeTag_, nodeTag) };
      inline NodeGroups& setNodeTag(vector<NodeGroups::NodeTag> && nodeTag) { DARABONBA_PTR_SET_RVALUE(nodeTag_, nodeTag) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<NodeGroups::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<NodeGroups::Nodes>) };
      inline vector<NodeGroups::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<NodeGroups::Nodes>) };
      inline NodeGroups& setNodes(const vector<NodeGroups::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline NodeGroups& setNodes(vector<NodeGroups::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
      inline NodeGroups& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline NodeGroups& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline NodeGroups& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NodeGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline NodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Number of nodes to purchase. Range: 0~500. If the Amount parameter is set to 0, it means no new nodes will be purchased and existing nodes will be used for scaling. If the Amount parameter is set to 1~500, it means a certain number of nodes will be purchased and used for scaling. Default value: 0
      shared_ptr<int64_t> amount_ {};
      // Whether to automatically renew the purchased nodes. This parameter takes effect when the Amount parameter is not 0 and the ChargeType is set to PrePaid. Valid values: True (auto-renewal); False (no auto-renewal). Default value: False
      shared_ptr<bool> autoRenew_ {};
      // Payment method for the nodes. When the Amount parameter is set to 0, this parameter does not take effect. Valid values: PrePaid (Subscription); PostPaid (Pay-As-You-Go). Default value: PrePaid.
      shared_ptr<string> chargeType_ {};
      // Set the hostnames for the purchased nodes. This parameter does not take effect when the Amount parameter is set to 0.
      shared_ptr<vector<string>> hostnames_ {};
      shared_ptr<vector<NodeGroups::HyperNodes>> hyperNodes_ {};
      // Set the login password for the purchased nodes. This parameter is not effective when the Amount parameter is set to 0.
      shared_ptr<string> loginPassword_ {};
      // Node Group ID
      shared_ptr<string> nodeGroupId_ {};
      // Node tags
      shared_ptr<vector<NodeGroups::NodeTag>> nodeTag_ {};
      // List of Nodes
      shared_ptr<vector<NodeGroups::Nodes>> nodes_ {};
      // Duration of the node purchase (in months). Valid values: 1, 6, 12, 24, 36, 48. This parameter takes effect when the Amount parameter is not 0 and the ChargeType is set to PrePaid.
      shared_ptr<int64_t> period_ {};
      // Custom Data
      shared_ptr<string> userData_ {};
      // VSwitch ID
      shared_ptr<string> vSwitchId_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
      // Zone ID
      shared_ptr<string> zoneId_ {};
    };

    class IpAllocationPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpAllocationPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(BondPolicy, bondPolicy_);
        DARABONBA_PTR_TO_JSON(MachineTypePolicy, machineTypePolicy_);
        DARABONBA_PTR_TO_JSON(NodePolicy, nodePolicy_);
      };
      friend void from_json(const Darabonba::Json& j, IpAllocationPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(BondPolicy, bondPolicy_);
        DARABONBA_PTR_FROM_JSON(MachineTypePolicy, machineTypePolicy_);
        DARABONBA_PTR_FROM_JSON(NodePolicy, nodePolicy_);
      };
      IpAllocationPolicy() = default ;
      IpAllocationPolicy(const IpAllocationPolicy &) = default ;
      IpAllocationPolicy(IpAllocationPolicy &&) = default ;
      IpAllocationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpAllocationPolicy() = default ;
      IpAllocationPolicy& operator=(const IpAllocationPolicy &) = default ;
      IpAllocationPolicy& operator=(IpAllocationPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(Bonds, bonds_);
          DARABONBA_PTR_TO_JSON(Hostname, hostname_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, NodePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
          DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        NodePolicy() = default ;
        NodePolicy(const NodePolicy &) = default ;
        NodePolicy(NodePolicy &&) = default ;
        NodePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodePolicy() = default ;
        NodePolicy& operator=(const NodePolicy &) = default ;
        NodePolicy& operator=(NodePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Bonds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Bonds& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Subnet, subnet_);
          };
          friend void from_json(const Darabonba::Json& j, Bonds& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
          };
          Bonds() = default ;
          Bonds(const Bonds &) = default ;
          Bonds(Bonds &&) = default ;
          Bonds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Bonds() = default ;
          Bonds& operator=(const Bonds &) = default ;
          Bonds& operator=(Bonds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->subnet_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Bonds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // subnet Field Functions 
          bool hasSubnet() const { return this->subnet_ != nullptr;};
          void deleteSubnet() { this->subnet_ = nullptr;};
          inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
          inline Bonds& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


        protected:
          // Bond name
          shared_ptr<string> name_ {};
          // IP source cluster subnet
          shared_ptr<string> subnet_ {};
        };

        virtual bool empty() const override { return this->bonds_ == nullptr
        && this->hostname_ == nullptr && this->nodeId_ == nullptr; };
        // bonds Field Functions 
        bool hasBonds() const { return this->bonds_ != nullptr;};
        void deleteBonds() { this->bonds_ = nullptr;};
        inline const vector<NodePolicy::Bonds> & getBonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<NodePolicy::Bonds>) };
        inline vector<NodePolicy::Bonds> getBonds() { DARABONBA_PTR_GET(bonds_, vector<NodePolicy::Bonds>) };
        inline NodePolicy& setBonds(const vector<NodePolicy::Bonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
        inline NodePolicy& setBonds(vector<NodePolicy::Bonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


        // hostname Field Functions 
        bool hasHostname() const { return this->hostname_ != nullptr;};
        void deleteHostname() { this->hostname_ = nullptr;};
        inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
        inline NodePolicy& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodePolicy& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        // Bond information
        shared_ptr<vector<NodePolicy::Bonds>> bonds_ {};
        // Hostname
        shared_ptr<string> hostname_ {};
        // Node ID
        shared_ptr<string> nodeId_ {};
      };

      class MachineTypePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MachineTypePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(Bonds, bonds_);
          DARABONBA_PTR_TO_JSON(MachineType, machineType_);
        };
        friend void from_json(const Darabonba::Json& j, MachineTypePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
          DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
        };
        MachineTypePolicy() = default ;
        MachineTypePolicy(const MachineTypePolicy &) = default ;
        MachineTypePolicy(MachineTypePolicy &&) = default ;
        MachineTypePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MachineTypePolicy() = default ;
        MachineTypePolicy& operator=(const MachineTypePolicy &) = default ;
        MachineTypePolicy& operator=(MachineTypePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Bonds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Bonds& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Subnet, subnet_);
          };
          friend void from_json(const Darabonba::Json& j, Bonds& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
          };
          Bonds() = default ;
          Bonds(const Bonds &) = default ;
          Bonds(Bonds &&) = default ;
          Bonds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Bonds() = default ;
          Bonds& operator=(const Bonds &) = default ;
          Bonds& operator=(Bonds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->subnet_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Bonds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // subnet Field Functions 
          bool hasSubnet() const { return this->subnet_ != nullptr;};
          void deleteSubnet() { this->subnet_ = nullptr;};
          inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
          inline Bonds& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


        protected:
          // Bond name
          shared_ptr<string> name_ {};
          // IP source cluster subnet
          shared_ptr<string> subnet_ {};
        };

        virtual bool empty() const override { return this->bonds_ == nullptr
        && this->machineType_ == nullptr; };
        // bonds Field Functions 
        bool hasBonds() const { return this->bonds_ != nullptr;};
        void deleteBonds() { this->bonds_ = nullptr;};
        inline const vector<MachineTypePolicy::Bonds> & getBonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<MachineTypePolicy::Bonds>) };
        inline vector<MachineTypePolicy::Bonds> getBonds() { DARABONBA_PTR_GET(bonds_, vector<MachineTypePolicy::Bonds>) };
        inline MachineTypePolicy& setBonds(const vector<MachineTypePolicy::Bonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
        inline MachineTypePolicy& setBonds(vector<MachineTypePolicy::Bonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


        // machineType Field Functions 
        bool hasMachineType() const { return this->machineType_ != nullptr;};
        void deleteMachineType() { this->machineType_ = nullptr;};
        inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
        inline MachineTypePolicy& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      protected:
        // Bond information
        shared_ptr<vector<MachineTypePolicy::Bonds>> bonds_ {};
        // Machine type
        shared_ptr<string> machineType_ {};
      };

      class BondPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BondPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(BondDefaultSubnet, bondDefaultSubnet_);
          DARABONBA_PTR_TO_JSON(Bonds, bonds_);
        };
        friend void from_json(const Darabonba::Json& j, BondPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(BondDefaultSubnet, bondDefaultSubnet_);
          DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
        };
        BondPolicy() = default ;
        BondPolicy(const BondPolicy &) = default ;
        BondPolicy(BondPolicy &&) = default ;
        BondPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BondPolicy() = default ;
        BondPolicy& operator=(const BondPolicy &) = default ;
        BondPolicy& operator=(BondPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Bonds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Bonds& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Subnet, subnet_);
          };
          friend void from_json(const Darabonba::Json& j, Bonds& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
          };
          Bonds() = default ;
          Bonds(const Bonds &) = default ;
          Bonds(Bonds &&) = default ;
          Bonds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Bonds() = default ;
          Bonds& operator=(const Bonds &) = default ;
          Bonds& operator=(Bonds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->subnet_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Bonds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // subnet Field Functions 
          bool hasSubnet() const { return this->subnet_ != nullptr;};
          void deleteSubnet() { this->subnet_ = nullptr;};
          inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
          inline Bonds& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


        protected:
          // Bond name
          shared_ptr<string> name_ {};
          // IP source cluster subnet
          shared_ptr<string> subnet_ {};
        };

        virtual bool empty() const override { return this->bondDefaultSubnet_ == nullptr
        && this->bonds_ == nullptr; };
        // bondDefaultSubnet Field Functions 
        bool hasBondDefaultSubnet() const { return this->bondDefaultSubnet_ != nullptr;};
        void deleteBondDefaultSubnet() { this->bondDefaultSubnet_ = nullptr;};
        inline string getBondDefaultSubnet() const { DARABONBA_PTR_GET_DEFAULT(bondDefaultSubnet_, "") };
        inline BondPolicy& setBondDefaultSubnet(string bondDefaultSubnet) { DARABONBA_PTR_SET_VALUE(bondDefaultSubnet_, bondDefaultSubnet) };


        // bonds Field Functions 
        bool hasBonds() const { return this->bonds_ != nullptr;};
        void deleteBonds() { this->bonds_ = nullptr;};
        inline const vector<BondPolicy::Bonds> & getBonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<BondPolicy::Bonds>) };
        inline vector<BondPolicy::Bonds> getBonds() { DARABONBA_PTR_GET(bonds_, vector<BondPolicy::Bonds>) };
        inline BondPolicy& setBonds(const vector<BondPolicy::Bonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
        inline BondPolicy& setBonds(vector<BondPolicy::Bonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


      protected:
        // Default bond cluster subnet
        shared_ptr<string> bondDefaultSubnet_ {};
        // Bond information
        shared_ptr<vector<BondPolicy::Bonds>> bonds_ {};
      };

      virtual bool empty() const override { return this->bondPolicy_ == nullptr
        && this->machineTypePolicy_ == nullptr && this->nodePolicy_ == nullptr; };
      // bondPolicy Field Functions 
      bool hasBondPolicy() const { return this->bondPolicy_ != nullptr;};
      void deleteBondPolicy() { this->bondPolicy_ = nullptr;};
      inline const IpAllocationPolicy::BondPolicy & getBondPolicy() const { DARABONBA_PTR_GET_CONST(bondPolicy_, IpAllocationPolicy::BondPolicy) };
      inline IpAllocationPolicy::BondPolicy getBondPolicy() { DARABONBA_PTR_GET(bondPolicy_, IpAllocationPolicy::BondPolicy) };
      inline IpAllocationPolicy& setBondPolicy(const IpAllocationPolicy::BondPolicy & bondPolicy) { DARABONBA_PTR_SET_VALUE(bondPolicy_, bondPolicy) };
      inline IpAllocationPolicy& setBondPolicy(IpAllocationPolicy::BondPolicy && bondPolicy) { DARABONBA_PTR_SET_RVALUE(bondPolicy_, bondPolicy) };


      // machineTypePolicy Field Functions 
      bool hasMachineTypePolicy() const { return this->machineTypePolicy_ != nullptr;};
      void deleteMachineTypePolicy() { this->machineTypePolicy_ = nullptr;};
      inline const vector<IpAllocationPolicy::MachineTypePolicy> & getMachineTypePolicy() const { DARABONBA_PTR_GET_CONST(machineTypePolicy_, vector<IpAllocationPolicy::MachineTypePolicy>) };
      inline vector<IpAllocationPolicy::MachineTypePolicy> getMachineTypePolicy() { DARABONBA_PTR_GET(machineTypePolicy_, vector<IpAllocationPolicy::MachineTypePolicy>) };
      inline IpAllocationPolicy& setMachineTypePolicy(const vector<IpAllocationPolicy::MachineTypePolicy> & machineTypePolicy) { DARABONBA_PTR_SET_VALUE(machineTypePolicy_, machineTypePolicy) };
      inline IpAllocationPolicy& setMachineTypePolicy(vector<IpAllocationPolicy::MachineTypePolicy> && machineTypePolicy) { DARABONBA_PTR_SET_RVALUE(machineTypePolicy_, machineTypePolicy) };


      // nodePolicy Field Functions 
      bool hasNodePolicy() const { return this->nodePolicy_ != nullptr;};
      void deleteNodePolicy() { this->nodePolicy_ = nullptr;};
      inline const vector<IpAllocationPolicy::NodePolicy> & getNodePolicy() const { DARABONBA_PTR_GET_CONST(nodePolicy_, vector<IpAllocationPolicy::NodePolicy>) };
      inline vector<IpAllocationPolicy::NodePolicy> getNodePolicy() { DARABONBA_PTR_GET(nodePolicy_, vector<IpAllocationPolicy::NodePolicy>) };
      inline IpAllocationPolicy& setNodePolicy(const vector<IpAllocationPolicy::NodePolicy> & nodePolicy) { DARABONBA_PTR_SET_VALUE(nodePolicy_, nodePolicy) };
      inline IpAllocationPolicy& setNodePolicy(vector<IpAllocationPolicy::NodePolicy> && nodePolicy) { DARABONBA_PTR_SET_RVALUE(nodePolicy_, nodePolicy) };


    protected:
      // Specify the cluster subnet ID based on the bond name
      shared_ptr<IpAllocationPolicy::BondPolicy> bondPolicy_ {};
      // Machine type allocation policy
      shared_ptr<vector<IpAllocationPolicy::MachineTypePolicy>> machineTypePolicy_ {};
      // Node allocation policy
      shared_ptr<vector<IpAllocationPolicy::NodePolicy>> nodePolicy_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->ignoreFailedNodeTasks_ == nullptr && this->ipAllocationPolicy_ == nullptr && this->nodeGroups_ == nullptr && this->vSwitchZoneId_ == nullptr && this->vpdSubnets_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExtendClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool getIgnoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ExtendClusterRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // ipAllocationPolicy Field Functions 
    bool hasIpAllocationPolicy() const { return this->ipAllocationPolicy_ != nullptr;};
    void deleteIpAllocationPolicy() { this->ipAllocationPolicy_ = nullptr;};
    inline const vector<ExtendClusterRequest::IpAllocationPolicy> & getIpAllocationPolicy() const { DARABONBA_PTR_GET_CONST(ipAllocationPolicy_, vector<ExtendClusterRequest::IpAllocationPolicy>) };
    inline vector<ExtendClusterRequest::IpAllocationPolicy> getIpAllocationPolicy() { DARABONBA_PTR_GET(ipAllocationPolicy_, vector<ExtendClusterRequest::IpAllocationPolicy>) };
    inline ExtendClusterRequest& setIpAllocationPolicy(const vector<ExtendClusterRequest::IpAllocationPolicy> & ipAllocationPolicy) { DARABONBA_PTR_SET_VALUE(ipAllocationPolicy_, ipAllocationPolicy) };
    inline ExtendClusterRequest& setIpAllocationPolicy(vector<ExtendClusterRequest::IpAllocationPolicy> && ipAllocationPolicy) { DARABONBA_PTR_SET_RVALUE(ipAllocationPolicy_, ipAllocationPolicy) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<ExtendClusterRequest::NodeGroups> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<ExtendClusterRequest::NodeGroups>) };
    inline vector<ExtendClusterRequest::NodeGroups> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<ExtendClusterRequest::NodeGroups>) };
    inline ExtendClusterRequest& setNodeGroups(const vector<ExtendClusterRequest::NodeGroups> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline ExtendClusterRequest& setNodeGroups(vector<ExtendClusterRequest::NodeGroups> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // vSwitchZoneId Field Functions 
    bool hasVSwitchZoneId() const { return this->vSwitchZoneId_ != nullptr;};
    void deleteVSwitchZoneId() { this->vSwitchZoneId_ = nullptr;};
    inline string getVSwitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchZoneId_, "") };
    inline ExtendClusterRequest& setVSwitchZoneId(string vSwitchZoneId) { DARABONBA_PTR_SET_VALUE(vSwitchZoneId_, vSwitchZoneId) };


    // vpdSubnets Field Functions 
    bool hasVpdSubnets() const { return this->vpdSubnets_ != nullptr;};
    void deleteVpdSubnets() { this->vpdSubnets_ = nullptr;};
    inline const vector<string> & getVpdSubnets() const { DARABONBA_PTR_GET_CONST(vpdSubnets_, vector<string>) };
    inline vector<string> getVpdSubnets() { DARABONBA_PTR_GET(vpdSubnets_, vector<string>) };
    inline ExtendClusterRequest& setVpdSubnets(const vector<string> & vpdSubnets) { DARABONBA_PTR_SET_VALUE(vpdSubnets_, vpdSubnets) };
    inline ExtendClusterRequest& setVpdSubnets(vector<string> && vpdSubnets) { DARABONBA_PTR_SET_RVALUE(vpdSubnets_, vpdSubnets) };


  protected:
    // Cluster ID
    shared_ptr<string> clusterId_ {};
    // Whether to allow skipping failed node tasks, default value is False
    shared_ptr<bool> ignoreFailedNodeTasks_ {};
    // IP allocation combination policy: Each policy can only choose one type, and multiple policies can be combined
    shared_ptr<vector<ExtendClusterRequest::IpAllocationPolicy>> ipAllocationPolicy_ {};
    // Node Groups
    shared_ptr<vector<ExtendClusterRequest::NodeGroups>> nodeGroups_ {};
    // VSwitch availability zone ID
    shared_ptr<string> vSwitchZoneId_ {};
    // List of cluster subnets
    shared_ptr<vector<string>> vpdSubnets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
