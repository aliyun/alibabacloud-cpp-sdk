// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERASSETIPTRAFFICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERASSETIPTRAFFICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserAssetIPTrafficInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAssetIPTrafficInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InBps, inBps_);
      DARABONBA_PTR_TO_JSON(InPps, inPps_);
      DARABONBA_PTR_TO_JSON(NewConn, newConn_);
      DARABONBA_PTR_TO_JSON(OutBps, outBps_);
      DARABONBA_PTR_TO_JSON(OutPps, outPps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAssetIPTrafficInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InBps, inBps_);
      DARABONBA_PTR_FROM_JSON(InPps, inPps_);
      DARABONBA_PTR_FROM_JSON(NewConn, newConn_);
      DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
      DARABONBA_PTR_FROM_JSON(OutPps, outPps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeUserAssetIPTrafficInfoResponseBody() = default ;
    DescribeUserAssetIPTrafficInfoResponseBody(const DescribeUserAssetIPTrafficInfoResponseBody &) = default ;
    DescribeUserAssetIPTrafficInfoResponseBody(DescribeUserAssetIPTrafficInfoResponseBody &&) = default ;
    DescribeUserAssetIPTrafficInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAssetIPTrafficInfoResponseBody() = default ;
    DescribeUserAssetIPTrafficInfoResponseBody& operator=(const DescribeUserAssetIPTrafficInfoResponseBody &) = default ;
    DescribeUserAssetIPTrafficInfoResponseBody& operator=(DescribeUserAssetIPTrafficInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->inBps_ == nullptr && this->inPps_ == nullptr && this->newConn_ == nullptr && this->outBps_ == nullptr && this->outPps_ == nullptr
        && this->requestId_ == nullptr && this->sessionCount_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline int64_t getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // inPps Field Functions 
    bool hasInPps() const { return this->inPps_ != nullptr;};
    void deleteInPps() { this->inPps_ = nullptr;};
    inline int64_t getInPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setInPps(int64_t inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


    // newConn Field Functions 
    bool hasNewConn() const { return this->newConn_ != nullptr;};
    void deleteNewConn() { this->newConn_ = nullptr;};
    inline int64_t getNewConn() const { DARABONBA_PTR_GET_DEFAULT(newConn_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setNewConn(int64_t newConn) { DARABONBA_PTR_SET_VALUE(newConn_, newConn) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline int64_t getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    // outPps Field Functions 
    bool hasOutPps() const { return this->outPps_ != nullptr;};
    void deleteOutPps() { this->outPps_ = nullptr;};
    inline int64_t getOutPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setOutPps(int64_t outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUserAssetIPTrafficInfoResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> endTime_ {};
    // The network throughput, which indicates the inbound traffic rate. Unit: bit/s.
    shared_ptr<int64_t> inBps_ {};
    // The inbound network throughput, which indicates the number of packets that are sent inbound per second. Unit: packets per second (pps).
    shared_ptr<int64_t> inPps_ {};
    // The new connection creation rate.
    shared_ptr<int64_t> newConn_ {};
    // The network throughput, which indicates the outbound traffic rate. Unit: bit/s.
    shared_ptr<int64_t> outBps_ {};
    // The outbound network throughput, which indicates the number of packets that are sent outbound per second. Unit: pps.
    shared_ptr<int64_t> outPps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of requests.
    shared_ptr<int64_t> sessionCount_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
