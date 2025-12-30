// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
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
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Networks, networks_);
      DARABONBA_PTR_TO_JSON(NimizVSwitches, nimizVSwitches_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
      DARABONBA_PTR_FROM_JSON(NimizVSwitches, nimizVSwitches_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Key
      shared_ptr<string> key_ {};
      // Value
      shared_ptr<string> value_ {};
    };

    class NodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
        DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(LoginPassword, loginPassword_);
        DARABONBA_PTR_TO_JSON(MachineType, machineType_);
        DARABONBA_PTR_TO_JSON(NodeGroupDescription, nodeGroupDescription_);
        DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystemMountEnabled, fileSystemMountEnabled_);
        DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(LoginPassword, loginPassword_);
        DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
        DARABONBA_PTR_FROM_JSON(NodeGroupDescription, nodeGroupDescription_);
        DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(VirtualGpuEnabled, virtualGpuEnabled_);
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
      class SystemDisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        SystemDisk() = default ;
        SystemDisk(const SystemDisk &) = default ;
        SystemDisk(SystemDisk &&) = default ;
        SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemDisk() = default ;
        SystemDisk& operator=(const SystemDisk &) = default ;
        SystemDisk& operator=(SystemDisk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->performanceLevel_ == nullptr && this->size_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // Disk type. The value range is:
        // 
        // - cloud_essd: ESSD disk.
        shared_ptr<string> category_ {};
        // When creating an ESSD disk as the system disk, set the performance level of the disk. The value range is:
        // - PL0: Maximum random read/write IOPS for a single disk is 10,000.
        // - PL1: Maximum random read/write IOPS for a single disk is 50,000.
        shared_ptr<string> performanceLevel_ {};
        // Unit: GB.
        shared_ptr<int32_t> size_ {};
      };

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
          // Whether the data disk is deleted with the node when it is unsubscribed
          shared_ptr<bool> deleteWithNode_ {};
          // Data disk performance level
          shared_ptr<string> performanceLevel_ {};
          shared_ptr<int64_t> provisionedIops_ {};
          // Disk size
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
        // Data disk specifications.
        shared_ptr<vector<Nodes::DataDisk>> dataDisk_ {};
        // Hostname
        shared_ptr<string> hostname_ {};
        // Login password
        shared_ptr<string> loginPassword_ {};
        // Node ID
        shared_ptr<string> nodeId_ {};
        // VSwitch ID
        shared_ptr<string> vSwitchId_ {};
        // VPC ID
        shared_ptr<string> vpcId_ {};
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

      virtual bool empty() const override { return this->fileSystemMountEnabled_ == nullptr
        && this->hyperNodes_ == nullptr && this->imageId_ == nullptr && this->keyPairName_ == nullptr && this->loginPassword_ == nullptr && this->machineType_ == nullptr
        && this->nodeGroupDescription_ == nullptr && this->nodeGroupName_ == nullptr && this->nodes_ == nullptr && this->systemDisk_ == nullptr && this->userData_ == nullptr
        && this->virtualGpuEnabled_ == nullptr && this->zoneId_ == nullptr; };
      // fileSystemMountEnabled Field Functions 
      bool hasFileSystemMountEnabled() const { return this->fileSystemMountEnabled_ != nullptr;};
      void deleteFileSystemMountEnabled() { this->fileSystemMountEnabled_ = nullptr;};
      inline bool getFileSystemMountEnabled() const { DARABONBA_PTR_GET_DEFAULT(fileSystemMountEnabled_, false) };
      inline NodeGroups& setFileSystemMountEnabled(bool fileSystemMountEnabled) { DARABONBA_PTR_SET_VALUE(fileSystemMountEnabled_, fileSystemMountEnabled) };


      // hyperNodes Field Functions 
      bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
      void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
      inline const vector<NodeGroups::HyperNodes> & getHyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<NodeGroups::HyperNodes>) };
      inline vector<NodeGroups::HyperNodes> getHyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<NodeGroups::HyperNodes>) };
      inline NodeGroups& setHyperNodes(const vector<NodeGroups::HyperNodes> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
      inline NodeGroups& setHyperNodes(vector<NodeGroups::HyperNodes> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline NodeGroups& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline NodeGroups& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // loginPassword Field Functions 
      bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
      void deleteLoginPassword() { this->loginPassword_ = nullptr;};
      inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
      inline NodeGroups& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


      // machineType Field Functions 
      bool hasMachineType() const { return this->machineType_ != nullptr;};
      void deleteMachineType() { this->machineType_ = nullptr;};
      inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
      inline NodeGroups& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      // nodeGroupDescription Field Functions 
      bool hasNodeGroupDescription() const { return this->nodeGroupDescription_ != nullptr;};
      void deleteNodeGroupDescription() { this->nodeGroupDescription_ = nullptr;};
      inline string getNodeGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupDescription_, "") };
      inline NodeGroups& setNodeGroupDescription(string nodeGroupDescription) { DARABONBA_PTR_SET_VALUE(nodeGroupDescription_, nodeGroupDescription) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline NodeGroups& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<NodeGroups::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<NodeGroups::Nodes>) };
      inline vector<NodeGroups::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<NodeGroups::Nodes>) };
      inline NodeGroups& setNodes(const vector<NodeGroups::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline NodeGroups& setNodes(vector<NodeGroups::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // systemDisk Field Functions 
      bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
      void deleteSystemDisk() { this->systemDisk_ = nullptr;};
      inline const NodeGroups::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, NodeGroups::SystemDisk) };
      inline NodeGroups::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, NodeGroups::SystemDisk) };
      inline NodeGroups& setSystemDisk(const NodeGroups::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
      inline NodeGroups& setSystemDisk(NodeGroups::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline NodeGroups& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // virtualGpuEnabled Field Functions 
      bool hasVirtualGpuEnabled() const { return this->virtualGpuEnabled_ != nullptr;};
      void deleteVirtualGpuEnabled() { this->virtualGpuEnabled_ = nullptr;};
      inline bool getVirtualGpuEnabled() const { DARABONBA_PTR_GET_DEFAULT(virtualGpuEnabled_, false) };
      inline NodeGroups& setVirtualGpuEnabled(bool virtualGpuEnabled) { DARABONBA_PTR_SET_VALUE(virtualGpuEnabled_, virtualGpuEnabled) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline NodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Whether to support file system mounting
      shared_ptr<bool> fileSystemMountEnabled_ {};
      shared_ptr<vector<NodeGroups::HyperNodes>> hyperNodes_ {};
      // System image ID
      shared_ptr<string> imageId_ {};
      // Key pair name.
      shared_ptr<string> keyPairName_ {};
      // Login password
      shared_ptr<string> loginPassword_ {};
      // Machine type
      shared_ptr<string> machineType_ {};
      // Node group description
      shared_ptr<string> nodeGroupDescription_ {};
      // Node group name
      shared_ptr<string> nodeGroupName_ {};
      // Node list
      shared_ptr<vector<NodeGroups::Nodes>> nodes_ {};
      // System disk information
      shared_ptr<NodeGroups::SystemDisk> systemDisk_ {};
      // Instance custom data. It needs to be encoded in Base64, and the original data should not exceed 16 KB.
      shared_ptr<string> userData_ {};
      // Whether to enable gpu virtualization or not
      shared_ptr<bool> virtualGpuEnabled_ {};
      // Zone ID
      shared_ptr<string> zoneId_ {};
    };

    class Networks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Networks& obj) { 
        DARABONBA_PTR_TO_JSON(IpAllocationPolicy, ipAllocationPolicy_);
        DARABONBA_PTR_TO_JSON(NewVpdInfo, newVpdInfo_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(TailIpVersion, tailIpVersion_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VSwitchZoneId, vSwitchZoneId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpdInfo, vpdInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Networks& obj) { 
        DARABONBA_PTR_FROM_JSON(IpAllocationPolicy, ipAllocationPolicy_);
        DARABONBA_PTR_FROM_JSON(NewVpdInfo, newVpdInfo_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(TailIpVersion, tailIpVersion_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VSwitchZoneId, vSwitchZoneId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpdInfo, vpdInfo_);
      };
      Networks() = default ;
      Networks(const Networks &) = default ;
      Networks(Networks &&) = default ;
      Networks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Networks() = default ;
      Networks& operator=(const Networks &) = default ;
      Networks& operator=(Networks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpdInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpdInfo& obj) { 
          DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
          DARABONBA_PTR_TO_JSON(VpdSubnets, vpdSubnets_);
        };
        friend void from_json(const Darabonba::Json& j, VpdInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
          DARABONBA_PTR_FROM_JSON(VpdSubnets, vpdSubnets_);
        };
        VpdInfo() = default ;
        VpdInfo(const VpdInfo &) = default ;
        VpdInfo(VpdInfo &&) = default ;
        VpdInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpdInfo() = default ;
        VpdInfo& operator=(const VpdInfo &) = default ;
        VpdInfo& operator=(VpdInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vpdId_ == nullptr
        && this->vpdSubnets_ == nullptr; };
        // vpdId Field Functions 
        bool hasVpdId() const { return this->vpdId_ != nullptr;};
        void deleteVpdId() { this->vpdId_ = nullptr;};
        inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
        inline VpdInfo& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


        // vpdSubnets Field Functions 
        bool hasVpdSubnets() const { return this->vpdSubnets_ != nullptr;};
        void deleteVpdSubnets() { this->vpdSubnets_ = nullptr;};
        inline const vector<string> & getVpdSubnets() const { DARABONBA_PTR_GET_CONST(vpdSubnets_, vector<string>) };
        inline vector<string> getVpdSubnets() { DARABONBA_PTR_GET(vpdSubnets_, vector<string>) };
        inline VpdInfo& setVpdSubnets(const vector<string> & vpdSubnets) { DARABONBA_PTR_SET_VALUE(vpdSubnets_, vpdSubnets) };
        inline VpdInfo& setVpdSubnets(vector<string> && vpdSubnets) { DARABONBA_PTR_SET_RVALUE(vpdSubnets_, vpdSubnets) };


      protected:
        // VPC ID
        shared_ptr<string> vpdId_ {};
        // List of cluster subnet IDs
        shared_ptr<vector<string>> vpdSubnets_ {};
      };

      class NewVpdInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NewVpdInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(CloudLinkCidr, cloudLinkCidr_);
          DARABONBA_PTR_TO_JSON(CloudLinkId, cloudLinkId_);
          DARABONBA_PTR_TO_JSON(MonitorVpcId, monitorVpcId_);
          DARABONBA_PTR_TO_JSON(MonitorVswitchId, monitorVswitchId_);
          DARABONBA_PTR_TO_JSON(VpdCidr, vpdCidr_);
          DARABONBA_PTR_TO_JSON(VpdSubnets, vpdSubnets_);
        };
        friend void from_json(const Darabonba::Json& j, NewVpdInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(CloudLinkCidr, cloudLinkCidr_);
          DARABONBA_PTR_FROM_JSON(CloudLinkId, cloudLinkId_);
          DARABONBA_PTR_FROM_JSON(MonitorVpcId, monitorVpcId_);
          DARABONBA_PTR_FROM_JSON(MonitorVswitchId, monitorVswitchId_);
          DARABONBA_PTR_FROM_JSON(VpdCidr, vpdCidr_);
          DARABONBA_PTR_FROM_JSON(VpdSubnets, vpdSubnets_);
        };
        NewVpdInfo() = default ;
        NewVpdInfo(const NewVpdInfo &) = default ;
        NewVpdInfo(NewVpdInfo &&) = default ;
        NewVpdInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NewVpdInfo() = default ;
        NewVpdInfo& operator=(const NewVpdInfo &) = default ;
        NewVpdInfo& operator=(NewVpdInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpdSubnets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpdSubnets& obj) { 
            DARABONBA_PTR_TO_JSON(SubnetCidr, subnetCidr_);
            DARABONBA_PTR_TO_JSON(SubnetType, subnetType_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, VpdSubnets& obj) { 
            DARABONBA_PTR_FROM_JSON(SubnetCidr, subnetCidr_);
            DARABONBA_PTR_FROM_JSON(SubnetType, subnetType_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          VpdSubnets() = default ;
          VpdSubnets(const VpdSubnets &) = default ;
          VpdSubnets(VpdSubnets &&) = default ;
          VpdSubnets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpdSubnets() = default ;
          VpdSubnets& operator=(const VpdSubnets &) = default ;
          VpdSubnets& operator=(VpdSubnets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->subnetCidr_ == nullptr
        && this->subnetType_ == nullptr && this->zoneId_ == nullptr; };
          // subnetCidr Field Functions 
          bool hasSubnetCidr() const { return this->subnetCidr_ != nullptr;};
          void deleteSubnetCidr() { this->subnetCidr_ = nullptr;};
          inline string getSubnetCidr() const { DARABONBA_PTR_GET_DEFAULT(subnetCidr_, "") };
          inline VpdSubnets& setSubnetCidr(string subnetCidr) { DARABONBA_PTR_SET_VALUE(subnetCidr_, subnetCidr) };


          // subnetType Field Functions 
          bool hasSubnetType() const { return this->subnetType_ != nullptr;};
          void deleteSubnetType() { this->subnetType_ = nullptr;};
          inline string getSubnetType() const { DARABONBA_PTR_GET_DEFAULT(subnetType_, "") };
          inline VpdSubnets& setSubnetType(string subnetType) { DARABONBA_PTR_SET_VALUE(subnetType_, subnetType) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline VpdSubnets& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          // Subnet CIDR
          shared_ptr<string> subnetCidr_ {};
          // Subnet type
          shared_ptr<string> subnetType_ {};
          // Zone ID
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->cenId_ == nullptr
        && this->cloudLinkCidr_ == nullptr && this->cloudLinkId_ == nullptr && this->monitorVpcId_ == nullptr && this->monitorVswitchId_ == nullptr && this->vpdCidr_ == nullptr
        && this->vpdSubnets_ == nullptr; };
        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline NewVpdInfo& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // cloudLinkCidr Field Functions 
        bool hasCloudLinkCidr() const { return this->cloudLinkCidr_ != nullptr;};
        void deleteCloudLinkCidr() { this->cloudLinkCidr_ = nullptr;};
        inline string getCloudLinkCidr() const { DARABONBA_PTR_GET_DEFAULT(cloudLinkCidr_, "") };
        inline NewVpdInfo& setCloudLinkCidr(string cloudLinkCidr) { DARABONBA_PTR_SET_VALUE(cloudLinkCidr_, cloudLinkCidr) };


        // cloudLinkId Field Functions 
        bool hasCloudLinkId() const { return this->cloudLinkId_ != nullptr;};
        void deleteCloudLinkId() { this->cloudLinkId_ = nullptr;};
        inline string getCloudLinkId() const { DARABONBA_PTR_GET_DEFAULT(cloudLinkId_, "") };
        inline NewVpdInfo& setCloudLinkId(string cloudLinkId) { DARABONBA_PTR_SET_VALUE(cloudLinkId_, cloudLinkId) };


        // monitorVpcId Field Functions 
        bool hasMonitorVpcId() const { return this->monitorVpcId_ != nullptr;};
        void deleteMonitorVpcId() { this->monitorVpcId_ = nullptr;};
        inline string getMonitorVpcId() const { DARABONBA_PTR_GET_DEFAULT(monitorVpcId_, "") };
        inline NewVpdInfo& setMonitorVpcId(string monitorVpcId) { DARABONBA_PTR_SET_VALUE(monitorVpcId_, monitorVpcId) };


        // monitorVswitchId Field Functions 
        bool hasMonitorVswitchId() const { return this->monitorVswitchId_ != nullptr;};
        void deleteMonitorVswitchId() { this->monitorVswitchId_ = nullptr;};
        inline string getMonitorVswitchId() const { DARABONBA_PTR_GET_DEFAULT(monitorVswitchId_, "") };
        inline NewVpdInfo& setMonitorVswitchId(string monitorVswitchId) { DARABONBA_PTR_SET_VALUE(monitorVswitchId_, monitorVswitchId) };


        // vpdCidr Field Functions 
        bool hasVpdCidr() const { return this->vpdCidr_ != nullptr;};
        void deleteVpdCidr() { this->vpdCidr_ = nullptr;};
        inline string getVpdCidr() const { DARABONBA_PTR_GET_DEFAULT(vpdCidr_, "") };
        inline NewVpdInfo& setVpdCidr(string vpdCidr) { DARABONBA_PTR_SET_VALUE(vpdCidr_, vpdCidr) };


        // vpdSubnets Field Functions 
        bool hasVpdSubnets() const { return this->vpdSubnets_ != nullptr;};
        void deleteVpdSubnets() { this->vpdSubnets_ = nullptr;};
        inline const vector<NewVpdInfo::VpdSubnets> & getVpdSubnets() const { DARABONBA_PTR_GET_CONST(vpdSubnets_, vector<NewVpdInfo::VpdSubnets>) };
        inline vector<NewVpdInfo::VpdSubnets> getVpdSubnets() { DARABONBA_PTR_GET(vpdSubnets_, vector<NewVpdInfo::VpdSubnets>) };
        inline NewVpdInfo& setVpdSubnets(const vector<NewVpdInfo::VpdSubnets> & vpdSubnets) { DARABONBA_PTR_SET_VALUE(vpdSubnets_, vpdSubnets) };
        inline NewVpdInfo& setVpdSubnets(vector<NewVpdInfo::VpdSubnets> && vpdSubnets) { DARABONBA_PTR_SET_RVALUE(vpdSubnets_, vpdSubnets) };


      protected:
        // Cloud Enterprise Network ID
        shared_ptr<string> cenId_ {};
        // Cloud link CIDR
        shared_ptr<string> cloudLinkCidr_ {};
        // Cloud link ID
        shared_ptr<string> cloudLinkId_ {};
        // Virtual Private Cloud (VPC)
        shared_ptr<string> monitorVpcId_ {};
        // VPC switch
        shared_ptr<string> monitorVswitchId_ {};
        // Cluster network segment
        shared_ptr<string> vpdCidr_ {};
        // Cluster subnets
        shared_ptr<vector<NewVpdInfo::VpdSubnets>> vpdSubnets_ {};
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
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          };
          friend void from_json(const Darabonba::Json& j, NodePolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(Bonds, bonds_);
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
            // IP source subnet for the cluster
            shared_ptr<string> subnet_ {};
          };

          virtual bool empty() const override { return this->bonds_ == nullptr
        && this->nodeId_ == nullptr; };
          // bonds Field Functions 
          bool hasBonds() const { return this->bonds_ != nullptr;};
          void deleteBonds() { this->bonds_ = nullptr;};
          inline const vector<NodePolicy::Bonds> & getBonds() const { DARABONBA_PTR_GET_CONST(bonds_, vector<NodePolicy::Bonds>) };
          inline vector<NodePolicy::Bonds> getBonds() { DARABONBA_PTR_GET(bonds_, vector<NodePolicy::Bonds>) };
          inline NodePolicy& setBonds(const vector<NodePolicy::Bonds> & bonds) { DARABONBA_PTR_SET_VALUE(bonds_, bonds) };
          inline NodePolicy& setBonds(vector<NodePolicy::Bonds> && bonds) { DARABONBA_PTR_SET_RVALUE(bonds_, bonds) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline NodePolicy& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        protected:
          // Bond information
          shared_ptr<vector<NodePolicy::Bonds>> bonds_ {};
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
            // IP source subnet for the cluster
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
            // IP source subnet for the cluster
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
          // Default bond subnet for the cluster
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
        // Bond policy
        shared_ptr<IpAllocationPolicy::BondPolicy> bondPolicy_ {};
        // Machine type allocation policy
        shared_ptr<vector<IpAllocationPolicy::MachineTypePolicy>> machineTypePolicy_ {};
        // Node allocation policy
        shared_ptr<vector<IpAllocationPolicy::NodePolicy>> nodePolicy_ {};
      };

      virtual bool empty() const override { return this->ipAllocationPolicy_ == nullptr
        && this->newVpdInfo_ == nullptr && this->securityGroupId_ == nullptr && this->tailIpVersion_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchZoneId_ == nullptr
        && this->vpcId_ == nullptr && this->vpdInfo_ == nullptr; };
      // ipAllocationPolicy Field Functions 
      bool hasIpAllocationPolicy() const { return this->ipAllocationPolicy_ != nullptr;};
      void deleteIpAllocationPolicy() { this->ipAllocationPolicy_ = nullptr;};
      inline const vector<Networks::IpAllocationPolicy> & getIpAllocationPolicy() const { DARABONBA_PTR_GET_CONST(ipAllocationPolicy_, vector<Networks::IpAllocationPolicy>) };
      inline vector<Networks::IpAllocationPolicy> getIpAllocationPolicy() { DARABONBA_PTR_GET(ipAllocationPolicy_, vector<Networks::IpAllocationPolicy>) };
      inline Networks& setIpAllocationPolicy(const vector<Networks::IpAllocationPolicy> & ipAllocationPolicy) { DARABONBA_PTR_SET_VALUE(ipAllocationPolicy_, ipAllocationPolicy) };
      inline Networks& setIpAllocationPolicy(vector<Networks::IpAllocationPolicy> && ipAllocationPolicy) { DARABONBA_PTR_SET_RVALUE(ipAllocationPolicy_, ipAllocationPolicy) };


      // newVpdInfo Field Functions 
      bool hasNewVpdInfo() const { return this->newVpdInfo_ != nullptr;};
      void deleteNewVpdInfo() { this->newVpdInfo_ = nullptr;};
      inline const Networks::NewVpdInfo & getNewVpdInfo() const { DARABONBA_PTR_GET_CONST(newVpdInfo_, Networks::NewVpdInfo) };
      inline Networks::NewVpdInfo getNewVpdInfo() { DARABONBA_PTR_GET(newVpdInfo_, Networks::NewVpdInfo) };
      inline Networks& setNewVpdInfo(const Networks::NewVpdInfo & newVpdInfo) { DARABONBA_PTR_SET_VALUE(newVpdInfo_, newVpdInfo) };
      inline Networks& setNewVpdInfo(Networks::NewVpdInfo && newVpdInfo) { DARABONBA_PTR_SET_RVALUE(newVpdInfo_, newVpdInfo) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Networks& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // tailIpVersion Field Functions 
      bool hasTailIpVersion() const { return this->tailIpVersion_ != nullptr;};
      void deleteTailIpVersion() { this->tailIpVersion_ = nullptr;};
      inline string getTailIpVersion() const { DARABONBA_PTR_GET_DEFAULT(tailIpVersion_, "") };
      inline Networks& setTailIpVersion(string tailIpVersion) { DARABONBA_PTR_SET_VALUE(tailIpVersion_, tailIpVersion) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Networks& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchZoneId Field Functions 
      bool hasVSwitchZoneId() const { return this->vSwitchZoneId_ != nullptr;};
      void deleteVSwitchZoneId() { this->vSwitchZoneId_ = nullptr;};
      inline string getVSwitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchZoneId_, "") };
      inline Networks& setVSwitchZoneId(string vSwitchZoneId) { DARABONBA_PTR_SET_VALUE(vSwitchZoneId_, vSwitchZoneId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Networks& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpdInfo Field Functions 
      bool hasVpdInfo() const { return this->vpdInfo_ != nullptr;};
      void deleteVpdInfo() { this->vpdInfo_ = nullptr;};
      inline const Networks::VpdInfo & getVpdInfo() const { DARABONBA_PTR_GET_CONST(vpdInfo_, Networks::VpdInfo) };
      inline Networks::VpdInfo getVpdInfo() { DARABONBA_PTR_GET(vpdInfo_, Networks::VpdInfo) };
      inline Networks& setVpdInfo(const Networks::VpdInfo & vpdInfo) { DARABONBA_PTR_SET_VALUE(vpdInfo_, vpdInfo) };
      inline Networks& setVpdInfo(Networks::VpdInfo && vpdInfo) { DARABONBA_PTR_SET_RVALUE(vpdInfo_, vpdInfo) };


    protected:
      // IP allocation policy
      shared_ptr<vector<Networks::IpAllocationPolicy>> ipAllocationPolicy_ {};
      // Vpd configuration information
      shared_ptr<Networks::NewVpdInfo> newVpdInfo_ {};
      // Security group ID
      shared_ptr<string> securityGroupId_ {};
      // IP version
      shared_ptr<string> tailIpVersion_ {};
      // VSwitch ID
      shared_ptr<string> vSwitchId_ {};
      // VSwitch Zone ID
      shared_ptr<string> vSwitchZoneId_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
      // Reuse VPD information
      shared_ptr<Networks::VpdInfo> vpdInfo_ {};
    };

    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentConfig, componentConfig_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentConfig, componentConfig_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComponentConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentConfig& obj) { 
          DARABONBA_ANY_TO_JSON(BasicArgs, basicArgs_);
          DARABONBA_PTR_TO_JSON(NodeUnits, nodeUnits_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentConfig& obj) { 
          DARABONBA_ANY_FROM_JSON(BasicArgs, basicArgs_);
          DARABONBA_PTR_FROM_JSON(NodeUnits, nodeUnits_);
        };
        ComponentConfig() = default ;
        ComponentConfig(const ComponentConfig &) = default ;
        ComponentConfig(ComponentConfig &&) = default ;
        ComponentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentConfig() = default ;
        ComponentConfig& operator=(const ComponentConfig &) = default ;
        ComponentConfig& operator=(ComponentConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->basicArgs_ == nullptr
        && this->nodeUnits_ == nullptr; };
        // basicArgs Field Functions 
        bool hasBasicArgs() const { return this->basicArgs_ != nullptr;};
        void deleteBasicArgs() { this->basicArgs_ = nullptr;};
        inline         const Darabonba::Json & getBasicArgs() const { DARABONBA_GET(basicArgs_) };
        Darabonba::Json & getBasicArgs() { DARABONBA_GET(basicArgs_) };
        inline ComponentConfig& setBasicArgs(const Darabonba::Json & basicArgs) { DARABONBA_SET_VALUE(basicArgs_, basicArgs) };
        inline ComponentConfig& setBasicArgs(Darabonba::Json && basicArgs) { DARABONBA_SET_RVALUE(basicArgs_, basicArgs) };


        // nodeUnits Field Functions 
        bool hasNodeUnits() const { return this->nodeUnits_ != nullptr;};
        void deleteNodeUnits() { this->nodeUnits_ = nullptr;};
        inline const vector<Darabonba::Json> & getNodeUnits() const { DARABONBA_PTR_GET_CONST(nodeUnits_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getNodeUnits() { DARABONBA_PTR_GET(nodeUnits_, vector<Darabonba::Json>) };
        inline ComponentConfig& setNodeUnits(const vector<Darabonba::Json> & nodeUnits) { DARABONBA_PTR_SET_VALUE(nodeUnits_, nodeUnits) };
        inline ComponentConfig& setNodeUnits(vector<Darabonba::Json> && nodeUnits) { DARABONBA_PTR_SET_RVALUE(nodeUnits_, nodeUnits) };


      protected:
        // Basic component parameters
        Darabonba::Json basicArgs_ {};
        // Node pool configuration, used to establish the correspondence between node groups and node pools. Required when ComponentType is "ACKEdge", otherwise it can be empty.
        shared_ptr<vector<Darabonba::Json>> nodeUnits_ {};
      };

      virtual bool empty() const override { return this->componentConfig_ == nullptr
        && this->componentType_ == nullptr; };
      // componentConfig Field Functions 
      bool hasComponentConfig() const { return this->componentConfig_ != nullptr;};
      void deleteComponentConfig() { this->componentConfig_ = nullptr;};
      inline const Components::ComponentConfig & getComponentConfig() const { DARABONBA_PTR_GET_CONST(componentConfig_, Components::ComponentConfig) };
      inline Components::ComponentConfig getComponentConfig() { DARABONBA_PTR_GET(componentConfig_, Components::ComponentConfig) };
      inline Components& setComponentConfig(const Components::ComponentConfig & componentConfig) { DARABONBA_PTR_SET_VALUE(componentConfig_, componentConfig) };
      inline Components& setComponentConfig(Components::ComponentConfig && componentConfig) { DARABONBA_PTR_SET_RVALUE(componentConfig_, componentConfig) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline Components& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    protected:
      // Component configuration
      shared_ptr<Components::ComponentConfig> componentConfig_ {};
      // Component type
      shared_ptr<string> componentType_ {};
    };

    virtual bool empty() const override { return this->clusterDescription_ == nullptr
        && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->components_ == nullptr && this->hpnZone_ == nullptr && this->ignoreFailedNodeTasks_ == nullptr
        && this->networks_ == nullptr && this->nimizVSwitches_ == nullptr && this->nodeGroups_ == nullptr && this->openEniJumboFrame_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tag_ == nullptr; };
    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string getClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline CreateClusterRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateClusterRequest::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateClusterRequest::Components>) };
    inline vector<CreateClusterRequest::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<CreateClusterRequest::Components>) };
    inline CreateClusterRequest& setComponents(const vector<CreateClusterRequest::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateClusterRequest& setComponents(vector<CreateClusterRequest::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline CreateClusterRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool getIgnoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline CreateClusterRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline const CreateClusterRequest::Networks & getNetworks() const { DARABONBA_PTR_GET_CONST(networks_, CreateClusterRequest::Networks) };
    inline CreateClusterRequest::Networks getNetworks() { DARABONBA_PTR_GET(networks_, CreateClusterRequest::Networks) };
    inline CreateClusterRequest& setNetworks(const CreateClusterRequest::Networks & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
    inline CreateClusterRequest& setNetworks(CreateClusterRequest::Networks && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


    // nimizVSwitches Field Functions 
    bool hasNimizVSwitches() const { return this->nimizVSwitches_ != nullptr;};
    void deleteNimizVSwitches() { this->nimizVSwitches_ = nullptr;};
    inline const vector<string> & getNimizVSwitches() const { DARABONBA_PTR_GET_CONST(nimizVSwitches_, vector<string>) };
    inline vector<string> getNimizVSwitches() { DARABONBA_PTR_GET(nimizVSwitches_, vector<string>) };
    inline CreateClusterRequest& setNimizVSwitches(const vector<string> & nimizVSwitches) { DARABONBA_PTR_SET_VALUE(nimizVSwitches_, nimizVSwitches) };
    inline CreateClusterRequest& setNimizVSwitches(vector<string> && nimizVSwitches) { DARABONBA_PTR_SET_RVALUE(nimizVSwitches_, nimizVSwitches) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<CreateClusterRequest::NodeGroups> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<CreateClusterRequest::NodeGroups>) };
    inline vector<CreateClusterRequest::NodeGroups> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<CreateClusterRequest::NodeGroups>) };
    inline CreateClusterRequest& setNodeGroups(const vector<CreateClusterRequest::NodeGroups> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline CreateClusterRequest& setNodeGroups(vector<CreateClusterRequest::NodeGroups> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // openEniJumboFrame Field Functions 
    bool hasOpenEniJumboFrame() const { return this->openEniJumboFrame_ != nullptr;};
    void deleteOpenEniJumboFrame() { this->openEniJumboFrame_ = nullptr;};
    inline bool getOpenEniJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(openEniJumboFrame_, false) };
    inline CreateClusterRequest& setOpenEniJumboFrame(bool openEniJumboFrame) { DARABONBA_PTR_SET_VALUE(openEniJumboFrame_, openEniJumboFrame) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateClusterRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateClusterRequest::Tag>) };
    inline vector<CreateClusterRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateClusterRequest::Tag>) };
    inline CreateClusterRequest& setTag(const vector<CreateClusterRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateClusterRequest& setTag(vector<CreateClusterRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Cluster description
    shared_ptr<string> clusterDescription_ {};
    // Cluster name
    shared_ptr<string> clusterName_ {};
    // Cluster type
    shared_ptr<string> clusterType_ {};
    // Components (software instances)
    shared_ptr<vector<CreateClusterRequest::Components>> components_ {};
    // Cluster number
    shared_ptr<string> hpnZone_ {};
    // Whether to allow skipping failed nodes, the default value is False
    shared_ptr<bool> ignoreFailedNodeTasks_ {};
    // Network information
    shared_ptr<CreateClusterRequest::Networks> networks_ {};
    // Node VSwitches
    shared_ptr<vector<string>> nimizVSwitches_ {};
    // Node group list
    shared_ptr<vector<CreateClusterRequest::NodeGroups>> nodeGroups_ {};
    // Whether the network interface supports jumbo frames
    shared_ptr<bool> openEniJumboFrame_ {};
    // Resource group ID
    shared_ptr<string> resourceGroupId_ {};
    // Resource tags
    shared_ptr<vector<CreateClusterRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
