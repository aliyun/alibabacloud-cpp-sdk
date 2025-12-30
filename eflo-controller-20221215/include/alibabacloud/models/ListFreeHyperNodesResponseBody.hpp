// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFREEHYPERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFREEHYPERNODESRESPONSEBODY_HPP_
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
  class ListFreeHyperNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFreeHyperNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFreeHyperNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFreeHyperNodesResponseBody() = default ;
    ListFreeHyperNodesResponseBody(const ListFreeHyperNodesResponseBody &) = default ;
    ListFreeHyperNodesResponseBody(ListFreeHyperNodesResponseBody &&) = default ;
    ListFreeHyperNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFreeHyperNodesResponseBody() = default ;
    ListFreeHyperNodesResponseBody& operator=(const ListFreeHyperNodesResponseBody &) = default ;
    ListFreeHyperNodesResponseBody& operator=(ListFreeHyperNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HyperNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HyperNodes& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
        DARABONBA_PTR_TO_JSON(MachineType, machineType_);
        DARABONBA_PTR_TO_JSON(OperatingState, operatingState_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, HyperNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
        DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
        DARABONBA_PTR_FROM_JSON(OperatingState, operatingState_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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

      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->createTime_ == nullptr && this->expireTime_ == nullptr && this->hostname_ == nullptr && this->hpnZone_ == nullptr && this->hyperNodeId_ == nullptr
        && this->machineType_ == nullptr && this->operatingState_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->zoneId_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline HyperNodes& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline HyperNodes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline HyperNodes& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline HyperNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // hpnZone Field Functions 
      bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
      void deleteHpnZone() { this->hpnZone_ = nullptr;};
      inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
      inline HyperNodes& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


      // hyperNodeId Field Functions 
      bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
      void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
      inline string getHyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
      inline HyperNodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


      // machineType Field Functions 
      bool hasMachineType() const { return this->machineType_ != nullptr;};
      void deleteMachineType() { this->machineType_ = nullptr;};
      inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
      inline HyperNodes& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      // operatingState Field Functions 
      bool hasOperatingState() const { return this->operatingState_ != nullptr;};
      void deleteOperatingState() { this->operatingState_ = nullptr;};
      inline string getOperatingState() const { DARABONBA_PTR_GET_DEFAULT(operatingState_, "") };
      inline HyperNodes& setOperatingState(string operatingState) { DARABONBA_PTR_SET_VALUE(operatingState_, operatingState) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline HyperNodes& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline HyperNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<HyperNodes::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<HyperNodes::Tags>) };
      inline vector<HyperNodes::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<HyperNodes::Tags>) };
      inline HyperNodes& setTags(const vector<HyperNodes::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline HyperNodes& setTags(vector<HyperNodes::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline HyperNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> hostname_ {};
      shared_ptr<string> hpnZone_ {};
      shared_ptr<string> hyperNodeId_ {};
      shared_ptr<string> machineType_ {};
      shared_ptr<string> operatingState_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<HyperNodes::Tags>> tags_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->hyperNodes_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // hyperNodes Field Functions 
    bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
    void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
    inline const vector<ListFreeHyperNodesResponseBody::HyperNodes> & getHyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<ListFreeHyperNodesResponseBody::HyperNodes>) };
    inline vector<ListFreeHyperNodesResponseBody::HyperNodes> getHyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<ListFreeHyperNodesResponseBody::HyperNodes>) };
    inline ListFreeHyperNodesResponseBody& setHyperNodes(const vector<ListFreeHyperNodesResponseBody::HyperNodes> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
    inline ListFreeHyperNodesResponseBody& setHyperNodes(vector<ListFreeHyperNodesResponseBody::HyperNodes> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFreeHyperNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFreeHyperNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFreeHyperNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFreeHyperNodesResponseBody::HyperNodes>> hyperNodes_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
