// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGRESPONSEBODY_HPP_
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
  class GetNisNetworkRankingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkRankingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkRankingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNisNetworkRankingResponseBody() = default ;
    GetNisNetworkRankingResponseBody(const GetNisNetworkRankingResponseBody &) = default ;
    GetNisNetworkRankingResponseBody(GetNisNetworkRankingResponseBody &&) = default ;
    GetNisNetworkRankingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkRankingResponseBody() = default ;
    GetNisNetworkRankingResponseBody& operator=(const GetNisNetworkRankingResponseBody &) = default ;
    GetNisNetworkRankingResponseBody& operator=(GetNisNetworkRankingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && this->asn_ == nullptr && this->attachmentId_ == nullptr && this->bandwidthPackageId_ == nullptr && this->byteCount_ == nullptr && this->city_ == nullptr
        && this->country_ == nullptr && this->destinationIp_ == nullptr && this->destinationIsp_ == nullptr && this->destinationPort_ == nullptr && this->destinationRegionNo_ == nullptr
        && this->destinationZone_ == nullptr && this->IP_ == nullptr && this->inBps_ == nullptr && this->inPps_ == nullptr && this->instanceId_ == nullptr
        && this->isp_ == nullptr && this->newSessionPerSecond_ == nullptr && this->outBps_ == nullptr && this->outPps_ == nullptr && this->packetCount_ == nullptr
        && this->protocol_ == nullptr && this->province_ == nullptr && this->RTT_ == nullptr && this->regionNo_ == nullptr && this->retransmitRate_ == nullptr
        && this->sourceIp_ == nullptr && this->sourceIsp_ == nullptr && this->sourcePort_ == nullptr && this->sourceZone_ == nullptr && this->vbrId_ == nullptr; };
      // activeSessionCount Field Functions 
      bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
      void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
      inline double getActiveSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0.0) };
      inline Data& setActiveSessionCount(double activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


      // asn Field Functions 
      bool hasAsn() const { return this->asn_ != nullptr;};
      void deleteAsn() { this->asn_ = nullptr;};
      inline string getAsn() const { DARABONBA_PTR_GET_DEFAULT(asn_, "") };
      inline Data& setAsn(string asn) { DARABONBA_PTR_SET_VALUE(asn_, asn) };


      // attachmentId Field Functions 
      bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
      void deleteAttachmentId() { this->attachmentId_ = nullptr;};
      inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
      inline Data& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline Data& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // byteCount Field Functions 
      bool hasByteCount() const { return this->byteCount_ != nullptr;};
      void deleteByteCount() { this->byteCount_ = nullptr;};
      inline double getByteCount() const { DARABONBA_PTR_GET_DEFAULT(byteCount_, 0.0) };
      inline Data& setByteCount(double byteCount) { DARABONBA_PTR_SET_VALUE(byteCount_, byteCount) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Data& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline Data& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // destinationIp Field Functions 
      bool hasDestinationIp() const { return this->destinationIp_ != nullptr;};
      void deleteDestinationIp() { this->destinationIp_ = nullptr;};
      inline string getDestinationIp() const { DARABONBA_PTR_GET_DEFAULT(destinationIp_, "") };
      inline Data& setDestinationIp(string destinationIp) { DARABONBA_PTR_SET_VALUE(destinationIp_, destinationIp) };


      // destinationIsp Field Functions 
      bool hasDestinationIsp() const { return this->destinationIsp_ != nullptr;};
      void deleteDestinationIsp() { this->destinationIsp_ = nullptr;};
      inline string getDestinationIsp() const { DARABONBA_PTR_GET_DEFAULT(destinationIsp_, "") };
      inline Data& setDestinationIsp(string destinationIsp) { DARABONBA_PTR_SET_VALUE(destinationIsp_, destinationIsp) };


      // destinationPort Field Functions 
      bool hasDestinationPort() const { return this->destinationPort_ != nullptr;};
      void deleteDestinationPort() { this->destinationPort_ = nullptr;};
      inline string getDestinationPort() const { DARABONBA_PTR_GET_DEFAULT(destinationPort_, "") };
      inline Data& setDestinationPort(string destinationPort) { DARABONBA_PTR_SET_VALUE(destinationPort_, destinationPort) };


      // destinationRegionNo Field Functions 
      bool hasDestinationRegionNo() const { return this->destinationRegionNo_ != nullptr;};
      void deleteDestinationRegionNo() { this->destinationRegionNo_ = nullptr;};
      inline string getDestinationRegionNo() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionNo_, "") };
      inline Data& setDestinationRegionNo(string destinationRegionNo) { DARABONBA_PTR_SET_VALUE(destinationRegionNo_, destinationRegionNo) };


      // destinationZone Field Functions 
      bool hasDestinationZone() const { return this->destinationZone_ != nullptr;};
      void deleteDestinationZone() { this->destinationZone_ = nullptr;};
      inline string getDestinationZone() const { DARABONBA_PTR_GET_DEFAULT(destinationZone_, "") };
      inline Data& setDestinationZone(string destinationZone) { DARABONBA_PTR_SET_VALUE(destinationZone_, destinationZone) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline Data& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // inBps Field Functions 
      bool hasInBps() const { return this->inBps_ != nullptr;};
      void deleteInBps() { this->inBps_ = nullptr;};
      inline double getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0.0) };
      inline Data& setInBps(double inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


      // inPps Field Functions 
      bool hasInPps() const { return this->inPps_ != nullptr;};
      void deleteInPps() { this->inPps_ = nullptr;};
      inline double getInPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0.0) };
      inline Data& setInPps(double inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Data& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // newSessionPerSecond Field Functions 
      bool hasNewSessionPerSecond() const { return this->newSessionPerSecond_ != nullptr;};
      void deleteNewSessionPerSecond() { this->newSessionPerSecond_ = nullptr;};
      inline double getNewSessionPerSecond() const { DARABONBA_PTR_GET_DEFAULT(newSessionPerSecond_, 0.0) };
      inline Data& setNewSessionPerSecond(double newSessionPerSecond) { DARABONBA_PTR_SET_VALUE(newSessionPerSecond_, newSessionPerSecond) };


      // outBps Field Functions 
      bool hasOutBps() const { return this->outBps_ != nullptr;};
      void deleteOutBps() { this->outBps_ = nullptr;};
      inline double getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0.0) };
      inline Data& setOutBps(double outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


      // outPps Field Functions 
      bool hasOutPps() const { return this->outPps_ != nullptr;};
      void deleteOutPps() { this->outPps_ = nullptr;};
      inline double getOutPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0.0) };
      inline Data& setOutPps(double outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


      // packetCount Field Functions 
      bool hasPacketCount() const { return this->packetCount_ != nullptr;};
      void deletePacketCount() { this->packetCount_ = nullptr;};
      inline double getPacketCount() const { DARABONBA_PTR_GET_DEFAULT(packetCount_, 0.0) };
      inline Data& setPacketCount(double packetCount) { DARABONBA_PTR_SET_VALUE(packetCount_, packetCount) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline Data& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      // RTT Field Functions 
      bool hasRTT() const { return this->RTT_ != nullptr;};
      void deleteRTT() { this->RTT_ = nullptr;};
      inline double getRTT() const { DARABONBA_PTR_GET_DEFAULT(RTT_, 0.0) };
      inline Data& setRTT(double RTT) { DARABONBA_PTR_SET_VALUE(RTT_, RTT) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline Data& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // retransmitRate Field Functions 
      bool hasRetransmitRate() const { return this->retransmitRate_ != nullptr;};
      void deleteRetransmitRate() { this->retransmitRate_ = nullptr;};
      inline double getRetransmitRate() const { DARABONBA_PTR_GET_DEFAULT(retransmitRate_, 0.0) };
      inline Data& setRetransmitRate(double retransmitRate) { DARABONBA_PTR_SET_VALUE(retransmitRate_, retransmitRate) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline Data& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // sourceIsp Field Functions 
      bool hasSourceIsp() const { return this->sourceIsp_ != nullptr;};
      void deleteSourceIsp() { this->sourceIsp_ = nullptr;};
      inline string getSourceIsp() const { DARABONBA_PTR_GET_DEFAULT(sourceIsp_, "") };
      inline Data& setSourceIsp(string sourceIsp) { DARABONBA_PTR_SET_VALUE(sourceIsp_, sourceIsp) };


      // sourcePort Field Functions 
      bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
      void deleteSourcePort() { this->sourcePort_ = nullptr;};
      inline string getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
      inline Data& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


      // sourceZone Field Functions 
      bool hasSourceZone() const { return this->sourceZone_ != nullptr;};
      void deleteSourceZone() { this->sourceZone_ = nullptr;};
      inline string getSourceZone() const { DARABONBA_PTR_GET_DEFAULT(sourceZone_, "") };
      inline Data& setSourceZone(string sourceZone) { DARABONBA_PTR_SET_VALUE(sourceZone_, sourceZone) };


      // vbrId Field Functions 
      bool hasVbrId() const { return this->vbrId_ != nullptr;};
      void deleteVbrId() { this->vbrId_ = nullptr;};
      inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
      inline Data& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    protected:
      shared_ptr<double> activeSessionCount_ {};
      shared_ptr<string> asn_ {};
      shared_ptr<string> attachmentId_ {};
      shared_ptr<string> bandwidthPackageId_ {};
      shared_ptr<double> byteCount_ {};
      shared_ptr<string> city_ {};
      shared_ptr<string> country_ {};
      shared_ptr<string> destinationIp_ {};
      shared_ptr<string> destinationIsp_ {};
      shared_ptr<string> destinationPort_ {};
      shared_ptr<string> destinationRegionNo_ {};
      shared_ptr<string> destinationZone_ {};
      shared_ptr<string> IP_ {};
      shared_ptr<double> inBps_ {};
      shared_ptr<double> inPps_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<double> newSessionPerSecond_ {};
      shared_ptr<double> outBps_ {};
      shared_ptr<double> outPps_ {};
      shared_ptr<double> packetCount_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> province_ {};
      shared_ptr<double> RTT_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<double> retransmitRate_ {};
      shared_ptr<string> sourceIp_ {};
      shared_ptr<string> sourceIsp_ {};
      shared_ptr<string> sourcePort_ {};
      shared_ptr<string> sourceZone_ {};
      shared_ptr<string> vbrId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetNisNetworkRankingResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetNisNetworkRankingResponseBody::Data>) };
    inline vector<GetNisNetworkRankingResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetNisNetworkRankingResponseBody::Data>) };
    inline GetNisNetworkRankingResponseBody& setData(const vector<GetNisNetworkRankingResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNisNetworkRankingResponseBody& setData(vector<GetNisNetworkRankingResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNisNetworkRankingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetNisNetworkRankingResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
