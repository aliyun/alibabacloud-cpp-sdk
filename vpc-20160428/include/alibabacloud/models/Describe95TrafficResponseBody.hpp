// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBE95TRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class Describe95TrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Describe95TrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Traffic95Summary, traffic95Summary_);
    };
    friend void from_json(const Darabonba::Json& j, Describe95TrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Traffic95Summary, traffic95Summary_);
    };
    Describe95TrafficResponseBody() = default ;
    Describe95TrafficResponseBody(const Describe95TrafficResponseBody &) = default ;
    Describe95TrafficResponseBody(Describe95TrafficResponseBody &&) = default ;
    Describe95TrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Describe95TrafficResponseBody() = default ;
    Describe95TrafficResponseBody& operator=(const Describe95TrafficResponseBody &) = default ;
    Describe95TrafficResponseBody& operator=(Describe95TrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Traffic95Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Traffic95Summary& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(FifthPeakBandwidth, fifthPeakBandwidth_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(MinimumConsumeBandwidth, minimumConsumeBandwidth_);
        DARABONBA_PTR_TO_JSON(Traffic95DetailList, traffic95DetailList_);
      };
      friend void from_json(const Darabonba::Json& j, Traffic95Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(FifthPeakBandwidth, fifthPeakBandwidth_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(MinimumConsumeBandwidth, minimumConsumeBandwidth_);
        DARABONBA_PTR_FROM_JSON(Traffic95DetailList, traffic95DetailList_);
      };
      Traffic95Summary() = default ;
      Traffic95Summary(const Traffic95Summary &) = default ;
      Traffic95Summary(Traffic95Summary &&) = default ;
      Traffic95Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Traffic95Summary() = default ;
      Traffic95Summary& operator=(const Traffic95Summary &) = default ;
      Traffic95Summary& operator=(Traffic95Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Traffic95DetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Traffic95DetailList& obj) { 
          DARABONBA_PTR_TO_JSON(Traffic95Detail, traffic95Detail_);
        };
        friend void from_json(const Darabonba::Json& j, Traffic95DetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(Traffic95Detail, traffic95Detail_);
        };
        Traffic95DetailList() = default ;
        Traffic95DetailList(const Traffic95DetailList &) = default ;
        Traffic95DetailList(Traffic95DetailList &&) = default ;
        Traffic95DetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Traffic95DetailList() = default ;
        Traffic95DetailList& operator=(const Traffic95DetailList &) = default ;
        Traffic95DetailList& operator=(Traffic95DetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Traffic95Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Traffic95Detail& obj) { 
            DARABONBA_PTR_TO_JSON(BillBandwidth, billBandwidth_);
            DARABONBA_PTR_TO_JSON(InBandwidth, inBandwidth_);
            DARABONBA_PTR_TO_JSON(OutBandwidth, outBandwidth_);
            DARABONBA_PTR_TO_JSON(Time, time_);
          };
          friend void from_json(const Darabonba::Json& j, Traffic95Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(BillBandwidth, billBandwidth_);
            DARABONBA_PTR_FROM_JSON(InBandwidth, inBandwidth_);
            DARABONBA_PTR_FROM_JSON(OutBandwidth, outBandwidth_);
            DARABONBA_PTR_FROM_JSON(Time, time_);
          };
          Traffic95Detail() = default ;
          Traffic95Detail(const Traffic95Detail &) = default ;
          Traffic95Detail(Traffic95Detail &&) = default ;
          Traffic95Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Traffic95Detail() = default ;
          Traffic95Detail& operator=(const Traffic95Detail &) = default ;
          Traffic95Detail& operator=(Traffic95Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->billBandwidth_ == nullptr
        && this->inBandwidth_ == nullptr && this->outBandwidth_ == nullptr && this->time_ == nullptr; };
          // billBandwidth Field Functions 
          bool hasBillBandwidth() const { return this->billBandwidth_ != nullptr;};
          void deleteBillBandwidth() { this->billBandwidth_ = nullptr;};
          inline string getBillBandwidth() const { DARABONBA_PTR_GET_DEFAULT(billBandwidth_, "") };
          inline Traffic95Detail& setBillBandwidth(string billBandwidth) { DARABONBA_PTR_SET_VALUE(billBandwidth_, billBandwidth) };


          // inBandwidth Field Functions 
          bool hasInBandwidth() const { return this->inBandwidth_ != nullptr;};
          void deleteInBandwidth() { this->inBandwidth_ = nullptr;};
          inline string getInBandwidth() const { DARABONBA_PTR_GET_DEFAULT(inBandwidth_, "") };
          inline Traffic95Detail& setInBandwidth(string inBandwidth) { DARABONBA_PTR_SET_VALUE(inBandwidth_, inBandwidth) };


          // outBandwidth Field Functions 
          bool hasOutBandwidth() const { return this->outBandwidth_ != nullptr;};
          void deleteOutBandwidth() { this->outBandwidth_ = nullptr;};
          inline string getOutBandwidth() const { DARABONBA_PTR_GET_DEFAULT(outBandwidth_, "") };
          inline Traffic95Detail& setOutBandwidth(string outBandwidth) { DARABONBA_PTR_SET_VALUE(outBandwidth_, outBandwidth) };


          // time Field Functions 
          bool hasTime() const { return this->time_ != nullptr;};
          void deleteTime() { this->time_ = nullptr;};
          inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
          inline Traffic95Detail& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        protected:
          // The sampled bandwidth value, which is the larger bandwidth value in the inbound and outbound directions within a sampling interval. Unit: Mbit/s.
          shared_ptr<string> billBandwidth_ {};
          // The inbound bandwidth. Unit: Mbit/s.
          shared_ptr<string> inBandwidth_ {};
          // The outbound bandwidth. Unit: Mbit/s.
          shared_ptr<string> outBandwidth_ {};
          // The statistical time. The value is a string.
          shared_ptr<string> time_ {};
        };

        virtual bool empty() const override { return this->traffic95Detail_ == nullptr; };
        // traffic95Detail Field Functions 
        bool hasTraffic95Detail() const { return this->traffic95Detail_ != nullptr;};
        void deleteTraffic95Detail() { this->traffic95Detail_ = nullptr;};
        inline const vector<Traffic95DetailList::Traffic95Detail> & getTraffic95Detail() const { DARABONBA_PTR_GET_CONST(traffic95Detail_, vector<Traffic95DetailList::Traffic95Detail>) };
        inline vector<Traffic95DetailList::Traffic95Detail> getTraffic95Detail() { DARABONBA_PTR_GET(traffic95Detail_, vector<Traffic95DetailList::Traffic95Detail>) };
        inline Traffic95DetailList& setTraffic95Detail(const vector<Traffic95DetailList::Traffic95Detail> & traffic95Detail) { DARABONBA_PTR_SET_VALUE(traffic95Detail_, traffic95Detail) };
        inline Traffic95DetailList& setTraffic95Detail(vector<Traffic95DetailList::Traffic95Detail> && traffic95Detail) { DARABONBA_PTR_SET_RVALUE(traffic95Detail_, traffic95Detail) };


      protected:
        shared_ptr<vector<Traffic95DetailList::Traffic95Detail>> traffic95Detail_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->fifthPeakBandwidth_ == nullptr && this->instanceId_ == nullptr && this->internetChargeType_ == nullptr && this->minimumConsumeBandwidth_ == nullptr && this->traffic95DetailList_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
      inline Traffic95Summary& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // fifthPeakBandwidth Field Functions 
      bool hasFifthPeakBandwidth() const { return this->fifthPeakBandwidth_ != nullptr;};
      void deleteFifthPeakBandwidth() { this->fifthPeakBandwidth_ = nullptr;};
      inline string getFifthPeakBandwidth() const { DARABONBA_PTR_GET_DEFAULT(fifthPeakBandwidth_, "") };
      inline Traffic95Summary& setFifthPeakBandwidth(string fifthPeakBandwidth) { DARABONBA_PTR_SET_VALUE(fifthPeakBandwidth_, fifthPeakBandwidth) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Traffic95Summary& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline Traffic95Summary& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // minimumConsumeBandwidth Field Functions 
      bool hasMinimumConsumeBandwidth() const { return this->minimumConsumeBandwidth_ != nullptr;};
      void deleteMinimumConsumeBandwidth() { this->minimumConsumeBandwidth_ = nullptr;};
      inline string getMinimumConsumeBandwidth() const { DARABONBA_PTR_GET_DEFAULT(minimumConsumeBandwidth_, "") };
      inline Traffic95Summary& setMinimumConsumeBandwidth(string minimumConsumeBandwidth) { DARABONBA_PTR_SET_VALUE(minimumConsumeBandwidth_, minimumConsumeBandwidth) };


      // traffic95DetailList Field Functions 
      bool hasTraffic95DetailList() const { return this->traffic95DetailList_ != nullptr;};
      void deleteTraffic95DetailList() { this->traffic95DetailList_ = nullptr;};
      inline const Traffic95Summary::Traffic95DetailList & getTraffic95DetailList() const { DARABONBA_PTR_GET_CONST(traffic95DetailList_, Traffic95Summary::Traffic95DetailList) };
      inline Traffic95Summary::Traffic95DetailList getTraffic95DetailList() { DARABONBA_PTR_GET(traffic95DetailList_, Traffic95Summary::Traffic95DetailList) };
      inline Traffic95Summary& setTraffic95DetailList(const Traffic95Summary::Traffic95DetailList & traffic95DetailList) { DARABONBA_PTR_SET_VALUE(traffic95DetailList_, traffic95DetailList) };
      inline Traffic95Summary& setTraffic95DetailList(Traffic95Summary::Traffic95DetailList && traffic95DetailList) { DARABONBA_PTR_SET_RVALUE(traffic95DetailList_, traffic95DetailList) };


    protected:
      // The peak bandwidth of the Internet Shared Bandwidth instance. Unit: Mbit/s.
      shared_ptr<int64_t> bandwidth_ {};
      // The daily peak bandwidth. Unit: Mbit/s.
      // <props="china"> For more information, see [Daily peak bandwidth](https://help.aliyun.com/document_detail/89729.html).
      shared_ptr<string> fifthPeakBandwidth_ {};
      // The resource ID.
      shared_ptr<string> instanceId_ {};
      // The metering method of the Internet Shared Bandwidth instance. Valid values:
      // 
      // *   PayBy95: pay-by-enhanced-95th-percentile
      // *   PayByBandwidth: pay-by-bandwidth
      // *   PayByDominantTraffic: pay-by-dominant-traffic
      shared_ptr<string> internetChargeType_ {};
      // The guaranteed bandwidth of the Internet Shared Bandwidth instance. Unit: Mbit/s.
      shared_ptr<string> minimumConsumeBandwidth_ {};
      // The average bandwidth every 5 minutes in the inbound and outbound directions.
      shared_ptr<Traffic95Summary::Traffic95DetailList> traffic95DetailList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->traffic95Summary_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Describe95TrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traffic95Summary Field Functions 
    bool hasTraffic95Summary() const { return this->traffic95Summary_ != nullptr;};
    void deleteTraffic95Summary() { this->traffic95Summary_ = nullptr;};
    inline const Describe95TrafficResponseBody::Traffic95Summary & getTraffic95Summary() const { DARABONBA_PTR_GET_CONST(traffic95Summary_, Describe95TrafficResponseBody::Traffic95Summary) };
    inline Describe95TrafficResponseBody::Traffic95Summary getTraffic95Summary() { DARABONBA_PTR_GET(traffic95Summary_, Describe95TrafficResponseBody::Traffic95Summary) };
    inline Describe95TrafficResponseBody& setTraffic95Summary(const Describe95TrafficResponseBody::Traffic95Summary & traffic95Summary) { DARABONBA_PTR_SET_VALUE(traffic95Summary_, traffic95Summary) };
    inline Describe95TrafficResponseBody& setTraffic95Summary(Describe95TrafficResponseBody::Traffic95Summary && traffic95Summary) { DARABONBA_PTR_SET_RVALUE(traffic95Summary_, traffic95Summary) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information returned.
    shared_ptr<Describe95TrafficResponseBody::Traffic95Summary> traffic95Summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
