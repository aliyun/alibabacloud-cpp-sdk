// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODYDOMAINQPSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODYDOMAINQPSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainQPSListResponseBodyDomainQPSList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQPSListResponseBodyDomainQPSList& obj) { 
      DARABONBA_PTR_TO_JSON(AttackQps, attackQps_);
      DARABONBA_PTR_TO_JSON(CacheHits, cacheHits_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(MaxAttackQps, maxAttackQps_);
      DARABONBA_PTR_TO_JSON(MaxNormalQps, maxNormalQps_);
      DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalQps, totalQps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQPSListResponseBodyDomainQPSList& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackQps, attackQps_);
      DARABONBA_PTR_FROM_JSON(CacheHits, cacheHits_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(MaxAttackQps, maxAttackQps_);
      DARABONBA_PTR_FROM_JSON(MaxNormalQps, maxNormalQps_);
      DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalQps, totalQps_);
    };
    DescribeDomainQPSListResponseBodyDomainQPSList() = default ;
    DescribeDomainQPSListResponseBodyDomainQPSList(const DescribeDomainQPSListResponseBodyDomainQPSList &) = default ;
    DescribeDomainQPSListResponseBodyDomainQPSList(DescribeDomainQPSListResponseBodyDomainQPSList &&) = default ;
    DescribeDomainQPSListResponseBodyDomainQPSList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQPSListResponseBodyDomainQPSList() = default ;
    DescribeDomainQPSListResponseBodyDomainQPSList& operator=(const DescribeDomainQPSListResponseBodyDomainQPSList &) = default ;
    DescribeDomainQPSListResponseBodyDomainQPSList& operator=(DescribeDomainQPSListResponseBodyDomainQPSList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackQps_ != nullptr
        && this->cacheHits_ != nullptr && this->index_ != nullptr && this->maxAttackQps_ != nullptr && this->maxNormalQps_ != nullptr && this->maxQps_ != nullptr
        && this->time_ != nullptr && this->totalCount_ != nullptr && this->totalQps_ != nullptr; };
    // attackQps Field Functions 
    bool hasAttackQps() const { return this->attackQps_ != nullptr;};
    void deleteAttackQps() { this->attackQps_ = nullptr;};
    inline int64_t attackQps() const { DARABONBA_PTR_GET_DEFAULT(attackQps_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setAttackQps(int64_t attackQps) { DARABONBA_PTR_SET_VALUE(attackQps_, attackQps) };


    // cacheHits Field Functions 
    bool hasCacheHits() const { return this->cacheHits_ != nullptr;};
    void deleteCacheHits() { this->cacheHits_ = nullptr;};
    inline int64_t cacheHits() const { DARABONBA_PTR_GET_DEFAULT(cacheHits_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setCacheHits(int64_t cacheHits) { DARABONBA_PTR_SET_VALUE(cacheHits_, cacheHits) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // maxAttackQps Field Functions 
    bool hasMaxAttackQps() const { return this->maxAttackQps_ != nullptr;};
    void deleteMaxAttackQps() { this->maxAttackQps_ = nullptr;};
    inline int64_t maxAttackQps() const { DARABONBA_PTR_GET_DEFAULT(maxAttackQps_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setMaxAttackQps(int64_t maxAttackQps) { DARABONBA_PTR_SET_VALUE(maxAttackQps_, maxAttackQps) };


    // maxNormalQps Field Functions 
    bool hasMaxNormalQps() const { return this->maxNormalQps_ != nullptr;};
    void deleteMaxNormalQps() { this->maxNormalQps_ = nullptr;};
    inline int64_t maxNormalQps() const { DARABONBA_PTR_GET_DEFAULT(maxNormalQps_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setMaxNormalQps(int64_t maxNormalQps) { DARABONBA_PTR_SET_VALUE(maxNormalQps_, maxNormalQps) };


    // maxQps Field Functions 
    bool hasMaxQps() const { return this->maxQps_ != nullptr;};
    void deleteMaxQps() { this->maxQps_ = nullptr;};
    inline int64_t maxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalQps Field Functions 
    bool hasTotalQps() const { return this->totalQps_ != nullptr;};
    void deleteTotalQps() { this->totalQps_ = nullptr;};
    inline int64_t totalQps() const { DARABONBA_PTR_GET_DEFAULT(totalQps_, 0L) };
    inline DescribeDomainQPSListResponseBodyDomainQPSList& setTotalQps(int64_t totalQps) { DARABONBA_PTR_SET_VALUE(totalQps_, totalQps) };


  protected:
    // The attack QPS.
    std::shared_ptr<int64_t> attackQps_ = nullptr;
    // The number of cache hits.
    std::shared_ptr<int64_t> cacheHits_ = nullptr;
    // The index number of the returned data.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The peak attack QPS.
    std::shared_ptr<int64_t> maxAttackQps_ = nullptr;
    // The peak of normal QPS.
    std::shared_ptr<int64_t> maxNormalQps_ = nullptr;
    // The peak of total QPS.
    std::shared_ptr<int64_t> maxQps_ = nullptr;
    // The time when the data was collected. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The total QPS.
    std::shared_ptr<int64_t> totalQps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
