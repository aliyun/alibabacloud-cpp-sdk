// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTRAFFICTRENDRESPONSEBODY_HPP_
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
  class DescribeFirewallTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthTime, maxBandwidthTime_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthTimeBps, maxBandwidthTimeBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthTime, maxBandwidthTime_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthTimeBps, maxBandwidthTimeBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFirewallTrafficTrendResponseBody() = default ;
    DescribeFirewallTrafficTrendResponseBody(const DescribeFirewallTrafficTrendResponseBody &) = default ;
    DescribeFirewallTrafficTrendResponseBody(DescribeFirewallTrafficTrendResponseBody &&) = default ;
    DescribeFirewallTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallTrafficTrendResponseBody() = default ;
    DescribeFirewallTrafficTrendResponseBody& operator=(const DescribeFirewallTrafficTrendResponseBody &) = default ;
    DescribeFirewallTrafficTrendResponseBody& operator=(DescribeFirewallTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MaxBandwidthTimeBps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MaxBandwidthTimeBps& obj) { 
        DARABONBA_PTR_TO_JSON(InternetBps, internetBps_);
        DARABONBA_PTR_TO_JSON(NatBps, natBps_);
        DARABONBA_PTR_TO_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_TO_JSON(VpcBps, vpcBps_);
      };
      friend void from_json(const Darabonba::Json& j, MaxBandwidthTimeBps& obj) { 
        DARABONBA_PTR_FROM_JSON(InternetBps, internetBps_);
        DARABONBA_PTR_FROM_JSON(NatBps, natBps_);
        DARABONBA_PTR_FROM_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_FROM_JSON(VpcBps, vpcBps_);
      };
      MaxBandwidthTimeBps() = default ;
      MaxBandwidthTimeBps(const MaxBandwidthTimeBps &) = default ;
      MaxBandwidthTimeBps(MaxBandwidthTimeBps &&) = default ;
      MaxBandwidthTimeBps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MaxBandwidthTimeBps() = default ;
      MaxBandwidthTimeBps& operator=(const MaxBandwidthTimeBps &) = default ;
      MaxBandwidthTimeBps& operator=(MaxBandwidthTimeBps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->internetBps_ == nullptr
        && this->natBps_ == nullptr && this->totalBps_ == nullptr && this->vpcBps_ == nullptr; };
      // internetBps Field Functions 
      bool hasInternetBps() const { return this->internetBps_ != nullptr;};
      void deleteInternetBps() { this->internetBps_ = nullptr;};
      inline int64_t getInternetBps() const { DARABONBA_PTR_GET_DEFAULT(internetBps_, 0L) };
      inline MaxBandwidthTimeBps& setInternetBps(int64_t internetBps) { DARABONBA_PTR_SET_VALUE(internetBps_, internetBps) };


      // natBps Field Functions 
      bool hasNatBps() const { return this->natBps_ != nullptr;};
      void deleteNatBps() { this->natBps_ = nullptr;};
      inline int64_t getNatBps() const { DARABONBA_PTR_GET_DEFAULT(natBps_, 0L) };
      inline MaxBandwidthTimeBps& setNatBps(int64_t natBps) { DARABONBA_PTR_SET_VALUE(natBps_, natBps) };


      // totalBps Field Functions 
      bool hasTotalBps() const { return this->totalBps_ != nullptr;};
      void deleteTotalBps() { this->totalBps_ = nullptr;};
      inline int64_t getTotalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
      inline MaxBandwidthTimeBps& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


      // vpcBps Field Functions 
      bool hasVpcBps() const { return this->vpcBps_ != nullptr;};
      void deleteVpcBps() { this->vpcBps_ = nullptr;};
      inline int64_t getVpcBps() const { DARABONBA_PTR_GET_DEFAULT(vpcBps_, 0L) };
      inline MaxBandwidthTimeBps& setVpcBps(int64_t vpcBps) { DARABONBA_PTR_SET_VALUE(vpcBps_, vpcBps) };


    protected:
      shared_ptr<int64_t> internetBps_ {};
      shared_ptr<int64_t> natBps_ {};
      shared_ptr<int64_t> totalBps_ {};
      shared_ptr<int64_t> vpcBps_ {};
    };

    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(InternetBps, internetBps_);
        DARABONBA_PTR_TO_JSON(NatBps, natBps_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_TO_JSON(VpcBps, vpcBps_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(InternetBps, internetBps_);
        DARABONBA_PTR_FROM_JSON(NatBps, natBps_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_FROM_JSON(VpcBps, vpcBps_);
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
      virtual bool empty() const override { return this->internetBps_ == nullptr
        && this->natBps_ == nullptr && this->time_ == nullptr && this->totalBps_ == nullptr && this->vpcBps_ == nullptr; };
      // internetBps Field Functions 
      bool hasInternetBps() const { return this->internetBps_ != nullptr;};
      void deleteInternetBps() { this->internetBps_ = nullptr;};
      inline int64_t getInternetBps() const { DARABONBA_PTR_GET_DEFAULT(internetBps_, 0L) };
      inline DataList& setInternetBps(int64_t internetBps) { DARABONBA_PTR_SET_VALUE(internetBps_, internetBps) };


      // natBps Field Functions 
      bool hasNatBps() const { return this->natBps_ != nullptr;};
      void deleteNatBps() { this->natBps_ = nullptr;};
      inline int64_t getNatBps() const { DARABONBA_PTR_GET_DEFAULT(natBps_, 0L) };
      inline DataList& setNatBps(int64_t natBps) { DARABONBA_PTR_SET_VALUE(natBps_, natBps) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalBps Field Functions 
      bool hasTotalBps() const { return this->totalBps_ != nullptr;};
      void deleteTotalBps() { this->totalBps_ = nullptr;};
      inline int64_t getTotalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
      inline DataList& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


      // vpcBps Field Functions 
      bool hasVpcBps() const { return this->vpcBps_ != nullptr;};
      void deleteVpcBps() { this->vpcBps_ = nullptr;};
      inline int64_t getVpcBps() const { DARABONBA_PTR_GET_DEFAULT(vpcBps_, 0L) };
      inline DataList& setVpcBps(int64_t vpcBps) { DARABONBA_PTR_SET_VALUE(vpcBps_, vpcBps) };


    protected:
      shared_ptr<int64_t> internetBps_ {};
      shared_ptr<int64_t> natBps_ {};
      shared_ptr<int64_t> time_ {};
      shared_ptr<int64_t> totalBps_ {};
      shared_ptr<int64_t> vpcBps_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->maxBandwidthTime_ == nullptr && this->maxBandwidthTimeBps_ == nullptr && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeFirewallTrafficTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeFirewallTrafficTrendResponseBody::DataList>) };
    inline vector<DescribeFirewallTrafficTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeFirewallTrafficTrendResponseBody::DataList>) };
    inline DescribeFirewallTrafficTrendResponseBody& setDataList(const vector<DescribeFirewallTrafficTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeFirewallTrafficTrendResponseBody& setDataList(vector<DescribeFirewallTrafficTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // maxBandwidthTime Field Functions 
    bool hasMaxBandwidthTime() const { return this->maxBandwidthTime_ != nullptr;};
    void deleteMaxBandwidthTime() { this->maxBandwidthTime_ = nullptr;};
    inline int64_t getMaxBandwidthTime() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthTime_, 0L) };
    inline DescribeFirewallTrafficTrendResponseBody& setMaxBandwidthTime(int64_t maxBandwidthTime) { DARABONBA_PTR_SET_VALUE(maxBandwidthTime_, maxBandwidthTime) };


    // maxBandwidthTimeBps Field Functions 
    bool hasMaxBandwidthTimeBps() const { return this->maxBandwidthTimeBps_ != nullptr;};
    void deleteMaxBandwidthTimeBps() { this->maxBandwidthTimeBps_ = nullptr;};
    inline const DescribeFirewallTrafficTrendResponseBody::MaxBandwidthTimeBps & getMaxBandwidthTimeBps() const { DARABONBA_PTR_GET_CONST(maxBandwidthTimeBps_, DescribeFirewallTrafficTrendResponseBody::MaxBandwidthTimeBps) };
    inline DescribeFirewallTrafficTrendResponseBody::MaxBandwidthTimeBps getMaxBandwidthTimeBps() { DARABONBA_PTR_GET(maxBandwidthTimeBps_, DescribeFirewallTrafficTrendResponseBody::MaxBandwidthTimeBps) };
    inline DescribeFirewallTrafficTrendResponseBody& setMaxBandwidthTimeBps(const DescribeFirewallTrafficTrendResponseBody::MaxBandwidthTimeBps & maxBandwidthTimeBps) { DARABONBA_PTR_SET_VALUE(maxBandwidthTimeBps_, maxBandwidthTimeBps) };
    inline DescribeFirewallTrafficTrendResponseBody& setMaxBandwidthTimeBps(DescribeFirewallTrafficTrendResponseBody::MaxBandwidthTimeBps && maxBandwidthTimeBps) { DARABONBA_PTR_SET_RVALUE(maxBandwidthTimeBps_, maxBandwidthTimeBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeFirewallTrafficTrendResponseBody::DataList>> dataList_ {};
    shared_ptr<int64_t> maxBandwidthTime_ {};
    shared_ptr<DescribeFirewallTrafficTrendResponseBody::MaxBandwidthTimeBps> maxBandwidthTimeBps_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
