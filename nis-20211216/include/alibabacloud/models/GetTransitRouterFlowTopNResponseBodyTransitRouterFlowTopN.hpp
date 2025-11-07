// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNRESPONSEBODYTRANSITROUTERFLOWTOPN_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNRESPONSEBODYTRANSITROUTERFLOWTOPN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BandwithPackageId, bandwithPackageId_);
      DARABONBA_PTR_TO_JSON(Bytes, bytes_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_TO_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_TO_JSON(OtherRegion, otherRegion_);
      DARABONBA_PTR_TO_JSON(Packets, packets_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(ThisIp, thisIp_);
      DARABONBA_PTR_TO_JSON(ThisPort, thisPort_);
      DARABONBA_PTR_TO_JSON(ThisRegion, thisRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BandwithPackageId, bandwithPackageId_);
      DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OtherIp, otherIp_);
      DARABONBA_PTR_FROM_JSON(OtherPort, otherPort_);
      DARABONBA_PTR_FROM_JSON(OtherRegion, otherRegion_);
      DARABONBA_PTR_FROM_JSON(Packets, packets_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(ThisIp, thisIp_);
      DARABONBA_PTR_FROM_JSON(ThisPort, thisPort_);
      DARABONBA_PTR_FROM_JSON(ThisRegion, thisRegion_);
    };
    GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN() = default ;
    GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN(const GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN &) = default ;
    GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN(GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN &&) = default ;
    GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN() = default ;
    GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& operator=(const GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN &) = default ;
    GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& operator=(GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->bandwithPackageId_ == nullptr && return this->bytes_ == nullptr && return this->cenId_ == nullptr && return this->endTime_ == nullptr && return this->otherIp_ == nullptr
        && return this->otherPort_ == nullptr && return this->otherRegion_ == nullptr && return this->packets_ == nullptr && return this->protocol_ == nullptr && return this->startTime_ == nullptr
        && return this->thisIp_ == nullptr && return this->thisPort_ == nullptr && return this->thisRegion_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // bandwithPackageId Field Functions 
    bool hasBandwithPackageId() const { return this->bandwithPackageId_ != nullptr;};
    void deleteBandwithPackageId() { this->bandwithPackageId_ = nullptr;};
    inline string bandwithPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwithPackageId_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setBandwithPackageId(string bandwithPackageId) { DARABONBA_PTR_SET_VALUE(bandwithPackageId_, bandwithPackageId) };


    // bytes Field Functions 
    bool hasBytes() const { return this->bytes_ != nullptr;};
    void deleteBytes() { this->bytes_ = nullptr;};
    inline double bytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0.0) };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setBytes(double bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // otherIp Field Functions 
    bool hasOtherIp() const { return this->otherIp_ != nullptr;};
    void deleteOtherIp() { this->otherIp_ = nullptr;};
    inline string otherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


    // otherPort Field Functions 
    bool hasOtherPort() const { return this->otherPort_ != nullptr;};
    void deleteOtherPort() { this->otherPort_ = nullptr;};
    inline string otherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


    // otherRegion Field Functions 
    bool hasOtherRegion() const { return this->otherRegion_ != nullptr;};
    void deleteOtherRegion() { this->otherRegion_ = nullptr;};
    inline string otherRegion() const { DARABONBA_PTR_GET_DEFAULT(otherRegion_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setOtherRegion(string otherRegion) { DARABONBA_PTR_SET_VALUE(otherRegion_, otherRegion) };


    // packets Field Functions 
    bool hasPackets() const { return this->packets_ != nullptr;};
    void deletePackets() { this->packets_ = nullptr;};
    inline double packets() const { DARABONBA_PTR_GET_DEFAULT(packets_, 0.0) };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setPackets(double packets) { DARABONBA_PTR_SET_VALUE(packets_, packets) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // thisIp Field Functions 
    bool hasThisIp() const { return this->thisIp_ != nullptr;};
    void deleteThisIp() { this->thisIp_ = nullptr;};
    inline string thisIp() const { DARABONBA_PTR_GET_DEFAULT(thisIp_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setThisIp(string thisIp) { DARABONBA_PTR_SET_VALUE(thisIp_, thisIp) };


    // thisPort Field Functions 
    bool hasThisPort() const { return this->thisPort_ != nullptr;};
    void deleteThisPort() { this->thisPort_ = nullptr;};
    inline string thisPort() const { DARABONBA_PTR_GET_DEFAULT(thisPort_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setThisPort(string thisPort) { DARABONBA_PTR_SET_VALUE(thisPort_, thisPort) };


    // thisRegion Field Functions 
    bool hasThisRegion() const { return this->thisRegion_ != nullptr;};
    void deleteThisRegion() { this->thisRegion_ = nullptr;};
    inline string thisRegion() const { DARABONBA_PTR_GET_DEFAULT(thisRegion_, "") };
    inline GetTransitRouterFlowTopNResponseBodyTransitRouterFlowTopN& setThisRegion(string thisRegion) { DARABONBA_PTR_SET_VALUE(thisRegion_, thisRegion) };


  protected:
    // The account ID.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the CEN bandwidth plan.
    std::shared_ptr<string> bandwithPackageId_ = nullptr;
    // The total volume of traffic in the specified time range.
    std::shared_ptr<double> bytes_ = nullptr;
    // The CEN instance ID.
    std::shared_ptr<string> cenId_ = nullptr;
    // The end of the time range that you queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The remote IP address.
    std::shared_ptr<string> otherIp_ = nullptr;
    // The remote port.
    std::shared_ptr<string> otherPort_ = nullptr;
    // The remote region where the **remote IP address** resides.
    std::shared_ptr<string> otherRegion_ = nullptr;
    // The total number of packets in the specified time range.
    std::shared_ptr<double> packets_ = nullptr;
    // The protocol number.
    std::shared_ptr<string> protocol_ = nullptr;
    // The beginning of the time range that you queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The local IP address.
    std::shared_ptr<string> thisIp_ = nullptr;
    // The local port.
    std::shared_ptr<string> thisPort_ = nullptr;
    // The local region where the **local IP address** resides.
    std::shared_ptr<string> thisRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
