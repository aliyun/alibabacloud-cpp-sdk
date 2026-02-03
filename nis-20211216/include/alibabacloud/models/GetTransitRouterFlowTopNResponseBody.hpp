// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSITROUTERFLOWTOPNRESPONSEBODY_HPP_
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
  class GetTransitRouterFlowTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransitRouterFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterFlowTopN, transitRouterFlowTopN_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransitRouterFlowTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterFlowTopN, transitRouterFlowTopN_);
    };
    GetTransitRouterFlowTopNResponseBody() = default ;
    GetTransitRouterFlowTopNResponseBody(const GetTransitRouterFlowTopNResponseBody &) = default ;
    GetTransitRouterFlowTopNResponseBody(GetTransitRouterFlowTopNResponseBody &&) = default ;
    GetTransitRouterFlowTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransitRouterFlowTopNResponseBody() = default ;
    GetTransitRouterFlowTopNResponseBody& operator=(const GetTransitRouterFlowTopNResponseBody &) = default ;
    GetTransitRouterFlowTopNResponseBody& operator=(GetTransitRouterFlowTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterFlowTopN : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterFlowTopN& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TransitRouterFlowTopN& obj) { 
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
      TransitRouterFlowTopN() = default ;
      TransitRouterFlowTopN(const TransitRouterFlowTopN &) = default ;
      TransitRouterFlowTopN(TransitRouterFlowTopN &&) = default ;
      TransitRouterFlowTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterFlowTopN() = default ;
      TransitRouterFlowTopN& operator=(const TransitRouterFlowTopN &) = default ;
      TransitRouterFlowTopN& operator=(TransitRouterFlowTopN &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->bandwithPackageId_ == nullptr && this->bytes_ == nullptr && this->cenId_ == nullptr && this->endTime_ == nullptr && this->otherIp_ == nullptr
        && this->otherPort_ == nullptr && this->otherRegion_ == nullptr && this->packets_ == nullptr && this->protocol_ == nullptr && this->startTime_ == nullptr
        && this->thisIp_ == nullptr && this->thisPort_ == nullptr && this->thisRegion_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline TransitRouterFlowTopN& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // bandwithPackageId Field Functions 
      bool hasBandwithPackageId() const { return this->bandwithPackageId_ != nullptr;};
      void deleteBandwithPackageId() { this->bandwithPackageId_ = nullptr;};
      inline string getBandwithPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwithPackageId_, "") };
      inline TransitRouterFlowTopN& setBandwithPackageId(string bandwithPackageId) { DARABONBA_PTR_SET_VALUE(bandwithPackageId_, bandwithPackageId) };


      // bytes Field Functions 
      bool hasBytes() const { return this->bytes_ != nullptr;};
      void deleteBytes() { this->bytes_ = nullptr;};
      inline double getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0.0) };
      inline TransitRouterFlowTopN& setBytes(double bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline TransitRouterFlowTopN& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TransitRouterFlowTopN& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // otherIp Field Functions 
      bool hasOtherIp() const { return this->otherIp_ != nullptr;};
      void deleteOtherIp() { this->otherIp_ = nullptr;};
      inline string getOtherIp() const { DARABONBA_PTR_GET_DEFAULT(otherIp_, "") };
      inline TransitRouterFlowTopN& setOtherIp(string otherIp) { DARABONBA_PTR_SET_VALUE(otherIp_, otherIp) };


      // otherPort Field Functions 
      bool hasOtherPort() const { return this->otherPort_ != nullptr;};
      void deleteOtherPort() { this->otherPort_ = nullptr;};
      inline string getOtherPort() const { DARABONBA_PTR_GET_DEFAULT(otherPort_, "") };
      inline TransitRouterFlowTopN& setOtherPort(string otherPort) { DARABONBA_PTR_SET_VALUE(otherPort_, otherPort) };


      // otherRegion Field Functions 
      bool hasOtherRegion() const { return this->otherRegion_ != nullptr;};
      void deleteOtherRegion() { this->otherRegion_ = nullptr;};
      inline string getOtherRegion() const { DARABONBA_PTR_GET_DEFAULT(otherRegion_, "") };
      inline TransitRouterFlowTopN& setOtherRegion(string otherRegion) { DARABONBA_PTR_SET_VALUE(otherRegion_, otherRegion) };


      // packets Field Functions 
      bool hasPackets() const { return this->packets_ != nullptr;};
      void deletePackets() { this->packets_ = nullptr;};
      inline double getPackets() const { DARABONBA_PTR_GET_DEFAULT(packets_, 0.0) };
      inline TransitRouterFlowTopN& setPackets(double packets) { DARABONBA_PTR_SET_VALUE(packets_, packets) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline TransitRouterFlowTopN& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TransitRouterFlowTopN& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // thisIp Field Functions 
      bool hasThisIp() const { return this->thisIp_ != nullptr;};
      void deleteThisIp() { this->thisIp_ = nullptr;};
      inline string getThisIp() const { DARABONBA_PTR_GET_DEFAULT(thisIp_, "") };
      inline TransitRouterFlowTopN& setThisIp(string thisIp) { DARABONBA_PTR_SET_VALUE(thisIp_, thisIp) };


      // thisPort Field Functions 
      bool hasThisPort() const { return this->thisPort_ != nullptr;};
      void deleteThisPort() { this->thisPort_ = nullptr;};
      inline string getThisPort() const { DARABONBA_PTR_GET_DEFAULT(thisPort_, "") };
      inline TransitRouterFlowTopN& setThisPort(string thisPort) { DARABONBA_PTR_SET_VALUE(thisPort_, thisPort) };


      // thisRegion Field Functions 
      bool hasThisRegion() const { return this->thisRegion_ != nullptr;};
      void deleteThisRegion() { this->thisRegion_ = nullptr;};
      inline string getThisRegion() const { DARABONBA_PTR_GET_DEFAULT(thisRegion_, "") };
      inline TransitRouterFlowTopN& setThisRegion(string thisRegion) { DARABONBA_PTR_SET_VALUE(thisRegion_, thisRegion) };


    protected:
      // The account ID.
      shared_ptr<string> accountId_ {};
      // The ID of the CEN bandwidth plan.
      shared_ptr<string> bandwithPackageId_ {};
      // The total volume of traffic in the specified time range.
      shared_ptr<double> bytes_ {};
      // The CEN instance ID.
      shared_ptr<string> cenId_ {};
      // The end of the time range that you queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The remote IP address.
      shared_ptr<string> otherIp_ {};
      // The remote port.
      shared_ptr<string> otherPort_ {};
      // The remote region where the **remote IP address** resides.
      shared_ptr<string> otherRegion_ {};
      // The total number of packets in the specified time range.
      shared_ptr<double> packets_ {};
      // The protocol number.
      shared_ptr<string> protocol_ {};
      // The beginning of the time range that you queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The local IP address.
      shared_ptr<string> thisIp_ {};
      // The local port.
      shared_ptr<string> thisPort_ {};
      // The local region where the **local IP address** resides.
      shared_ptr<string> thisRegion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transitRouterFlowTopN_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTransitRouterFlowTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterFlowTopN Field Functions 
    bool hasTransitRouterFlowTopN() const { return this->transitRouterFlowTopN_ != nullptr;};
    void deleteTransitRouterFlowTopN() { this->transitRouterFlowTopN_ = nullptr;};
    inline const vector<GetTransitRouterFlowTopNResponseBody::TransitRouterFlowTopN> & getTransitRouterFlowTopN() const { DARABONBA_PTR_GET_CONST(transitRouterFlowTopN_, vector<GetTransitRouterFlowTopNResponseBody::TransitRouterFlowTopN>) };
    inline vector<GetTransitRouterFlowTopNResponseBody::TransitRouterFlowTopN> getTransitRouterFlowTopN() { DARABONBA_PTR_GET(transitRouterFlowTopN_, vector<GetTransitRouterFlowTopNResponseBody::TransitRouterFlowTopN>) };
    inline GetTransitRouterFlowTopNResponseBody& setTransitRouterFlowTopN(const vector<GetTransitRouterFlowTopNResponseBody::TransitRouterFlowTopN> & transitRouterFlowTopN) { DARABONBA_PTR_SET_VALUE(transitRouterFlowTopN_, transitRouterFlowTopN) };
    inline GetTransitRouterFlowTopNResponseBody& setTransitRouterFlowTopN(vector<GetTransitRouterFlowTopNResponseBody::TransitRouterFlowTopN> && transitRouterFlowTopN) { DARABONBA_PTR_SET_RVALUE(transitRouterFlowTopN_, transitRouterFlowTopN) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ranking result of inter-region traffic data.
    shared_ptr<vector<GetTransitRouterFlowTopNResponseBody::TransitRouterFlowTopN>> transitRouterFlowTopN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
