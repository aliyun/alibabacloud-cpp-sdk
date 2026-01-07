// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHYPERNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHYPERNODESSHRINKREQUEST_HPP_
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
  class ListHyperNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHyperNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_TO_JSON(HyperNodeIds, hyperNodeIdsShrink_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(OperatingStates, operatingStatesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHyperNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_FROM_JSON(HyperNodeIds, hyperNodeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(OperatingStates, operatingStatesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListHyperNodesShrinkRequest() = default ;
    ListHyperNodesShrinkRequest(const ListHyperNodesShrinkRequest &) = default ;
    ListHyperNodesShrinkRequest(ListHyperNodesShrinkRequest &&) = default ;
    ListHyperNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHyperNodesShrinkRequest() = default ;
    ListHyperNodesShrinkRequest& operator=(const ListHyperNodesShrinkRequest &) = default ;
    ListHyperNodesShrinkRequest& operator=(ListHyperNodesShrinkRequest &&) = default ;
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
        && this->commodityCode_ == nullptr && this->hpnZone_ == nullptr && this->hyperNodeId_ == nullptr && this->hyperNodeIdsShrink_ == nullptr && this->machineType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodeGroupName_ == nullptr && this->operatingStatesShrink_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tags_ == nullptr && this->zoneId_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListHyperNodesShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListHyperNodesShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListHyperNodesShrinkRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // hyperNodeId Field Functions 
    bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
    void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
    inline string getHyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
    inline ListHyperNodesShrinkRequest& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


    // hyperNodeIdsShrink Field Functions 
    bool hasHyperNodeIdsShrink() const { return this->hyperNodeIdsShrink_ != nullptr;};
    void deleteHyperNodeIdsShrink() { this->hyperNodeIdsShrink_ = nullptr;};
    inline string getHyperNodeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeIdsShrink_, "") };
    inline ListHyperNodesShrinkRequest& setHyperNodeIdsShrink(string hyperNodeIdsShrink) { DARABONBA_PTR_SET_VALUE(hyperNodeIdsShrink_, hyperNodeIdsShrink) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListHyperNodesShrinkRequest& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHyperNodesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHyperNodesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline ListHyperNodesShrinkRequest& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // operatingStatesShrink Field Functions 
    bool hasOperatingStatesShrink() const { return this->operatingStatesShrink_ != nullptr;};
    void deleteOperatingStatesShrink() { this->operatingStatesShrink_ = nullptr;};
    inline string getOperatingStatesShrink() const { DARABONBA_PTR_GET_DEFAULT(operatingStatesShrink_, "") };
    inline ListHyperNodesShrinkRequest& setOperatingStatesShrink(string operatingStatesShrink) { DARABONBA_PTR_SET_VALUE(operatingStatesShrink_, operatingStatesShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListHyperNodesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListHyperNodesShrinkRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListHyperNodesShrinkRequest::Tags>) };
    inline vector<ListHyperNodesShrinkRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListHyperNodesShrinkRequest::Tags>) };
    inline ListHyperNodesShrinkRequest& setTags(const vector<ListHyperNodesShrinkRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListHyperNodesShrinkRequest& setTags(vector<ListHyperNodesShrinkRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListHyperNodesShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> commodityCode_ {};
    shared_ptr<string> hpnZone_ {};
    shared_ptr<string> hyperNodeId_ {};
    shared_ptr<string> hyperNodeIdsShrink_ {};
    shared_ptr<string> machineType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> nodeGroupName_ {};
    shared_ptr<string> operatingStatesShrink_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<ListHyperNodesShrinkRequest::Tags>> tags_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
