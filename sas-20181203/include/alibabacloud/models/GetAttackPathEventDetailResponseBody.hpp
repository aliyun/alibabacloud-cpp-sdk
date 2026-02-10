// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathEvent, attackPathEvent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathEvent, attackPathEvent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttackPathEventDetailResponseBody() = default ;
    GetAttackPathEventDetailResponseBody(const GetAttackPathEventDetailResponseBody &) = default ;
    GetAttackPathEventDetailResponseBody(GetAttackPathEventDetailResponseBody &&) = default ;
    GetAttackPathEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathEventDetailResponseBody() = default ;
    GetAttackPathEventDetailResponseBody& operator=(const GetAttackPathEventDetailResponseBody &) = default ;
    GetAttackPathEventDetailResponseBody& operator=(GetAttackPathEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathEvent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathEvent& obj) { 
        DARABONBA_PTR_TO_JSON(DstAsset, dstAsset_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(PathDetailDesc, pathDetailDesc_);
        DARABONBA_PTR_TO_JSON(PathEventEdgeList, pathEventEdgeList_);
        DARABONBA_PTR_TO_JSON(PathEventNodeList, pathEventNodeList_);
        DARABONBA_PTR_TO_JSON(PathName, pathName_);
        DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
        DARABONBA_PTR_TO_JSON(PathType, pathType_);
        DARABONBA_PTR_TO_JSON(PathTypeDesc, pathTypeDesc_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SrcAsset, srcAsset_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathEvent& obj) { 
        DARABONBA_PTR_FROM_JSON(DstAsset, dstAsset_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(PathDetailDesc, pathDetailDesc_);
        DARABONBA_PTR_FROM_JSON(PathEventEdgeList, pathEventEdgeList_);
        DARABONBA_PTR_FROM_JSON(PathEventNodeList, pathEventNodeList_);
        DARABONBA_PTR_FROM_JSON(PathName, pathName_);
        DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
        DARABONBA_PTR_FROM_JSON(PathType, pathType_);
        DARABONBA_PTR_FROM_JSON(PathTypeDesc, pathTypeDesc_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SrcAsset, srcAsset_);
      };
      AttackPathEvent() = default ;
      AttackPathEvent(const AttackPathEvent &) = default ;
      AttackPathEvent(AttackPathEvent &&) = default ;
      AttackPathEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathEvent() = default ;
      AttackPathEvent& operator=(const AttackPathEvent &) = default ;
      AttackPathEvent& operator=(AttackPathEvent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SrcAsset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SrcAsset& obj) { 
          DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, SrcAsset& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        SrcAsset() = default ;
        SrcAsset(const SrcAsset &) = default ;
        SrcAsset(SrcAsset &&) = default ;
        SrcAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SrcAsset() = default ;
        SrcAsset& operator=(const SrcAsset &) = default ;
        SrcAsset& operator=(SrcAsset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->sensitiveAssetFlag_ == nullptr
        && this->vendor_ == nullptr; };
        // assetSubType Field Functions 
        bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
        void deleteAssetSubType() { this->assetSubType_ = nullptr;};
        inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
        inline SrcAsset& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
        inline SrcAsset& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SrcAsset& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline SrcAsset& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SrcAsset& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // sensitiveAssetFlag Field Functions 
        bool hasSensitiveAssetFlag() const { return this->sensitiveAssetFlag_ != nullptr;};
        void deleteSensitiveAssetFlag() { this->sensitiveAssetFlag_ = nullptr;};
        inline int32_t getSensitiveAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(sensitiveAssetFlag_, 0) };
        inline SrcAsset& setSensitiveAssetFlag(int32_t sensitiveAssetFlag) { DARABONBA_PTR_SET_VALUE(sensitiveAssetFlag_, sensitiveAssetFlag) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline SrcAsset& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // Subtype of the cloud product asset
        shared_ptr<int32_t> assetSubType_ {};
        // The type of the cloud product asset.
        shared_ptr<int32_t> assetType_ {};
        // The ID of the cloud product asset instance.
        shared_ptr<string> instanceId_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // The ID of the region where the cloud product asset instance is located.
        shared_ptr<string> regionId_ {};
        // Sensitive asset flag. Values:
        // - **0**: Non-sensitive asset.
        // - **1**: Sensitive asset.
        shared_ptr<int32_t> sensitiveAssetFlag_ {};
        // The vendor of the cloud product asset.
        shared_ptr<int32_t> vendor_ {};
      };

      class PathEventNodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PathEventNodeList& obj) { 
          DARABONBA_PTR_TO_JSON(AiAssetFlag, aiAssetFlag_);
          DARABONBA_PTR_TO_JSON(ElementType, elementType_);
          DARABONBA_PTR_TO_JSON(NodeDetail, nodeDetail_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(NodeUuid, nodeUuid_);
          DARABONBA_PTR_TO_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
        };
        friend void from_json(const Darabonba::Json& j, PathEventNodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(AiAssetFlag, aiAssetFlag_);
          DARABONBA_PTR_FROM_JSON(ElementType, elementType_);
          DARABONBA_PTR_FROM_JSON(NodeDetail, nodeDetail_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(NodeUuid, nodeUuid_);
          DARABONBA_PTR_FROM_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
        };
        PathEventNodeList() = default ;
        PathEventNodeList(const PathEventNodeList &) = default ;
        PathEventNodeList(PathEventNodeList &&) = default ;
        PathEventNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PathEventNodeList() = default ;
        PathEventNodeList& operator=(const PathEventNodeList &) = default ;
        PathEventNodeList& operator=(PathEventNodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aiAssetFlag_ == nullptr
        && this->elementType_ == nullptr && this->nodeDetail_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->nodeUuid_ == nullptr
        && this->sensitiveAssetFlag_ == nullptr; };
        // aiAssetFlag Field Functions 
        bool hasAiAssetFlag() const { return this->aiAssetFlag_ != nullptr;};
        void deleteAiAssetFlag() { this->aiAssetFlag_ = nullptr;};
        inline int32_t getAiAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(aiAssetFlag_, 0) };
        inline PathEventNodeList& setAiAssetFlag(int32_t aiAssetFlag) { DARABONBA_PTR_SET_VALUE(aiAssetFlag_, aiAssetFlag) };


        // elementType Field Functions 
        bool hasElementType() const { return this->elementType_ != nullptr;};
        void deleteElementType() { this->elementType_ = nullptr;};
        inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
        inline PathEventNodeList& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


        // nodeDetail Field Functions 
        bool hasNodeDetail() const { return this->nodeDetail_ != nullptr;};
        void deleteNodeDetail() { this->nodeDetail_ = nullptr;};
        inline string getNodeDetail() const { DARABONBA_PTR_GET_DEFAULT(nodeDetail_, "") };
        inline PathEventNodeList& setNodeDetail(string nodeDetail) { DARABONBA_PTR_SET_VALUE(nodeDetail_, nodeDetail) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline PathEventNodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline PathEventNodeList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // nodeUuid Field Functions 
        bool hasNodeUuid() const { return this->nodeUuid_ != nullptr;};
        void deleteNodeUuid() { this->nodeUuid_ = nullptr;};
        inline string getNodeUuid() const { DARABONBA_PTR_GET_DEFAULT(nodeUuid_, "") };
        inline PathEventNodeList& setNodeUuid(string nodeUuid) { DARABONBA_PTR_SET_VALUE(nodeUuid_, nodeUuid) };


        // sensitiveAssetFlag Field Functions 
        bool hasSensitiveAssetFlag() const { return this->sensitiveAssetFlag_ != nullptr;};
        void deleteSensitiveAssetFlag() { this->sensitiveAssetFlag_ = nullptr;};
        inline int32_t getSensitiveAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(sensitiveAssetFlag_, 0) };
        inline PathEventNodeList& setSensitiveAssetFlag(int32_t sensitiveAssetFlag) { DARABONBA_PTR_SET_VALUE(sensitiveAssetFlag_, sensitiveAssetFlag) };


      protected:
        // AI资产标识。取值：
        // - **0**：非AI资产。
        // - **1**：AI资产。
        shared_ptr<int32_t> aiAssetFlag_ {};
        // Node element type.
        shared_ptr<string> elementType_ {};
        // Details of the node.
        shared_ptr<string> nodeDetail_ {};
        // Name of the node.
        shared_ptr<string> nodeName_ {};
        // Type of the node.
        shared_ptr<string> nodeType_ {};
        // UUID of the node.
        shared_ptr<string> nodeUuid_ {};
        // Sensitive asset flag. Values:
        // - **0**: Non-sensitive asset.
        // - **1**: Sensitive asset.
        shared_ptr<int32_t> sensitiveAssetFlag_ {};
      };

      class PathEventEdgeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PathEventEdgeList& obj) { 
          DARABONBA_PTR_TO_JSON(EdgeId, edgeId_);
          DARABONBA_PTR_TO_JSON(EdgeType, edgeType_);
          DARABONBA_PTR_TO_JSON(ElementType, elementType_);
          DARABONBA_PTR_TO_JSON(EndNodeUuid, endNodeUuid_);
          DARABONBA_PTR_TO_JSON(RepairSuggestionDisplay, repairSuggestionDisplay_);
          DARABONBA_PTR_TO_JSON(StartNodeUuid, startNodeUuid_);
        };
        friend void from_json(const Darabonba::Json& j, PathEventEdgeList& obj) { 
          DARABONBA_PTR_FROM_JSON(EdgeId, edgeId_);
          DARABONBA_PTR_FROM_JSON(EdgeType, edgeType_);
          DARABONBA_PTR_FROM_JSON(ElementType, elementType_);
          DARABONBA_PTR_FROM_JSON(EndNodeUuid, endNodeUuid_);
          DARABONBA_PTR_FROM_JSON(RepairSuggestionDisplay, repairSuggestionDisplay_);
          DARABONBA_PTR_FROM_JSON(StartNodeUuid, startNodeUuid_);
        };
        PathEventEdgeList() = default ;
        PathEventEdgeList(const PathEventEdgeList &) = default ;
        PathEventEdgeList(PathEventEdgeList &&) = default ;
        PathEventEdgeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PathEventEdgeList() = default ;
        PathEventEdgeList& operator=(const PathEventEdgeList &) = default ;
        PathEventEdgeList& operator=(PathEventEdgeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->edgeId_ == nullptr
        && this->edgeType_ == nullptr && this->elementType_ == nullptr && this->endNodeUuid_ == nullptr && this->repairSuggestionDisplay_ == nullptr && this->startNodeUuid_ == nullptr; };
        // edgeId Field Functions 
        bool hasEdgeId() const { return this->edgeId_ != nullptr;};
        void deleteEdgeId() { this->edgeId_ = nullptr;};
        inline int64_t getEdgeId() const { DARABONBA_PTR_GET_DEFAULT(edgeId_, 0L) };
        inline PathEventEdgeList& setEdgeId(int64_t edgeId) { DARABONBA_PTR_SET_VALUE(edgeId_, edgeId) };


        // edgeType Field Functions 
        bool hasEdgeType() const { return this->edgeType_ != nullptr;};
        void deleteEdgeType() { this->edgeType_ = nullptr;};
        inline string getEdgeType() const { DARABONBA_PTR_GET_DEFAULT(edgeType_, "") };
        inline PathEventEdgeList& setEdgeType(string edgeType) { DARABONBA_PTR_SET_VALUE(edgeType_, edgeType) };


        // elementType Field Functions 
        bool hasElementType() const { return this->elementType_ != nullptr;};
        void deleteElementType() { this->elementType_ = nullptr;};
        inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
        inline PathEventEdgeList& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


        // endNodeUuid Field Functions 
        bool hasEndNodeUuid() const { return this->endNodeUuid_ != nullptr;};
        void deleteEndNodeUuid() { this->endNodeUuid_ = nullptr;};
        inline string getEndNodeUuid() const { DARABONBA_PTR_GET_DEFAULT(endNodeUuid_, "") };
        inline PathEventEdgeList& setEndNodeUuid(string endNodeUuid) { DARABONBA_PTR_SET_VALUE(endNodeUuid_, endNodeUuid) };


        // repairSuggestionDisplay Field Functions 
        bool hasRepairSuggestionDisplay() const { return this->repairSuggestionDisplay_ != nullptr;};
        void deleteRepairSuggestionDisplay() { this->repairSuggestionDisplay_ = nullptr;};
        inline string getRepairSuggestionDisplay() const { DARABONBA_PTR_GET_DEFAULT(repairSuggestionDisplay_, "") };
        inline PathEventEdgeList& setRepairSuggestionDisplay(string repairSuggestionDisplay) { DARABONBA_PTR_SET_VALUE(repairSuggestionDisplay_, repairSuggestionDisplay) };


        // startNodeUuid Field Functions 
        bool hasStartNodeUuid() const { return this->startNodeUuid_ != nullptr;};
        void deleteStartNodeUuid() { this->startNodeUuid_ = nullptr;};
        inline string getStartNodeUuid() const { DARABONBA_PTR_GET_DEFAULT(startNodeUuid_, "") };
        inline PathEventEdgeList& setStartNodeUuid(string startNodeUuid) { DARABONBA_PTR_SET_VALUE(startNodeUuid_, startNodeUuid) };


      protected:
        // Edge ID.
        shared_ptr<int64_t> edgeId_ {};
        // Edge type.
        shared_ptr<string> edgeType_ {};
        // Edge element type.
        shared_ptr<string> elementType_ {};
        // UUID of the end node of the edge.
        shared_ptr<string> endNodeUuid_ {};
        // Description of the repair suggestion.
        shared_ptr<string> repairSuggestionDisplay_ {};
        // UUID of the start node of the edge.
        shared_ptr<string> startNodeUuid_ {};
      };

      class DstAsset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DstAsset& obj) { 
          DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, DstAsset& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        DstAsset() = default ;
        DstAsset(const DstAsset &) = default ;
        DstAsset(DstAsset &&) = default ;
        DstAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DstAsset() = default ;
        DstAsset& operator=(const DstAsset &) = default ;
        DstAsset& operator=(DstAsset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->sensitiveAssetFlag_ == nullptr
        && this->vendor_ == nullptr; };
        // assetSubType Field Functions 
        bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
        void deleteAssetSubType() { this->assetSubType_ = nullptr;};
        inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
        inline DstAsset& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
        inline DstAsset& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DstAsset& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline DstAsset& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DstAsset& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // sensitiveAssetFlag Field Functions 
        bool hasSensitiveAssetFlag() const { return this->sensitiveAssetFlag_ != nullptr;};
        void deleteSensitiveAssetFlag() { this->sensitiveAssetFlag_ = nullptr;};
        inline int32_t getSensitiveAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(sensitiveAssetFlag_, 0) };
        inline DstAsset& setSensitiveAssetFlag(int32_t sensitiveAssetFlag) { DARABONBA_PTR_SET_VALUE(sensitiveAssetFlag_, sensitiveAssetFlag) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline DstAsset& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // Subtype of the cloud product asset.
        shared_ptr<int32_t> assetSubType_ {};
        // Type of the cloud product asset.
        shared_ptr<int32_t> assetType_ {};
        // ID of the cloud product asset instance.
        shared_ptr<string> instanceId_ {};
        // Instance name.
        shared_ptr<string> instanceName_ {};
        // ID of the region where the cloud product asset instance is located.
        shared_ptr<string> regionId_ {};
        // Sensitive asset flag. Values:
        // - **0**: Non-sensitive asset.
        // - **1**: Sensitive asset.
        shared_ptr<int32_t> sensitiveAssetFlag_ {};
        // Vendor of the cloud product asset.
        shared_ptr<int32_t> vendor_ {};
      };

      virtual bool empty() const override { return this->dstAsset_ == nullptr
        && this->firstTime_ == nullptr && this->lastTime_ == nullptr && this->pathDetailDesc_ == nullptr && this->pathEventEdgeList_ == nullptr && this->pathEventNodeList_ == nullptr
        && this->pathName_ == nullptr && this->pathNameDesc_ == nullptr && this->pathType_ == nullptr && this->pathTypeDesc_ == nullptr && this->riskLevel_ == nullptr
        && this->srcAsset_ == nullptr; };
      // dstAsset Field Functions 
      bool hasDstAsset() const { return this->dstAsset_ != nullptr;};
      void deleteDstAsset() { this->dstAsset_ = nullptr;};
      inline const AttackPathEvent::DstAsset & getDstAsset() const { DARABONBA_PTR_GET_CONST(dstAsset_, AttackPathEvent::DstAsset) };
      inline AttackPathEvent::DstAsset getDstAsset() { DARABONBA_PTR_GET(dstAsset_, AttackPathEvent::DstAsset) };
      inline AttackPathEvent& setDstAsset(const AttackPathEvent::DstAsset & dstAsset) { DARABONBA_PTR_SET_VALUE(dstAsset_, dstAsset) };
      inline AttackPathEvent& setDstAsset(AttackPathEvent::DstAsset && dstAsset) { DARABONBA_PTR_SET_RVALUE(dstAsset_, dstAsset) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline AttackPathEvent& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline AttackPathEvent& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // pathDetailDesc Field Functions 
      bool hasPathDetailDesc() const { return this->pathDetailDesc_ != nullptr;};
      void deletePathDetailDesc() { this->pathDetailDesc_ = nullptr;};
      inline string getPathDetailDesc() const { DARABONBA_PTR_GET_DEFAULT(pathDetailDesc_, "") };
      inline AttackPathEvent& setPathDetailDesc(string pathDetailDesc) { DARABONBA_PTR_SET_VALUE(pathDetailDesc_, pathDetailDesc) };


      // pathEventEdgeList Field Functions 
      bool hasPathEventEdgeList() const { return this->pathEventEdgeList_ != nullptr;};
      void deletePathEventEdgeList() { this->pathEventEdgeList_ = nullptr;};
      inline const vector<AttackPathEvent::PathEventEdgeList> & getPathEventEdgeList() const { DARABONBA_PTR_GET_CONST(pathEventEdgeList_, vector<AttackPathEvent::PathEventEdgeList>) };
      inline vector<AttackPathEvent::PathEventEdgeList> getPathEventEdgeList() { DARABONBA_PTR_GET(pathEventEdgeList_, vector<AttackPathEvent::PathEventEdgeList>) };
      inline AttackPathEvent& setPathEventEdgeList(const vector<AttackPathEvent::PathEventEdgeList> & pathEventEdgeList) { DARABONBA_PTR_SET_VALUE(pathEventEdgeList_, pathEventEdgeList) };
      inline AttackPathEvent& setPathEventEdgeList(vector<AttackPathEvent::PathEventEdgeList> && pathEventEdgeList) { DARABONBA_PTR_SET_RVALUE(pathEventEdgeList_, pathEventEdgeList) };


      // pathEventNodeList Field Functions 
      bool hasPathEventNodeList() const { return this->pathEventNodeList_ != nullptr;};
      void deletePathEventNodeList() { this->pathEventNodeList_ = nullptr;};
      inline const vector<AttackPathEvent::PathEventNodeList> & getPathEventNodeList() const { DARABONBA_PTR_GET_CONST(pathEventNodeList_, vector<AttackPathEvent::PathEventNodeList>) };
      inline vector<AttackPathEvent::PathEventNodeList> getPathEventNodeList() { DARABONBA_PTR_GET(pathEventNodeList_, vector<AttackPathEvent::PathEventNodeList>) };
      inline AttackPathEvent& setPathEventNodeList(const vector<AttackPathEvent::PathEventNodeList> & pathEventNodeList) { DARABONBA_PTR_SET_VALUE(pathEventNodeList_, pathEventNodeList) };
      inline AttackPathEvent& setPathEventNodeList(vector<AttackPathEvent::PathEventNodeList> && pathEventNodeList) { DARABONBA_PTR_SET_RVALUE(pathEventNodeList_, pathEventNodeList) };


      // pathName Field Functions 
      bool hasPathName() const { return this->pathName_ != nullptr;};
      void deletePathName() { this->pathName_ = nullptr;};
      inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
      inline AttackPathEvent& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


      // pathNameDesc Field Functions 
      bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
      void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
      inline string getPathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
      inline AttackPathEvent& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


      // pathType Field Functions 
      bool hasPathType() const { return this->pathType_ != nullptr;};
      void deletePathType() { this->pathType_ = nullptr;};
      inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
      inline AttackPathEvent& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


      // pathTypeDesc Field Functions 
      bool hasPathTypeDesc() const { return this->pathTypeDesc_ != nullptr;};
      void deletePathTypeDesc() { this->pathTypeDesc_ = nullptr;};
      inline string getPathTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(pathTypeDesc_, "") };
      inline AttackPathEvent& setPathTypeDesc(string pathTypeDesc) { DARABONBA_PTR_SET_VALUE(pathTypeDesc_, pathTypeDesc) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline AttackPathEvent& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // srcAsset Field Functions 
      bool hasSrcAsset() const { return this->srcAsset_ != nullptr;};
      void deleteSrcAsset() { this->srcAsset_ = nullptr;};
      inline const AttackPathEvent::SrcAsset & getSrcAsset() const { DARABONBA_PTR_GET_CONST(srcAsset_, AttackPathEvent::SrcAsset) };
      inline AttackPathEvent::SrcAsset getSrcAsset() { DARABONBA_PTR_GET(srcAsset_, AttackPathEvent::SrcAsset) };
      inline AttackPathEvent& setSrcAsset(const AttackPathEvent::SrcAsset & srcAsset) { DARABONBA_PTR_SET_VALUE(srcAsset_, srcAsset) };
      inline AttackPathEvent& setSrcAsset(AttackPathEvent::SrcAsset && srcAsset) { DARABONBA_PTR_SET_RVALUE(srcAsset_, srcAsset) };


    protected:
      // Destination asset.
      shared_ptr<AttackPathEvent::DstAsset> dstAsset_ {};
      // Timestamp of the first occurrence, in milliseconds.
      shared_ptr<int64_t> firstTime_ {};
      // Timestamp of the latest discovery, in milliseconds.
      shared_ptr<int64_t> lastTime_ {};
      // Detailed description of the path.
      shared_ptr<string> pathDetailDesc_ {};
      // List of path event edges.
      shared_ptr<vector<AttackPathEvent::PathEventEdgeList>> pathEventEdgeList_ {};
      // List of path nodes.
      shared_ptr<vector<AttackPathEvent::PathEventNodeList>> pathEventNodeList_ {};
      // Name of the path.
      shared_ptr<string> pathName_ {};
      // Description of the path name.
      shared_ptr<string> pathNameDesc_ {};
      // Type of the path.
      shared_ptr<string> pathType_ {};
      // Description of the path type.
      shared_ptr<string> pathTypeDesc_ {};
      // Risk level.
      shared_ptr<string> riskLevel_ {};
      // Source asset.
      shared_ptr<AttackPathEvent::SrcAsset> srcAsset_ {};
    };

    virtual bool empty() const override { return this->attackPathEvent_ == nullptr
        && this->requestId_ == nullptr; };
    // attackPathEvent Field Functions 
    bool hasAttackPathEvent() const { return this->attackPathEvent_ != nullptr;};
    void deleteAttackPathEvent() { this->attackPathEvent_ = nullptr;};
    inline const GetAttackPathEventDetailResponseBody::AttackPathEvent & getAttackPathEvent() const { DARABONBA_PTR_GET_CONST(attackPathEvent_, GetAttackPathEventDetailResponseBody::AttackPathEvent) };
    inline GetAttackPathEventDetailResponseBody::AttackPathEvent getAttackPathEvent() { DARABONBA_PTR_GET(attackPathEvent_, GetAttackPathEventDetailResponseBody::AttackPathEvent) };
    inline GetAttackPathEventDetailResponseBody& setAttackPathEvent(const GetAttackPathEventDetailResponseBody::AttackPathEvent & attackPathEvent) { DARABONBA_PTR_SET_VALUE(attackPathEvent_, attackPathEvent) };
    inline GetAttackPathEventDetailResponseBody& setAttackPathEvent(GetAttackPathEventDetailResponseBody::AttackPathEvent && attackPathEvent) { DARABONBA_PTR_SET_RVALUE(attackPathEvent_, attackPathEvent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttackPathEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the attack path event.
    shared_ptr<GetAttackPathEventDetailResponseBody::AttackPathEvent> attackPathEvent_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request, and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
