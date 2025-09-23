// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainQpsListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AttackQps, attackQps_);
      DARABONBA_PTR_TO_JSON(CacheHits, cacheHits_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(MaxAttackQps, maxAttackQps_);
      DARABONBA_PTR_TO_JSON(MaxNormalQps, maxNormalQps_);
      DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalQps, totalQps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackQps, attackQps_);
      DARABONBA_PTR_FROM_JSON(CacheHits, cacheHits_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(MaxAttackQps, maxAttackQps_);
      DARABONBA_PTR_FROM_JSON(MaxNormalQps, maxNormalQps_);
      DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalQps, totalQps_);
    };
    DescribeDomainQpsListResponseBodyDataList() = default ;
    DescribeDomainQpsListResponseBodyDataList(const DescribeDomainQpsListResponseBodyDataList &) = default ;
    DescribeDomainQpsListResponseBodyDataList(DescribeDomainQpsListResponseBodyDataList &&) = default ;
    DescribeDomainQpsListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsListResponseBodyDataList() = default ;
    DescribeDomainQpsListResponseBodyDataList& operator=(const DescribeDomainQpsListResponseBodyDataList &) = default ;
    DescribeDomainQpsListResponseBodyDataList& operator=(DescribeDomainQpsListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackQps_ != nullptr
        && this->cacheHits_ != nullptr && this->index_ != nullptr && this->maxAttackQps_ != nullptr && this->maxNormalQps_ != nullptr && this->maxQps_ != nullptr
        && this->totalCount_ != nullptr && this->totalQps_ != nullptr; };
    // attackQps Field Functions 
    bool hasAttackQps() const { return this->attackQps_ != nullptr;};
    void deleteAttackQps() { this->attackQps_ = nullptr;};
    inline int64_t attackQps() const { DARABONBA_PTR_GET_DEFAULT(attackQps_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setAttackQps(int64_t attackQps) { DARABONBA_PTR_SET_VALUE(attackQps_, attackQps) };


    // cacheHits Field Functions 
    bool hasCacheHits() const { return this->cacheHits_ != nullptr;};
    void deleteCacheHits() { this->cacheHits_ = nullptr;};
    inline int64_t cacheHits() const { DARABONBA_PTR_GET_DEFAULT(cacheHits_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setCacheHits(int64_t cacheHits) { DARABONBA_PTR_SET_VALUE(cacheHits_, cacheHits) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // maxAttackQps Field Functions 
    bool hasMaxAttackQps() const { return this->maxAttackQps_ != nullptr;};
    void deleteMaxAttackQps() { this->maxAttackQps_ = nullptr;};
    inline int64_t maxAttackQps() const { DARABONBA_PTR_GET_DEFAULT(maxAttackQps_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setMaxAttackQps(int64_t maxAttackQps) { DARABONBA_PTR_SET_VALUE(maxAttackQps_, maxAttackQps) };


    // maxNormalQps Field Functions 
    bool hasMaxNormalQps() const { return this->maxNormalQps_ != nullptr;};
    void deleteMaxNormalQps() { this->maxNormalQps_ = nullptr;};
    inline int64_t maxNormalQps() const { DARABONBA_PTR_GET_DEFAULT(maxNormalQps_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setMaxNormalQps(int64_t maxNormalQps) { DARABONBA_PTR_SET_VALUE(maxNormalQps_, maxNormalQps) };


    // maxQps Field Functions 
    bool hasMaxQps() const { return this->maxQps_ != nullptr;};
    void deleteMaxQps() { this->maxQps_ = nullptr;};
    inline int64_t maxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalQps Field Functions 
    bool hasTotalQps() const { return this->totalQps_ != nullptr;};
    void deleteTotalQps() { this->totalQps_ = nullptr;};
    inline int64_t totalQps() const { DARABONBA_PTR_GET_DEFAULT(totalQps_, 0L) };
    inline DescribeDomainQpsListResponseBodyDataList& setTotalQps(int64_t totalQps) { DARABONBA_PTR_SET_VALUE(totalQps_, totalQps) };


  protected:
    std::shared_ptr<int64_t> attackQps_ = nullptr;
    std::shared_ptr<int64_t> cacheHits_ = nullptr;
    std::shared_ptr<int64_t> index_ = nullptr;
    std::shared_ptr<int64_t> maxAttackQps_ = nullptr;
    std::shared_ptr<int64_t> maxNormalQps_ = nullptr;
    std::shared_ptr<int64_t> maxQps_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> totalQps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
