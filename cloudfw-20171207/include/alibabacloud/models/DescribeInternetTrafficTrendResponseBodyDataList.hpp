// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTrafficTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(InBps, inBps_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(InPps, inPps_);
      DARABONBA_PTR_TO_JSON(NewConn, newConn_);
      DARABONBA_PTR_TO_JSON(OutBps, outBps_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(OutPps, outPps_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TotalBps, totalBps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(InBps, inBps_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(InPps, inPps_);
      DARABONBA_PTR_FROM_JSON(NewConn, newConn_);
      DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(OutPps, outPps_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TotalBps, totalBps_);
    };
    DescribeInternetTrafficTrendResponseBodyDataList() = default ;
    DescribeInternetTrafficTrendResponseBodyDataList(const DescribeInternetTrafficTrendResponseBodyDataList &) = default ;
    DescribeInternetTrafficTrendResponseBodyDataList(DescribeInternetTrafficTrendResponseBodyDataList &&) = default ;
    DescribeInternetTrafficTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTrafficTrendResponseBodyDataList() = default ;
    DescribeInternetTrafficTrendResponseBodyDataList& operator=(const DescribeInternetTrafficTrendResponseBodyDataList &) = default ;
    DescribeInternetTrafficTrendResponseBodyDataList& operator=(DescribeInternetTrafficTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inBps_ != nullptr
        && this->inBytes_ != nullptr && this->inPps_ != nullptr && this->newConn_ != nullptr && this->outBps_ != nullptr && this->outBytes_ != nullptr
        && this->outPps_ != nullptr && this->sessionCount_ != nullptr && this->time_ != nullptr && this->totalBps_ != nullptr; };
    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline int64_t inBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // inPps Field Functions 
    bool hasInPps() const { return this->inPps_ != nullptr;};
    void deleteInPps() { this->inPps_ = nullptr;};
    inline int64_t inPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setInPps(int64_t inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


    // newConn Field Functions 
    bool hasNewConn() const { return this->newConn_ != nullptr;};
    void deleteNewConn() { this->newConn_ = nullptr;};
    inline int64_t newConn() const { DARABONBA_PTR_GET_DEFAULT(newConn_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setNewConn(int64_t newConn) { DARABONBA_PTR_SET_VALUE(newConn_, newConn) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline int64_t outBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // outPps Field Functions 
    bool hasOutPps() const { return this->outPps_ != nullptr;};
    void deleteOutPps() { this->outPps_ = nullptr;};
    inline int64_t outPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setOutPps(int64_t outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int32_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // totalBps Field Functions 
    bool hasTotalBps() const { return this->totalBps_ != nullptr;};
    void deleteTotalBps() { this->totalBps_ = nullptr;};
    inline int64_t totalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBodyDataList& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


  protected:
    // The inbound network throughput, which indicates the number of bits that are sent inbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> inBps_ = nullptr;
    // The inbound network throughput, which indicates the total number of bytes that are sent inbound. Unit: bytes.
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    // The inbound network throughput, which indicates the number of packets that are sent inbound per second. Unit: packets per second (pps).
    std::shared_ptr<int64_t> inPps_ = nullptr;
    // The number of new connections.
    std::shared_ptr<int64_t> newConn_ = nullptr;
    // The outbound network throughput, which indicates the number of bits that are sent outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> outBps_ = nullptr;
    // The outbound network throughput, which indicates the total number of bytes that are sent outbound. Unit: bytes.
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    // The outbound network throughput, which indicates the number of packets that are sent outbound per second. Unit: pps.
    std::shared_ptr<int64_t> outPps_ = nullptr;
    // The number of requests.
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    // The time when traffic is generated. The value is a UNIX timestamp. Unit: seconds.
    // 
    // If processing is not complete at this point in time, -1 is returned for all other fields.
    std::shared_ptr<int32_t> time_ = nullptr;
    // The total outbound and inbound network throughput, which indicates the total number of bits that are sent inbound and outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> totalBps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
