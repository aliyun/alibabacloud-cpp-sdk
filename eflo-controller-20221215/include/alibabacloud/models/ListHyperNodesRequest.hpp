// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHYPERNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHYPERNODESREQUEST_HPP_
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
  class ListHyperNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHyperNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_TO_JSON(HyperNodeIds, hyperNodeIds_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(OperatingStates, operatingStates_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHyperNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_FROM_JSON(HyperNodeIds, hyperNodeIds_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(OperatingStates, operatingStates_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListHyperNodesRequest() = default ;
    ListHyperNodesRequest(const ListHyperNodesRequest &) = default ;
    ListHyperNodesRequest(ListHyperNodesRequest &&) = default ;
    ListHyperNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHyperNodesRequest() = default ;
    ListHyperNodesRequest& operator=(const ListHyperNodesRequest &) = default ;
    ListHyperNodesRequest& operator=(ListHyperNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clusterName_ == nullptr
        && this->commodityCode_ == nullptr && this->hpnZone_ == nullptr && this->hyperNodeId_ == nullptr && this->hyperNodeIds_ == nullptr && this->machineType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodeGroupName_ == nullptr && this->operatingStates_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tags_ == nullptr && this->zoneId_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListHyperNodesRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListHyperNodesRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListHyperNodesRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // hyperNodeId Field Functions 
    bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
    void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
    inline string getHyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
    inline ListHyperNodesRequest& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


    // hyperNodeIds Field Functions 
    bool hasHyperNodeIds() const { return this->hyperNodeIds_ != nullptr;};
    void deleteHyperNodeIds() { this->hyperNodeIds_ = nullptr;};
    inline const vector<string> & getHyperNodeIds() const { DARABONBA_PTR_GET_CONST(hyperNodeIds_, vector<string>) };
    inline vector<string> getHyperNodeIds() { DARABONBA_PTR_GET(hyperNodeIds_, vector<string>) };
    inline ListHyperNodesRequest& setHyperNodeIds(const vector<string> & hyperNodeIds) { DARABONBA_PTR_SET_VALUE(hyperNodeIds_, hyperNodeIds) };
    inline ListHyperNodesRequest& setHyperNodeIds(vector<string> && hyperNodeIds) { DARABONBA_PTR_SET_RVALUE(hyperNodeIds_, hyperNodeIds) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListHyperNodesRequest& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHyperNodesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHyperNodesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline ListHyperNodesRequest& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // operatingStates Field Functions 
    bool hasOperatingStates() const { return this->operatingStates_ != nullptr;};
    void deleteOperatingStates() { this->operatingStates_ = nullptr;};
    inline const vector<string> & getOperatingStates() const { DARABONBA_PTR_GET_CONST(operatingStates_, vector<string>) };
    inline vector<string> getOperatingStates() { DARABONBA_PTR_GET(operatingStates_, vector<string>) };
    inline ListHyperNodesRequest& setOperatingStates(const vector<string> & operatingStates) { DARABONBA_PTR_SET_VALUE(operatingStates_, operatingStates) };
    inline ListHyperNodesRequest& setOperatingStates(vector<string> && operatingStates) { DARABONBA_PTR_SET_RVALUE(operatingStates_, operatingStates) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListHyperNodesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListHyperNodesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListHyperNodesRequest::Tags>) };
    inline vector<ListHyperNodesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListHyperNodesRequest::Tags>) };
    inline ListHyperNodesRequest& setTags(const vector<ListHyperNodesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListHyperNodesRequest& setTags(vector<ListHyperNodesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListHyperNodesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> commodityCode_ {};
    shared_ptr<string> hpnZone_ {};
    shared_ptr<string> hyperNodeId_ {};
    shared_ptr<vector<string>> hyperNodeIds_ {};
    shared_ptr<string> machineType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> nodeGroupName_ {};
    shared_ptr<vector<string>> operatingStates_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<ListHyperNodesRequest::Tags>> tags_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
