// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisNetworkRankingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkRankingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveSessionCount, activeSessionCount_);
      DARABONBA_PTR_TO_JSON(Asn, asn_);
      DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(ByteCount, byteCount_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(DestinationIp, destinationIp_);
      DARABONBA_PTR_TO_JSON(DestinationIsp, destinationIsp_);
      DARABONBA_PTR_TO_JSON(DestinationPort, destinationPort_);
      DARABONBA_PTR_TO_JSON(DestinationRegionNo, destinationRegionNo_);
      DARABONBA_PTR_TO_JSON(DestinationZone, destinationZone_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InBps, inBps_);
      DARABONBA_PTR_TO_JSON(InPps, inPps_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(NewSessionPerSecond, newSessionPerSecond_);
      DARABONBA_PTR_TO_JSON(OutBps, outBps_);
      DARABONBA_PTR_TO_JSON(OutPps, outPps_);
      DARABONBA_PTR_TO_JSON(PacketCount, packetCount_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RTT, RTT_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RetransmitRate, retransmitRate_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SourceIsp, sourceIsp_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SourceZone, sourceZone_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkRankingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveSessionCount, activeSessionCount_);
      DARABONBA_PTR_FROM_JSON(Asn, asn_);
      DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(ByteCount, byteCount_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(DestinationIp, destinationIp_);
      DARABONBA_PTR_FROM_JSON(DestinationIsp, destinationIsp_);
      DARABONBA_PTR_FROM_JSON(DestinationPort, destinationPort_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionNo, destinationRegionNo_);
      DARABONBA_PTR_FROM_JSON(DestinationZone, destinationZone_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InBps, inBps_);
      DARABONBA_PTR_FROM_JSON(InPps, inPps_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(NewSessionPerSecond, newSessionPerSecond_);
      DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
      DARABONBA_PTR_FROM_JSON(OutPps, outPps_);
      DARABONBA_PTR_FROM_JSON(PacketCount, packetCount_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RTT, RTT_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RetransmitRate, retransmitRate_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SourceIsp, sourceIsp_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SourceZone, sourceZone_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
    };
    GetNisNetworkRankingResponseBodyData() = default ;
    GetNisNetworkRankingResponseBodyData(const GetNisNetworkRankingResponseBodyData &) = default ;
    GetNisNetworkRankingResponseBodyData(GetNisNetworkRankingResponseBodyData &&) = default ;
    GetNisNetworkRankingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkRankingResponseBodyData() = default ;
    GetNisNetworkRankingResponseBodyData& operator=(const GetNisNetworkRankingResponseBodyData &) = default ;
    GetNisNetworkRankingResponseBodyData& operator=(GetNisNetworkRankingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && return this->asn_ == nullptr && return this->attachmentId_ == nullptr && return this->bandwidthPackageId_ == nullptr && return this->byteCount_ == nullptr && return this->city_ == nullptr
        && return this->country_ == nullptr && return this->destinationIp_ == nullptr && return this->destinationIsp_ == nullptr && return this->destinationPort_ == nullptr && return this->destinationRegionNo_ == nullptr
        && return this->destinationZone_ == nullptr && return this->IP_ == nullptr && return this->inBps_ == nullptr && return this->inPps_ == nullptr && return this->instanceId_ == nullptr
        && return this->isp_ == nullptr && return this->newSessionPerSecond_ == nullptr && return this->outBps_ == nullptr && return this->outPps_ == nullptr && return this->packetCount_ == nullptr
        && return this->protocol_ == nullptr && return this->province_ == nullptr && return this->RTT_ == nullptr && return this->regionNo_ == nullptr && return this->retransmitRate_ == nullptr
        && return this->sourceIp_ == nullptr && return this->sourceIsp_ == nullptr && return this->sourcePort_ == nullptr && return this->sourceZone_ == nullptr && return this->vbrId_ == nullptr; };
    // activeSessionCount Field Functions 
    bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
    void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
    inline double activeSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setActiveSessionCount(double activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


    // asn Field Functions 
    bool hasAsn() const { return this->asn_ != nullptr;};
    void deleteAsn() { this->asn_ = nullptr;};
    inline string asn() const { DARABONBA_PTR_GET_DEFAULT(asn_, "") };
    inline GetNisNetworkRankingResponseBodyData& setAsn(string asn) { DARABONBA_PTR_SET_VALUE(asn_, asn) };


    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string attachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline GetNisNetworkRankingResponseBodyData& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline GetNisNetworkRankingResponseBodyData& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // byteCount Field Functions 
    bool hasByteCount() const { return this->byteCount_ != nullptr;};
    void deleteByteCount() { this->byteCount_ = nullptr;};
    inline double byteCount() const { DARABONBA_PTR_GET_DEFAULT(byteCount_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setByteCount(double byteCount) { DARABONBA_PTR_SET_VALUE(byteCount_, byteCount) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetNisNetworkRankingResponseBodyData& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline GetNisNetworkRankingResponseBodyData& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // destinationIp Field Functions 
    bool hasDestinationIp() const { return this->destinationIp_ != nullptr;};
    void deleteDestinationIp() { this->destinationIp_ = nullptr;};
    inline string destinationIp() const { DARABONBA_PTR_GET_DEFAULT(destinationIp_, "") };
    inline GetNisNetworkRankingResponseBodyData& setDestinationIp(string destinationIp) { DARABONBA_PTR_SET_VALUE(destinationIp_, destinationIp) };


    // destinationIsp Field Functions 
    bool hasDestinationIsp() const { return this->destinationIsp_ != nullptr;};
    void deleteDestinationIsp() { this->destinationIsp_ = nullptr;};
    inline string destinationIsp() const { DARABONBA_PTR_GET_DEFAULT(destinationIsp_, "") };
    inline GetNisNetworkRankingResponseBodyData& setDestinationIsp(string destinationIsp) { DARABONBA_PTR_SET_VALUE(destinationIsp_, destinationIsp) };


    // destinationPort Field Functions 
    bool hasDestinationPort() const { return this->destinationPort_ != nullptr;};
    void deleteDestinationPort() { this->destinationPort_ = nullptr;};
    inline string destinationPort() const { DARABONBA_PTR_GET_DEFAULT(destinationPort_, "") };
    inline GetNisNetworkRankingResponseBodyData& setDestinationPort(string destinationPort) { DARABONBA_PTR_SET_VALUE(destinationPort_, destinationPort) };


    // destinationRegionNo Field Functions 
    bool hasDestinationRegionNo() const { return this->destinationRegionNo_ != nullptr;};
    void deleteDestinationRegionNo() { this->destinationRegionNo_ = nullptr;};
    inline string destinationRegionNo() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionNo_, "") };
    inline GetNisNetworkRankingResponseBodyData& setDestinationRegionNo(string destinationRegionNo) { DARABONBA_PTR_SET_VALUE(destinationRegionNo_, destinationRegionNo) };


    // destinationZone Field Functions 
    bool hasDestinationZone() const { return this->destinationZone_ != nullptr;};
    void deleteDestinationZone() { this->destinationZone_ = nullptr;};
    inline string destinationZone() const { DARABONBA_PTR_GET_DEFAULT(destinationZone_, "") };
    inline GetNisNetworkRankingResponseBodyData& setDestinationZone(string destinationZone) { DARABONBA_PTR_SET_VALUE(destinationZone_, destinationZone) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline GetNisNetworkRankingResponseBodyData& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline double inBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setInBps(double inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // inPps Field Functions 
    bool hasInPps() const { return this->inPps_ != nullptr;};
    void deleteInPps() { this->inPps_ = nullptr;};
    inline double inPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setInPps(double inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNisNetworkRankingResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline GetNisNetworkRankingResponseBodyData& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // newSessionPerSecond Field Functions 
    bool hasNewSessionPerSecond() const { return this->newSessionPerSecond_ != nullptr;};
    void deleteNewSessionPerSecond() { this->newSessionPerSecond_ = nullptr;};
    inline double newSessionPerSecond() const { DARABONBA_PTR_GET_DEFAULT(newSessionPerSecond_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setNewSessionPerSecond(double newSessionPerSecond) { DARABONBA_PTR_SET_VALUE(newSessionPerSecond_, newSessionPerSecond) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline double outBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setOutBps(double outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    // outPps Field Functions 
    bool hasOutPps() const { return this->outPps_ != nullptr;};
    void deleteOutPps() { this->outPps_ = nullptr;};
    inline double outPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setOutPps(double outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


    // packetCount Field Functions 
    bool hasPacketCount() const { return this->packetCount_ != nullptr;};
    void deletePacketCount() { this->packetCount_ = nullptr;};
    inline double packetCount() const { DARABONBA_PTR_GET_DEFAULT(packetCount_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setPacketCount(double packetCount) { DARABONBA_PTR_SET_VALUE(packetCount_, packetCount) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetNisNetworkRankingResponseBodyData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetNisNetworkRankingResponseBodyData& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // RTT Field Functions 
    bool hasRTT() const { return this->RTT_ != nullptr;};
    void deleteRTT() { this->RTT_ = nullptr;};
    inline double RTT() const { DARABONBA_PTR_GET_DEFAULT(RTT_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setRTT(double RTT) { DARABONBA_PTR_SET_VALUE(RTT_, RTT) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline GetNisNetworkRankingResponseBodyData& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // retransmitRate Field Functions 
    bool hasRetransmitRate() const { return this->retransmitRate_ != nullptr;};
    void deleteRetransmitRate() { this->retransmitRate_ = nullptr;};
    inline double retransmitRate() const { DARABONBA_PTR_GET_DEFAULT(retransmitRate_, 0.0) };
    inline GetNisNetworkRankingResponseBodyData& setRetransmitRate(double retransmitRate) { DARABONBA_PTR_SET_VALUE(retransmitRate_, retransmitRate) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline GetNisNetworkRankingResponseBodyData& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // sourceIsp Field Functions 
    bool hasSourceIsp() const { return this->sourceIsp_ != nullptr;};
    void deleteSourceIsp() { this->sourceIsp_ = nullptr;};
    inline string sourceIsp() const { DARABONBA_PTR_GET_DEFAULT(sourceIsp_, "") };
    inline GetNisNetworkRankingResponseBodyData& setSourceIsp(string sourceIsp) { DARABONBA_PTR_SET_VALUE(sourceIsp_, sourceIsp) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline string sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
    inline GetNisNetworkRankingResponseBodyData& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // sourceZone Field Functions 
    bool hasSourceZone() const { return this->sourceZone_ != nullptr;};
    void deleteSourceZone() { this->sourceZone_ = nullptr;};
    inline string sourceZone() const { DARABONBA_PTR_GET_DEFAULT(sourceZone_, "") };
    inline GetNisNetworkRankingResponseBodyData& setSourceZone(string sourceZone) { DARABONBA_PTR_SET_VALUE(sourceZone_, sourceZone) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline GetNisNetworkRankingResponseBodyData& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


  protected:
    std::shared_ptr<double> activeSessionCount_ = nullptr;
    std::shared_ptr<string> asn_ = nullptr;
    std::shared_ptr<string> attachmentId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<double> byteCount_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> destinationIp_ = nullptr;
    std::shared_ptr<string> destinationIsp_ = nullptr;
    std::shared_ptr<string> destinationPort_ = nullptr;
    std::shared_ptr<string> destinationRegionNo_ = nullptr;
    std::shared_ptr<string> destinationZone_ = nullptr;
    std::shared_ptr<string> IP_ = nullptr;
    std::shared_ptr<double> inBps_ = nullptr;
    std::shared_ptr<double> inPps_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<double> newSessionPerSecond_ = nullptr;
    std::shared_ptr<double> outBps_ = nullptr;
    std::shared_ptr<double> outPps_ = nullptr;
    std::shared_ptr<double> packetCount_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<double> RTT_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<double> retransmitRate_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<string> sourceIsp_ = nullptr;
    std::shared_ptr<string> sourcePort_ = nullptr;
    std::shared_ptr<string> sourceZone_ = nullptr;
    std::shared_ptr<string> vbrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
