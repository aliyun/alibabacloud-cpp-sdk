// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTRAFFICTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInternetTrafficTrendResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_TO_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_TO_JSON(AvgSession, avgSession_);
      DARABONBA_PTR_TO_JSON(AvgTotalBps, avgTotalBps_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthTime, maxBandwidthTime_);
      DARABONBA_PTR_TO_JSON(MaxDayExceedBytes, maxDayExceedBytes_);
      DARABONBA_PTR_TO_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_TO_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_TO_JSON(MaxSession, maxSession_);
      DARABONBA_PTR_TO_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(TotalExceedBytes, totalExceedBytes_);
      DARABONBA_PTR_TO_JSON(TotalInBytes, totalInBytes_);
      DARABONBA_PTR_TO_JSON(TotalOutBytes, totalOutBytes_);
      DARABONBA_PTR_TO_JSON(TotalSession, totalSession_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_FROM_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_FROM_JSON(AvgSession, avgSession_);
      DARABONBA_PTR_FROM_JSON(AvgTotalBps, avgTotalBps_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthTime, maxBandwidthTime_);
      DARABONBA_PTR_FROM_JSON(MaxDayExceedBytes, maxDayExceedBytes_);
      DARABONBA_PTR_FROM_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_FROM_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_FROM_JSON(MaxSession, maxSession_);
      DARABONBA_PTR_FROM_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(TotalExceedBytes, totalExceedBytes_);
      DARABONBA_PTR_FROM_JSON(TotalInBytes, totalInBytes_);
      DARABONBA_PTR_FROM_JSON(TotalOutBytes, totalOutBytes_);
      DARABONBA_PTR_FROM_JSON(TotalSession, totalSession_);
    };
    DescribeInternetTrafficTrendResponseBody() = default ;
    DescribeInternetTrafficTrendResponseBody(const DescribeInternetTrafficTrendResponseBody &) = default ;
    DescribeInternetTrafficTrendResponseBody(DescribeInternetTrafficTrendResponseBody &&) = default ;
    DescribeInternetTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTrafficTrendResponseBody() = default ;
    DescribeInternetTrafficTrendResponseBody& operator=(const DescribeInternetTrafficTrendResponseBody &) = default ;
    DescribeInternetTrafficTrendResponseBody& operator=(DescribeInternetTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgInBps_ == nullptr
        && return this->avgOutBps_ == nullptr && return this->avgSession_ == nullptr && return this->avgTotalBps_ == nullptr && return this->dataList_ == nullptr && return this->maxBandwidthTime_ == nullptr
        && return this->maxDayExceedBytes_ == nullptr && return this->maxInBps_ == nullptr && return this->maxOutBps_ == nullptr && return this->maxSession_ == nullptr && return this->maxTotalBps_ == nullptr
        && return this->requestId_ == nullptr && return this->totalBytes_ == nullptr && return this->totalExceedBytes_ == nullptr && return this->totalInBytes_ == nullptr && return this->totalOutBytes_ == nullptr
        && return this->totalSession_ == nullptr; };
    // avgInBps Field Functions 
    bool hasAvgInBps() const { return this->avgInBps_ != nullptr;};
    void deleteAvgInBps() { this->avgInBps_ = nullptr;};
    inline int64_t avgInBps() const { DARABONBA_PTR_GET_DEFAULT(avgInBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setAvgInBps(int64_t avgInBps) { DARABONBA_PTR_SET_VALUE(avgInBps_, avgInBps) };


    // avgOutBps Field Functions 
    bool hasAvgOutBps() const { return this->avgOutBps_ != nullptr;};
    void deleteAvgOutBps() { this->avgOutBps_ = nullptr;};
    inline int64_t avgOutBps() const { DARABONBA_PTR_GET_DEFAULT(avgOutBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setAvgOutBps(int64_t avgOutBps) { DARABONBA_PTR_SET_VALUE(avgOutBps_, avgOutBps) };


    // avgSession Field Functions 
    bool hasAvgSession() const { return this->avgSession_ != nullptr;};
    void deleteAvgSession() { this->avgSession_ = nullptr;};
    inline int64_t avgSession() const { DARABONBA_PTR_GET_DEFAULT(avgSession_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setAvgSession(int64_t avgSession) { DARABONBA_PTR_SET_VALUE(avgSession_, avgSession) };


    // avgTotalBps Field Functions 
    bool hasAvgTotalBps() const { return this->avgTotalBps_ != nullptr;};
    void deleteAvgTotalBps() { this->avgTotalBps_ = nullptr;};
    inline int64_t avgTotalBps() const { DARABONBA_PTR_GET_DEFAULT(avgTotalBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setAvgTotalBps(int64_t avgTotalBps) { DARABONBA_PTR_SET_VALUE(avgTotalBps_, avgTotalBps) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetTrafficTrendResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetTrafficTrendResponseBodyDataList>) };
    inline vector<DescribeInternetTrafficTrendResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetTrafficTrendResponseBodyDataList>) };
    inline DescribeInternetTrafficTrendResponseBody& setDataList(const vector<DescribeInternetTrafficTrendResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetTrafficTrendResponseBody& setDataList(vector<DescribeInternetTrafficTrendResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // maxBandwidthTime Field Functions 
    bool hasMaxBandwidthTime() const { return this->maxBandwidthTime_ != nullptr;};
    void deleteMaxBandwidthTime() { this->maxBandwidthTime_ = nullptr;};
    inline int64_t maxBandwidthTime() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthTime_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setMaxBandwidthTime(int64_t maxBandwidthTime) { DARABONBA_PTR_SET_VALUE(maxBandwidthTime_, maxBandwidthTime) };


    // maxDayExceedBytes Field Functions 
    bool hasMaxDayExceedBytes() const { return this->maxDayExceedBytes_ != nullptr;};
    void deleteMaxDayExceedBytes() { this->maxDayExceedBytes_ = nullptr;};
    inline int64_t maxDayExceedBytes() const { DARABONBA_PTR_GET_DEFAULT(maxDayExceedBytes_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setMaxDayExceedBytes(int64_t maxDayExceedBytes) { DARABONBA_PTR_SET_VALUE(maxDayExceedBytes_, maxDayExceedBytes) };


    // maxInBps Field Functions 
    bool hasMaxInBps() const { return this->maxInBps_ != nullptr;};
    void deleteMaxInBps() { this->maxInBps_ = nullptr;};
    inline int64_t maxInBps() const { DARABONBA_PTR_GET_DEFAULT(maxInBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setMaxInBps(int64_t maxInBps) { DARABONBA_PTR_SET_VALUE(maxInBps_, maxInBps) };


    // maxOutBps Field Functions 
    bool hasMaxOutBps() const { return this->maxOutBps_ != nullptr;};
    void deleteMaxOutBps() { this->maxOutBps_ = nullptr;};
    inline int64_t maxOutBps() const { DARABONBA_PTR_GET_DEFAULT(maxOutBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setMaxOutBps(int64_t maxOutBps) { DARABONBA_PTR_SET_VALUE(maxOutBps_, maxOutBps) };


    // maxSession Field Functions 
    bool hasMaxSession() const { return this->maxSession_ != nullptr;};
    void deleteMaxSession() { this->maxSession_ = nullptr;};
    inline int64_t maxSession() const { DARABONBA_PTR_GET_DEFAULT(maxSession_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setMaxSession(int64_t maxSession) { DARABONBA_PTR_SET_VALUE(maxSession_, maxSession) };


    // maxTotalBps Field Functions 
    bool hasMaxTotalBps() const { return this->maxTotalBps_ != nullptr;};
    void deleteMaxTotalBps() { this->maxTotalBps_ = nullptr;};
    inline int64_t maxTotalBps() const { DARABONBA_PTR_GET_DEFAULT(maxTotalBps_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setMaxTotalBps(int64_t maxTotalBps) { DARABONBA_PTR_SET_VALUE(maxTotalBps_, maxTotalBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // totalExceedBytes Field Functions 
    bool hasTotalExceedBytes() const { return this->totalExceedBytes_ != nullptr;};
    void deleteTotalExceedBytes() { this->totalExceedBytes_ = nullptr;};
    inline int64_t totalExceedBytes() const { DARABONBA_PTR_GET_DEFAULT(totalExceedBytes_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setTotalExceedBytes(int64_t totalExceedBytes) { DARABONBA_PTR_SET_VALUE(totalExceedBytes_, totalExceedBytes) };


    // totalInBytes Field Functions 
    bool hasTotalInBytes() const { return this->totalInBytes_ != nullptr;};
    void deleteTotalInBytes() { this->totalInBytes_ = nullptr;};
    inline int64_t totalInBytes() const { DARABONBA_PTR_GET_DEFAULT(totalInBytes_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setTotalInBytes(int64_t totalInBytes) { DARABONBA_PTR_SET_VALUE(totalInBytes_, totalInBytes) };


    // totalOutBytes Field Functions 
    bool hasTotalOutBytes() const { return this->totalOutBytes_ != nullptr;};
    void deleteTotalOutBytes() { this->totalOutBytes_ = nullptr;};
    inline int64_t totalOutBytes() const { DARABONBA_PTR_GET_DEFAULT(totalOutBytes_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setTotalOutBytes(int64_t totalOutBytes) { DARABONBA_PTR_SET_VALUE(totalOutBytes_, totalOutBytes) };


    // totalSession Field Functions 
    bool hasTotalSession() const { return this->totalSession_ != nullptr;};
    void deleteTotalSession() { this->totalSession_ = nullptr;};
    inline int64_t totalSession() const { DARABONBA_PTR_GET_DEFAULT(totalSession_, 0L) };
    inline DescribeInternetTrafficTrendResponseBody& setTotalSession(int64_t totalSession) { DARABONBA_PTR_SET_VALUE(totalSession_, totalSession) };


  protected:
    // The average inbound network throughput, which indicates the average number of bits that are sent inbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> avgInBps_ = nullptr;
    // The average outbound network throughput, which indicates the average number of bits that are sent outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> avgOutBps_ = nullptr;
    // The average number of requests.
    std::shared_ptr<int64_t> avgSession_ = nullptr;
    // The total average inbound and outbound network throughput, which indicates the average number of bits that are sent inbound and outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> avgTotalBps_ = nullptr;
    // The statistics on traffic.
    std::shared_ptr<vector<DescribeInternetTrafficTrendResponseBodyDataList>> dataList_ = nullptr;
    // The timestamp generated when the bandwidth reaches the peak value. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> maxBandwidthTime_ = nullptr;
    // The maximum volume of excess traffic allowed per day.
    std::shared_ptr<int64_t> maxDayExceedBytes_ = nullptr;
    // The maximum inbound network throughput, which indicates the maximum number of bits that are sent inbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> maxInBps_ = nullptr;
    // The maximum outbound network throughput, which indicates the maximum number of bits that are sent outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> maxOutBps_ = nullptr;
    // The number of requests during the peak hour of the network throughout.
    std::shared_ptr<int64_t> maxSession_ = nullptr;
    // The total maximum inbound and outbound network throughput, which indicates the maximum number of bits that are sent inbound and outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> maxTotalBps_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total inbound and outbound network throughput, which indicates the total number of bytes that are sent inbound and outbound. Unit: bytes.
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
    // The total volume of excess traffic.
    std::shared_ptr<int64_t> totalExceedBytes_ = nullptr;
    // The inbound network throughput, which indicates the total number of bytes that are sent inbound. Unit: bytes.
    std::shared_ptr<int64_t> totalInBytes_ = nullptr;
    // The outbound network throughput, which indicates the total number of bytes that are sent outbound. Unit: bytes.
    std::shared_ptr<int64_t> totalOutBytes_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> totalSession_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
