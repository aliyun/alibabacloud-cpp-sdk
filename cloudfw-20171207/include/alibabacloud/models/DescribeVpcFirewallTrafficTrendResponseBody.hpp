// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLTRAFFICTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_TO_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_TO_JSON(AvgSession, avgSession_);
      DARABONBA_PTR_TO_JSON(AvgTotalBps, avgTotalBps_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthTime, maxBandwidthTime_);
      DARABONBA_PTR_TO_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_TO_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_TO_JSON(MaxSession, maxSession_);
      DARABONBA_PTR_TO_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(TotalInBytes, totalInBytes_);
      DARABONBA_PTR_TO_JSON(TotalOutBytes, totalOutBytes_);
      DARABONBA_PTR_TO_JSON(TotalSession, totalSession_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_FROM_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_FROM_JSON(AvgSession, avgSession_);
      DARABONBA_PTR_FROM_JSON(AvgTotalBps, avgTotalBps_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthTime, maxBandwidthTime_);
      DARABONBA_PTR_FROM_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_FROM_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_FROM_JSON(MaxSession, maxSession_);
      DARABONBA_PTR_FROM_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(TotalInBytes, totalInBytes_);
      DARABONBA_PTR_FROM_JSON(TotalOutBytes, totalOutBytes_);
      DARABONBA_PTR_FROM_JSON(TotalSession, totalSession_);
    };
    DescribeVpcFirewallTrafficTrendResponseBody() = default ;
    DescribeVpcFirewallTrafficTrendResponseBody(const DescribeVpcFirewallTrafficTrendResponseBody &) = default ;
    DescribeVpcFirewallTrafficTrendResponseBody(DescribeVpcFirewallTrafficTrendResponseBody &&) = default ;
    DescribeVpcFirewallTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallTrafficTrendResponseBody() = default ;
    DescribeVpcFirewallTrafficTrendResponseBody& operator=(const DescribeVpcFirewallTrafficTrendResponseBody &) = default ;
    DescribeVpcFirewallTrafficTrendResponseBody& operator=(DescribeVpcFirewallTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(InBps, inBps_);
        DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
        DARABONBA_PTR_TO_JSON(InPps, inPps_);
        DARABONBA_PTR_TO_JSON(NewConn, newConn_);
        DARABONBA_PTR_TO_JSON(OutBps, outBps_);
        DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_TO_JSON(OutPps, outPps_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(InBps, inBps_);
        DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
        DARABONBA_PTR_FROM_JSON(InPps, inPps_);
        DARABONBA_PTR_FROM_JSON(NewConn, newConn_);
        DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
        DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_FROM_JSON(OutPps, outPps_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inBps_ == nullptr
        && this->inBytes_ == nullptr && this->inPps_ == nullptr && this->newConn_ == nullptr && this->outBps_ == nullptr && this->outBytes_ == nullptr
        && this->outPps_ == nullptr && this->sessionCount_ == nullptr && this->time_ == nullptr; };
      // inBps Field Functions 
      bool hasInBps() const { return this->inBps_ != nullptr;};
      void deleteInBps() { this->inBps_ = nullptr;};
      inline int64_t getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
      inline DataList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // inPps Field Functions 
      bool hasInPps() const { return this->inPps_ != nullptr;};
      void deleteInPps() { this->inPps_ = nullptr;};
      inline int64_t getInPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0L) };
      inline DataList& setInPps(int64_t inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


      // newConn Field Functions 
      bool hasNewConn() const { return this->newConn_ != nullptr;};
      void deleteNewConn() { this->newConn_ = nullptr;};
      inline int64_t getNewConn() const { DARABONBA_PTR_GET_DEFAULT(newConn_, 0L) };
      inline DataList& setNewConn(int64_t newConn) { DARABONBA_PTR_SET_VALUE(newConn_, newConn) };


      // outBps Field Functions 
      bool hasOutBps() const { return this->outBps_ != nullptr;};
      void deleteOutBps() { this->outBps_ = nullptr;};
      inline int64_t getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
      inline DataList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline DataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // outPps Field Functions 
      bool hasOutPps() const { return this->outPps_ != nullptr;};
      void deleteOutPps() { this->outPps_ = nullptr;};
      inline int64_t getOutPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0L) };
      inline DataList& setOutPps(int64_t outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
      inline DataList& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The inbound bandwidth. Unit: bit/s.
      shared_ptr<int64_t> inBps_ {};
      // The inbound traffic. Unit: bytes.
      shared_ptr<int64_t> inBytes_ {};
      // The inbound packet forwarding rate. Unit: pps.
      shared_ptr<int64_t> inPps_ {};
      // The number of new connections.
      shared_ptr<int64_t> newConn_ {};
      // The outbound traffic. Unit: bytes.
      shared_ptr<int64_t> outBps_ {};
      // The total outbound network throughput. Unit: bytes.
      shared_ptr<int64_t> outBytes_ {};
      // The outbound packet forwarding rate. Unit: pps.
      shared_ptr<int64_t> outPps_ {};
      // The number of sessions.
      shared_ptr<int64_t> sessionCount_ {};
      // The time when the traffic occurred. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> time_ {};
    };

    virtual bool empty() const override { return this->avgInBps_ == nullptr
        && this->avgOutBps_ == nullptr && this->avgSession_ == nullptr && this->avgTotalBps_ == nullptr && this->dataList_ == nullptr && this->maxBandwidthTime_ == nullptr
        && this->maxInBps_ == nullptr && this->maxOutBps_ == nullptr && this->maxSession_ == nullptr && this->maxTotalBps_ == nullptr && this->requestId_ == nullptr
        && this->totalBytes_ == nullptr && this->totalInBytes_ == nullptr && this->totalOutBytes_ == nullptr && this->totalSession_ == nullptr; };
    // avgInBps Field Functions 
    bool hasAvgInBps() const { return this->avgInBps_ != nullptr;};
    void deleteAvgInBps() { this->avgInBps_ = nullptr;};
    inline int64_t getAvgInBps() const { DARABONBA_PTR_GET_DEFAULT(avgInBps_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setAvgInBps(int64_t avgInBps) { DARABONBA_PTR_SET_VALUE(avgInBps_, avgInBps) };


    // avgOutBps Field Functions 
    bool hasAvgOutBps() const { return this->avgOutBps_ != nullptr;};
    void deleteAvgOutBps() { this->avgOutBps_ = nullptr;};
    inline int64_t getAvgOutBps() const { DARABONBA_PTR_GET_DEFAULT(avgOutBps_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setAvgOutBps(int64_t avgOutBps) { DARABONBA_PTR_SET_VALUE(avgOutBps_, avgOutBps) };


    // avgSession Field Functions 
    bool hasAvgSession() const { return this->avgSession_ != nullptr;};
    void deleteAvgSession() { this->avgSession_ = nullptr;};
    inline int64_t getAvgSession() const { DARABONBA_PTR_GET_DEFAULT(avgSession_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setAvgSession(int64_t avgSession) { DARABONBA_PTR_SET_VALUE(avgSession_, avgSession) };


    // avgTotalBps Field Functions 
    bool hasAvgTotalBps() const { return this->avgTotalBps_ != nullptr;};
    void deleteAvgTotalBps() { this->avgTotalBps_ = nullptr;};
    inline int64_t getAvgTotalBps() const { DARABONBA_PTR_GET_DEFAULT(avgTotalBps_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setAvgTotalBps(int64_t avgTotalBps) { DARABONBA_PTR_SET_VALUE(avgTotalBps_, avgTotalBps) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVpcFirewallTrafficTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVpcFirewallTrafficTrendResponseBody::DataList>) };
    inline vector<DescribeVpcFirewallTrafficTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVpcFirewallTrafficTrendResponseBody::DataList>) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setDataList(const vector<DescribeVpcFirewallTrafficTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setDataList(vector<DescribeVpcFirewallTrafficTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // maxBandwidthTime Field Functions 
    bool hasMaxBandwidthTime() const { return this->maxBandwidthTime_ != nullptr;};
    void deleteMaxBandwidthTime() { this->maxBandwidthTime_ = nullptr;};
    inline int64_t getMaxBandwidthTime() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthTime_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setMaxBandwidthTime(int64_t maxBandwidthTime) { DARABONBA_PTR_SET_VALUE(maxBandwidthTime_, maxBandwidthTime) };


    // maxInBps Field Functions 
    bool hasMaxInBps() const { return this->maxInBps_ != nullptr;};
    void deleteMaxInBps() { this->maxInBps_ = nullptr;};
    inline int64_t getMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(maxInBps_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setMaxInBps(int64_t maxInBps) { DARABONBA_PTR_SET_VALUE(maxInBps_, maxInBps) };


    // maxOutBps Field Functions 
    bool hasMaxOutBps() const { return this->maxOutBps_ != nullptr;};
    void deleteMaxOutBps() { this->maxOutBps_ = nullptr;};
    inline int64_t getMaxOutBps() const { DARABONBA_PTR_GET_DEFAULT(maxOutBps_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setMaxOutBps(int64_t maxOutBps) { DARABONBA_PTR_SET_VALUE(maxOutBps_, maxOutBps) };


    // maxSession Field Functions 
    bool hasMaxSession() const { return this->maxSession_ != nullptr;};
    void deleteMaxSession() { this->maxSession_ = nullptr;};
    inline int64_t getMaxSession() const { DARABONBA_PTR_GET_DEFAULT(maxSession_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setMaxSession(int64_t maxSession) { DARABONBA_PTR_SET_VALUE(maxSession_, maxSession) };


    // maxTotalBps Field Functions 
    bool hasMaxTotalBps() const { return this->maxTotalBps_ != nullptr;};
    void deleteMaxTotalBps() { this->maxTotalBps_ = nullptr;};
    inline int64_t getMaxTotalBps() const { DARABONBA_PTR_GET_DEFAULT(maxTotalBps_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setMaxTotalBps(int64_t maxTotalBps) { DARABONBA_PTR_SET_VALUE(maxTotalBps_, maxTotalBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // totalInBytes Field Functions 
    bool hasTotalInBytes() const { return this->totalInBytes_ != nullptr;};
    void deleteTotalInBytes() { this->totalInBytes_ = nullptr;};
    inline int64_t getTotalInBytes() const { DARABONBA_PTR_GET_DEFAULT(totalInBytes_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setTotalInBytes(int64_t totalInBytes) { DARABONBA_PTR_SET_VALUE(totalInBytes_, totalInBytes) };


    // totalOutBytes Field Functions 
    bool hasTotalOutBytes() const { return this->totalOutBytes_ != nullptr;};
    void deleteTotalOutBytes() { this->totalOutBytes_ = nullptr;};
    inline int64_t getTotalOutBytes() const { DARABONBA_PTR_GET_DEFAULT(totalOutBytes_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setTotalOutBytes(int64_t totalOutBytes) { DARABONBA_PTR_SET_VALUE(totalOutBytes_, totalOutBytes) };


    // totalSession Field Functions 
    bool hasTotalSession() const { return this->totalSession_ != nullptr;};
    void deleteTotalSession() { this->totalSession_ = nullptr;};
    inline int64_t getTotalSession() const { DARABONBA_PTR_GET_DEFAULT(totalSession_, 0L) };
    inline DescribeVpcFirewallTrafficTrendResponseBody& setTotalSession(int64_t totalSession) { DARABONBA_PTR_SET_VALUE(totalSession_, totalSession) };


  protected:
    // The average inbound network throughput. Unit: bit/s.
    shared_ptr<int64_t> avgInBps_ {};
    // The average outbound network throughput. Unit: bit/s.
    shared_ptr<int64_t> avgOutBps_ {};
    // The average number of requests.
    shared_ptr<int64_t> avgSession_ {};
    // The average total network throughput in both the outbound and inbound directions. Unit: bit/s.
    shared_ptr<int64_t> avgTotalBps_ {};
    // The data list.
    shared_ptr<vector<DescribeVpcFirewallTrafficTrendResponseBody::DataList>> dataList_ {};
    // The timestamp when the peak bandwidth occurred. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> maxBandwidthTime_ {};
    // The peak inbound network throughput. Unit: bit/s.
    shared_ptr<int64_t> maxInBps_ {};
    // The peak outbound network throughput. Unit: bit/s.
    shared_ptr<int64_t> maxOutBps_ {};
    // The peak number of requests.
    shared_ptr<int64_t> maxSession_ {};
    // The peak total network throughput in both the outbound and inbound directions. Unit: bit/s.
    shared_ptr<int64_t> maxTotalBps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total traffic. Unit: bytes.
    shared_ptr<int64_t> totalBytes_ {};
    // The total inbound network throughput. Unit: bytes.
    shared_ptr<int64_t> totalInBytes_ {};
    // The total outbound network throughput. Unit: bytes.
    shared_ptr<int64_t> totalOutBytes_ {};
    // The total number of requests.
    shared_ptr<int64_t> totalSession_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
