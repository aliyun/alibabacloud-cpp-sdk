// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTRAFFICTRENDRESPONSEBODY_HPP_
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
  class DescribeNatFirewallTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_TO_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_TO_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_FROM_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_FROM_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatFirewallTrafficTrendResponseBody() = default ;
    DescribeNatFirewallTrafficTrendResponseBody(const DescribeNatFirewallTrafficTrendResponseBody &) = default ;
    DescribeNatFirewallTrafficTrendResponseBody(DescribeNatFirewallTrafficTrendResponseBody &&) = default ;
    DescribeNatFirewallTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallTrafficTrendResponseBody() = default ;
    DescribeNatFirewallTrafficTrendResponseBody& operator=(const DescribeNatFirewallTrafficTrendResponseBody &) = default ;
    DescribeNatFirewallTrafficTrendResponseBody& operator=(DescribeNatFirewallTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(MaxInBps, maxInBps_);
        DARABONBA_PTR_TO_JSON(MaxOutBps, maxOutBps_);
        DARABONBA_PTR_TO_JSON(MaxTotalBps, maxTotalBps_);
        DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxInBps, maxInBps_);
        DARABONBA_PTR_FROM_JSON(MaxOutBps, maxOutBps_);
        DARABONBA_PTR_FROM_JSON(MaxTotalBps, maxTotalBps_);
        DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
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
      virtual bool empty() const override { return this->maxInBps_ == nullptr
        && this->maxOutBps_ == nullptr && this->maxTotalBps_ == nullptr && this->trafficTime_ == nullptr; };
      // maxInBps Field Functions 
      bool hasMaxInBps() const { return this->maxInBps_ != nullptr;};
      void deleteMaxInBps() { this->maxInBps_ = nullptr;};
      inline int64_t getMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(maxInBps_, 0L) };
      inline DataList& setMaxInBps(int64_t maxInBps) { DARABONBA_PTR_SET_VALUE(maxInBps_, maxInBps) };


      // maxOutBps Field Functions 
      bool hasMaxOutBps() const { return this->maxOutBps_ != nullptr;};
      void deleteMaxOutBps() { this->maxOutBps_ = nullptr;};
      inline int64_t getMaxOutBps() const { DARABONBA_PTR_GET_DEFAULT(maxOutBps_, 0L) };
      inline DataList& setMaxOutBps(int64_t maxOutBps) { DARABONBA_PTR_SET_VALUE(maxOutBps_, maxOutBps) };


      // maxTotalBps Field Functions 
      bool hasMaxTotalBps() const { return this->maxTotalBps_ != nullptr;};
      void deleteMaxTotalBps() { this->maxTotalBps_ = nullptr;};
      inline int64_t getMaxTotalBps() const { DARABONBA_PTR_GET_DEFAULT(maxTotalBps_, 0L) };
      inline DataList& setMaxTotalBps(int64_t maxTotalBps) { DARABONBA_PTR_SET_VALUE(maxTotalBps_, maxTotalBps) };


      // trafficTime Field Functions 
      bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
      void deleteTrafficTime() { this->trafficTime_ = nullptr;};
      inline int64_t getTrafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, 0L) };
      inline DataList& setTrafficTime(int64_t trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


    protected:
      // The maximum inbound network throughput, which indicates the maximum number of bits that are sent inbound per second. Unit: bit/s.
      shared_ptr<int64_t> maxInBps_ {};
      // The maximum outbound network throughput, which indicates the maximum number of bits that are sent outbound per second. Unit: bit/s.
      shared_ptr<int64_t> maxOutBps_ {};
      // The total maximum inbound and outbound network throughput, which indicates the maximum number of bits that are sent inbound and outbound per second. Unit: bit/s.
      shared_ptr<int64_t> maxTotalBps_ {};
      // The time range to query. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> trafficTime_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->maxInBps_ == nullptr && this->maxOutBps_ == nullptr && this->maxTotalBps_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeNatFirewallTrafficTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeNatFirewallTrafficTrendResponseBody::DataList>) };
    inline vector<DescribeNatFirewallTrafficTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeNatFirewallTrafficTrendResponseBody::DataList>) };
    inline DescribeNatFirewallTrafficTrendResponseBody& setDataList(const vector<DescribeNatFirewallTrafficTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeNatFirewallTrafficTrendResponseBody& setDataList(vector<DescribeNatFirewallTrafficTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // maxInBps Field Functions 
    bool hasMaxInBps() const { return this->maxInBps_ != nullptr;};
    void deleteMaxInBps() { this->maxInBps_ = nullptr;};
    inline int64_t getMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(maxInBps_, 0L) };
    inline DescribeNatFirewallTrafficTrendResponseBody& setMaxInBps(int64_t maxInBps) { DARABONBA_PTR_SET_VALUE(maxInBps_, maxInBps) };


    // maxOutBps Field Functions 
    bool hasMaxOutBps() const { return this->maxOutBps_ != nullptr;};
    void deleteMaxOutBps() { this->maxOutBps_ = nullptr;};
    inline int64_t getMaxOutBps() const { DARABONBA_PTR_GET_DEFAULT(maxOutBps_, 0L) };
    inline DescribeNatFirewallTrafficTrendResponseBody& setMaxOutBps(int64_t maxOutBps) { DARABONBA_PTR_SET_VALUE(maxOutBps_, maxOutBps) };


    // maxTotalBps Field Functions 
    bool hasMaxTotalBps() const { return this->maxTotalBps_ != nullptr;};
    void deleteMaxTotalBps() { this->maxTotalBps_ = nullptr;};
    inline int64_t getMaxTotalBps() const { DARABONBA_PTR_GET_DEFAULT(maxTotalBps_, 0L) };
    inline DescribeNatFirewallTrafficTrendResponseBody& setMaxTotalBps(int64_t maxTotalBps) { DARABONBA_PTR_SET_VALUE(maxTotalBps_, maxTotalBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on traffic.
    shared_ptr<vector<DescribeNatFirewallTrafficTrendResponseBody::DataList>> dataList_ {};
    // The maximum inbound network throughput, which indicates the maximum number of bits that are sent inbound per second. Unit: bit/s.
    shared_ptr<int64_t> maxInBps_ {};
    // The maximum outbound network throughput, which indicates the maximum number of bits that are sent outbound per second. Unit: bit/s.
    shared_ptr<int64_t> maxOutBps_ {};
    // The total maximum inbound and outbound network throughput, which indicates the maximum number of bits that are sent inbound and outbound per second. Unit: bit/s.
    shared_ptr<int64_t> maxTotalBps_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
