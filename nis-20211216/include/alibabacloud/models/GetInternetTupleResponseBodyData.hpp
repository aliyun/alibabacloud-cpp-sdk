// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERNETTUPLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINTERNETTUPLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetInternetTupleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInternetTupleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(ByteCount, byteCount_);
      DARABONBA_PTR_TO_JSON(CloudCity, cloudCity_);
      DARABONBA_PTR_TO_JSON(CloudCountry, cloudCountry_);
      DARABONBA_PTR_TO_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_TO_JSON(CloudIsp, cloudIsp_);
      DARABONBA_PTR_TO_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_TO_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_TO_JSON(CloudProvince, cloudProvince_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(InByteCount, inByteCount_);
      DARABONBA_PTR_TO_JSON(InOutOrderCount, inOutOrderCount_);
      DARABONBA_PTR_TO_JSON(InPacketCount, inPacketCount_);
      DARABONBA_PTR_TO_JSON(InRetranCount, inRetranCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OtherCity, otherCity_);
      DARABONBA_PTR_TO_JSON(OtherCountry, otherCountry_);
      DARABONBA_PTR_TO_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_TO_JSON(OtherIsp, otherIsp_);
      DARABONBA_PTR_TO_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_TO_JSON(OtherProduct, otherProduct_);
      DARABONBA_PTR_TO_JSON(OtherProvince, otherProvince_);
      DARABONBA_PTR_TO_JSON(OutByteCount, outByteCount_);
      DARABONBA_PTR_TO_JSON(OutOrderCount, outOrderCount_);
      DARABONBA_PTR_TO_JSON(OutOutOrderCount, outOutOrderCount_);
      DARABONBA_PTR_TO_JSON(OutPacketCount, outPacketCount_);
      DARABONBA_PTR_TO_JSON(OutRetranCount, outRetranCount_);
      DARABONBA_PTR_TO_JSON(PacketCount, packetCount_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RetransmitRate, retransmitRate_);
      DARABONBA_PTR_TO_JSON(Rtt, rtt_);
    };
    friend void from_json(const Darabonba::Json& j, GetInternetTupleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(ByteCount, byteCount_);
      DARABONBA_PTR_FROM_JSON(CloudCity, cloudCity_);
      DARABONBA_PTR_FROM_JSON(CloudCountry, cloudCountry_);
      DARABONBA_PTR_FROM_JSON(CloudIp, cloudIp_);
      DARABONBA_PTR_FROM_JSON(CloudIsp, cloudIsp_);
      DARABONBA_PTR_FROM_JSON(CloudPort, cloudPort_);
      DARABONBA_PTR_FROM_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_FROM_JSON(CloudProvince, cloudProvince_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(InByteCount, inByteCount_);
      DARABONBA_PTR_FROM_JSON(InOutOrderCount, inOutOrderCount_);
      DARABONBA_PTR_FROM_JSON(InPacketCount, inPacketCount_);
      DARABONBA_PTR_FROM_JSON(InRetranCount, inRetranCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OtherCity, otherCity_);
      DARABONBA_PTR_FROM_JSON(OtherCountry, otherCountry_);
      DARABONBA_PTR_FROM_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_FROM_JSON(OtherIsp, otherIsp_);
      DARABONBA_PTR_FROM_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_FROM_JSON(OtherProduct, otherProduct_);
      DARABONBA_PTR_FROM_JSON(OtherProvince, otherProvince_);
      DARABONBA_PTR_FROM_JSON(OutByteCount, outByteCount_);
      DARABONBA_PTR_FROM_JSON(OutOrderCount, outOrderCount_);
      DARABONBA_PTR_FROM_JSON(OutOutOrderCount, outOutOrderCount_);
      DARABONBA_PTR_FROM_JSON(OutPacketCount, outPacketCount_);
      DARABONBA_PTR_FROM_JSON(OutRetranCount, outRetranCount_);
      DARABONBA_PTR_FROM_JSON(PacketCount, packetCount_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RetransmitRate, retransmitRate_);
      DARABONBA_PTR_FROM_JSON(Rtt, rtt_);
    };
    GetInternetTupleResponseBodyData() = default ;
    GetInternetTupleResponseBodyData(const GetInternetTupleResponseBodyData &) = default ;
    GetInternetTupleResponseBodyData(GetInternetTupleResponseBodyData &&) = default ;
    GetInternetTupleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInternetTupleResponseBodyData() = default ;
    GetInternetTupleResponseBodyData& operator=(const GetInternetTupleResponseBodyData &) = default ;
    GetInternetTupleResponseBodyData& operator=(GetInternetTupleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessRegion_ == nullptr
        && return this->beginTime_ == nullptr && return this->byteCount_ == nullptr && return this->cloudCity_ == nullptr && return this->cloudCountry_ == nullptr && return this->cloudIp_ == nullptr
        && return this->cloudIsp_ == nullptr && return this->cloudPort_ == nullptr && return this->cloudProduct_ == nullptr && return this->cloudProvince_ == nullptr && return this->direction_ == nullptr
        && return this->inByteCount_ == nullptr && return this->inOutOrderCount_ == nullptr && return this->inPacketCount_ == nullptr && return this->inRetranCount_ == nullptr && return this->instanceId_ == nullptr
        && return this->otherCity_ == nullptr && return this->otherCountry_ == nullptr && return this->otherIp_ == nullptr && return this->otherIsp_ == nullptr && return this->otherPort_ == nullptr
        && return this->otherProduct_ == nullptr && return this->otherProvince_ == nullptr && return this->outByteCount_ == nullptr && return this->outOrderCount_ == nullptr && return this->outOutOrderCount_ == nullptr
        && return this->outPacketCount_ == nullptr && return this->outRetranCount_ == nullptr && return this->packetCount_ == nullptr && return this->protocol_ == nullptr && return this->retransmitRate_ == nullptr
        && return this->rtt_ == nullptr; };
    // accessRegion Field Functions 
    bool hasAccessRegion() const { return this->accessRegion_ != nullptr;};
    void deleteAccessRegion() { this->accessRegion_ = nullptr;};
    inline string accessRegion() const { DARABONBA_PTR_GET_DEFAULT(accessRegion_, "") };
    inline GetInternetTupleResponseBodyData& setAccessRegion(string accessRegion) { DARABONBA_PTR_SET_VALUE(accessRegion_, accessRegion) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline GetInternetTupleResponseBodyData& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // byteCount Field Functions 
    bool hasByteCount() const { return this->byteCount_ != nullptr;};
    void deleteByteCount() { this->byteCount_ = nullptr;};
    inline double byteCount() const { DARABONBA_PTR_GET_DEFAULT(byteCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setByteCount(double byteCount) { DARABONBA_PTR_SET_VALUE(byteCount_, byteCount) };


    // cloudCity Field Functions 
    bool hasCloudCity() const { return this->cloudCity_ != nullptr;};
    void deleteCloudCity() { this->cloudCity_ = nullptr;};
    inline string cloudCity() const { DARABONBA_PTR_GET_DEFAULT(cloudCity_, "") };
    inline GetInternetTupleResponseBodyData& setCloudCity(string cloudCity) { DARABONBA_PTR_SET_VALUE(cloudCity_, cloudCity) };


    // cloudCountry Field Functions 
    bool hasCloudCountry() const { return this->cloudCountry_ != nullptr;};
    void deleteCloudCountry() { this->cloudCountry_ = nullptr;};
    inline string cloudCountry() const { DARABONBA_PTR_GET_DEFAULT(cloudCountry_, "") };
    inline GetInternetTupleResponseBodyData& setCloudCountry(string cloudCountry) { DARABONBA_PTR_SET_VALUE(cloudCountry_, cloudCountry) };


    // cloudIp Field Functions 
    bool hasCloudIp() const { return this->cloudIp_ != nullptr;};
    void deleteCloudIp() { this->cloudIp_ = nullptr;};
    inline string cloudIp() const { DARABONBA_PTR_GET_DEFAULT(cloudIp_, "") };
    inline GetInternetTupleResponseBodyData& setCloudIp(string cloudIp) { DARABONBA_PTR_SET_VALUE(cloudIp_, cloudIp) };


    // cloudIsp Field Functions 
    bool hasCloudIsp() const { return this->cloudIsp_ != nullptr;};
    void deleteCloudIsp() { this->cloudIsp_ = nullptr;};
    inline string cloudIsp() const { DARABONBA_PTR_GET_DEFAULT(cloudIsp_, "") };
    inline GetInternetTupleResponseBodyData& setCloudIsp(string cloudIsp) { DARABONBA_PTR_SET_VALUE(cloudIsp_, cloudIsp) };


    // cloudPort Field Functions 
    bool hasCloudPort() const { return this->cloudPort_ != nullptr;};
    void deleteCloudPort() { this->cloudPort_ = nullptr;};
    inline string cloudPort() const { DARABONBA_PTR_GET_DEFAULT(cloudPort_, "") };
    inline GetInternetTupleResponseBodyData& setCloudPort(string cloudPort) { DARABONBA_PTR_SET_VALUE(cloudPort_, cloudPort) };


    // cloudProduct Field Functions 
    bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
    void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
    inline string cloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
    inline GetInternetTupleResponseBodyData& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


    // cloudProvince Field Functions 
    bool hasCloudProvince() const { return this->cloudProvince_ != nullptr;};
    void deleteCloudProvince() { this->cloudProvince_ = nullptr;};
    inline string cloudProvince() const { DARABONBA_PTR_GET_DEFAULT(cloudProvince_, "") };
    inline GetInternetTupleResponseBodyData& setCloudProvince(string cloudProvince) { DARABONBA_PTR_SET_VALUE(cloudProvince_, cloudProvince) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetInternetTupleResponseBodyData& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // inByteCount Field Functions 
    bool hasInByteCount() const { return this->inByteCount_ != nullptr;};
    void deleteInByteCount() { this->inByteCount_ = nullptr;};
    inline double inByteCount() const { DARABONBA_PTR_GET_DEFAULT(inByteCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setInByteCount(double inByteCount) { DARABONBA_PTR_SET_VALUE(inByteCount_, inByteCount) };


    // inOutOrderCount Field Functions 
    bool hasInOutOrderCount() const { return this->inOutOrderCount_ != nullptr;};
    void deleteInOutOrderCount() { this->inOutOrderCount_ = nullptr;};
    inline double inOutOrderCount() const { DARABONBA_PTR_GET_DEFAULT(inOutOrderCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setInOutOrderCount(double inOutOrderCount) { DARABONBA_PTR_SET_VALUE(inOutOrderCount_, inOutOrderCount) };


    // inPacketCount Field Functions 
    bool hasInPacketCount() const { return this->inPacketCount_ != nullptr;};
    void deleteInPacketCount() { this->inPacketCount_ = nullptr;};
    inline double inPacketCount() const { DARABONBA_PTR_GET_DEFAULT(inPacketCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setInPacketCount(double inPacketCount) { DARABONBA_PTR_SET_VALUE(inPacketCount_, inPacketCount) };


    // inRetranCount Field Functions 
    bool hasInRetranCount() const { return this->inRetranCount_ != nullptr;};
    void deleteInRetranCount() { this->inRetranCount_ = nullptr;};
    inline double inRetranCount() const { DARABONBA_PTR_GET_DEFAULT(inRetranCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setInRetranCount(double inRetranCount) { DARABONBA_PTR_SET_VALUE(inRetranCount_, inRetranCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInternetTupleResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // otherCity Field Functions 
    bool hasOtherCity() const { return this->otherCity_ != nullptr;};
    void deleteOtherCity() { this->otherCity_ = nullptr;};
    inline string otherCity() const { DARABONBA_PTR_GET_DEFAULT(otherCity_, "") };
    inline GetInternetTupleResponseBodyData& setOtherCity(string otherCity) { DARABONBA_PTR_SET_VALUE(otherCity_, otherCity) };


    // otherCountry Field Functions 
    bool hasOtherCountry() const { return this->otherCountry_ != nullptr;};
    void deleteOtherCountry() { this->otherCountry_ = nullptr;};
    inline string otherCountry() const { DARABONBA_PTR_GET_DEFAULT(otherCountry_, "") };
    inline GetInternetTupleResponseBodyData& setOtherCountry(string otherCountry) { DARABONBA_PTR_SET_VALUE(otherCountry_, otherCountry) };


    // otherIp Field Functions 
    bool hasOtherIp() const { return this->otherIp_ != nullptr;};
    void deleteOtherIp() { this->otherIp_ = nullptr;};
    inline string otherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
    inline GetInternetTupleResponseBodyData& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


    // otherIsp Field Functions 
    bool hasOtherIsp() const { return this->otherIsp_ != nullptr;};
    void deleteOtherIsp() { this->otherIsp_ = nullptr;};
    inline string otherIsp() const { DARABONBA_PTR_GET_DEFAULT(otherIsp_, "") };
    inline GetInternetTupleResponseBodyData& setOtherIsp(string otherIsp) { DARABONBA_PTR_SET_VALUE(otherIsp_, otherIsp) };


    // otherPort Field Functions 
    bool hasOtherPort() const { return this->otherPort_ != nullptr;};
    void deleteOtherPort() { this->otherPort_ = nullptr;};
    inline string otherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
    inline GetInternetTupleResponseBodyData& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


    // otherProduct Field Functions 
    bool hasOtherProduct() const { return this->otherProduct_ != nullptr;};
    void deleteOtherProduct() { this->otherProduct_ = nullptr;};
    inline string otherProduct() const { DARABONBA_PTR_GET_DEFAULT(otherProduct_, "") };
    inline GetInternetTupleResponseBodyData& setOtherProduct(string otherProduct) { DARABONBA_PTR_SET_VALUE(otherProduct_, otherProduct) };


    // otherProvince Field Functions 
    bool hasOtherProvince() const { return this->otherProvince_ != nullptr;};
    void deleteOtherProvince() { this->otherProvince_ = nullptr;};
    inline string otherProvince() const { DARABONBA_PTR_GET_DEFAULT(otherProvince_, "") };
    inline GetInternetTupleResponseBodyData& setOtherProvince(string otherProvince) { DARABONBA_PTR_SET_VALUE(otherProvince_, otherProvince) };


    // outByteCount Field Functions 
    bool hasOutByteCount() const { return this->outByteCount_ != nullptr;};
    void deleteOutByteCount() { this->outByteCount_ = nullptr;};
    inline double outByteCount() const { DARABONBA_PTR_GET_DEFAULT(outByteCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setOutByteCount(double outByteCount) { DARABONBA_PTR_SET_VALUE(outByteCount_, outByteCount) };


    // outOrderCount Field Functions 
    bool hasOutOrderCount() const { return this->outOrderCount_ != nullptr;};
    void deleteOutOrderCount() { this->outOrderCount_ = nullptr;};
    inline double outOrderCount() const { DARABONBA_PTR_GET_DEFAULT(outOrderCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setOutOrderCount(double outOrderCount) { DARABONBA_PTR_SET_VALUE(outOrderCount_, outOrderCount) };


    // outOutOrderCount Field Functions 
    bool hasOutOutOrderCount() const { return this->outOutOrderCount_ != nullptr;};
    void deleteOutOutOrderCount() { this->outOutOrderCount_ = nullptr;};
    inline double outOutOrderCount() const { DARABONBA_PTR_GET_DEFAULT(outOutOrderCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setOutOutOrderCount(double outOutOrderCount) { DARABONBA_PTR_SET_VALUE(outOutOrderCount_, outOutOrderCount) };


    // outPacketCount Field Functions 
    bool hasOutPacketCount() const { return this->outPacketCount_ != nullptr;};
    void deleteOutPacketCount() { this->outPacketCount_ = nullptr;};
    inline double outPacketCount() const { DARABONBA_PTR_GET_DEFAULT(outPacketCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setOutPacketCount(double outPacketCount) { DARABONBA_PTR_SET_VALUE(outPacketCount_, outPacketCount) };


    // outRetranCount Field Functions 
    bool hasOutRetranCount() const { return this->outRetranCount_ != nullptr;};
    void deleteOutRetranCount() { this->outRetranCount_ = nullptr;};
    inline double outRetranCount() const { DARABONBA_PTR_GET_DEFAULT(outRetranCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setOutRetranCount(double outRetranCount) { DARABONBA_PTR_SET_VALUE(outRetranCount_, outRetranCount) };


    // packetCount Field Functions 
    bool hasPacketCount() const { return this->packetCount_ != nullptr;};
    void deletePacketCount() { this->packetCount_ = nullptr;};
    inline double packetCount() const { DARABONBA_PTR_GET_DEFAULT(packetCount_, 0.0) };
    inline GetInternetTupleResponseBodyData& setPacketCount(double packetCount) { DARABONBA_PTR_SET_VALUE(packetCount_, packetCount) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetInternetTupleResponseBodyData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // retransmitRate Field Functions 
    bool hasRetransmitRate() const { return this->retransmitRate_ != nullptr;};
    void deleteRetransmitRate() { this->retransmitRate_ = nullptr;};
    inline double retransmitRate() const { DARABONBA_PTR_GET_DEFAULT(retransmitRate_, 0.0) };
    inline GetInternetTupleResponseBodyData& setRetransmitRate(double retransmitRate) { DARABONBA_PTR_SET_VALUE(retransmitRate_, retransmitRate) };


    // rtt Field Functions 
    bool hasRtt() const { return this->rtt_ != nullptr;};
    void deleteRtt() { this->rtt_ = nullptr;};
    inline double rtt() const { DARABONBA_PTR_GET_DEFAULT(rtt_, 0.0) };
    inline GetInternetTupleResponseBodyData& setRtt(double rtt) { DARABONBA_PTR_SET_VALUE(rtt_, rtt) };


  protected:
    // The access point of Alibaba Cloud.
    // 
    // >  This parameter is valid only if you set **InstanceId** to the instance ID of an Anycast elastic IP address (EIP).
    std::shared_ptr<string> accessRegion_ = nullptr;
    // The beginning of the time range that you queried. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The traffic volume. Unit: bytes.
    std::shared_ptr<double> byteCount_ = nullptr;
    // The local city.
    std::shared_ptr<string> cloudCity_ = nullptr;
    // The local country or region.
    std::shared_ptr<string> cloudCountry_ = nullptr;
    // The local IP address.
    std::shared_ptr<string> cloudIp_ = nullptr;
    // The local ISP.
    std::shared_ptr<string> cloudIsp_ = nullptr;
    // The local port.
    std::shared_ptr<string> cloudPort_ = nullptr;
    // The service code of the instance to which the local IP address belongs.
    std::shared_ptr<string> cloudProduct_ = nullptr;
    // The local province.
    std::shared_ptr<string> cloudProvince_ = nullptr;
    // The direction of Internet traffic. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    std::shared_ptr<string> direction_ = nullptr;
    // The inbound traffic volume. Unit: bytes.
    std::shared_ptr<double> inByteCount_ = nullptr;
    // The number of inbound disordered packets.
    std::shared_ptr<double> inOutOrderCount_ = nullptr;
    // The number of inbound packets.
    std::shared_ptr<double> inPacketCount_ = nullptr;
    // The number of inbound repeated packets.
    std::shared_ptr<double> inRetranCount_ = nullptr;
    // The ID of the instance to which the local IP address belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The remote city. In most cases, this parameter is empty if you set **OtherCountry** to a country except China.
    std::shared_ptr<string> otherCity_ = nullptr;
    // The remote country or region.
    std::shared_ptr<string> otherCountry_ = nullptr;
    // The remote IP address.
    std::shared_ptr<string> otherIp_ = nullptr;
    // The remote ISP.
    std::shared_ptr<string> otherIsp_ = nullptr;
    // The remote port.
    std::shared_ptr<string> otherPort_ = nullptr;
    // The service code of the instance to which the remote IP address belongs. If the IP address is not on the cloud, this parameter is empty.
    std::shared_ptr<string> otherProduct_ = nullptr;
    // The remote province. In most cases, this parameter is empty if you set **OtherCountry** to a country except China.
    std::shared_ptr<string> otherProvince_ = nullptr;
    // The outbound traffic volume. Unit: bytes.
    std::shared_ptr<double> outByteCount_ = nullptr;
    // The number of disordered packets.
    std::shared_ptr<double> outOrderCount_ = nullptr;
    // The number of outbound disordered packets.
    std::shared_ptr<double> outOutOrderCount_ = nullptr;
    // The number of outbound packets.
    std::shared_ptr<double> outPacketCount_ = nullptr;
    // The number of outbound repeated packets.
    std::shared_ptr<double> outRetranCount_ = nullptr;
    // The number of packets.
    std::shared_ptr<double> packetCount_ = nullptr;
    // The protocol number.
    std::shared_ptr<string> protocol_ = nullptr;
    // The retransmission rate of TCP packets.
    std::shared_ptr<double> retransmitRate_ = nullptr;
    // The round-trip time (RTT). Unit: milliseconds.
    std::shared_ptr<double> rtt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
