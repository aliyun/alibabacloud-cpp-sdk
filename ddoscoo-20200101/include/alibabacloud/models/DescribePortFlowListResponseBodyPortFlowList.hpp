// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTRESPONSEBODYPORTFLOWLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTRESPONSEBODYPORTFLOWLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortFlowListResponseBodyPortFlowList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortFlowListResponseBodyPortFlowList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribePortFlowListResponseBodyPortFlowList& obj) { 
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
    DescribePortFlowListResponseBodyPortFlowList() = default ;
    DescribePortFlowListResponseBodyPortFlowList(const DescribePortFlowListResponseBodyPortFlowList &) = default ;
    DescribePortFlowListResponseBodyPortFlowList(DescribePortFlowListResponseBodyPortFlowList &&) = default ;
    DescribePortFlowListResponseBodyPortFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortFlowListResponseBodyPortFlowList() = default ;
    DescribePortFlowListResponseBodyPortFlowList& operator=(const DescribePortFlowListResponseBodyPortFlowList &) = default ;
    DescribePortFlowListResponseBodyPortFlowList& operator=(DescribePortFlowListResponseBodyPortFlowList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackBps_ == nullptr
        && return this->attackPps_ == nullptr && return this->inBps_ == nullptr && return this->inPps_ == nullptr && return this->index_ == nullptr && return this->outBps_ == nullptr
        && return this->outPps_ == nullptr && return this->region_ == nullptr && return this->slaBpsDropBps_ == nullptr && return this->slaBpsDropPps_ == nullptr && return this->slaConnDropBps_ == nullptr
        && return this->slaConnDropPps_ == nullptr && return this->slaCpsDropBps_ == nullptr && return this->slaCpsDropPps_ == nullptr && return this->slaPpsDropBps_ == nullptr && return this->slaPpsDropPps_ == nullptr
        && return this->time_ == nullptr; };
    // attackBps Field Functions 
    bool hasAttackBps() const { return this->attackBps_ != nullptr;};
    void deleteAttackBps() { this->attackBps_ = nullptr;};
    inline int64_t attackBps() const { DARABONBA_PTR_GET_DEFAULT(attackBps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setAttackBps(int64_t attackBps) { DARABONBA_PTR_SET_VALUE(attackBps_, attackBps) };


    // attackPps Field Functions 
    bool hasAttackPps() const { return this->attackPps_ != nullptr;};
    void deleteAttackPps() { this->attackPps_ = nullptr;};
    inline int64_t attackPps() const { DARABONBA_PTR_GET_DEFAULT(attackPps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setAttackPps(int64_t attackPps) { DARABONBA_PTR_SET_VALUE(attackPps_, attackPps) };


    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline int64_t inBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // inPps Field Functions 
    bool hasInPps() const { return this->inPps_ != nullptr;};
    void deleteInPps() { this->inPps_ = nullptr;};
    inline int64_t inPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setInPps(int64_t inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline int64_t outBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    // outPps Field Functions 
    bool hasOutPps() const { return this->outPps_ != nullptr;};
    void deleteOutPps() { this->outPps_ = nullptr;};
    inline int64_t outPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setOutPps(int64_t outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribePortFlowListResponseBodyPortFlowList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // slaBpsDropBps Field Functions 
    bool hasSlaBpsDropBps() const { return this->slaBpsDropBps_ != nullptr;};
    void deleteSlaBpsDropBps() { this->slaBpsDropBps_ = nullptr;};
    inline int64_t slaBpsDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaBpsDropBps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaBpsDropBps(int64_t slaBpsDropBps) { DARABONBA_PTR_SET_VALUE(slaBpsDropBps_, slaBpsDropBps) };


    // slaBpsDropPps Field Functions 
    bool hasSlaBpsDropPps() const { return this->slaBpsDropPps_ != nullptr;};
    void deleteSlaBpsDropPps() { this->slaBpsDropPps_ = nullptr;};
    inline int64_t slaBpsDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaBpsDropPps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaBpsDropPps(int64_t slaBpsDropPps) { DARABONBA_PTR_SET_VALUE(slaBpsDropPps_, slaBpsDropPps) };


    // slaConnDropBps Field Functions 
    bool hasSlaConnDropBps() const { return this->slaConnDropBps_ != nullptr;};
    void deleteSlaConnDropBps() { this->slaConnDropBps_ = nullptr;};
    inline int64_t slaConnDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaConnDropBps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaConnDropBps(int64_t slaConnDropBps) { DARABONBA_PTR_SET_VALUE(slaConnDropBps_, slaConnDropBps) };


    // slaConnDropPps Field Functions 
    bool hasSlaConnDropPps() const { return this->slaConnDropPps_ != nullptr;};
    void deleteSlaConnDropPps() { this->slaConnDropPps_ = nullptr;};
    inline int64_t slaConnDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaConnDropPps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaConnDropPps(int64_t slaConnDropPps) { DARABONBA_PTR_SET_VALUE(slaConnDropPps_, slaConnDropPps) };


    // slaCpsDropBps Field Functions 
    bool hasSlaCpsDropBps() const { return this->slaCpsDropBps_ != nullptr;};
    void deleteSlaCpsDropBps() { this->slaCpsDropBps_ = nullptr;};
    inline int64_t slaCpsDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaCpsDropBps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaCpsDropBps(int64_t slaCpsDropBps) { DARABONBA_PTR_SET_VALUE(slaCpsDropBps_, slaCpsDropBps) };


    // slaCpsDropPps Field Functions 
    bool hasSlaCpsDropPps() const { return this->slaCpsDropPps_ != nullptr;};
    void deleteSlaCpsDropPps() { this->slaCpsDropPps_ = nullptr;};
    inline int64_t slaCpsDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaCpsDropPps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaCpsDropPps(int64_t slaCpsDropPps) { DARABONBA_PTR_SET_VALUE(slaCpsDropPps_, slaCpsDropPps) };


    // slaPpsDropBps Field Functions 
    bool hasSlaPpsDropBps() const { return this->slaPpsDropBps_ != nullptr;};
    void deleteSlaPpsDropBps() { this->slaPpsDropBps_ = nullptr;};
    inline int64_t slaPpsDropBps() const { DARABONBA_PTR_GET_DEFAULT(slaPpsDropBps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaPpsDropBps(int64_t slaPpsDropBps) { DARABONBA_PTR_SET_VALUE(slaPpsDropBps_, slaPpsDropBps) };


    // slaPpsDropPps Field Functions 
    bool hasSlaPpsDropPps() const { return this->slaPpsDropPps_ != nullptr;};
    void deleteSlaPpsDropPps() { this->slaPpsDropPps_ = nullptr;};
    inline int64_t slaPpsDropPps() const { DARABONBA_PTR_GET_DEFAULT(slaPpsDropPps_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setSlaPpsDropPps(int64_t slaPpsDropPps) { DARABONBA_PTR_SET_VALUE(slaPpsDropPps_, slaPpsDropPps) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribePortFlowListResponseBodyPortFlowList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The bandwidth of attack traffic. Unit: bit/s.
    std::shared_ptr<int64_t> attackBps_ = nullptr;
    // The packet forwarding rate of attack traffic. Unit: pps.
    std::shared_ptr<int64_t> attackPps_ = nullptr;
    // The inbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> inBps_ = nullptr;
    // The packet forwarding rate of inbound traffic. Unit: packets per second.
    std::shared_ptr<int64_t> inPps_ = nullptr;
    // The index number of the returned data.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The outbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> outBps_ = nullptr;
    // The packet forwarding rate of outbound traffic. Unit: packets per second (pps).
    std::shared_ptr<int64_t> outPps_ = nullptr;
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
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int64_t> slaBpsDropBps_ = nullptr;
    std::shared_ptr<int64_t> slaBpsDropPps_ = nullptr;
    std::shared_ptr<int64_t> slaConnDropBps_ = nullptr;
    std::shared_ptr<int64_t> slaConnDropPps_ = nullptr;
    std::shared_ptr<int64_t> slaCpsDropBps_ = nullptr;
    std::shared_ptr<int64_t> slaCpsDropPps_ = nullptr;
    std::shared_ptr<int64_t> slaPpsDropBps_ = nullptr;
    std::shared_ptr<int64_t> slaPpsDropPps_ = nullptr;
    // The time when the data was collected. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
