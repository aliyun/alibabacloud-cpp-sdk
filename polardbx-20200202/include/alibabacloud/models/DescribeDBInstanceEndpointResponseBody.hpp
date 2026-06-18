// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceEndpointResponseBody() = default ;
    DescribeDBInstanceEndpointResponseBody(const DescribeDBInstanceEndpointResponseBody &) = default ;
    DescribeDBInstanceEndpointResponseBody(DescribeDBInstanceEndpointResponseBody &&) = default ;
    DescribeDBInstanceEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEndpointResponseBody() = default ;
    DescribeDBInstanceEndpointResponseBody& operator=(const DescribeDBInstanceEndpointResponseBody &) = default ;
    DescribeDBInstanceEndpointResponseBody& operator=(DescribeDBInstanceEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(RealServer, realServer_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(RealServer, realServer_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RealServer : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RealServer& obj) { 
            DARABONBA_PTR_TO_JSON(Activated, activated_);
            DARABONBA_PTR_TO_JSON(Class, class_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(ReplicaId, replicaId_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, RealServer& obj) { 
            DARABONBA_PTR_FROM_JSON(Activated, activated_);
            DARABONBA_PTR_FROM_JSON(Class, class_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(ReplicaId, replicaId_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
          };
          RealServer() = default ;
          RealServer(const RealServer &) = default ;
          RealServer(RealServer &&) = default ;
          RealServer(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RealServer() = default ;
          RealServer& operator=(const RealServer &) = default ;
          RealServer& operator=(RealServer &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->activated_ == nullptr
        && this->class_ == nullptr && this->ip_ == nullptr && this->port_ == nullptr && this->replicaId_ == nullptr && this->weight_ == nullptr; };
          // activated Field Functions 
          bool hasActivated() const { return this->activated_ != nullptr;};
          void deleteActivated() { this->activated_ = nullptr;};
          inline bool getActivated() const { DARABONBA_PTR_GET_DEFAULT(activated_, false) };
          inline RealServer& setActivated(bool activated) { DARABONBA_PTR_SET_VALUE(activated_, activated) };


          // class Field Functions 
          bool hasClass() const { return this->class_ != nullptr;};
          void deleteClass() { this->class_ = nullptr;};
          inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
          inline RealServer& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline RealServer& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline RealServer& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // replicaId Field Functions 
          bool hasReplicaId() const { return this->replicaId_ != nullptr;};
          void deleteReplicaId() { this->replicaId_ = nullptr;};
          inline int64_t getReplicaId() const { DARABONBA_PTR_GET_DEFAULT(replicaId_, 0L) };
          inline RealServer& setReplicaId(int64_t replicaId) { DARABONBA_PTR_SET_VALUE(replicaId_, replicaId) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
          inline RealServer& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          shared_ptr<bool> activated_ {};
          shared_ptr<string> class_ {};
          shared_ptr<string> ip_ {};
          shared_ptr<string> port_ {};
          shared_ptr<int64_t> replicaId_ {};
          shared_ptr<int64_t> weight_ {};
        };

        class Endpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
            DARABONBA_PTR_TO_JSON(Address, address_);
            DARABONBA_PTR_TO_JSON(Class, class_);
            DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_TO_JSON(Kind, kind_);
            DARABONBA_PTR_TO_JSON(NetType, netType_);
            DARABONBA_PTR_TO_JSON(ReadType, readType_);
            DARABONBA_PTR_TO_JSON(TargetName, targetName_);
            DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(UserVisible, userVisible_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(Vip, vip_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(Vport, vport_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(Address, address_);
            DARABONBA_PTR_FROM_JSON(Class, class_);
            DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_FROM_JSON(Kind, kind_);
            DARABONBA_PTR_FROM_JSON(NetType, netType_);
            DARABONBA_PTR_FROM_JSON(ReadType, readType_);
            DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
            DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(UserVisible, userVisible_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(Vip, vip_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(Vport, vport_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          Endpoint() = default ;
          Endpoint(const Endpoint &) = default ;
          Endpoint(Endpoint &&) = default ;
          Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Endpoint() = default ;
          Endpoint& operator=(const Endpoint &) = default ;
          Endpoint& operator=(Endpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->address_ == nullptr
        && this->class_ == nullptr && this->endpointGroupId_ == nullptr && this->id_ == nullptr && this->isDefault_ == nullptr && this->kind_ == nullptr
        && this->netType_ == nullptr && this->readType_ == nullptr && this->targetName_ == nullptr && this->tunnelId_ == nullptr && this->type_ == nullptr
        && this->userVisible_ == nullptr && this->vSwitchId_ == nullptr && this->vip_ == nullptr && this->vpcId_ == nullptr && this->vport_ == nullptr
        && this->zoneId_ == nullptr; };
          // address Field Functions 
          bool hasAddress() const { return this->address_ != nullptr;};
          void deleteAddress() { this->address_ = nullptr;};
          inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
          inline Endpoint& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


          // class Field Functions 
          bool hasClass() const { return this->class_ != nullptr;};
          void deleteClass() { this->class_ = nullptr;};
          inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
          inline Endpoint& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


          // endpointGroupId Field Functions 
          bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
          void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
          inline int64_t getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, 0L) };
          inline Endpoint& setEndpointGroupId(int64_t endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Endpoint& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // isDefault Field Functions 
          bool hasIsDefault() const { return this->isDefault_ != nullptr;};
          void deleteIsDefault() { this->isDefault_ = nullptr;};
          inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
          inline Endpoint& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


          // kind Field Functions 
          bool hasKind() const { return this->kind_ != nullptr;};
          void deleteKind() { this->kind_ = nullptr;};
          inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
          inline Endpoint& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


          // netType Field Functions 
          bool hasNetType() const { return this->netType_ != nullptr;};
          void deleteNetType() { this->netType_ = nullptr;};
          inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
          inline Endpoint& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


          // readType Field Functions 
          bool hasReadType() const { return this->readType_ != nullptr;};
          void deleteReadType() { this->readType_ = nullptr;};
          inline string getReadType() const { DARABONBA_PTR_GET_DEFAULT(readType_, "") };
          inline Endpoint& setReadType(string readType) { DARABONBA_PTR_SET_VALUE(readType_, readType) };


          // targetName Field Functions 
          bool hasTargetName() const { return this->targetName_ != nullptr;};
          void deleteTargetName() { this->targetName_ = nullptr;};
          inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
          inline Endpoint& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


          // tunnelId Field Functions 
          bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
          void deleteTunnelId() { this->tunnelId_ = nullptr;};
          inline int64_t getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, 0L) };
          inline Endpoint& setTunnelId(int64_t tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Endpoint& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // userVisible Field Functions 
          bool hasUserVisible() const { return this->userVisible_ != nullptr;};
          void deleteUserVisible() { this->userVisible_ = nullptr;};
          inline bool getUserVisible() const { DARABONBA_PTR_GET_DEFAULT(userVisible_, false) };
          inline Endpoint& setUserVisible(bool userVisible) { DARABONBA_PTR_SET_VALUE(userVisible_, userVisible) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline Endpoint& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vip Field Functions 
          bool hasVip() const { return this->vip_ != nullptr;};
          void deleteVip() { this->vip_ = nullptr;};
          inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
          inline Endpoint& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Endpoint& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // vport Field Functions 
          bool hasVport() const { return this->vport_ != nullptr;};
          void deleteVport() { this->vport_ = nullptr;};
          inline int64_t getVport() const { DARABONBA_PTR_GET_DEFAULT(vport_, 0L) };
          inline Endpoint& setVport(int64_t vport) { DARABONBA_PTR_SET_VALUE(vport_, vport) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline Endpoint& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          shared_ptr<string> address_ {};
          shared_ptr<string> class_ {};
          shared_ptr<int64_t> endpointGroupId_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<bool> isDefault_ {};
          shared_ptr<string> kind_ {};
          shared_ptr<string> netType_ {};
          shared_ptr<string> readType_ {};
          shared_ptr<string> targetName_ {};
          shared_ptr<int64_t> tunnelId_ {};
          shared_ptr<string> type_ {};
          shared_ptr<bool> userVisible_ {};
          shared_ptr<string> vSwitchId_ {};
          shared_ptr<string> vip_ {};
          shared_ptr<string> vpcId_ {};
          shared_ptr<int64_t> vport_ {};
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->realServer_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline const Items::Endpoint & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, Items::Endpoint) };
        inline Items::Endpoint getEndpoint() { DARABONBA_PTR_GET(endpoint_, Items::Endpoint) };
        inline Items& setEndpoint(const Items::Endpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
        inline Items& setEndpoint(Items::Endpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


        // realServer Field Functions 
        bool hasRealServer() const { return this->realServer_ != nullptr;};
        void deleteRealServer() { this->realServer_ = nullptr;};
        inline const vector<Items::RealServer> & getRealServer() const { DARABONBA_PTR_GET_CONST(realServer_, vector<Items::RealServer>) };
        inline vector<Items::RealServer> getRealServer() { DARABONBA_PTR_GET(realServer_, vector<Items::RealServer>) };
        inline Items& setRealServer(const vector<Items::RealServer> & realServer) { DARABONBA_PTR_SET_VALUE(realServer_, realServer) };
        inline Items& setRealServer(vector<Items::RealServer> && realServer) { DARABONBA_PTR_SET_RVALUE(realServer_, realServer) };


      protected:
        shared_ptr<Items::Endpoint> endpoint_ {};
        shared_ptr<vector<Items::RealServer>> realServer_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceEndpointResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceEndpointResponseBody::Data) };
    inline DescribeDBInstanceEndpointResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceEndpointResponseBody::Data) };
    inline DescribeDBInstanceEndpointResponseBody& setData(const DescribeDBInstanceEndpointResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceEndpointResponseBody& setData(DescribeDBInstanceEndpointResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDBInstanceEndpointResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDBInstanceEndpointResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBInstanceEndpointResponseBody::Data> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
