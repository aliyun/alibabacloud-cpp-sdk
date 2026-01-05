// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeModel, nodeModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeModel, nodeModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudPhoneNodesResponseBody() = default ;
    DescribeCloudPhoneNodesResponseBody(const DescribeCloudPhoneNodesResponseBody &) = default ;
    DescribeCloudPhoneNodesResponseBody(DescribeCloudPhoneNodesResponseBody &&) = default ;
    DescribeCloudPhoneNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodesResponseBody() = default ;
    DescribeCloudPhoneNodesResponseBody& operator=(const DescribeCloudPhoneNodesResponseBody &) = default ;
    DescribeCloudPhoneNodesResponseBody& operator=(DescribeCloudPhoneNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeModel& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
        DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        DARABONBA_PTR_TO_JSON(NetworkInfos, networkInfos_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
        DARABONBA_PTR_TO_JSON(PhoneDataInfo, phoneDataInfo_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
        DARABONBA_PTR_TO_JSON(ShareDataVolume, shareDataVolume_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwapSize, swapSize_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeModel& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
        DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        DARABONBA_PTR_FROM_JSON(NetworkInfos, networkInfos_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
        DARABONBA_PTR_FROM_JSON(PhoneDataInfo, phoneDataInfo_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
        DARABONBA_PTR_FROM_JSON(ShareDataVolume, shareDataVolume_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SwapSize, swapSize_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      NodeModel() = default ;
      NodeModel(const NodeModel &) = default ;
      NodeModel(NodeModel &&) = default ;
      NodeModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeModel() = default ;
      NodeModel& operator=(const NodeModel &) = default ;
      NodeModel& operator=(NodeModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PhoneDataInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PhoneDataInfo& obj) { 
          DARABONBA_PTR_TO_JSON(PhoneDataId, phoneDataId_);
          DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
        };
        friend void from_json(const Darabonba::Json& j, PhoneDataInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(PhoneDataId, phoneDataId_);
          DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
        };
        PhoneDataInfo() = default ;
        PhoneDataInfo(const PhoneDataInfo &) = default ;
        PhoneDataInfo(PhoneDataInfo &&) = default ;
        PhoneDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PhoneDataInfo() = default ;
        PhoneDataInfo& operator=(const PhoneDataInfo &) = default ;
        PhoneDataInfo& operator=(PhoneDataInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->phoneDataId_ == nullptr
        && this->phoneDataVolume_ == nullptr; };
        // phoneDataId Field Functions 
        bool hasPhoneDataId() const { return this->phoneDataId_ != nullptr;};
        void deletePhoneDataId() { this->phoneDataId_ = nullptr;};
        inline string getPhoneDataId() const { DARABONBA_PTR_GET_DEFAULT(phoneDataId_, "") };
        inline PhoneDataInfo& setPhoneDataId(string phoneDataId) { DARABONBA_PTR_SET_VALUE(phoneDataId_, phoneDataId) };


        // phoneDataVolume Field Functions 
        bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
        void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
        inline int32_t getPhoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
        inline PhoneDataInfo& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


      protected:
        shared_ptr<string> phoneDataId_ {};
        shared_ptr<int32_t> phoneDataVolume_ {};
      };

      class NetworkInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkInfos& obj) { 
          DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        NetworkInfos() = default ;
        NetworkInfos(const NetworkInfos &) = default ;
        NetworkInfos(NetworkInfos &&) = default ;
        NetworkInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkInfos() = default ;
        NetworkInfos& operator=(const NetworkInfos &) = default ;
        NetworkInfos& operator=(NetworkInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr
        && this->bandwidthPackageType_ == nullptr && this->networkId_ == nullptr && this->networkType_ == nullptr && this->vSwitchId_ == nullptr; };
        // bandwidthPackageId Field Functions 
        bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
        void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
        inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
        inline NetworkInfos& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


        // bandwidthPackageType Field Functions 
        bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
        void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
        inline string getBandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
        inline NetworkInfos& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline NetworkInfos& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline NetworkInfos& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline NetworkInfos& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        shared_ptr<string> bandwidthPackageId_ {};
        shared_ptr<string> bandwidthPackageType_ {};
        shared_ptr<string> networkId_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> vSwitchId_ {};
      };

      class BizTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizTags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, BizTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        BizTags() = default ;
        BizTags(const BizTags &) = default ;
        BizTags(BizTags &&) = default ;
        BizTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizTags() = default ;
        BizTags& operator=(const BizTags &) = default ;
        BizTags& operator=(BizTags &&) = default ;
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
        inline BizTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline BizTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr
        && this->bandwidthPackageStatus_ == nullptr && this->bandwidthPackageType_ == nullptr && this->bizTags_ == nullptr && this->chargeType_ == nullptr && this->cpu_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtExpired_ == nullptr && this->gmtModified_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr
        && this->networkId_ == nullptr && this->networkInfos_ == nullptr && this->networkType_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->phoneCount_ == nullptr && this->phoneDataInfo_ == nullptr && this->regionId_ == nullptr && this->resolutionHeight_ == nullptr && this->resolutionWidth_ == nullptr
        && this->serverType_ == nullptr && this->shareDataVolume_ == nullptr && this->status_ == nullptr && this->swapSize_ == nullptr && this->vSwitchId_ == nullptr; };
      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline NodeModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // bandwidthPackageStatus Field Functions 
      bool hasBandwidthPackageStatus() const { return this->bandwidthPackageStatus_ != nullptr;};
      void deleteBandwidthPackageStatus() { this->bandwidthPackageStatus_ = nullptr;};
      inline string getBandwidthPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageStatus_, "") };
      inline NodeModel& setBandwidthPackageStatus(string bandwidthPackageStatus) { DARABONBA_PTR_SET_VALUE(bandwidthPackageStatus_, bandwidthPackageStatus) };


      // bandwidthPackageType Field Functions 
      bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
      void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
      inline string getBandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
      inline NodeModel& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


      // bizTags Field Functions 
      bool hasBizTags() const { return this->bizTags_ != nullptr;};
      void deleteBizTags() { this->bizTags_ = nullptr;};
      inline const vector<NodeModel::BizTags> & getBizTags() const { DARABONBA_PTR_GET_CONST(bizTags_, vector<NodeModel::BizTags>) };
      inline vector<NodeModel::BizTags> getBizTags() { DARABONBA_PTR_GET(bizTags_, vector<NodeModel::BizTags>) };
      inline NodeModel& setBizTags(const vector<NodeModel::BizTags> & bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };
      inline NodeModel& setBizTags(vector<NodeModel::BizTags> && bizTags) { DARABONBA_PTR_SET_RVALUE(bizTags_, bizTags) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline NodeModel& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline NodeModel& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline NodeModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtExpired Field Functions 
      bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
      void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
      inline string getGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
      inline NodeModel& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline NodeModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline NodeModel& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline NodeModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // networkId Field Functions 
      bool hasNetworkId() const { return this->networkId_ != nullptr;};
      void deleteNetworkId() { this->networkId_ = nullptr;};
      inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
      inline NodeModel& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      // networkInfos Field Functions 
      bool hasNetworkInfos() const { return this->networkInfos_ != nullptr;};
      void deleteNetworkInfos() { this->networkInfos_ = nullptr;};
      inline const vector<NodeModel::NetworkInfos> & getNetworkInfos() const { DARABONBA_PTR_GET_CONST(networkInfos_, vector<NodeModel::NetworkInfos>) };
      inline vector<NodeModel::NetworkInfos> getNetworkInfos() { DARABONBA_PTR_GET(networkInfos_, vector<NodeModel::NetworkInfos>) };
      inline NodeModel& setNetworkInfos(const vector<NodeModel::NetworkInfos> & networkInfos) { DARABONBA_PTR_SET_VALUE(networkInfos_, networkInfos) };
      inline NodeModel& setNetworkInfos(vector<NodeModel::NetworkInfos> && networkInfos) { DARABONBA_PTR_SET_RVALUE(networkInfos_, networkInfos) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline NodeModel& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NodeModel& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline NodeModel& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // phoneCount Field Functions 
      bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
      void deletePhoneCount() { this->phoneCount_ = nullptr;};
      inline int32_t getPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, 0) };
      inline NodeModel& setPhoneCount(int32_t phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


      // phoneDataInfo Field Functions 
      bool hasPhoneDataInfo() const { return this->phoneDataInfo_ != nullptr;};
      void deletePhoneDataInfo() { this->phoneDataInfo_ = nullptr;};
      inline const NodeModel::PhoneDataInfo & getPhoneDataInfo() const { DARABONBA_PTR_GET_CONST(phoneDataInfo_, NodeModel::PhoneDataInfo) };
      inline NodeModel::PhoneDataInfo getPhoneDataInfo() { DARABONBA_PTR_GET(phoneDataInfo_, NodeModel::PhoneDataInfo) };
      inline NodeModel& setPhoneDataInfo(const NodeModel::PhoneDataInfo & phoneDataInfo) { DARABONBA_PTR_SET_VALUE(phoneDataInfo_, phoneDataInfo) };
      inline NodeModel& setPhoneDataInfo(NodeModel::PhoneDataInfo && phoneDataInfo) { DARABONBA_PTR_SET_RVALUE(phoneDataInfo_, phoneDataInfo) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline NodeModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resolutionHeight Field Functions 
      bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
      void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
      inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
      inline NodeModel& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


      // resolutionWidth Field Functions 
      bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
      void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
      inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
      inline NodeModel& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline NodeModel& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


      // shareDataVolume Field Functions 
      bool hasShareDataVolume() const { return this->shareDataVolume_ != nullptr;};
      void deleteShareDataVolume() { this->shareDataVolume_ = nullptr;};
      inline int32_t getShareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(shareDataVolume_, 0) };
      inline NodeModel& setShareDataVolume(int32_t shareDataVolume) { DARABONBA_PTR_SET_VALUE(shareDataVolume_, shareDataVolume) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NodeModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // swapSize Field Functions 
      bool hasSwapSize() const { return this->swapSize_ != nullptr;};
      void deleteSwapSize() { this->swapSize_ = nullptr;};
      inline int32_t getSwapSize() const { DARABONBA_PTR_GET_DEFAULT(swapSize_, 0) };
      inline NodeModel& setSwapSize(int32_t swapSize) { DARABONBA_PTR_SET_VALUE(swapSize_, swapSize) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline NodeModel& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      shared_ptr<string> bandwidthPackageId_ {};
      shared_ptr<string> bandwidthPackageStatus_ {};
      shared_ptr<string> bandwidthPackageType_ {};
      shared_ptr<vector<NodeModel::BizTags>> bizTags_ {};
      // The billing method.
      shared_ptr<string> chargeType_ {};
      // The number of CPU cores.
      shared_ptr<string> cpu_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The expiration time of the subscription matrix.
      shared_ptr<string> gmtExpired_ {};
      // The last modification time.
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> instanceType_ {};
      // The memory size. Unit: GB.
      shared_ptr<int32_t> memory_ {};
      // The network ID.
      shared_ptr<string> networkId_ {};
      shared_ptr<vector<NodeModel::NetworkInfos>> networkInfos_ {};
      shared_ptr<string> networkType_ {};
      // The matrix ID.
      shared_ptr<string> nodeId_ {};
      // The matrix name.
      shared_ptr<string> nodeName_ {};
      // The number of cloud phone instances per matrix.
      shared_ptr<int32_t> phoneCount_ {};
      shared_ptr<NodeModel::PhoneDataInfo> phoneDataInfo_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The height of the resolution. Unit: pixel.
      shared_ptr<int32_t> resolutionHeight_ {};
      // The width of the resolution. Unit: pixel.
      shared_ptr<int32_t> resolutionWidth_ {};
      // The matrix specification.
      shared_ptr<string> serverType_ {};
      // The size of the shared storage. Unit: GiB.
      shared_ptr<int32_t> shareDataVolume_ {};
      // The matrix status.
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> swapSize_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeModel_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCloudPhoneNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudPhoneNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeModel Field Functions 
    bool hasNodeModel() const { return this->nodeModel_ != nullptr;};
    void deleteNodeModel() { this->nodeModel_ = nullptr;};
    inline const vector<DescribeCloudPhoneNodesResponseBody::NodeModel> & getNodeModel() const { DARABONBA_PTR_GET_CONST(nodeModel_, vector<DescribeCloudPhoneNodesResponseBody::NodeModel>) };
    inline vector<DescribeCloudPhoneNodesResponseBody::NodeModel> getNodeModel() { DARABONBA_PTR_GET(nodeModel_, vector<DescribeCloudPhoneNodesResponseBody::NodeModel>) };
    inline DescribeCloudPhoneNodesResponseBody& setNodeModel(const vector<DescribeCloudPhoneNodesResponseBody::NodeModel> & nodeModel) { DARABONBA_PTR_SET_VALUE(nodeModel_, nodeModel) };
    inline DescribeCloudPhoneNodesResponseBody& setNodeModel(vector<DescribeCloudPhoneNodesResponseBody::NodeModel> && nodeModel) { DARABONBA_PTR_SET_RVALUE(nodeModel_, nodeModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudPhoneNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudPhoneNodesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   ****
    shared_ptr<string> nextToken_ {};
    // The matrixes.
    shared_ptr<vector<DescribeCloudPhoneNodesResponseBody::NodeModel>> nodeModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of cloud phone instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
