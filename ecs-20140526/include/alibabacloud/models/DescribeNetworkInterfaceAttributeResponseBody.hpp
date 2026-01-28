// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedPublicIp, associatedPublicIp_);
      DARABONBA_PTR_TO_JSON(Attachment, attachment_);
      DARABONBA_PTR_TO_JSON(BondInterfaceSpecification, bondInterfaceSpecification_);
      DARABONBA_PTR_TO_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_TO_JSON(QoSConfig, qoSConfig_);
      DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
      DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TcpOptionAddressEnabled, tcpOptionAddressEnabled_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedPublicIp, associatedPublicIp_);
      DARABONBA_PTR_FROM_JSON(Attachment, attachment_);
      DARABONBA_PTR_FROM_JSON(BondInterfaceSpecification, bondInterfaceSpecification_);
      DARABONBA_PTR_FROM_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_FROM_JSON(QoSConfig, qoSConfig_);
      DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
      DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TcpOptionAddressEnabled, tcpOptionAddressEnabled_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeNetworkInterfaceAttributeResponseBody() = default ;
    DescribeNetworkInterfaceAttributeResponseBody(const DescribeNetworkInterfaceAttributeResponseBody &) = default ;
    DescribeNetworkInterfaceAttributeResponseBody(DescribeNetworkInterfaceAttributeResponseBody &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBody() = default ;
    DescribeNetworkInterfaceAttributeResponseBody& operator=(const DescribeNetworkInterfaceAttributeResponseBody &) = default ;
    DescribeNetworkInterfaceAttributeResponseBody& operator=(DescribeNetworkInterfaceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key of the ENI.
        shared_ptr<string> tagKey_ {};
        // The tag value of the ENI.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
      inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
      inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tags::Tag>> tag_ {};
    };

    class SlaveInterfaceSpecification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlaveInterfaceSpecification& obj) { 
        DARABONBA_PTR_TO_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
        DARABONBA_PTR_TO_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
        DARABONBA_PTR_TO_JSON(WorkState, workState_);
      };
      friend void from_json(const Darabonba::Json& j, SlaveInterfaceSpecification& obj) { 
        DARABONBA_PTR_FROM_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(WorkState, workState_);
      };
      SlaveInterfaceSpecification() = default ;
      SlaveInterfaceSpecification(const SlaveInterfaceSpecification &) = default ;
      SlaveInterfaceSpecification(SlaveInterfaceSpecification &&) = default ;
      SlaveInterfaceSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlaveInterfaceSpecification() = default ;
      SlaveInterfaceSpecification& operator=(const SlaveInterfaceSpecification &) = default ;
      SlaveInterfaceSpecification& operator=(SlaveInterfaceSpecification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bondNetworkInterfaceId_ == nullptr
        && this->slaveNetworkInterfaceId_ == nullptr && this->workState_ == nullptr; };
      // bondNetworkInterfaceId Field Functions 
      bool hasBondNetworkInterfaceId() const { return this->bondNetworkInterfaceId_ != nullptr;};
      void deleteBondNetworkInterfaceId() { this->bondNetworkInterfaceId_ = nullptr;};
      inline string getBondNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(bondNetworkInterfaceId_, "") };
      inline SlaveInterfaceSpecification& setBondNetworkInterfaceId(string bondNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(bondNetworkInterfaceId_, bondNetworkInterfaceId) };


      // slaveNetworkInterfaceId Field Functions 
      bool hasSlaveNetworkInterfaceId() const { return this->slaveNetworkInterfaceId_ != nullptr;};
      void deleteSlaveNetworkInterfaceId() { this->slaveNetworkInterfaceId_ = nullptr;};
      inline string getSlaveNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(slaveNetworkInterfaceId_, "") };
      inline SlaveInterfaceSpecification& setSlaveNetworkInterfaceId(string slaveNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(slaveNetworkInterfaceId_, slaveNetworkInterfaceId) };


      // workState Field Functions 
      bool hasWorkState() const { return this->workState_ != nullptr;};
      void deleteWorkState() { this->workState_ = nullptr;};
      inline string getWorkState() const { DARABONBA_PTR_GET_DEFAULT(workState_, "") };
      inline SlaveInterfaceSpecification& setWorkState(string workState) { DARABONBA_PTR_SET_VALUE(workState_, workState) };


    protected:
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<string> bondNetworkInterfaceId_ {};
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<string> slaveNetworkInterfaceId_ {};
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<string> workState_ {};
    };

    class SecurityGroupIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroupIds& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroupIds& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      };
      SecurityGroupIds() = default ;
      SecurityGroupIds(const SecurityGroupIds &) = default ;
      SecurityGroupIds(SecurityGroupIds &&) = default ;
      SecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroupIds() = default ;
      SecurityGroupIds& operator=(const SecurityGroupIds &) = default ;
      SecurityGroupIds& operator=(SecurityGroupIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
      inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
      inline SecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
      inline SecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    protected:
      shared_ptr<vector<string>> securityGroupId_ {};
    };

    class QoSConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QoSConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableQoS, enableQoS_);
        DARABONBA_PTR_TO_JSON(QoS, qoS_);
      };
      friend void from_json(const Darabonba::Json& j, QoSConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableQoS, enableQoS_);
        DARABONBA_PTR_FROM_JSON(QoS, qoS_);
      };
      QoSConfig() = default ;
      QoSConfig(const QoSConfig &) = default ;
      QoSConfig(QoSConfig &&) = default ;
      QoSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QoSConfig() = default ;
      QoSConfig& operator=(const QoSConfig &) = default ;
      QoSConfig& operator=(QoSConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QoS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QoS& obj) { 
          DARABONBA_PTR_TO_JSON(BandwidthRx, bandwidthRx_);
          DARABONBA_PTR_TO_JSON(BandwidthTx, bandwidthTx_);
          DARABONBA_PTR_TO_JSON(ConcurrentConnections, concurrentConnections_);
          DARABONBA_PTR_TO_JSON(PpsRx, ppsRx_);
          DARABONBA_PTR_TO_JSON(PpsTx, ppsTx_);
        };
        friend void from_json(const Darabonba::Json& j, QoS& obj) { 
          DARABONBA_PTR_FROM_JSON(BandwidthRx, bandwidthRx_);
          DARABONBA_PTR_FROM_JSON(BandwidthTx, bandwidthTx_);
          DARABONBA_PTR_FROM_JSON(ConcurrentConnections, concurrentConnections_);
          DARABONBA_PTR_FROM_JSON(PpsRx, ppsRx_);
          DARABONBA_PTR_FROM_JSON(PpsTx, ppsTx_);
        };
        QoS() = default ;
        QoS(const QoS &) = default ;
        QoS(QoS &&) = default ;
        QoS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QoS() = default ;
        QoS& operator=(const QoS &) = default ;
        QoS& operator=(QoS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidthRx_ == nullptr
        && this->bandwidthTx_ == nullptr && this->concurrentConnections_ == nullptr && this->ppsRx_ == nullptr && this->ppsTx_ == nullptr; };
        // bandwidthRx Field Functions 
        bool hasBandwidthRx() const { return this->bandwidthRx_ != nullptr;};
        void deleteBandwidthRx() { this->bandwidthRx_ = nullptr;};
        inline int64_t getBandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(bandwidthRx_, 0L) };
        inline QoS& setBandwidthRx(int64_t bandwidthRx) { DARABONBA_PTR_SET_VALUE(bandwidthRx_, bandwidthRx) };


        // bandwidthTx Field Functions 
        bool hasBandwidthTx() const { return this->bandwidthTx_ != nullptr;};
        void deleteBandwidthTx() { this->bandwidthTx_ = nullptr;};
        inline int64_t getBandwidthTx() const { DARABONBA_PTR_GET_DEFAULT(bandwidthTx_, 0L) };
        inline QoS& setBandwidthTx(int64_t bandwidthTx) { DARABONBA_PTR_SET_VALUE(bandwidthTx_, bandwidthTx) };


        // concurrentConnections Field Functions 
        bool hasConcurrentConnections() const { return this->concurrentConnections_ != nullptr;};
        void deleteConcurrentConnections() { this->concurrentConnections_ = nullptr;};
        inline int64_t getConcurrentConnections() const { DARABONBA_PTR_GET_DEFAULT(concurrentConnections_, 0L) };
        inline QoS& setConcurrentConnections(int64_t concurrentConnections) { DARABONBA_PTR_SET_VALUE(concurrentConnections_, concurrentConnections) };


        // ppsRx Field Functions 
        bool hasPpsRx() const { return this->ppsRx_ != nullptr;};
        void deletePpsRx() { this->ppsRx_ = nullptr;};
        inline int64_t getPpsRx() const { DARABONBA_PTR_GET_DEFAULT(ppsRx_, 0L) };
        inline QoS& setPpsRx(int64_t ppsRx) { DARABONBA_PTR_SET_VALUE(ppsRx_, ppsRx) };


        // ppsTx Field Functions 
        bool hasPpsTx() const { return this->ppsTx_ != nullptr;};
        void deletePpsTx() { this->ppsTx_ = nullptr;};
        inline int64_t getPpsTx() const { DARABONBA_PTR_GET_DEFAULT(ppsTx_, 0L) };
        inline QoS& setPpsTx(int64_t ppsTx) { DARABONBA_PTR_SET_VALUE(ppsTx_, ppsTx) };


      protected:
        // maximum inbound internal bandwidth
        shared_ptr<int64_t> bandwidthRx_ {};
        // Maximum outbound internal bandwidth
        shared_ptr<int64_t> bandwidthTx_ {};
        // Maximum number of sessions
        shared_ptr<int64_t> concurrentConnections_ {};
        // Inbound packet forwarding rate over the internal network
        shared_ptr<int64_t> ppsRx_ {};
        // Outbound packet forwarding rate over the internal network
        shared_ptr<int64_t> ppsTx_ {};
      };

      virtual bool empty() const override { return this->enableQoS_ == nullptr
        && this->qoS_ == nullptr; };
      // enableQoS Field Functions 
      bool hasEnableQoS() const { return this->enableQoS_ != nullptr;};
      void deleteEnableQoS() { this->enableQoS_ = nullptr;};
      inline bool getEnableQoS() const { DARABONBA_PTR_GET_DEFAULT(enableQoS_, false) };
      inline QoSConfig& setEnableQoS(bool enableQoS) { DARABONBA_PTR_SET_VALUE(enableQoS_, enableQoS) };


      // qoS Field Functions 
      bool hasQoS() const { return this->qoS_ != nullptr;};
      void deleteQoS() { this->qoS_ = nullptr;};
      inline const QoSConfig::QoS & getQoS() const { DARABONBA_PTR_GET_CONST(qoS_, QoSConfig::QoS) };
      inline QoSConfig::QoS getQoS() { DARABONBA_PTR_GET(qoS_, QoSConfig::QoS) };
      inline QoSConfig& setQoS(const QoSConfig::QoS & qoS) { DARABONBA_PTR_SET_VALUE(qoS_, qoS) };
      inline QoSConfig& setQoS(QoSConfig::QoS && qoS) { DARABONBA_PTR_SET_RVALUE(qoS_, qoS) };


    protected:
      // Whether to enable QoS speed limit settings
      shared_ptr<bool> enableQoS_ {};
      // QoS Speed Limit Settings
      shared_ptr<QoSConfig::QoS> qoS_ {};
    };

    class PrivateIpSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateIpSets& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateIpSets& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
      };
      PrivateIpSets() = default ;
      PrivateIpSets(const PrivateIpSets &) = default ;
      PrivateIpSets(PrivateIpSets &&) = default ;
      PrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateIpSets() = default ;
      PrivateIpSets& operator=(const PrivateIpSets &) = default ;
      PrivateIpSets& operator=(PrivateIpSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrivateIpSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateIpSet& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedPublicIp, associatedPublicIp_);
          DARABONBA_PTR_TO_JSON(Primary, primary_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateIpSet& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedPublicIp, associatedPublicIp_);
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        };
        PrivateIpSet() = default ;
        PrivateIpSet(const PrivateIpSet &) = default ;
        PrivateIpSet(PrivateIpSet &&) = default ;
        PrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateIpSet() = default ;
        PrivateIpSet& operator=(const PrivateIpSet &) = default ;
        PrivateIpSet& operator=(PrivateIpSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AssociatedPublicIp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedPublicIp& obj) { 
            DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedPublicIp& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
            DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
          };
          AssociatedPublicIp() = default ;
          AssociatedPublicIp(const AssociatedPublicIp &) = default ;
          AssociatedPublicIp(AssociatedPublicIp &&) = default ;
          AssociatedPublicIp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedPublicIp() = default ;
          AssociatedPublicIp& operator=(const AssociatedPublicIp &) = default ;
          AssociatedPublicIp& operator=(AssociatedPublicIp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->publicIpAddress_ == nullptr; };
          // allocationId Field Functions 
          bool hasAllocationId() const { return this->allocationId_ != nullptr;};
          void deleteAllocationId() { this->allocationId_ = nullptr;};
          inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
          inline AssociatedPublicIp& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


          // publicIpAddress Field Functions 
          bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
          void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
          inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
          inline AssociatedPublicIp& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


        protected:
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<string> allocationId_ {};
          // The EIP.
          shared_ptr<string> publicIpAddress_ {};
        };

        virtual bool empty() const override { return this->associatedPublicIp_ == nullptr
        && this->primary_ == nullptr && this->privateIpAddress_ == nullptr; };
        // associatedPublicIp Field Functions 
        bool hasAssociatedPublicIp() const { return this->associatedPublicIp_ != nullptr;};
        void deleteAssociatedPublicIp() { this->associatedPublicIp_ = nullptr;};
        inline const PrivateIpSet::AssociatedPublicIp & getAssociatedPublicIp() const { DARABONBA_PTR_GET_CONST(associatedPublicIp_, PrivateIpSet::AssociatedPublicIp) };
        inline PrivateIpSet::AssociatedPublicIp getAssociatedPublicIp() { DARABONBA_PTR_GET(associatedPublicIp_, PrivateIpSet::AssociatedPublicIp) };
        inline PrivateIpSet& setAssociatedPublicIp(const PrivateIpSet::AssociatedPublicIp & associatedPublicIp) { DARABONBA_PTR_SET_VALUE(associatedPublicIp_, associatedPublicIp) };
        inline PrivateIpSet& setAssociatedPublicIp(PrivateIpSet::AssociatedPublicIp && associatedPublicIp) { DARABONBA_PTR_SET_RVALUE(associatedPublicIp_, associatedPublicIp) };


        // primary Field Functions 
        bool hasPrimary() const { return this->primary_ != nullptr;};
        void deletePrimary() { this->primary_ = nullptr;};
        inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
        inline PrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline PrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      protected:
        // The EIP that is associated with the secondary private IP address of the ENI.
        shared_ptr<PrivateIpSet::AssociatedPublicIp> associatedPublicIp_ {};
        // Indicates whether the IP address is the primary private IP address. Valid values:
        // 
        // *   true: The IP address is the primary private IP address.
        // *   false: The IP address is a secondary private IP address.
        shared_ptr<bool> primary_ {};
        // The private IP address of the ENI.
        shared_ptr<string> privateIpAddress_ {};
      };

      virtual bool empty() const override { return this->privateIpSet_ == nullptr; };
      // privateIpSet Field Functions 
      bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
      void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
      inline const vector<PrivateIpSets::PrivateIpSet> & getPrivateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
      inline vector<PrivateIpSets::PrivateIpSet> getPrivateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
      inline PrivateIpSets& setPrivateIpSet(const vector<PrivateIpSets::PrivateIpSet> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
      inline PrivateIpSets& setPrivateIpSet(vector<PrivateIpSets::PrivateIpSet> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


    protected:
      shared_ptr<vector<PrivateIpSets::PrivateIpSet>> privateIpSet_ {};
    };

    class NetworkInterfaceTrafficConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfaceTrafficConfig& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
        DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfaceTrafficConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
        DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      };
      NetworkInterfaceTrafficConfig() = default ;
      NetworkInterfaceTrafficConfig(const NetworkInterfaceTrafficConfig &) = default ;
      NetworkInterfaceTrafficConfig(NetworkInterfaceTrafficConfig &&) = default ;
      NetworkInterfaceTrafficConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfaceTrafficConfig() = default ;
      NetworkInterfaceTrafficConfig& operator=(const NetworkInterfaceTrafficConfig &) = default ;
      NetworkInterfaceTrafficConfig& operator=(NetworkInterfaceTrafficConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->networkInterfaceTrafficMode_ == nullptr
        && this->queueNumber_ == nullptr && this->queuePairNumber_ == nullptr; };
      // networkInterfaceTrafficMode Field Functions 
      bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
      void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
      inline string getNetworkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
      inline NetworkInterfaceTrafficConfig& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


      // queueNumber Field Functions 
      bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
      void deleteQueueNumber() { this->queueNumber_ = nullptr;};
      inline int32_t getQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
      inline NetworkInterfaceTrafficConfig& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


      // queuePairNumber Field Functions 
      bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
      void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
      inline int32_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
      inline NetworkInterfaceTrafficConfig& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    protected:
      // The communication mode of the ENI.
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The number of queues supported by the ENI.
      shared_ptr<int32_t> queueNumber_ {};
      // The number of queues supported by the ERI.
      shared_ptr<int32_t> queuePairNumber_ {};
    };

    class Ipv6Sets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6Sets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Set, ipv6Set_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6Sets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Set, ipv6Set_);
      };
      Ipv6Sets() = default ;
      Ipv6Sets(const Ipv6Sets &) = default ;
      Ipv6Sets(Ipv6Sets &&) = default ;
      Ipv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6Sets() = default ;
      Ipv6Sets& operator=(const Ipv6Sets &) = default ;
      Ipv6Sets& operator=(Ipv6Sets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6Set : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6Set& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6Set& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
        };
        Ipv6Set() = default ;
        Ipv6Set(const Ipv6Set &) = default ;
        Ipv6Set(Ipv6Set &&) = default ;
        Ipv6Set(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6Set() = default ;
        Ipv6Set& operator=(const Ipv6Set &) = default ;
        Ipv6Set& operator=(Ipv6Set &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
        // ipv6Address Field Functions 
        bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
        void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
        inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
        inline Ipv6Set& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


      protected:
        // The IPv6 address of the ENI.
        shared_ptr<string> ipv6Address_ {};
      };

      virtual bool empty() const override { return this->ipv6Set_ == nullptr; };
      // ipv6Set Field Functions 
      bool hasIpv6Set() const { return this->ipv6Set_ != nullptr;};
      void deleteIpv6Set() { this->ipv6Set_ = nullptr;};
      inline const vector<Ipv6Sets::Ipv6Set> & getIpv6Set() const { DARABONBA_PTR_GET_CONST(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
      inline vector<Ipv6Sets::Ipv6Set> getIpv6Set() { DARABONBA_PTR_GET(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
      inline Ipv6Sets& setIpv6Set(const vector<Ipv6Sets::Ipv6Set> & ipv6Set) { DARABONBA_PTR_SET_VALUE(ipv6Set_, ipv6Set) };
      inline Ipv6Sets& setIpv6Set(vector<Ipv6Sets::Ipv6Set> && ipv6Set) { DARABONBA_PTR_SET_RVALUE(ipv6Set_, ipv6Set) };


    protected:
      shared_ptr<vector<Ipv6Sets::Ipv6Set>> ipv6Set_ {};
    };

    class Ipv6PrefixSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6PrefixSets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6PrefixSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
      };
      Ipv6PrefixSets() = default ;
      Ipv6PrefixSets(const Ipv6PrefixSets &) = default ;
      Ipv6PrefixSets(Ipv6PrefixSets &&) = default ;
      Ipv6PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6PrefixSets() = default ;
      Ipv6PrefixSets& operator=(const Ipv6PrefixSets &) = default ;
      Ipv6PrefixSets& operator=(Ipv6PrefixSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6PrefixSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6PrefixSet& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv6Prefix, ipv6Prefix_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6PrefixSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv6Prefix, ipv6Prefix_);
        };
        Ipv6PrefixSet() = default ;
        Ipv6PrefixSet(const Ipv6PrefixSet &) = default ;
        Ipv6PrefixSet(Ipv6PrefixSet &&) = default ;
        Ipv6PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6PrefixSet() = default ;
        Ipv6PrefixSet& operator=(const Ipv6PrefixSet &) = default ;
        Ipv6PrefixSet& operator=(Ipv6PrefixSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv6Prefix_ == nullptr; };
        // ipv6Prefix Field Functions 
        bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
        void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
        inline string getIpv6Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv6Prefix_, "") };
        inline Ipv6PrefixSet& setIpv6Prefix(string ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };


      protected:
        // The IPv6 prefix of the ENI.
        shared_ptr<string> ipv6Prefix_ {};
      };

      virtual bool empty() const override { return this->ipv6PrefixSet_ == nullptr; };
      // ipv6PrefixSet Field Functions 
      bool hasIpv6PrefixSet() const { return this->ipv6PrefixSet_ != nullptr;};
      void deleteIpv6PrefixSet() { this->ipv6PrefixSet_ = nullptr;};
      inline const vector<Ipv6PrefixSets::Ipv6PrefixSet> & getIpv6PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSet_, vector<Ipv6PrefixSets::Ipv6PrefixSet>) };
      inline vector<Ipv6PrefixSets::Ipv6PrefixSet> getIpv6PrefixSet() { DARABONBA_PTR_GET(ipv6PrefixSet_, vector<Ipv6PrefixSets::Ipv6PrefixSet>) };
      inline Ipv6PrefixSets& setIpv6PrefixSet(const vector<Ipv6PrefixSets::Ipv6PrefixSet> & ipv6PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSet_, ipv6PrefixSet) };
      inline Ipv6PrefixSets& setIpv6PrefixSet(vector<Ipv6PrefixSets::Ipv6PrefixSet> && ipv6PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSet_, ipv6PrefixSet) };


    protected:
      shared_ptr<vector<Ipv6PrefixSets::Ipv6PrefixSet>> ipv6PrefixSet_ {};
    };

    class Ipv4PrefixSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv4PrefixSets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv4PrefixSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
      };
      Ipv4PrefixSets() = default ;
      Ipv4PrefixSets(const Ipv4PrefixSets &) = default ;
      Ipv4PrefixSets(Ipv4PrefixSets &&) = default ;
      Ipv4PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv4PrefixSets() = default ;
      Ipv4PrefixSets& operator=(const Ipv4PrefixSets &) = default ;
      Ipv4PrefixSets& operator=(Ipv4PrefixSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv4PrefixSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv4PrefixSet& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv4PrefixSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
        };
        Ipv4PrefixSet() = default ;
        Ipv4PrefixSet(const Ipv4PrefixSet &) = default ;
        Ipv4PrefixSet(Ipv4PrefixSet &&) = default ;
        Ipv4PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv4PrefixSet() = default ;
        Ipv4PrefixSet& operator=(const Ipv4PrefixSet &) = default ;
        Ipv4PrefixSet& operator=(Ipv4PrefixSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv4Prefix_ == nullptr; };
        // ipv4Prefix Field Functions 
        bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
        void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
        inline string getIpv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
        inline Ipv4PrefixSet& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


      protected:
        // The IPv4 prefix of the ENI.
        shared_ptr<string> ipv4Prefix_ {};
      };

      virtual bool empty() const override { return this->ipv4PrefixSet_ == nullptr; };
      // ipv4PrefixSet Field Functions 
      bool hasIpv4PrefixSet() const { return this->ipv4PrefixSet_ != nullptr;};
      void deleteIpv4PrefixSet() { this->ipv4PrefixSet_ = nullptr;};
      inline const vector<Ipv4PrefixSets::Ipv4PrefixSet> & getIpv4PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSet_, vector<Ipv4PrefixSets::Ipv4PrefixSet>) };
      inline vector<Ipv4PrefixSets::Ipv4PrefixSet> getIpv4PrefixSet() { DARABONBA_PTR_GET(ipv4PrefixSet_, vector<Ipv4PrefixSets::Ipv4PrefixSet>) };
      inline Ipv4PrefixSets& setIpv4PrefixSet(const vector<Ipv4PrefixSets::Ipv4PrefixSet> & ipv4PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSet_, ipv4PrefixSet) };
      inline Ipv4PrefixSets& setIpv4PrefixSet(vector<Ipv4PrefixSets::Ipv4PrefixSet> && ipv4PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSet_, ipv4PrefixSet) };


    protected:
      shared_ptr<vector<Ipv4PrefixSets::Ipv4PrefixSet>> ipv4PrefixSet_ {};
    };

    class EnhancedNetwork : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnhancedNetwork& obj) { 
        DARABONBA_PTR_TO_JSON(EnableRss, enableRss_);
        DARABONBA_PTR_TO_JSON(EnableSriov, enableSriov_);
        DARABONBA_PTR_TO_JSON(VirtualFunctionQuantity, virtualFunctionQuantity_);
        DARABONBA_PTR_TO_JSON(VirtualFunctionTotalQueueNumber, virtualFunctionTotalQueueNumber_);
      };
      friend void from_json(const Darabonba::Json& j, EnhancedNetwork& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableRss, enableRss_);
        DARABONBA_PTR_FROM_JSON(EnableSriov, enableSriov_);
        DARABONBA_PTR_FROM_JSON(VirtualFunctionQuantity, virtualFunctionQuantity_);
        DARABONBA_PTR_FROM_JSON(VirtualFunctionTotalQueueNumber, virtualFunctionTotalQueueNumber_);
      };
      EnhancedNetwork() = default ;
      EnhancedNetwork(const EnhancedNetwork &) = default ;
      EnhancedNetwork(EnhancedNetwork &&) = default ;
      EnhancedNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnhancedNetwork() = default ;
      EnhancedNetwork& operator=(const EnhancedNetwork &) = default ;
      EnhancedNetwork& operator=(EnhancedNetwork &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableRss_ == nullptr
        && this->enableSriov_ == nullptr && this->virtualFunctionQuantity_ == nullptr && this->virtualFunctionTotalQueueNumber_ == nullptr; };
      // enableRss Field Functions 
      bool hasEnableRss() const { return this->enableRss_ != nullptr;};
      void deleteEnableRss() { this->enableRss_ = nullptr;};
      inline bool getEnableRss() const { DARABONBA_PTR_GET_DEFAULT(enableRss_, false) };
      inline EnhancedNetwork& setEnableRss(bool enableRss) { DARABONBA_PTR_SET_VALUE(enableRss_, enableRss) };


      // enableSriov Field Functions 
      bool hasEnableSriov() const { return this->enableSriov_ != nullptr;};
      void deleteEnableSriov() { this->enableSriov_ = nullptr;};
      inline bool getEnableSriov() const { DARABONBA_PTR_GET_DEFAULT(enableSriov_, false) };
      inline EnhancedNetwork& setEnableSriov(bool enableSriov) { DARABONBA_PTR_SET_VALUE(enableSriov_, enableSriov) };


      // virtualFunctionQuantity Field Functions 
      bool hasVirtualFunctionQuantity() const { return this->virtualFunctionQuantity_ != nullptr;};
      void deleteVirtualFunctionQuantity() { this->virtualFunctionQuantity_ = nullptr;};
      inline int32_t getVirtualFunctionQuantity() const { DARABONBA_PTR_GET_DEFAULT(virtualFunctionQuantity_, 0) };
      inline EnhancedNetwork& setVirtualFunctionQuantity(int32_t virtualFunctionQuantity) { DARABONBA_PTR_SET_VALUE(virtualFunctionQuantity_, virtualFunctionQuantity) };


      // virtualFunctionTotalQueueNumber Field Functions 
      bool hasVirtualFunctionTotalQueueNumber() const { return this->virtualFunctionTotalQueueNumber_ != nullptr;};
      void deleteVirtualFunctionTotalQueueNumber() { this->virtualFunctionTotalQueueNumber_ = nullptr;};
      inline int32_t getVirtualFunctionTotalQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualFunctionTotalQueueNumber_, 0) };
      inline EnhancedNetwork& setVirtualFunctionTotalQueueNumber(int32_t virtualFunctionTotalQueueNumber) { DARABONBA_PTR_SET_VALUE(virtualFunctionTotalQueueNumber_, virtualFunctionTotalQueueNumber) };


    protected:
      // >  This parameter is not publicly available.
      shared_ptr<bool> enableRss_ {};
      // This parameter is not publicly available.
      shared_ptr<bool> enableSriov_ {};
      shared_ptr<int32_t> virtualFunctionQuantity_ {};
      shared_ptr<int32_t> virtualFunctionTotalQueueNumber_ {};
    };

    class ConnectionTrackingConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectionTrackingConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(TcpClosedAndTimeWaitTimeout, tcpClosedAndTimeWaitTimeout_);
        DARABONBA_PTR_TO_JSON(TcpEstablishedTimeout, tcpEstablishedTimeout_);
        DARABONBA_PTR_TO_JSON(UdpTimeout, udpTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectionTrackingConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(TcpClosedAndTimeWaitTimeout, tcpClosedAndTimeWaitTimeout_);
        DARABONBA_PTR_FROM_JSON(TcpEstablishedTimeout, tcpEstablishedTimeout_);
        DARABONBA_PTR_FROM_JSON(UdpTimeout, udpTimeout_);
      };
      ConnectionTrackingConfiguration() = default ;
      ConnectionTrackingConfiguration(const ConnectionTrackingConfiguration &) = default ;
      ConnectionTrackingConfiguration(ConnectionTrackingConfiguration &&) = default ;
      ConnectionTrackingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectionTrackingConfiguration() = default ;
      ConnectionTrackingConfiguration& operator=(const ConnectionTrackingConfiguration &) = default ;
      ConnectionTrackingConfiguration& operator=(ConnectionTrackingConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tcpClosedAndTimeWaitTimeout_ == nullptr
        && this->tcpEstablishedTimeout_ == nullptr && this->udpTimeout_ == nullptr; };
      // tcpClosedAndTimeWaitTimeout Field Functions 
      bool hasTcpClosedAndTimeWaitTimeout() const { return this->tcpClosedAndTimeWaitTimeout_ != nullptr;};
      void deleteTcpClosedAndTimeWaitTimeout() { this->tcpClosedAndTimeWaitTimeout_ = nullptr;};
      inline int32_t getTcpClosedAndTimeWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpClosedAndTimeWaitTimeout_, 0) };
      inline ConnectionTrackingConfiguration& setTcpClosedAndTimeWaitTimeout(int32_t tcpClosedAndTimeWaitTimeout) { DARABONBA_PTR_SET_VALUE(tcpClosedAndTimeWaitTimeout_, tcpClosedAndTimeWaitTimeout) };


      // tcpEstablishedTimeout Field Functions 
      bool hasTcpEstablishedTimeout() const { return this->tcpEstablishedTimeout_ != nullptr;};
      void deleteTcpEstablishedTimeout() { this->tcpEstablishedTimeout_ = nullptr;};
      inline int32_t getTcpEstablishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpEstablishedTimeout_, 0) };
      inline ConnectionTrackingConfiguration& setTcpEstablishedTimeout(int32_t tcpEstablishedTimeout) { DARABONBA_PTR_SET_VALUE(tcpEstablishedTimeout_, tcpEstablishedTimeout) };


      // udpTimeout Field Functions 
      bool hasUdpTimeout() const { return this->udpTimeout_ != nullptr;};
      void deleteUdpTimeout() { this->udpTimeout_ = nullptr;};
      inline int32_t getUdpTimeout() const { DARABONBA_PTR_GET_DEFAULT(udpTimeout_, 0) };
      inline ConnectionTrackingConfiguration& setUdpTimeout(int32_t udpTimeout) { DARABONBA_PTR_SET_VALUE(udpTimeout_, udpTimeout) };


    protected:
      // The timeout period for TCP connections in the TIME_WAIT or CLOSE_WAIT state. Unit: seconds. Valid values: integers from 3 to 15.
      // 
      // >  If the associated Elastic Compute Service (ECS) instance is used with a Network Load Balancer (NLB) or Classic Load Balancer (CLB) instance, the default timeout period for TCP connections in the `TIME_WAIT` state is 15 seconds.
      shared_ptr<int32_t> tcpClosedAndTimeWaitTimeout_ {};
      // The timeout period for TCP connections in the ESTABLISHED state. Unit: seconds. Valid values: 30, 60, 80, 100, 200, 300, 500, 700, and 910.
      shared_ptr<int32_t> tcpEstablishedTimeout_ {};
      // The timeout period for UDP flows. Unit: seconds. Valid values: 10, 20, 30, 60, 80, and 100.
      // 
      // >  If the associated ECS instance is used with an NLB or CLB instance, the default timeout period for UDP flows is 100 seconds.
      shared_ptr<int32_t> udpTimeout_ {};
    };

    class BondInterfaceSpecification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BondInterfaceSpecification& obj) { 
        DARABONBA_PTR_TO_JSON(BondMode, bondMode_);
        DARABONBA_PTR_TO_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
      };
      friend void from_json(const Darabonba::Json& j, BondInterfaceSpecification& obj) { 
        DARABONBA_PTR_FROM_JSON(BondMode, bondMode_);
        DARABONBA_PTR_FROM_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
      };
      BondInterfaceSpecification() = default ;
      BondInterfaceSpecification(const BondInterfaceSpecification &) = default ;
      BondInterfaceSpecification(BondInterfaceSpecification &&) = default ;
      BondInterfaceSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BondInterfaceSpecification() = default ;
      BondInterfaceSpecification& operator=(const BondInterfaceSpecification &) = default ;
      BondInterfaceSpecification& operator=(BondInterfaceSpecification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlaveInterfaceSpecification : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlaveInterfaceSpecification& obj) { 
          DARABONBA_PTR_TO_JSON(SlaveInterfaceSpecificationSet, slaveInterfaceSpecificationSet_);
        };
        friend void from_json(const Darabonba::Json& j, SlaveInterfaceSpecification& obj) { 
          DARABONBA_PTR_FROM_JSON(SlaveInterfaceSpecificationSet, slaveInterfaceSpecificationSet_);
        };
        SlaveInterfaceSpecification() = default ;
        SlaveInterfaceSpecification(const SlaveInterfaceSpecification &) = default ;
        SlaveInterfaceSpecification(SlaveInterfaceSpecification &&) = default ;
        SlaveInterfaceSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlaveInterfaceSpecification() = default ;
        SlaveInterfaceSpecification& operator=(const SlaveInterfaceSpecification &) = default ;
        SlaveInterfaceSpecification& operator=(SlaveInterfaceSpecification &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SlaveInterfaceSpecificationSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SlaveInterfaceSpecificationSet& obj) { 
            DARABONBA_PTR_TO_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
            DARABONBA_PTR_TO_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
            DARABONBA_PTR_TO_JSON(WorkState, workState_);
          };
          friend void from_json(const Darabonba::Json& j, SlaveInterfaceSpecificationSet& obj) { 
            DARABONBA_PTR_FROM_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
            DARABONBA_PTR_FROM_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
            DARABONBA_PTR_FROM_JSON(WorkState, workState_);
          };
          SlaveInterfaceSpecificationSet() = default ;
          SlaveInterfaceSpecificationSet(const SlaveInterfaceSpecificationSet &) = default ;
          SlaveInterfaceSpecificationSet(SlaveInterfaceSpecificationSet &&) = default ;
          SlaveInterfaceSpecificationSet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SlaveInterfaceSpecificationSet() = default ;
          SlaveInterfaceSpecificationSet& operator=(const SlaveInterfaceSpecificationSet &) = default ;
          SlaveInterfaceSpecificationSet& operator=(SlaveInterfaceSpecificationSet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bondNetworkInterfaceId_ == nullptr
        && this->slaveNetworkInterfaceId_ == nullptr && this->workState_ == nullptr; };
          // bondNetworkInterfaceId Field Functions 
          bool hasBondNetworkInterfaceId() const { return this->bondNetworkInterfaceId_ != nullptr;};
          void deleteBondNetworkInterfaceId() { this->bondNetworkInterfaceId_ = nullptr;};
          inline string getBondNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(bondNetworkInterfaceId_, "") };
          inline SlaveInterfaceSpecificationSet& setBondNetworkInterfaceId(string bondNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(bondNetworkInterfaceId_, bondNetworkInterfaceId) };


          // slaveNetworkInterfaceId Field Functions 
          bool hasSlaveNetworkInterfaceId() const { return this->slaveNetworkInterfaceId_ != nullptr;};
          void deleteSlaveNetworkInterfaceId() { this->slaveNetworkInterfaceId_ = nullptr;};
          inline string getSlaveNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(slaveNetworkInterfaceId_, "") };
          inline SlaveInterfaceSpecificationSet& setSlaveNetworkInterfaceId(string slaveNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(slaveNetworkInterfaceId_, slaveNetworkInterfaceId) };


          // workState Field Functions 
          bool hasWorkState() const { return this->workState_ != nullptr;};
          void deleteWorkState() { this->workState_ = nullptr;};
          inline string getWorkState() const { DARABONBA_PTR_GET_DEFAULT(workState_, "") };
          inline SlaveInterfaceSpecificationSet& setWorkState(string workState) { DARABONBA_PTR_SET_VALUE(workState_, workState) };


        protected:
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<string> bondNetworkInterfaceId_ {};
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<string> slaveNetworkInterfaceId_ {};
          // >  This parameter is in invitational preview and is not publicly available.
          shared_ptr<string> workState_ {};
        };

        virtual bool empty() const override { return this->slaveInterfaceSpecificationSet_ == nullptr; };
        // slaveInterfaceSpecificationSet Field Functions 
        bool hasSlaveInterfaceSpecificationSet() const { return this->slaveInterfaceSpecificationSet_ != nullptr;};
        void deleteSlaveInterfaceSpecificationSet() { this->slaveInterfaceSpecificationSet_ = nullptr;};
        inline const vector<SlaveInterfaceSpecification::SlaveInterfaceSpecificationSet> & getSlaveInterfaceSpecificationSet() const { DARABONBA_PTR_GET_CONST(slaveInterfaceSpecificationSet_, vector<SlaveInterfaceSpecification::SlaveInterfaceSpecificationSet>) };
        inline vector<SlaveInterfaceSpecification::SlaveInterfaceSpecificationSet> getSlaveInterfaceSpecificationSet() { DARABONBA_PTR_GET(slaveInterfaceSpecificationSet_, vector<SlaveInterfaceSpecification::SlaveInterfaceSpecificationSet>) };
        inline SlaveInterfaceSpecification& setSlaveInterfaceSpecificationSet(const vector<SlaveInterfaceSpecification::SlaveInterfaceSpecificationSet> & slaveInterfaceSpecificationSet) { DARABONBA_PTR_SET_VALUE(slaveInterfaceSpecificationSet_, slaveInterfaceSpecificationSet) };
        inline SlaveInterfaceSpecification& setSlaveInterfaceSpecificationSet(vector<SlaveInterfaceSpecification::SlaveInterfaceSpecificationSet> && slaveInterfaceSpecificationSet) { DARABONBA_PTR_SET_RVALUE(slaveInterfaceSpecificationSet_, slaveInterfaceSpecificationSet) };


      protected:
        shared_ptr<vector<SlaveInterfaceSpecification::SlaveInterfaceSpecificationSet>> slaveInterfaceSpecificationSet_ {};
      };

      virtual bool empty() const override { return this->bondMode_ == nullptr
        && this->slaveInterfaceSpecification_ == nullptr; };
      // bondMode Field Functions 
      bool hasBondMode() const { return this->bondMode_ != nullptr;};
      void deleteBondMode() { this->bondMode_ = nullptr;};
      inline string getBondMode() const { DARABONBA_PTR_GET_DEFAULT(bondMode_, "") };
      inline BondInterfaceSpecification& setBondMode(string bondMode) { DARABONBA_PTR_SET_VALUE(bondMode_, bondMode) };


      // slaveInterfaceSpecification Field Functions 
      bool hasSlaveInterfaceSpecification() const { return this->slaveInterfaceSpecification_ != nullptr;};
      void deleteSlaveInterfaceSpecification() { this->slaveInterfaceSpecification_ = nullptr;};
      inline const BondInterfaceSpecification::SlaveInterfaceSpecification & getSlaveInterfaceSpecification() const { DARABONBA_PTR_GET_CONST(slaveInterfaceSpecification_, BondInterfaceSpecification::SlaveInterfaceSpecification) };
      inline BondInterfaceSpecification::SlaveInterfaceSpecification getSlaveInterfaceSpecification() { DARABONBA_PTR_GET(slaveInterfaceSpecification_, BondInterfaceSpecification::SlaveInterfaceSpecification) };
      inline BondInterfaceSpecification& setSlaveInterfaceSpecification(const BondInterfaceSpecification::SlaveInterfaceSpecification & slaveInterfaceSpecification) { DARABONBA_PTR_SET_VALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };
      inline BondInterfaceSpecification& setSlaveInterfaceSpecification(BondInterfaceSpecification::SlaveInterfaceSpecification && slaveInterfaceSpecification) { DARABONBA_PTR_SET_RVALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };


    protected:
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<string> bondMode_ {};
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<BondInterfaceSpecification::SlaveInterfaceSpecification> slaveInterfaceSpecification_ {};
    };

    class Attachment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attachment& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MemberNetworkInterfaceIds, memberNetworkInterfaceIds_);
        DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
        DARABONBA_PTR_TO_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Attachment& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MemberNetworkInterfaceIds, memberNetworkInterfaceIds_);
        DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
        DARABONBA_PTR_FROM_JSON(TrunkNetworkInterfaceId, trunkNetworkInterfaceId_);
      };
      Attachment() = default ;
      Attachment(const Attachment &) = default ;
      Attachment(Attachment &&) = default ;
      Attachment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attachment() = default ;
      Attachment& operator=(const Attachment &) = default ;
      Attachment& operator=(Attachment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MemberNetworkInterfaceIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemberNetworkInterfaceIds& obj) { 
          DARABONBA_PTR_TO_JSON(MemberNetworkInterfaceId, memberNetworkInterfaceId_);
        };
        friend void from_json(const Darabonba::Json& j, MemberNetworkInterfaceIds& obj) { 
          DARABONBA_PTR_FROM_JSON(MemberNetworkInterfaceId, memberNetworkInterfaceId_);
        };
        MemberNetworkInterfaceIds() = default ;
        MemberNetworkInterfaceIds(const MemberNetworkInterfaceIds &) = default ;
        MemberNetworkInterfaceIds(MemberNetworkInterfaceIds &&) = default ;
        MemberNetworkInterfaceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemberNetworkInterfaceIds() = default ;
        MemberNetworkInterfaceIds& operator=(const MemberNetworkInterfaceIds &) = default ;
        MemberNetworkInterfaceIds& operator=(MemberNetworkInterfaceIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memberNetworkInterfaceId_ == nullptr; };
        // memberNetworkInterfaceId Field Functions 
        bool hasMemberNetworkInterfaceId() const { return this->memberNetworkInterfaceId_ != nullptr;};
        void deleteMemberNetworkInterfaceId() { this->memberNetworkInterfaceId_ = nullptr;};
        inline const vector<string> & getMemberNetworkInterfaceId() const { DARABONBA_PTR_GET_CONST(memberNetworkInterfaceId_, vector<string>) };
        inline vector<string> getMemberNetworkInterfaceId() { DARABONBA_PTR_GET(memberNetworkInterfaceId_, vector<string>) };
        inline MemberNetworkInterfaceIds& setMemberNetworkInterfaceId(const vector<string> & memberNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(memberNetworkInterfaceId_, memberNetworkInterfaceId) };
        inline MemberNetworkInterfaceIds& setMemberNetworkInterfaceId(vector<string> && memberNetworkInterfaceId) { DARABONBA_PTR_SET_RVALUE(memberNetworkInterfaceId_, memberNetworkInterfaceId) };


      protected:
        shared_ptr<vector<string>> memberNetworkInterfaceId_ {};
      };

      virtual bool empty() const override { return this->deviceIndex_ == nullptr
        && this->instanceId_ == nullptr && this->memberNetworkInterfaceIds_ == nullptr && this->networkCardIndex_ == nullptr && this->trunkNetworkInterfaceId_ == nullptr; };
      // deviceIndex Field Functions 
      bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
      void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
      inline int32_t getDeviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, 0) };
      inline Attachment& setDeviceIndex(int32_t deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Attachment& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // memberNetworkInterfaceIds Field Functions 
      bool hasMemberNetworkInterfaceIds() const { return this->memberNetworkInterfaceIds_ != nullptr;};
      void deleteMemberNetworkInterfaceIds() { this->memberNetworkInterfaceIds_ = nullptr;};
      inline const Attachment::MemberNetworkInterfaceIds & getMemberNetworkInterfaceIds() const { DARABONBA_PTR_GET_CONST(memberNetworkInterfaceIds_, Attachment::MemberNetworkInterfaceIds) };
      inline Attachment::MemberNetworkInterfaceIds getMemberNetworkInterfaceIds() { DARABONBA_PTR_GET(memberNetworkInterfaceIds_, Attachment::MemberNetworkInterfaceIds) };
      inline Attachment& setMemberNetworkInterfaceIds(const Attachment::MemberNetworkInterfaceIds & memberNetworkInterfaceIds) { DARABONBA_PTR_SET_VALUE(memberNetworkInterfaceIds_, memberNetworkInterfaceIds) };
      inline Attachment& setMemberNetworkInterfaceIds(Attachment::MemberNetworkInterfaceIds && memberNetworkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(memberNetworkInterfaceIds_, memberNetworkInterfaceIds) };


      // networkCardIndex Field Functions 
      bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
      void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
      inline int32_t getNetworkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
      inline Attachment& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


      // trunkNetworkInterfaceId Field Functions 
      bool hasTrunkNetworkInterfaceId() const { return this->trunkNetworkInterfaceId_ != nullptr;};
      void deleteTrunkNetworkInterfaceId() { this->trunkNetworkInterfaceId_ = nullptr;};
      inline string getTrunkNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(trunkNetworkInterfaceId_, "") };
      inline Attachment& setTrunkNetworkInterfaceId(string trunkNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(trunkNetworkInterfaceId_, trunkNetworkInterfaceId) };


    protected:
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<int32_t> deviceIndex_ {};
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<string> instanceId_ {};
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<Attachment::MemberNetworkInterfaceIds> memberNetworkInterfaceIds_ {};
      // The index of the network interface controller (NIC).
      // 
      // *   If the ENI is in the Available state or if no NIC index was specified when the ENI was attached, this parameter has no value.
      // *   If the ENI is in the InUse state and an NIC index was specified when the ENI was attached, the specified NIC index is returned as the value of this parameter.
      shared_ptr<int32_t> networkCardIndex_ {};
      // >  This parameter is in invitational preview and unavailable for general users.
      shared_ptr<string> trunkNetworkInterfaceId_ {};
    };

    class AssociatedPublicIp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociatedPublicIp& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      };
      friend void from_json(const Darabonba::Json& j, AssociatedPublicIp& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      };
      AssociatedPublicIp() = default ;
      AssociatedPublicIp(const AssociatedPublicIp &) = default ;
      AssociatedPublicIp(AssociatedPublicIp &&) = default ;
      AssociatedPublicIp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociatedPublicIp() = default ;
      AssociatedPublicIp& operator=(const AssociatedPublicIp &) = default ;
      AssociatedPublicIp& operator=(AssociatedPublicIp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->publicIpAddress_ == nullptr; };
      // allocationId Field Functions 
      bool hasAllocationId() const { return this->allocationId_ != nullptr;};
      void deleteAllocationId() { this->allocationId_ = nullptr;};
      inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
      inline AssociatedPublicIp& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


      // publicIpAddress Field Functions 
      bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
      void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
      inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
      inline AssociatedPublicIp& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


    protected:
      // The ID of the EIP.
      shared_ptr<string> allocationId_ {};
      // The EIP.
      shared_ptr<string> publicIpAddress_ {};
    };

    virtual bool empty() const override { return this->associatedPublicIp_ == nullptr
        && this->attachment_ == nullptr && this->bondInterfaceSpecification_ == nullptr && this->connectionTrackingConfiguration_ == nullptr && this->creationTime_ == nullptr && this->deleteOnRelease_ == nullptr
        && this->description_ == nullptr && this->enhancedNetwork_ == nullptr && this->instanceId_ == nullptr && this->ipv4PrefixSets_ == nullptr && this->ipv6PrefixSets_ == nullptr
        && this->ipv6Sets_ == nullptr && this->macAddress_ == nullptr && this->networkInterfaceId_ == nullptr && this->networkInterfaceName_ == nullptr && this->networkInterfaceTrafficConfig_ == nullptr
        && this->networkInterfaceTrafficMode_ == nullptr && this->ownerId_ == nullptr && this->privateIpAddress_ == nullptr && this->privateIpSets_ == nullptr && this->qoSConfig_ == nullptr
        && this->queueNumber_ == nullptr && this->queuePairNumber_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr
        && this->serviceID_ == nullptr && this->serviceManaged_ == nullptr && this->slaveInterfaceSpecification_ == nullptr && this->sourceDestCheck_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->tcpOptionAddressEnabled_ == nullptr && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
    // associatedPublicIp Field Functions 
    bool hasAssociatedPublicIp() const { return this->associatedPublicIp_ != nullptr;};
    void deleteAssociatedPublicIp() { this->associatedPublicIp_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::AssociatedPublicIp & getAssociatedPublicIp() const { DARABONBA_PTR_GET_CONST(associatedPublicIp_, DescribeNetworkInterfaceAttributeResponseBody::AssociatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBody::AssociatedPublicIp getAssociatedPublicIp() { DARABONBA_PTR_GET(associatedPublicIp_, DescribeNetworkInterfaceAttributeResponseBody::AssociatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAssociatedPublicIp(const DescribeNetworkInterfaceAttributeResponseBody::AssociatedPublicIp & associatedPublicIp) { DARABONBA_PTR_SET_VALUE(associatedPublicIp_, associatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAssociatedPublicIp(DescribeNetworkInterfaceAttributeResponseBody::AssociatedPublicIp && associatedPublicIp) { DARABONBA_PTR_SET_RVALUE(associatedPublicIp_, associatedPublicIp) };


    // attachment Field Functions 
    bool hasAttachment() const { return this->attachment_ != nullptr;};
    void deleteAttachment() { this->attachment_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::Attachment & getAttachment() const { DARABONBA_PTR_GET_CONST(attachment_, DescribeNetworkInterfaceAttributeResponseBody::Attachment) };
    inline DescribeNetworkInterfaceAttributeResponseBody::Attachment getAttachment() { DARABONBA_PTR_GET(attachment_, DescribeNetworkInterfaceAttributeResponseBody::Attachment) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAttachment(const DescribeNetworkInterfaceAttributeResponseBody::Attachment & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAttachment(DescribeNetworkInterfaceAttributeResponseBody::Attachment && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


    // bondInterfaceSpecification Field Functions 
    bool hasBondInterfaceSpecification() const { return this->bondInterfaceSpecification_ != nullptr;};
    void deleteBondInterfaceSpecification() { this->bondInterfaceSpecification_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::BondInterfaceSpecification & getBondInterfaceSpecification() const { DARABONBA_PTR_GET_CONST(bondInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBody::BondInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody::BondInterfaceSpecification getBondInterfaceSpecification() { DARABONBA_PTR_GET(bondInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBody::BondInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setBondInterfaceSpecification(const DescribeNetworkInterfaceAttributeResponseBody::BondInterfaceSpecification & bondInterfaceSpecification) { DARABONBA_PTR_SET_VALUE(bondInterfaceSpecification_, bondInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setBondInterfaceSpecification(DescribeNetworkInterfaceAttributeResponseBody::BondInterfaceSpecification && bondInterfaceSpecification) { DARABONBA_PTR_SET_RVALUE(bondInterfaceSpecification_, bondInterfaceSpecification) };


    // connectionTrackingConfiguration Field Functions 
    bool hasConnectionTrackingConfiguration() const { return this->connectionTrackingConfiguration_ != nullptr;};
    void deleteConnectionTrackingConfiguration() { this->connectionTrackingConfiguration_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::ConnectionTrackingConfiguration & getConnectionTrackingConfiguration() const { DARABONBA_PTR_GET_CONST(connectionTrackingConfiguration_, DescribeNetworkInterfaceAttributeResponseBody::ConnectionTrackingConfiguration) };
    inline DescribeNetworkInterfaceAttributeResponseBody::ConnectionTrackingConfiguration getConnectionTrackingConfiguration() { DARABONBA_PTR_GET(connectionTrackingConfiguration_, DescribeNetworkInterfaceAttributeResponseBody::ConnectionTrackingConfiguration) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setConnectionTrackingConfiguration(const DescribeNetworkInterfaceAttributeResponseBody::ConnectionTrackingConfiguration & connectionTrackingConfiguration) { DARABONBA_PTR_SET_VALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setConnectionTrackingConfiguration(DescribeNetworkInterfaceAttributeResponseBody::ConnectionTrackingConfiguration && connectionTrackingConfiguration) { DARABONBA_PTR_SET_RVALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deleteOnRelease Field Functions 
    bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
    void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
    inline bool getDeleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enhancedNetwork Field Functions 
    bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
    void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::EnhancedNetwork & getEnhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, DescribeNetworkInterfaceAttributeResponseBody::EnhancedNetwork) };
    inline DescribeNetworkInterfaceAttributeResponseBody::EnhancedNetwork getEnhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, DescribeNetworkInterfaceAttributeResponseBody::EnhancedNetwork) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setEnhancedNetwork(const DescribeNetworkInterfaceAttributeResponseBody::EnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setEnhancedNetwork(DescribeNetworkInterfaceAttributeResponseBody::EnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipv4PrefixSets Field Functions 
    bool hasIpv4PrefixSets() const { return this->ipv4PrefixSets_ != nullptr;};
    void deleteIpv4PrefixSets() { this->ipv4PrefixSets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::Ipv4PrefixSets & getIpv4PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSets_, DescribeNetworkInterfaceAttributeResponseBody::Ipv4PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody::Ipv4PrefixSets getIpv4PrefixSets() { DARABONBA_PTR_GET(ipv4PrefixSets_, DescribeNetworkInterfaceAttributeResponseBody::Ipv4PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv4PrefixSets(const DescribeNetworkInterfaceAttributeResponseBody::Ipv4PrefixSets & ipv4PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSets_, ipv4PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv4PrefixSets(DescribeNetworkInterfaceAttributeResponseBody::Ipv4PrefixSets && ipv4PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSets_, ipv4PrefixSets) };


    // ipv6PrefixSets Field Functions 
    bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
    void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::Ipv6PrefixSets & getIpv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, DescribeNetworkInterfaceAttributeResponseBody::Ipv6PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody::Ipv6PrefixSets getIpv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, DescribeNetworkInterfaceAttributeResponseBody::Ipv6PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6PrefixSets(const DescribeNetworkInterfaceAttributeResponseBody::Ipv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6PrefixSets(DescribeNetworkInterfaceAttributeResponseBody::Ipv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::Ipv6Sets & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, DescribeNetworkInterfaceAttributeResponseBody::Ipv6Sets) };
    inline DescribeNetworkInterfaceAttributeResponseBody::Ipv6Sets getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, DescribeNetworkInterfaceAttributeResponseBody::Ipv6Sets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6Sets(const DescribeNetworkInterfaceAttributeResponseBody::Ipv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6Sets(DescribeNetworkInterfaceAttributeResponseBody::Ipv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // networkInterfaceTrafficConfig Field Functions 
    bool hasNetworkInterfaceTrafficConfig() const { return this->networkInterfaceTrafficConfig_ != nullptr;};
    void deleteNetworkInterfaceTrafficConfig() { this->networkInterfaceTrafficConfig_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::NetworkInterfaceTrafficConfig & getNetworkInterfaceTrafficConfig() const { DARABONBA_PTR_GET_CONST(networkInterfaceTrafficConfig_, DescribeNetworkInterfaceAttributeResponseBody::NetworkInterfaceTrafficConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody::NetworkInterfaceTrafficConfig getNetworkInterfaceTrafficConfig() { DARABONBA_PTR_GET(networkInterfaceTrafficConfig_, DescribeNetworkInterfaceAttributeResponseBody::NetworkInterfaceTrafficConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceTrafficConfig(const DescribeNetworkInterfaceAttributeResponseBody::NetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceTrafficConfig(DescribeNetworkInterfaceAttributeResponseBody::NetworkInterfaceTrafficConfig && networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_RVALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };


    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string getNetworkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // privateIpSets Field Functions 
    bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
    void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::PrivateIpSets & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, DescribeNetworkInterfaceAttributeResponseBody::PrivateIpSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody::PrivateIpSets getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, DescribeNetworkInterfaceAttributeResponseBody::PrivateIpSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setPrivateIpSets(const DescribeNetworkInterfaceAttributeResponseBody::PrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setPrivateIpSets(DescribeNetworkInterfaceAttributeResponseBody::PrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


    // qoSConfig Field Functions 
    bool hasQoSConfig() const { return this->qoSConfig_ != nullptr;};
    void deleteQoSConfig() { this->qoSConfig_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::QoSConfig & getQoSConfig() const { DARABONBA_PTR_GET_CONST(qoSConfig_, DescribeNetworkInterfaceAttributeResponseBody::QoSConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody::QoSConfig getQoSConfig() { DARABONBA_PTR_GET(qoSConfig_, DescribeNetworkInterfaceAttributeResponseBody::QoSConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setQoSConfig(const DescribeNetworkInterfaceAttributeResponseBody::QoSConfig & qoSConfig) { DARABONBA_PTR_SET_VALUE(qoSConfig_, qoSConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setQoSConfig(DescribeNetworkInterfaceAttributeResponseBody::QoSConfig && qoSConfig) { DARABONBA_PTR_SET_RVALUE(qoSConfig_, qoSConfig) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t getQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, DescribeNetworkInterfaceAttributeResponseBody::SecurityGroupIds) };
    inline DescribeNetworkInterfaceAttributeResponseBody::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, DescribeNetworkInterfaceAttributeResponseBody::SecurityGroupIds) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSecurityGroupIds(const DescribeNetworkInterfaceAttributeResponseBody::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSecurityGroupIds(DescribeNetworkInterfaceAttributeResponseBody::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serviceID Field Functions 
    bool hasServiceID() const { return this->serviceID_ != nullptr;};
    void deleteServiceID() { this->serviceID_ = nullptr;};
    inline int64_t getServiceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // slaveInterfaceSpecification Field Functions 
    bool hasSlaveInterfaceSpecification() const { return this->slaveInterfaceSpecification_ != nullptr;};
    void deleteSlaveInterfaceSpecification() { this->slaveInterfaceSpecification_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::SlaveInterfaceSpecification & getSlaveInterfaceSpecification() const { DARABONBA_PTR_GET_CONST(slaveInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBody::SlaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody::SlaveInterfaceSpecification getSlaveInterfaceSpecification() { DARABONBA_PTR_GET(slaveInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBody::SlaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSlaveInterfaceSpecification(const DescribeNetworkInterfaceAttributeResponseBody::SlaveInterfaceSpecification & slaveInterfaceSpecification) { DARABONBA_PTR_SET_VALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSlaveInterfaceSpecification(DescribeNetworkInterfaceAttributeResponseBody::SlaveInterfaceSpecification && slaveInterfaceSpecification) { DARABONBA_PTR_SET_RVALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool getSourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeNetworkInterfaceAttributeResponseBody::Tags) };
    inline DescribeNetworkInterfaceAttributeResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeNetworkInterfaceAttributeResponseBody::Tags) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setTags(const DescribeNetworkInterfaceAttributeResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setTags(DescribeNetworkInterfaceAttributeResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tcpOptionAddressEnabled Field Functions 
    bool hasTcpOptionAddressEnabled() const { return this->tcpOptionAddressEnabled_ != nullptr;};
    void deleteTcpOptionAddressEnabled() { this->tcpOptionAddressEnabled_ = nullptr;};
    inline string getTcpOptionAddressEnabled() const { DARABONBA_PTR_GET_DEFAULT(tcpOptionAddressEnabled_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setTcpOptionAddressEnabled(string tcpOptionAddressEnabled) { DARABONBA_PTR_SET_VALUE(tcpOptionAddressEnabled_, tcpOptionAddressEnabled) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Details about the elastic IP address (EIP) that is associated with the secondary private IP address of the ENI.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::AssociatedPublicIp> associatedPublicIp_ {};
    // >  This parameter is in invitational preview and unavailable for general users.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::Attachment> attachment_ {};
    // >  This parameter is in invitational preview and unavailable for general users.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::BondInterfaceSpecification> bondInterfaceSpecification_ {};
    // The connection tracking configurations of the ENI.
    // 
    // Before you use the parameter, familiarize yourself with how to manage the timeout periods of connections. For more information, see [Mange connection timeout periods](https://help.aliyun.com/document_detail/2865958.html).
    // 
    // >  This parameter is returned only when the value of the input parameter `Attribute` is: `connectionTrackingConfiguration`.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::ConnectionTrackingConfiguration> connectionTrackingConfiguration_ {};
    // The time when the ENI was created.
    shared_ptr<string> creationTime_ {};
    // Indicates whether to retain the ENI when the associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> deleteOnRelease_ {};
    // The description of the ENI.
    shared_ptr<string> description_ {};
    // This parameter is not publicly available.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::EnhancedNetwork> enhancedNetwork_ {};
    // The ID of the instance to which the ENI is attached.
    // 
    // >  If the ENI is managed and controlled by other Alibaba Cloud services, no instance ID is returned.
    shared_ptr<string> instanceId_ {};
    // The IPv4 prefixes of the ENI.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::Ipv4PrefixSets> ipv4PrefixSets_ {};
    // The IPv6 prefixes of the ENI.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::Ipv6PrefixSets> ipv6PrefixSets_ {};
    // The IPv6 addresses of the ENI.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::Ipv6Sets> ipv6Sets_ {};
    // The media access control (MAC) address of the ENI.
    shared_ptr<string> macAddress_ {};
    // The ID of the ENI.
    shared_ptr<string> networkInterfaceId_ {};
    // The name of the ENI.
    shared_ptr<string> networkInterfaceName_ {};
    // The communication settings of the ENI.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::NetworkInterfaceTrafficConfig> networkInterfaceTrafficConfig_ {};
    // The communication mode of the ENI. Valid values:
    // 
    // *   Standard: The TCP communication mode is used.
    // *   HighPerformance: The Elastic RDMA Interface (ERI) feature is enabled and the remote direct memory access (RDMA) communication mode is used.
    // 
    // >  This parameter can have a value of HighPerformance only when the ENI is attached to a c7re RDMA-enhanced instance.
    shared_ptr<string> networkInterfaceTrafficMode_ {};
    // The ID of the account to which the ENI belongs.
    shared_ptr<string> ownerId_ {};
    // The private IP address of the ENI.
    shared_ptr<string> privateIpAddress_ {};
    // The private IP addresses of the ENI.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::PrivateIpSets> privateIpSets_ {};
    // QoS Speed Limit Settings
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::QoSConfig> qoSConfig_ {};
    // The number of queues supported by the ENI.
    // 
    // *   For a primary ENI: The default number of queues that the instance type supports for the ENI is returned.
    // 
    // *   For a secondary ENI:
    // 
    //     *   When the ENI is in the InUse state, the following situations occur for the QueueNumber parameter:
    // 
    //         *   If the number of queues supported by the ENI has not been modified, the default number of queues that the instance type supports for the ENI is returned.
    //         *   If the number of queues supported by the ENI has been modified, the new number of queues is returned.
    // 
    //     *   When the ENI is in the Available state, the following situations occur for the QueueNumber parameter:
    // 
    //         *   If the number of queues supported by the ENI has not been modified, the return value is empty.
    //         *   If the number of queues supported by the ENI has been modified, the new number of queues is returned.
    shared_ptr<int32_t> queueNumber_ {};
    // >  This parameter is in invitational preview and unavailable for general users.
    shared_ptr<int32_t> queuePairNumber_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the instance belongs. If this parameter is specified to query ENIs, up to 1,000 ENIs that belong to the specified resource group can be displayed in the response.
    // 
    // >  ENIs in the default resource group are displayed in the response regardless of how this parameter is set.
    shared_ptr<string> resourceGroupId_ {};
    // The IDs of the security groups to which the ENI belongs.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::SecurityGroupIds> securityGroupIds_ {};
    // The ID of the distributor to which the ENI belongs.
    shared_ptr<int64_t> serviceID_ {};
    // Indicates whether the user of the ENI is an Alibaba Cloud service or a distributor.
    shared_ptr<bool> serviceManaged_ {};
    // >  This parameter is in invitational preview and unavailable for general users.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::SlaveInterfaceSpecification> slaveInterfaceSpecification_ {};
    // This parameter is not publicly available.
    shared_ptr<bool> sourceDestCheck_ {};
    // The state of the ENI. Valid values:
    // 
    // *   Available: The ENI is not attached to an instance.
    // *   Attaching: The ENI is being attached to an instance.
    // *   InUse: The ENI is attached to an instance.
    // *   Detaching: The ENI is being detached from an instance.
    // *   Deleting: The ENI is being deleted.
    // 
    // This parameter is empty by default, which indicates that all states are queried.
    shared_ptr<string> status_ {};
    // The tags of the ENI.
    shared_ptr<DescribeNetworkInterfaceAttributeResponseBody::Tags> tags_ {};
    // >  This parameter is in invitational preview and is not publicly available.
    shared_ptr<string> tcpOptionAddressEnabled_ {};
    // The type of the ENI. Valid values:
    // 
    // *   Primary
    // *   Secondary
    shared_ptr<string> type_ {};
    // The ID of the vSwitch to which the ENI is connected.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC) to which the ENI belongs.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the ENI.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
