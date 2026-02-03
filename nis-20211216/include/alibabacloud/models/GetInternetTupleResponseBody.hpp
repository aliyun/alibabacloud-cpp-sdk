// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERNETTUPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERNETTUPLERESPONSEBODY_HPP_
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
  class GetInternetTupleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInternetTupleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInternetTupleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInternetTupleResponseBody() = default ;
    GetInternetTupleResponseBody(const GetInternetTupleResponseBody &) = default ;
    GetInternetTupleResponseBody(GetInternetTupleResponseBody &&) = default ;
    GetInternetTupleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInternetTupleResponseBody() = default ;
    GetInternetTupleResponseBody& operator=(const GetInternetTupleResponseBody &) = default ;
    GetInternetTupleResponseBody& operator=(GetInternetTupleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->accessRegion_ == nullptr
        && this->beginTime_ == nullptr && this->byteCount_ == nullptr && this->cloudCity_ == nullptr && this->cloudCountry_ == nullptr && this->cloudIp_ == nullptr
        && this->cloudIsp_ == nullptr && this->cloudPort_ == nullptr && this->cloudProduct_ == nullptr && this->cloudProvince_ == nullptr && this->direction_ == nullptr
        && this->inByteCount_ == nullptr && this->inOutOrderCount_ == nullptr && this->inPacketCount_ == nullptr && this->inRetranCount_ == nullptr && this->instanceId_ == nullptr
        && this->otherCity_ == nullptr && this->otherCountry_ == nullptr && this->otherIp_ == nullptr && this->otherIsp_ == nullptr && this->otherPort_ == nullptr
        && this->otherProduct_ == nullptr && this->otherProvince_ == nullptr && this->outByteCount_ == nullptr && this->outOrderCount_ == nullptr && this->outOutOrderCount_ == nullptr
        && this->outPacketCount_ == nullptr && this->outRetranCount_ == nullptr && this->packetCount_ == nullptr && this->protocol_ == nullptr && this->retransmitRate_ == nullptr
        && this->rtt_ == nullptr; };
      // accessRegion Field Functions 
      bool hasAccessRegion() const { return this->accessRegion_ != nullptr;};
      void deleteAccessRegion() { this->accessRegion_ = nullptr;};
      inline string getAccessRegion() const { DARABONBA_PTR_GET_DEFAULT(accessRegion_, "") };
      inline Data& setAccessRegion(string accessRegion) { DARABONBA_PTR_SET_VALUE(accessRegion_, accessRegion) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
      inline Data& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // byteCount Field Functions 
      bool hasByteCount() const { return this->byteCount_ != nullptr;};
      void deleteByteCount() { this->byteCount_ = nullptr;};
      inline double getByteCount() const { DARABONBA_PTR_GET_DEFAULT(byteCount_, 0.0) };
      inline Data& setByteCount(double byteCount) { DARABONBA_PTR_SET_VALUE(byteCount_, byteCount) };


      // cloudCity Field Functions 
      bool hasCloudCity() const { return this->cloudCity_ != nullptr;};
      void deleteCloudCity() { this->cloudCity_ = nullptr;};
      inline string getCloudCity() const { DARABONBA_PTR_GET_DEFAULT(cloudCity_, "") };
      inline Data& setCloudCity(string cloudCity) { DARABONBA_PTR_SET_VALUE(cloudCity_, cloudCity) };


      // cloudCountry Field Functions 
      bool hasCloudCountry() const { return this->cloudCountry_ != nullptr;};
      void deleteCloudCountry() { this->cloudCountry_ = nullptr;};
      inline string getCloudCountry() const { DARABONBA_PTR_GET_DEFAULT(cloudCountry_, "") };
      inline Data& setCloudCountry(string cloudCountry) { DARABONBA_PTR_SET_VALUE(cloudCountry_, cloudCountry) };


      // cloudIp Field Functions 
      bool hasCloudIp() const { return this->cloudIp_ != nullptr;};
      void deleteCloudIp() { this->cloudIp_ = nullptr;};
      inline string getCloudIp() const { DARABONBA_PTR_GET_DEFAULT(cloudIp_, "") };
      inline Data& setCloudIp(string cloudIp) { DARABONBA_PTR_SET_VALUE(cloudIp_, cloudIp) };


      // cloudIsp Field Functions 
      bool hasCloudIsp() const { return this->cloudIsp_ != nullptr;};
      void deleteCloudIsp() { this->cloudIsp_ = nullptr;};
      inline string getCloudIsp() const { DARABONBA_PTR_GET_DEFAULT(cloudIsp_, "") };
      inline Data& setCloudIsp(string cloudIsp) { DARABONBA_PTR_SET_VALUE(cloudIsp_, cloudIsp) };


      // cloudPort Field Functions 
      bool hasCloudPort() const { return this->cloudPort_ != nullptr;};
      void deleteCloudPort() { this->cloudPort_ = nullptr;};
      inline string getCloudPort() const { DARABONBA_PTR_GET_DEFAULT(cloudPort_, "") };
      inline Data& setCloudPort(string cloudPort) { DARABONBA_PTR_SET_VALUE(cloudPort_, cloudPort) };


      // cloudProduct Field Functions 
      bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
      void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
      inline string getCloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
      inline Data& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


      // cloudProvince Field Functions 
      bool hasCloudProvince() const { return this->cloudProvince_ != nullptr;};
      void deleteCloudProvince() { this->cloudProvince_ = nullptr;};
      inline string getCloudProvince() const { DARABONBA_PTR_GET_DEFAULT(cloudProvince_, "") };
      inline Data& setCloudProvince(string cloudProvince) { DARABONBA_PTR_SET_VALUE(cloudProvince_, cloudProvince) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline Data& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // inByteCount Field Functions 
      bool hasInByteCount() const { return this->inByteCount_ != nullptr;};
      void deleteInByteCount() { this->inByteCount_ = nullptr;};
      inline double getInByteCount() const { DARABONBA_PTR_GET_DEFAULT(inByteCount_, 0.0) };
      inline Data& setInByteCount(double inByteCount) { DARABONBA_PTR_SET_VALUE(inByteCount_, inByteCount) };


      // inOutOrderCount Field Functions 
      bool hasInOutOrderCount() const { return this->inOutOrderCount_ != nullptr;};
      void deleteInOutOrderCount() { this->inOutOrderCount_ = nullptr;};
      inline double getInOutOrderCount() const { DARABONBA_PTR_GET_DEFAULT(inOutOrderCount_, 0.0) };
      inline Data& setInOutOrderCount(double inOutOrderCount) { DARABONBA_PTR_SET_VALUE(inOutOrderCount_, inOutOrderCount) };


      // inPacketCount Field Functions 
      bool hasInPacketCount() const { return this->inPacketCount_ != nullptr;};
      void deleteInPacketCount() { this->inPacketCount_ = nullptr;};
      inline double getInPacketCount() const { DARABONBA_PTR_GET_DEFAULT(inPacketCount_, 0.0) };
      inline Data& setInPacketCount(double inPacketCount) { DARABONBA_PTR_SET_VALUE(inPacketCount_, inPacketCount) };


      // inRetranCount Field Functions 
      bool hasInRetranCount() const { return this->inRetranCount_ != nullptr;};
      void deleteInRetranCount() { this->inRetranCount_ = nullptr;};
      inline double getInRetranCount() const { DARABONBA_PTR_GET_DEFAULT(inRetranCount_, 0.0) };
      inline Data& setInRetranCount(double inRetranCount) { DARABONBA_PTR_SET_VALUE(inRetranCount_, inRetranCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // otherCity Field Functions 
      bool hasOtherCity() const { return this->otherCity_ != nullptr;};
      void deleteOtherCity() { this->otherCity_ = nullptr;};
      inline string getOtherCity() const { DARABONBA_PTR_GET_DEFAULT(otherCity_, "") };
      inline Data& setOtherCity(string otherCity) { DARABONBA_PTR_SET_VALUE(otherCity_, otherCity) };


      // otherCountry Field Functions 
      bool hasOtherCountry() const { return this->otherCountry_ != nullptr;};
      void deleteOtherCountry() { this->otherCountry_ = nullptr;};
      inline string getOtherCountry() const { DARABONBA_PTR_GET_DEFAULT(otherCountry_, "") };
      inline Data& setOtherCountry(string otherCountry) { DARABONBA_PTR_SET_VALUE(otherCountry_, otherCountry) };


      // otherIp Field Functions 
      bool hasOtherIp() const { return this->otherIp_ != nullptr;};
      void deleteOtherIp() { this->otherIp_ = nullptr;};
      inline string getOtherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
      inline Data& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


      // otherIsp Field Functions 
      bool hasOtherIsp() const { return this->otherIsp_ != nullptr;};
      void deleteOtherIsp() { this->otherIsp_ = nullptr;};
      inline string getOtherIsp() const { DARABONBA_PTR_GET_DEFAULT(otherIsp_, "") };
      inline Data& setOtherIsp(string otherIsp) { DARABONBA_PTR_SET_VALUE(otherIsp_, otherIsp) };


      // otherPort Field Functions 
      bool hasOtherPort() const { return this->otherPort_ != nullptr;};
      void deleteOtherPort() { this->otherPort_ = nullptr;};
      inline string getOtherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
      inline Data& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


      // otherProduct Field Functions 
      bool hasOtherProduct() const { return this->otherProduct_ != nullptr;};
      void deleteOtherProduct() { this->otherProduct_ = nullptr;};
      inline string getOtherProduct() const { DARABONBA_PTR_GET_DEFAULT(otherProduct_, "") };
      inline Data& setOtherProduct(string otherProduct) { DARABONBA_PTR_SET_VALUE(otherProduct_, otherProduct) };


      // otherProvince Field Functions 
      bool hasOtherProvince() const { return this->otherProvince_ != nullptr;};
      void deleteOtherProvince() { this->otherProvince_ = nullptr;};
      inline string getOtherProvince() const { DARABONBA_PTR_GET_DEFAULT(otherProvince_, "") };
      inline Data& setOtherProvince(string otherProvince) { DARABONBA_PTR_SET_VALUE(otherProvince_, otherProvince) };


      // outByteCount Field Functions 
      bool hasOutByteCount() const { return this->outByteCount_ != nullptr;};
      void deleteOutByteCount() { this->outByteCount_ = nullptr;};
      inline double getOutByteCount() const { DARABONBA_PTR_GET_DEFAULT(outByteCount_, 0.0) };
      inline Data& setOutByteCount(double outByteCount) { DARABONBA_PTR_SET_VALUE(outByteCount_, outByteCount) };


      // outOrderCount Field Functions 
      bool hasOutOrderCount() const { return this->outOrderCount_ != nullptr;};
      void deleteOutOrderCount() { this->outOrderCount_ = nullptr;};
      inline double getOutOrderCount() const { DARABONBA_PTR_GET_DEFAULT(outOrderCount_, 0.0) };
      inline Data& setOutOrderCount(double outOrderCount) { DARABONBA_PTR_SET_VALUE(outOrderCount_, outOrderCount) };


      // outOutOrderCount Field Functions 
      bool hasOutOutOrderCount() const { return this->outOutOrderCount_ != nullptr;};
      void deleteOutOutOrderCount() { this->outOutOrderCount_ = nullptr;};
      inline double getOutOutOrderCount() const { DARABONBA_PTR_GET_DEFAULT(outOutOrderCount_, 0.0) };
      inline Data& setOutOutOrderCount(double outOutOrderCount) { DARABONBA_PTR_SET_VALUE(outOutOrderCount_, outOutOrderCount) };


      // outPacketCount Field Functions 
      bool hasOutPacketCount() const { return this->outPacketCount_ != nullptr;};
      void deleteOutPacketCount() { this->outPacketCount_ = nullptr;};
      inline double getOutPacketCount() const { DARABONBA_PTR_GET_DEFAULT(outPacketCount_, 0.0) };
      inline Data& setOutPacketCount(double outPacketCount) { DARABONBA_PTR_SET_VALUE(outPacketCount_, outPacketCount) };


      // outRetranCount Field Functions 
      bool hasOutRetranCount() const { return this->outRetranCount_ != nullptr;};
      void deleteOutRetranCount() { this->outRetranCount_ = nullptr;};
      inline double getOutRetranCount() const { DARABONBA_PTR_GET_DEFAULT(outRetranCount_, 0.0) };
      inline Data& setOutRetranCount(double outRetranCount) { DARABONBA_PTR_SET_VALUE(outRetranCount_, outRetranCount) };


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


      // retransmitRate Field Functions 
      bool hasRetransmitRate() const { return this->retransmitRate_ != nullptr;};
      void deleteRetransmitRate() { this->retransmitRate_ = nullptr;};
      inline double getRetransmitRate() const { DARABONBA_PTR_GET_DEFAULT(retransmitRate_, 0.0) };
      inline Data& setRetransmitRate(double retransmitRate) { DARABONBA_PTR_SET_VALUE(retransmitRate_, retransmitRate) };


      // rtt Field Functions 
      bool hasRtt() const { return this->rtt_ != nullptr;};
      void deleteRtt() { this->rtt_ = nullptr;};
      inline double getRtt() const { DARABONBA_PTR_GET_DEFAULT(rtt_, 0.0) };
      inline Data& setRtt(double rtt) { DARABONBA_PTR_SET_VALUE(rtt_, rtt) };


    protected:
      // The access point of Alibaba Cloud.
      // 
      // >  This parameter is valid only if you set **InstanceId** to the instance ID of an Anycast elastic IP address (EIP).
      shared_ptr<string> accessRegion_ {};
      // The beginning of the time range that you queried. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> beginTime_ {};
      // The traffic volume. Unit: bytes.
      shared_ptr<double> byteCount_ {};
      // The local city.
      shared_ptr<string> cloudCity_ {};
      // The local country or region.
      shared_ptr<string> cloudCountry_ {};
      // The local IP address.
      shared_ptr<string> cloudIp_ {};
      // The local ISP.
      shared_ptr<string> cloudIsp_ {};
      // The local port.
      shared_ptr<string> cloudPort_ {};
      // The service code of the instance to which the local IP address belongs.
      shared_ptr<string> cloudProduct_ {};
      // The local province.
      shared_ptr<string> cloudProvince_ {};
      // The direction of Internet traffic. Valid values:
      // 
      // *   **in**: inbound
      // *   **out**: outbound
      shared_ptr<string> direction_ {};
      // The inbound traffic volume. Unit: bytes.
      shared_ptr<double> inByteCount_ {};
      // The number of inbound disordered packets.
      shared_ptr<double> inOutOrderCount_ {};
      // The number of inbound packets.
      shared_ptr<double> inPacketCount_ {};
      // The number of inbound repeated packets.
      shared_ptr<double> inRetranCount_ {};
      // The ID of the instance to which the local IP address belongs.
      shared_ptr<string> instanceId_ {};
      // The remote city. In most cases, this parameter is empty if you set **OtherCountry** to a country except China.
      shared_ptr<string> otherCity_ {};
      // The remote country or region.
      shared_ptr<string> otherCountry_ {};
      // The remote IP address.
      shared_ptr<string> otherIp_ {};
      // The remote ISP.
      shared_ptr<string> otherIsp_ {};
      // The remote port.
      shared_ptr<string> otherPort_ {};
      // The service code of the instance to which the remote IP address belongs. If the IP address is not on the cloud, this parameter is empty.
      shared_ptr<string> otherProduct_ {};
      // The remote province. In most cases, this parameter is empty if you set **OtherCountry** to a country except China.
      shared_ptr<string> otherProvince_ {};
      // The outbound traffic volume. Unit: bytes.
      shared_ptr<double> outByteCount_ {};
      // The number of disordered packets.
      shared_ptr<double> outOrderCount_ {};
      // The number of outbound disordered packets.
      shared_ptr<double> outOutOrderCount_ {};
      // The number of outbound packets.
      shared_ptr<double> outPacketCount_ {};
      // The number of outbound repeated packets.
      shared_ptr<double> outRetranCount_ {};
      // The number of packets.
      shared_ptr<double> packetCount_ {};
      // The protocol number.
      shared_ptr<string> protocol_ {};
      // The retransmission rate of TCP packets.
      shared_ptr<double> retransmitRate_ {};
      // The round-trip time (RTT). Unit: milliseconds.
      shared_ptr<double> rtt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetInternetTupleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetInternetTupleResponseBody::Data>) };
    inline vector<GetInternetTupleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetInternetTupleResponseBody::Data>) };
    inline GetInternetTupleResponseBody& setData(const vector<GetInternetTupleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInternetTupleResponseBody& setData(vector<GetInternetTupleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInternetTupleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking result of Internet traffic data.
    shared_ptr<vector<GetInternetTupleResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
