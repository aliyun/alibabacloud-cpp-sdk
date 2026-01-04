// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortFlowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortFlowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortFlowList, portFlowList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortFlowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortFlowList, portFlowList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortFlowListResponseBody() = default ;
    DescribePortFlowListResponseBody(const DescribePortFlowListResponseBody &) = default ;
    DescribePortFlowListResponseBody(DescribePortFlowListResponseBody &&) = default ;
    DescribePortFlowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortFlowListResponseBody() = default ;
    DescribePortFlowListResponseBody& operator=(const DescribePortFlowListResponseBody &) = default ;
    DescribePortFlowListResponseBody& operator=(DescribePortFlowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortFlowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortFlowList& obj) { 
        DARABONBA_PTR_TO_JSON(AttackBps, attackBps_);
        DARABONBA_PTR_TO_JSON(AttackPps, attackPps_);
        DARABONBA_PTR_TO_JSON(InBps, inBps_);
        DARABONBA_PTR_TO_JSON(InPps, inPps_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(OutBps, outBps_);
        DARABONBA_PTR_TO_JSON(OutPps, outPps_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SlaBpsDropBps, slaBpsDropBps_);
        DARABONBA_PTR_TO_JSON(SlaBpsDropPps, slaBpsDropPps_);
        DARABONBA_PTR_TO_JSON(SlaConnDropBps, slaConnDropBps_);
        DARABONBA_PTR_TO_JSON(SlaConnDropPps, slaConnDropPps_);
        DARABONBA_PTR_TO_JSON(SlaCpsDropBps, slaCpsDropBps_);
        DARABONBA_PTR_TO_JSON(SlaCpsDropPps, slaCpsDropPps_);
        DARABONBA_PTR_TO_JSON(SlaPpsDropBps, slaPpsDropBps_);
        DARABONBA_PTR_TO_JSON(SlaPpsDropPps, slaPpsDropPps_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, PortFlowList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackBps, attackBps_);
        DARABONBA_PTR_FROM_JSON(AttackPps, attackPps_);
        DARABONBA_PTR_FROM_JSON(InBps, inBps_);
        DARABONBA_PTR_FROM_JSON(InPps, inPps_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
        DARABONBA_PTR_FROM_JSON(OutPps, outPps_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SlaBpsDropBps, slaBpsDropBps_);
        DARABONBA_PTR_FROM_JSON(SlaBpsDropPps, slaBpsDropPps_);
        DARABONBA_PTR_FROM_JSON(SlaConnDropBps, slaConnDropBps_);
        DARABONBA_PTR_FROM_JSON(SlaConnDropPps, slaConnDropPps_);
        DARABONBA_PTR_FROM_JSON(SlaCpsDropBps, slaCpsDropBps_);
        DARABONBA_PTR_FROM_JSON(SlaCpsDropPps, slaCpsDropPps_);
        DARABONBA_PTR_FROM_JSON(SlaPpsDropBps, slaPpsDropBps_);
        DARABONBA_PTR_FROM_JSON(SlaPpsDropPps, slaPpsDropPps_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      PortFlowList() = default ;
      PortFlowList(const PortFlowList &) = default ;
      PortFlowList(PortFlowList &&) = default ;
      PortFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortFlowList() = default ;
      PortFlowList& operator=(const PortFlowList &) = default ;
      PortFlowList& operator=(PortFlowList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackBps_ == nullptr
        && this->attackPps_ == nullptr && this->inBps_ == nullptr && this->inPps_ == nullptr && this->index_ == nullptr && this->outBps_ == nullptr
        && this->outPps_ == nullptr && this->region_ == nullptr && this->slaBpsDropBps_ == nullptr && this->slaBpsDropPps_ == nullptr && this->slaConnDropBps_ == nullptr
        && this->slaConnDropPps_ == nullptr && this->slaCpsDropBps_ == nullptr && this->slaCpsDropPps_ == nullptr && this->slaPpsDropBps_ == nullptr && this->slaPpsDropPps_ == nullptr
        && this->time_ == nullptr; };
      // attackBps Field Functions 
      bool hasAttackBps() const { return this->attackBps_ != nullptr;};
      void deleteAttackBps() { this->attackBps_ = nullptr;};
      inline int64_t getAttackBps() const { DARABONBA_PTR_GET_DEFAULT(attackBps_, 0L) };
      inline PortFlowList& setAttackBps(int64_t attackBps) { DARABONBA_PTR_SET_VALUE(attackBps_, attackBps) };


      // attackPps Field Functions 
      bool hasAttackPps() const { return this->attackPps_ != nullptr;};
      void deleteAttackPps() { this->attackPps_ = nullptr;};
      inline int64_t getAttackPps() const { DARABONBA_PTR_GET_DEFAULT(attackPps_, 0L) };
      inline PortFlowList& setAttackPps(int64_t attackPps) { DARABONBA_PTR_SET_VALUE(attackPps_, attackPps) };


      // inBps Field Functions 
      bool hasInBps() const { return this->inBps_ != nullptr;};
      void deleteInBps() { this->inBps_ = nullptr;};
      inline int64_t getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
      inline PortFlowList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


      // inPps Field Functions 
      bool hasInPps() const { return this->inPps_ != nullptr;};
      void deleteInPps() { this->inPps_ = nullptr;};
      inline int64_t getInPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0L) };
      inline PortFlowList& setInPps(int64_t inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline PortFlowList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // outBps Field Functions 
      bool hasOutBps() const { return this->outBps_ != nullptr;};
      void deleteOutBps() { this->outBps_ = nullptr;};
      inline int64_t getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
      inline PortFlowList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


      // outPps Field Functions 
      bool hasOutPps() const { return this->outPps_ != nullptr;};
      void deleteOutPps() { this->outPps_ = nullptr;};
      inline int64_t getOutPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0L) };
      inline PortFlowList& setOutPps(int64_t outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline PortFlowList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // slaBpsDropBps Field Functions 
      bool hasSlaBpsDropBps() const { return this->slaBpsDropBps_ != nullptr;};
      void deleteSlaBpsDropBps() { this->slaBpsDropBps_ = nullptr;};
      inline int64_t getSlaBpsDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaBpsDropBps_, 0L) };
      inline PortFlowList& setSlaBpsDropBps(int64_t slaBpsDropBps) { DARABONBA_PTR_SET_VALUE(slaBpsDropBps_, slaBpsDropBps) };


      // slaBpsDropPps Field Functions 
      bool hasSlaBpsDropPps() const { return this->slaBpsDropPps_ != nullptr;};
      void deleteSlaBpsDropPps() { this->slaBpsDropPps_ = nullptr;};
      inline int64_t getSlaBpsDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaBpsDropPps_, 0L) };
      inline PortFlowList& setSlaBpsDropPps(int64_t slaBpsDropPps) { DARABONBA_PTR_SET_VALUE(slaBpsDropPps_, slaBpsDropPps) };


      // slaConnDropBps Field Functions 
      bool hasSlaConnDropBps() const { return this->slaConnDropBps_ != nullptr;};
      void deleteSlaConnDropBps() { this->slaConnDropBps_ = nullptr;};
      inline int64_t getSlaConnDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaConnDropBps_, 0L) };
      inline PortFlowList& setSlaConnDropBps(int64_t slaConnDropBps) { DARABONBA_PTR_SET_VALUE(slaConnDropBps_, slaConnDropBps) };


      // slaConnDropPps Field Functions 
      bool hasSlaConnDropPps() const { return this->slaConnDropPps_ != nullptr;};
      void deleteSlaConnDropPps() { this->slaConnDropPps_ = nullptr;};
      inline int64_t getSlaConnDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaConnDropPps_, 0L) };
      inline PortFlowList& setSlaConnDropPps(int64_t slaConnDropPps) { DARABONBA_PTR_SET_VALUE(slaConnDropPps_, slaConnDropPps) };


      // slaCpsDropBps Field Functions 
      bool hasSlaCpsDropBps() const { return this->slaCpsDropBps_ != nullptr;};
      void deleteSlaCpsDropBps() { this->slaCpsDropBps_ = nullptr;};
      inline int64_t getSlaCpsDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaCpsDropBps_, 0L) };
      inline PortFlowList& setSlaCpsDropBps(int64_t slaCpsDropBps) { DARABONBA_PTR_SET_VALUE(slaCpsDropBps_, slaCpsDropBps) };


      // slaCpsDropPps Field Functions 
      bool hasSlaCpsDropPps() const { return this->slaCpsDropPps_ != nullptr;};
      void deleteSlaCpsDropPps() { this->slaCpsDropPps_ = nullptr;};
      inline int64_t getSlaCpsDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaCpsDropPps_, 0L) };
      inline PortFlowList& setSlaCpsDropPps(int64_t slaCpsDropPps) { DARABONBA_PTR_SET_VALUE(slaCpsDropPps_, slaCpsDropPps) };


      // slaPpsDropBps Field Functions 
      bool hasSlaPpsDropBps() const { return this->slaPpsDropBps_ != nullptr;};
      void deleteSlaPpsDropBps() { this->slaPpsDropBps_ = nullptr;};
      inline int64_t getSlaPpsDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaPpsDropBps_, 0L) };
      inline PortFlowList& setSlaPpsDropBps(int64_t slaPpsDropBps) { DARABONBA_PTR_SET_VALUE(slaPpsDropBps_, slaPpsDropBps) };


      // slaPpsDropPps Field Functions 
      bool hasSlaPpsDropPps() const { return this->slaPpsDropPps_ != nullptr;};
      void deleteSlaPpsDropPps() { this->slaPpsDropPps_ = nullptr;};
      inline int64_t getSlaPpsDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaPpsDropPps_, 0L) };
      inline PortFlowList& setSlaPpsDropPps(int64_t slaPpsDropPps) { DARABONBA_PTR_SET_VALUE(slaPpsDropPps_, slaPpsDropPps) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline PortFlowList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The bandwidth of attack traffic. Unit: bit/s.
      shared_ptr<int64_t> attackBps_ {};
      // The packet forwarding rate of attack traffic. Unit: pps.
      shared_ptr<int64_t> attackPps_ {};
      // The inbound bandwidth. Unit: bit/s.
      shared_ptr<int64_t> inBps_ {};
      // The packet forwarding rate of inbound traffic. Unit: packets per second.
      shared_ptr<int64_t> inPps_ {};
      // The index number of the returned data.
      shared_ptr<int64_t> index_ {};
      // The outbound bandwidth. Unit: bit/s.
      shared_ptr<int64_t> outBps_ {};
      // The packet forwarding rate of outbound traffic. Unit: packets per second (pps).
      shared_ptr<int64_t> outPps_ {};
      // The source region of the traffic. Valid values:
      // 
      // *   **cn**: mainland China
      // *   **alb-ap-northeast-1-gf-x**: Japan (Tokyo)
      // *   **alb-ap-southeast-gf-x**: Singapore
      // *   **alb-cn-hongkong-gf-x**: Hong Kong (China)
      // *   **alb-eu-central-1-gf-x**: Germany (Frankfurt)
      // *   **alb-us-west-1-gf-x**: US (Silicon Valley)
      // 
      // > The values except **cn** are returned only when **RegionId** is set to **ap-southeast-1**.
      shared_ptr<string> region_ {};
      shared_ptr<int64_t> slaBpsDropBps_ {};
      shared_ptr<int64_t> slaBpsDropPps_ {};
      shared_ptr<int64_t> slaConnDropBps_ {};
      shared_ptr<int64_t> slaConnDropPps_ {};
      shared_ptr<int64_t> slaCpsDropBps_ {};
      shared_ptr<int64_t> slaCpsDropPps_ {};
      shared_ptr<int64_t> slaPpsDropBps_ {};
      shared_ptr<int64_t> slaPpsDropPps_ {};
      // The time when the data was collected. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->portFlowList_ == nullptr
        && this->requestId_ == nullptr; };
    // portFlowList Field Functions 
    bool hasPortFlowList() const { return this->portFlowList_ != nullptr;};
    void deletePortFlowList() { this->portFlowList_ = nullptr;};
    inline const vector<DescribePortFlowListResponseBody::PortFlowList> & getPortFlowList() const { DARABONBA_PTR_GET_CONST(portFlowList_, vector<DescribePortFlowListResponseBody::PortFlowList>) };
    inline vector<DescribePortFlowListResponseBody::PortFlowList> getPortFlowList() { DARABONBA_PTR_GET(portFlowList_, vector<DescribePortFlowListResponseBody::PortFlowList>) };
    inline DescribePortFlowListResponseBody& setPortFlowList(const vector<DescribePortFlowListResponseBody::PortFlowList> & portFlowList) { DARABONBA_PTR_SET_VALUE(portFlowList_, portFlowList) };
    inline DescribePortFlowListResponseBody& setPortFlowList(vector<DescribePortFlowListResponseBody::PortFlowList> && portFlowList) { DARABONBA_PTR_SET_RVALUE(portFlowList_, portFlowList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortFlowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned traffic data.
    shared_ptr<vector<DescribePortFlowListResponseBody::PortFlowList>> portFlowList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
