// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISTRAFFICRANKINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISTRAFFICRANKINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisTrafficRankingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisTrafficRankingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowRankingList, flowRankingList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NisTrafficRankingId, nisTrafficRankingId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisTrafficRankingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowRankingList, flowRankingList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NisTrafficRankingId, nisTrafficRankingId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNisTrafficRankingResponseBody() = default ;
    DescribeNisTrafficRankingResponseBody(const DescribeNisTrafficRankingResponseBody &) = default ;
    DescribeNisTrafficRankingResponseBody(DescribeNisTrafficRankingResponseBody &&) = default ;
    DescribeNisTrafficRankingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisTrafficRankingResponseBody() = default ;
    DescribeNisTrafficRankingResponseBody& operator=(const DescribeNisTrafficRankingResponseBody &) = default ;
    DescribeNisTrafficRankingResponseBody& operator=(DescribeNisTrafficRankingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowRankingList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowRankingList& obj) { 
        DARABONBA_PTR_TO_JSON(BindingResourceId, bindingResourceId_);
        DARABONBA_PTR_TO_JSON(BindingResourceType, bindingResourceType_);
        DARABONBA_PTR_TO_JSON(Bytes, bytes_);
        DARABONBA_PTR_TO_JSON(BytesRate, bytesRate_);
        DARABONBA_PTR_TO_JSON(ClientAsn, clientAsn_);
        DARABONBA_PTR_TO_JSON(ClientCity, clientCity_);
        DARABONBA_PTR_TO_JSON(ClientCountry, clientCountry_);
        DARABONBA_PTR_TO_JSON(ClientIsp, clientIsp_);
        DARABONBA_PTR_TO_JSON(ClientProvince, clientProvince_);
        DARABONBA_PTR_TO_JSON(DestinationIp, destinationIp_);
        DARABONBA_PTR_TO_JSON(DestinationPort, destinationPort_);
        DARABONBA_PTR_TO_JSON(DestinationRegionNo, destinationRegionNo_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(Dscp, dscp_);
        DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(Packets, packets_);
        DARABONBA_PTR_TO_JSON(PacketsLostBlackhole, packetsLostBlackhole_);
        DARABONBA_PTR_TO_JSON(PacketsLostNoRoute, packetsLostNoRoute_);
        DARABONBA_PTR_TO_JSON(PacketsLostTTLExpired, packetsLostTTLExpired_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RoundTripTime, roundTripTime_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
        DARABONBA_PTR_TO_JSON(SourceRegionNo, sourceRegionNo_);
        DARABONBA_PTR_TO_JSON(TrafficPath, trafficPath_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterDestinationAccountId, transitRouterDestinationAccountId_);
        DARABONBA_PTR_TO_JSON(TransitRouterDestinationAvailableZone, transitRouterDestinationAvailableZone_);
        DARABONBA_PTR_TO_JSON(TransitRouterDestinationNetworkInterface, transitRouterDestinationNetworkInterface_);
        DARABONBA_PTR_TO_JSON(TransitRouterDestinationResourceId, transitRouterDestinationResourceId_);
        DARABONBA_PTR_TO_JSON(TransitRouterDestinationVSwitchId, transitRouterDestinationVSwitchId_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterPairAttachmentId, transitRouterPairAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterSourceAccountId, transitRouterSourceAccountId_);
        DARABONBA_PTR_TO_JSON(TransitRouterSourceAvailableZone, transitRouterSourceAvailableZone_);
        DARABONBA_PTR_TO_JSON(TransitRouterSourceNetworkInterface, transitRouterSourceNetworkInterface_);
        DARABONBA_PTR_TO_JSON(TransitRouterSourceResourceId, transitRouterSourceResourceId_);
        DARABONBA_PTR_TO_JSON(TransitRouterSourceVSwitchId, transitRouterSourceVSwitchId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, FlowRankingList& obj) { 
        DARABONBA_PTR_FROM_JSON(BindingResourceId, bindingResourceId_);
        DARABONBA_PTR_FROM_JSON(BindingResourceType, bindingResourceType_);
        DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
        DARABONBA_PTR_FROM_JSON(BytesRate, bytesRate_);
        DARABONBA_PTR_FROM_JSON(ClientAsn, clientAsn_);
        DARABONBA_PTR_FROM_JSON(ClientCity, clientCity_);
        DARABONBA_PTR_FROM_JSON(ClientCountry, clientCountry_);
        DARABONBA_PTR_FROM_JSON(ClientIsp, clientIsp_);
        DARABONBA_PTR_FROM_JSON(ClientProvince, clientProvince_);
        DARABONBA_PTR_FROM_JSON(DestinationIp, destinationIp_);
        DARABONBA_PTR_FROM_JSON(DestinationPort, destinationPort_);
        DARABONBA_PTR_FROM_JSON(DestinationRegionNo, destinationRegionNo_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(Dscp, dscp_);
        DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(Packets, packets_);
        DARABONBA_PTR_FROM_JSON(PacketsLostBlackhole, packetsLostBlackhole_);
        DARABONBA_PTR_FROM_JSON(PacketsLostNoRoute, packetsLostNoRoute_);
        DARABONBA_PTR_FROM_JSON(PacketsLostTTLExpired, packetsLostTTLExpired_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RoundTripTime, roundTripTime_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
        DARABONBA_PTR_FROM_JSON(SourceRegionNo, sourceRegionNo_);
        DARABONBA_PTR_FROM_JSON(TrafficPath, trafficPath_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterDestinationAccountId, transitRouterDestinationAccountId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterDestinationAvailableZone, transitRouterDestinationAvailableZone_);
        DARABONBA_PTR_FROM_JSON(TransitRouterDestinationNetworkInterface, transitRouterDestinationNetworkInterface_);
        DARABONBA_PTR_FROM_JSON(TransitRouterDestinationResourceId, transitRouterDestinationResourceId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterDestinationVSwitchId, transitRouterDestinationVSwitchId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterPairAttachmentId, transitRouterPairAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterSourceAccountId, transitRouterSourceAccountId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterSourceAvailableZone, transitRouterSourceAvailableZone_);
        DARABONBA_PTR_FROM_JSON(TransitRouterSourceNetworkInterface, transitRouterSourceNetworkInterface_);
        DARABONBA_PTR_FROM_JSON(TransitRouterSourceResourceId, transitRouterSourceResourceId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterSourceVSwitchId, transitRouterSourceVSwitchId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      FlowRankingList() = default ;
      FlowRankingList(const FlowRankingList &) = default ;
      FlowRankingList(FlowRankingList &&) = default ;
      FlowRankingList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowRankingList() = default ;
      FlowRankingList& operator=(const FlowRankingList &) = default ;
      FlowRankingList& operator=(FlowRankingList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindingResourceId_ == nullptr
        && this->bindingResourceType_ == nullptr && this->bytes_ == nullptr && this->bytesRate_ == nullptr && this->clientAsn_ == nullptr && this->clientCity_ == nullptr
        && this->clientCountry_ == nullptr && this->clientIsp_ == nullptr && this->clientProvince_ == nullptr && this->destinationIp_ == nullptr && this->destinationPort_ == nullptr
        && this->destinationRegionNo_ == nullptr && this->direction_ == nullptr && this->dscp_ == nullptr && this->ecsId_ == nullptr && this->instanceId_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->packets_ == nullptr && this->packetsLostBlackhole_ == nullptr && this->packetsLostNoRoute_ == nullptr && this->packetsLostTTLExpired_ == nullptr
        && this->protocol_ == nullptr && this->publicIpAddress_ == nullptr && this->regionId_ == nullptr && this->roundTripTime_ == nullptr && this->sourceIp_ == nullptr
        && this->sourcePort_ == nullptr && this->sourceRegionNo_ == nullptr && this->trafficPath_ == nullptr && this->transitRouterAttachmentId_ == nullptr && this->transitRouterDestinationAccountId_ == nullptr
        && this->transitRouterDestinationAvailableZone_ == nullptr && this->transitRouterDestinationNetworkInterface_ == nullptr && this->transitRouterDestinationResourceId_ == nullptr && this->transitRouterDestinationVSwitchId_ == nullptr && this->transitRouterId_ == nullptr
        && this->transitRouterPairAttachmentId_ == nullptr && this->transitRouterSourceAccountId_ == nullptr && this->transitRouterSourceAvailableZone_ == nullptr && this->transitRouterSourceNetworkInterface_ == nullptr && this->transitRouterSourceResourceId_ == nullptr
        && this->transitRouterSourceVSwitchId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // bindingResourceId Field Functions 
      bool hasBindingResourceId() const { return this->bindingResourceId_ != nullptr;};
      void deleteBindingResourceId() { this->bindingResourceId_ = nullptr;};
      inline string getBindingResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindingResourceId_, "") };
      inline FlowRankingList& setBindingResourceId(string bindingResourceId) { DARABONBA_PTR_SET_VALUE(bindingResourceId_, bindingResourceId) };


      // bindingResourceType Field Functions 
      bool hasBindingResourceType() const { return this->bindingResourceType_ != nullptr;};
      void deleteBindingResourceType() { this->bindingResourceType_ = nullptr;};
      inline string getBindingResourceType() const { DARABONBA_PTR_GET_DEFAULT(bindingResourceType_, "") };
      inline FlowRankingList& setBindingResourceType(string bindingResourceType) { DARABONBA_PTR_SET_VALUE(bindingResourceType_, bindingResourceType) };


      // bytes Field Functions 
      bool hasBytes() const { return this->bytes_ != nullptr;};
      void deleteBytes() { this->bytes_ = nullptr;};
      inline double getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0.0) };
      inline FlowRankingList& setBytes(double bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


      // bytesRate Field Functions 
      bool hasBytesRate() const { return this->bytesRate_ != nullptr;};
      void deleteBytesRate() { this->bytesRate_ = nullptr;};
      inline double getBytesRate() const { DARABONBA_PTR_GET_DEFAULT(bytesRate_, 0.0) };
      inline FlowRankingList& setBytesRate(double bytesRate) { DARABONBA_PTR_SET_VALUE(bytesRate_, bytesRate) };


      // clientAsn Field Functions 
      bool hasClientAsn() const { return this->clientAsn_ != nullptr;};
      void deleteClientAsn() { this->clientAsn_ = nullptr;};
      inline string getClientAsn() const { DARABONBA_PTR_GET_DEFAULT(clientAsn_, "") };
      inline FlowRankingList& setClientAsn(string clientAsn) { DARABONBA_PTR_SET_VALUE(clientAsn_, clientAsn) };


      // clientCity Field Functions 
      bool hasClientCity() const { return this->clientCity_ != nullptr;};
      void deleteClientCity() { this->clientCity_ = nullptr;};
      inline string getClientCity() const { DARABONBA_PTR_GET_DEFAULT(clientCity_, "") };
      inline FlowRankingList& setClientCity(string clientCity) { DARABONBA_PTR_SET_VALUE(clientCity_, clientCity) };


      // clientCountry Field Functions 
      bool hasClientCountry() const { return this->clientCountry_ != nullptr;};
      void deleteClientCountry() { this->clientCountry_ = nullptr;};
      inline string getClientCountry() const { DARABONBA_PTR_GET_DEFAULT(clientCountry_, "") };
      inline FlowRankingList& setClientCountry(string clientCountry) { DARABONBA_PTR_SET_VALUE(clientCountry_, clientCountry) };


      // clientIsp Field Functions 
      bool hasClientIsp() const { return this->clientIsp_ != nullptr;};
      void deleteClientIsp() { this->clientIsp_ = nullptr;};
      inline string getClientIsp() const { DARABONBA_PTR_GET_DEFAULT(clientIsp_, "") };
      inline FlowRankingList& setClientIsp(string clientIsp) { DARABONBA_PTR_SET_VALUE(clientIsp_, clientIsp) };


      // clientProvince Field Functions 
      bool hasClientProvince() const { return this->clientProvince_ != nullptr;};
      void deleteClientProvince() { this->clientProvince_ = nullptr;};
      inline string getClientProvince() const { DARABONBA_PTR_GET_DEFAULT(clientProvince_, "") };
      inline FlowRankingList& setClientProvince(string clientProvince) { DARABONBA_PTR_SET_VALUE(clientProvince_, clientProvince) };


      // destinationIp Field Functions 
      bool hasDestinationIp() const { return this->destinationIp_ != nullptr;};
      void deleteDestinationIp() { this->destinationIp_ = nullptr;};
      inline string getDestinationIp() const { DARABONBA_PTR_GET_DEFAULT(destinationIp_, "") };
      inline FlowRankingList& setDestinationIp(string destinationIp) { DARABONBA_PTR_SET_VALUE(destinationIp_, destinationIp) };


      // destinationPort Field Functions 
      bool hasDestinationPort() const { return this->destinationPort_ != nullptr;};
      void deleteDestinationPort() { this->destinationPort_ = nullptr;};
      inline string getDestinationPort() const { DARABONBA_PTR_GET_DEFAULT(destinationPort_, "") };
      inline FlowRankingList& setDestinationPort(string destinationPort) { DARABONBA_PTR_SET_VALUE(destinationPort_, destinationPort) };


      // destinationRegionNo Field Functions 
      bool hasDestinationRegionNo() const { return this->destinationRegionNo_ != nullptr;};
      void deleteDestinationRegionNo() { this->destinationRegionNo_ = nullptr;};
      inline string getDestinationRegionNo() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionNo_, "") };
      inline FlowRankingList& setDestinationRegionNo(string destinationRegionNo) { DARABONBA_PTR_SET_VALUE(destinationRegionNo_, destinationRegionNo) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline FlowRankingList& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // dscp Field Functions 
      bool hasDscp() const { return this->dscp_ != nullptr;};
      void deleteDscp() { this->dscp_ = nullptr;};
      inline string getDscp() const { DARABONBA_PTR_GET_DEFAULT(dscp_, "") };
      inline FlowRankingList& setDscp(string dscp) { DARABONBA_PTR_SET_VALUE(dscp_, dscp) };


      // ecsId Field Functions 
      bool hasEcsId() const { return this->ecsId_ != nullptr;};
      void deleteEcsId() { this->ecsId_ = nullptr;};
      inline string getEcsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
      inline FlowRankingList& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline FlowRankingList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline FlowRankingList& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // packets Field Functions 
      bool hasPackets() const { return this->packets_ != nullptr;};
      void deletePackets() { this->packets_ = nullptr;};
      inline double getPackets() const { DARABONBA_PTR_GET_DEFAULT(packets_, 0.0) };
      inline FlowRankingList& setPackets(double packets) { DARABONBA_PTR_SET_VALUE(packets_, packets) };


      // packetsLostBlackhole Field Functions 
      bool hasPacketsLostBlackhole() const { return this->packetsLostBlackhole_ != nullptr;};
      void deletePacketsLostBlackhole() { this->packetsLostBlackhole_ = nullptr;};
      inline double getPacketsLostBlackhole() const { DARABONBA_PTR_GET_DEFAULT(packetsLostBlackhole_, 0.0) };
      inline FlowRankingList& setPacketsLostBlackhole(double packetsLostBlackhole) { DARABONBA_PTR_SET_VALUE(packetsLostBlackhole_, packetsLostBlackhole) };


      // packetsLostNoRoute Field Functions 
      bool hasPacketsLostNoRoute() const { return this->packetsLostNoRoute_ != nullptr;};
      void deletePacketsLostNoRoute() { this->packetsLostNoRoute_ = nullptr;};
      inline double getPacketsLostNoRoute() const { DARABONBA_PTR_GET_DEFAULT(packetsLostNoRoute_, 0.0) };
      inline FlowRankingList& setPacketsLostNoRoute(double packetsLostNoRoute) { DARABONBA_PTR_SET_VALUE(packetsLostNoRoute_, packetsLostNoRoute) };


      // packetsLostTTLExpired Field Functions 
      bool hasPacketsLostTTLExpired() const { return this->packetsLostTTLExpired_ != nullptr;};
      void deletePacketsLostTTLExpired() { this->packetsLostTTLExpired_ = nullptr;};
      inline double getPacketsLostTTLExpired() const { DARABONBA_PTR_GET_DEFAULT(packetsLostTTLExpired_, 0.0) };
      inline FlowRankingList& setPacketsLostTTLExpired(double packetsLostTTLExpired) { DARABONBA_PTR_SET_VALUE(packetsLostTTLExpired_, packetsLostTTLExpired) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline FlowRankingList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // publicIpAddress Field Functions 
      bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
      void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
      inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
      inline FlowRankingList& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline FlowRankingList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // roundTripTime Field Functions 
      bool hasRoundTripTime() const { return this->roundTripTime_ != nullptr;};
      void deleteRoundTripTime() { this->roundTripTime_ = nullptr;};
      inline double getRoundTripTime() const { DARABONBA_PTR_GET_DEFAULT(roundTripTime_, 0.0) };
      inline FlowRankingList& setRoundTripTime(double roundTripTime) { DARABONBA_PTR_SET_VALUE(roundTripTime_, roundTripTime) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline FlowRankingList& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // sourcePort Field Functions 
      bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
      void deleteSourcePort() { this->sourcePort_ = nullptr;};
      inline string getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
      inline FlowRankingList& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


      // sourceRegionNo Field Functions 
      bool hasSourceRegionNo() const { return this->sourceRegionNo_ != nullptr;};
      void deleteSourceRegionNo() { this->sourceRegionNo_ = nullptr;};
      inline string getSourceRegionNo() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionNo_, "") };
      inline FlowRankingList& setSourceRegionNo(string sourceRegionNo) { DARABONBA_PTR_SET_VALUE(sourceRegionNo_, sourceRegionNo) };


      // trafficPath Field Functions 
      bool hasTrafficPath() const { return this->trafficPath_ != nullptr;};
      void deleteTrafficPath() { this->trafficPath_ = nullptr;};
      inline string getTrafficPath() const { DARABONBA_PTR_GET_DEFAULT(trafficPath_, "") };
      inline FlowRankingList& setTrafficPath(string trafficPath) { DARABONBA_PTR_SET_VALUE(trafficPath_, trafficPath) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline FlowRankingList& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterDestinationAccountId Field Functions 
      bool hasTransitRouterDestinationAccountId() const { return this->transitRouterDestinationAccountId_ != nullptr;};
      void deleteTransitRouterDestinationAccountId() { this->transitRouterDestinationAccountId_ = nullptr;};
      inline string getTransitRouterDestinationAccountId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDestinationAccountId_, "") };
      inline FlowRankingList& setTransitRouterDestinationAccountId(string transitRouterDestinationAccountId) { DARABONBA_PTR_SET_VALUE(transitRouterDestinationAccountId_, transitRouterDestinationAccountId) };


      // transitRouterDestinationAvailableZone Field Functions 
      bool hasTransitRouterDestinationAvailableZone() const { return this->transitRouterDestinationAvailableZone_ != nullptr;};
      void deleteTransitRouterDestinationAvailableZone() { this->transitRouterDestinationAvailableZone_ = nullptr;};
      inline string getTransitRouterDestinationAvailableZone() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDestinationAvailableZone_, "") };
      inline FlowRankingList& setTransitRouterDestinationAvailableZone(string transitRouterDestinationAvailableZone) { DARABONBA_PTR_SET_VALUE(transitRouterDestinationAvailableZone_, transitRouterDestinationAvailableZone) };


      // transitRouterDestinationNetworkInterface Field Functions 
      bool hasTransitRouterDestinationNetworkInterface() const { return this->transitRouterDestinationNetworkInterface_ != nullptr;};
      void deleteTransitRouterDestinationNetworkInterface() { this->transitRouterDestinationNetworkInterface_ = nullptr;};
      inline string getTransitRouterDestinationNetworkInterface() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDestinationNetworkInterface_, "") };
      inline FlowRankingList& setTransitRouterDestinationNetworkInterface(string transitRouterDestinationNetworkInterface) { DARABONBA_PTR_SET_VALUE(transitRouterDestinationNetworkInterface_, transitRouterDestinationNetworkInterface) };


      // transitRouterDestinationResourceId Field Functions 
      bool hasTransitRouterDestinationResourceId() const { return this->transitRouterDestinationResourceId_ != nullptr;};
      void deleteTransitRouterDestinationResourceId() { this->transitRouterDestinationResourceId_ = nullptr;};
      inline string getTransitRouterDestinationResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDestinationResourceId_, "") };
      inline FlowRankingList& setTransitRouterDestinationResourceId(string transitRouterDestinationResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterDestinationResourceId_, transitRouterDestinationResourceId) };


      // transitRouterDestinationVSwitchId Field Functions 
      bool hasTransitRouterDestinationVSwitchId() const { return this->transitRouterDestinationVSwitchId_ != nullptr;};
      void deleteTransitRouterDestinationVSwitchId() { this->transitRouterDestinationVSwitchId_ = nullptr;};
      inline string getTransitRouterDestinationVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDestinationVSwitchId_, "") };
      inline FlowRankingList& setTransitRouterDestinationVSwitchId(string transitRouterDestinationVSwitchId) { DARABONBA_PTR_SET_VALUE(transitRouterDestinationVSwitchId_, transitRouterDestinationVSwitchId) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline FlowRankingList& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterPairAttachmentId Field Functions 
      bool hasTransitRouterPairAttachmentId() const { return this->transitRouterPairAttachmentId_ != nullptr;};
      void deleteTransitRouterPairAttachmentId() { this->transitRouterPairAttachmentId_ = nullptr;};
      inline string getTransitRouterPairAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterPairAttachmentId_, "") };
      inline FlowRankingList& setTransitRouterPairAttachmentId(string transitRouterPairAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterPairAttachmentId_, transitRouterPairAttachmentId) };


      // transitRouterSourceAccountId Field Functions 
      bool hasTransitRouterSourceAccountId() const { return this->transitRouterSourceAccountId_ != nullptr;};
      void deleteTransitRouterSourceAccountId() { this->transitRouterSourceAccountId_ = nullptr;};
      inline string getTransitRouterSourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterSourceAccountId_, "") };
      inline FlowRankingList& setTransitRouterSourceAccountId(string transitRouterSourceAccountId) { DARABONBA_PTR_SET_VALUE(transitRouterSourceAccountId_, transitRouterSourceAccountId) };


      // transitRouterSourceAvailableZone Field Functions 
      bool hasTransitRouterSourceAvailableZone() const { return this->transitRouterSourceAvailableZone_ != nullptr;};
      void deleteTransitRouterSourceAvailableZone() { this->transitRouterSourceAvailableZone_ = nullptr;};
      inline string getTransitRouterSourceAvailableZone() const { DARABONBA_PTR_GET_DEFAULT(transitRouterSourceAvailableZone_, "") };
      inline FlowRankingList& setTransitRouterSourceAvailableZone(string transitRouterSourceAvailableZone) { DARABONBA_PTR_SET_VALUE(transitRouterSourceAvailableZone_, transitRouterSourceAvailableZone) };


      // transitRouterSourceNetworkInterface Field Functions 
      bool hasTransitRouterSourceNetworkInterface() const { return this->transitRouterSourceNetworkInterface_ != nullptr;};
      void deleteTransitRouterSourceNetworkInterface() { this->transitRouterSourceNetworkInterface_ = nullptr;};
      inline string getTransitRouterSourceNetworkInterface() const { DARABONBA_PTR_GET_DEFAULT(transitRouterSourceNetworkInterface_, "") };
      inline FlowRankingList& setTransitRouterSourceNetworkInterface(string transitRouterSourceNetworkInterface) { DARABONBA_PTR_SET_VALUE(transitRouterSourceNetworkInterface_, transitRouterSourceNetworkInterface) };


      // transitRouterSourceResourceId Field Functions 
      bool hasTransitRouterSourceResourceId() const { return this->transitRouterSourceResourceId_ != nullptr;};
      void deleteTransitRouterSourceResourceId() { this->transitRouterSourceResourceId_ = nullptr;};
      inline string getTransitRouterSourceResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterSourceResourceId_, "") };
      inline FlowRankingList& setTransitRouterSourceResourceId(string transitRouterSourceResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterSourceResourceId_, transitRouterSourceResourceId) };


      // transitRouterSourceVSwitchId Field Functions 
      bool hasTransitRouterSourceVSwitchId() const { return this->transitRouterSourceVSwitchId_ != nullptr;};
      void deleteTransitRouterSourceVSwitchId() { this->transitRouterSourceVSwitchId_ = nullptr;};
      inline string getTransitRouterSourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterSourceVSwitchId_, "") };
      inline FlowRankingList& setTransitRouterSourceVSwitchId(string transitRouterSourceVSwitchId) { DARABONBA_PTR_SET_VALUE(transitRouterSourceVSwitchId_, transitRouterSourceVSwitchId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline FlowRankingList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline FlowRankingList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> bindingResourceId_ {};
      shared_ptr<string> bindingResourceType_ {};
      shared_ptr<double> bytes_ {};
      shared_ptr<double> bytesRate_ {};
      shared_ptr<string> clientAsn_ {};
      shared_ptr<string> clientCity_ {};
      shared_ptr<string> clientCountry_ {};
      shared_ptr<string> clientIsp_ {};
      shared_ptr<string> clientProvince_ {};
      shared_ptr<string> destinationIp_ {};
      shared_ptr<string> destinationPort_ {};
      shared_ptr<string> destinationRegionNo_ {};
      shared_ptr<string> direction_ {};
      shared_ptr<string> dscp_ {};
      shared_ptr<string> ecsId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> networkInterfaceId_ {};
      shared_ptr<double> packets_ {};
      shared_ptr<double> packetsLostBlackhole_ {};
      shared_ptr<double> packetsLostNoRoute_ {};
      shared_ptr<double> packetsLostTTLExpired_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> publicIpAddress_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<double> roundTripTime_ {};
      shared_ptr<string> sourceIp_ {};
      shared_ptr<string> sourcePort_ {};
      shared_ptr<string> sourceRegionNo_ {};
      shared_ptr<string> trafficPath_ {};
      shared_ptr<string> transitRouterAttachmentId_ {};
      shared_ptr<string> transitRouterDestinationAccountId_ {};
      shared_ptr<string> transitRouterDestinationAvailableZone_ {};
      shared_ptr<string> transitRouterDestinationNetworkInterface_ {};
      shared_ptr<string> transitRouterDestinationResourceId_ {};
      shared_ptr<string> transitRouterDestinationVSwitchId_ {};
      shared_ptr<string> transitRouterId_ {};
      shared_ptr<string> transitRouterPairAttachmentId_ {};
      shared_ptr<string> transitRouterSourceAccountId_ {};
      shared_ptr<string> transitRouterSourceAvailableZone_ {};
      shared_ptr<string> transitRouterSourceNetworkInterface_ {};
      shared_ptr<string> transitRouterSourceResourceId_ {};
      shared_ptr<string> transitRouterSourceVSwitchId_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->flowRankingList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nisTrafficRankingId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->totalCount_ == nullptr; };
    // flowRankingList Field Functions 
    bool hasFlowRankingList() const { return this->flowRankingList_ != nullptr;};
    void deleteFlowRankingList() { this->flowRankingList_ = nullptr;};
    inline const vector<DescribeNisTrafficRankingResponseBody::FlowRankingList> & getFlowRankingList() const { DARABONBA_PTR_GET_CONST(flowRankingList_, vector<DescribeNisTrafficRankingResponseBody::FlowRankingList>) };
    inline vector<DescribeNisTrafficRankingResponseBody::FlowRankingList> getFlowRankingList() { DARABONBA_PTR_GET(flowRankingList_, vector<DescribeNisTrafficRankingResponseBody::FlowRankingList>) };
    inline DescribeNisTrafficRankingResponseBody& setFlowRankingList(const vector<DescribeNisTrafficRankingResponseBody::FlowRankingList> & flowRankingList) { DARABONBA_PTR_SET_VALUE(flowRankingList_, flowRankingList) };
    inline DescribeNisTrafficRankingResponseBody& setFlowRankingList(vector<DescribeNisTrafficRankingResponseBody::FlowRankingList> && flowRankingList) { DARABONBA_PTR_SET_RVALUE(flowRankingList_, flowRankingList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisTrafficRankingResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisTrafficRankingResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nisTrafficRankingId Field Functions 
    bool hasNisTrafficRankingId() const { return this->nisTrafficRankingId_ != nullptr;};
    void deleteNisTrafficRankingId() { this->nisTrafficRankingId_ = nullptr;};
    inline string getNisTrafficRankingId() const { DARABONBA_PTR_GET_DEFAULT(nisTrafficRankingId_, "") };
    inline DescribeNisTrafficRankingResponseBody& setNisTrafficRankingId(string nisTrafficRankingId) { DARABONBA_PTR_SET_VALUE(nisTrafficRankingId_, nisTrafficRankingId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNisTrafficRankingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNisTrafficRankingResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNisTrafficRankingResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeNisTrafficRankingResponseBody::FlowRankingList>> flowRankingList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> nisTrafficRankingId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
