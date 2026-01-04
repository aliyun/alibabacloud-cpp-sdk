// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
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
  class DescribeDomainQPSListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQPSListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainQPSList, domainQPSList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQPSListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainQPSList, domainQPSList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainQPSListResponseBody() = default ;
    DescribeDomainQPSListResponseBody(const DescribeDomainQPSListResponseBody &) = default ;
    DescribeDomainQPSListResponseBody(DescribeDomainQPSListResponseBody &&) = default ;
    DescribeDomainQPSListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQPSListResponseBody() = default ;
    DescribeDomainQPSListResponseBody& operator=(const DescribeDomainQPSListResponseBody &) = default ;
    DescribeDomainQPSListResponseBody& operator=(DescribeDomainQPSListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainQPSList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainQPSList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DomainQPSList& obj) { 
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
      DomainQPSList() = default ;
      DomainQPSList(const DomainQPSList &) = default ;
      DomainQPSList(DomainQPSList &&) = default ;
      DomainQPSList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainQPSList() = default ;
      DomainQPSList& operator=(const DomainQPSList &) = default ;
      DomainQPSList& operator=(DomainQPSList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackQps_ == nullptr
        && this->cacheHits_ == nullptr && this->index_ == nullptr && this->maxAttackQps_ == nullptr && this->maxNormalQps_ == nullptr && this->maxQps_ == nullptr
        && this->time_ == nullptr && this->totalCount_ == nullptr && this->totalQps_ == nullptr; };
      // attackQps Field Functions 
      bool hasAttackQps() const { return this->attackQps_ != nullptr;};
      void deleteAttackQps() { this->attackQps_ = nullptr;};
      inline int64_t getAttackQps() const { DARABONBA_PTR_GET_DEFAULT(attackQps_, 0L) };
      inline DomainQPSList& setAttackQps(int64_t attackQps) { DARABONBA_PTR_SET_VALUE(attackQps_, attackQps) };


      // cacheHits Field Functions 
      bool hasCacheHits() const { return this->cacheHits_ != nullptr;};
      void deleteCacheHits() { this->cacheHits_ = nullptr;};
      inline int64_t getCacheHits() const { DARABONBA_PTR_GET_DEFAULT(cacheHits_, 0L) };
      inline DomainQPSList& setCacheHits(int64_t cacheHits) { DARABONBA_PTR_SET_VALUE(cacheHits_, cacheHits) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline DomainQPSList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // maxAttackQps Field Functions 
      bool hasMaxAttackQps() const { return this->maxAttackQps_ != nullptr;};
      void deleteMaxAttackQps() { this->maxAttackQps_ = nullptr;};
      inline int64_t getMaxAttackQps() const { DARABONBA_PTR_GET_DEFAULT(maxAttackQps_, 0L) };
      inline DomainQPSList& setMaxAttackQps(int64_t maxAttackQps) { DARABONBA_PTR_SET_VALUE(maxAttackQps_, maxAttackQps) };


      // maxNormalQps Field Functions 
      bool hasMaxNormalQps() const { return this->maxNormalQps_ != nullptr;};
      void deleteMaxNormalQps() { this->maxNormalQps_ = nullptr;};
      inline int64_t getMaxNormalQps() const { DARABONBA_PTR_GET_DEFAULT(maxNormalQps_, 0L) };
      inline DomainQPSList& setMaxNormalQps(int64_t maxNormalQps) { DARABONBA_PTR_SET_VALUE(maxNormalQps_, maxNormalQps) };


      // maxQps Field Functions 
      bool hasMaxQps() const { return this->maxQps_ != nullptr;};
      void deleteMaxQps() { this->maxQps_ = nullptr;};
      inline int64_t getMaxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
      inline DomainQPSList& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DomainQPSList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline DomainQPSList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalQps Field Functions 
      bool hasTotalQps() const { return this->totalQps_ != nullptr;};
      void deleteTotalQps() { this->totalQps_ = nullptr;};
      inline int64_t getTotalQps() const { DARABONBA_PTR_GET_DEFAULT(totalQps_, 0L) };
      inline DomainQPSList& setTotalQps(int64_t totalQps) { DARABONBA_PTR_SET_VALUE(totalQps_, totalQps) };


    protected:
      // The attack QPS.
      shared_ptr<int64_t> attackQps_ {};
      // The number of cache hits.
      shared_ptr<int64_t> cacheHits_ {};
      // The index number of the returned data.
      shared_ptr<int64_t> index_ {};
      // The peak attack QPS.
      shared_ptr<int64_t> maxAttackQps_ {};
      // The peak of normal QPS.
      shared_ptr<int64_t> maxNormalQps_ {};
      // The peak of total QPS.
      shared_ptr<int64_t> maxQps_ {};
      // The time when the data was collected. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> time_ {};
      // The total number of requests.
      shared_ptr<int64_t> totalCount_ {};
      // The total QPS.
      shared_ptr<int64_t> totalQps_ {};
    };

    virtual bool empty() const override { return this->domainQPSList_ == nullptr
        && this->requestId_ == nullptr; };
    // domainQPSList Field Functions 
    bool hasDomainQPSList() const { return this->domainQPSList_ != nullptr;};
    void deleteDomainQPSList() { this->domainQPSList_ = nullptr;};
    inline const vector<DescribeDomainQPSListResponseBody::DomainQPSList> & getDomainQPSList() const { DARABONBA_PTR_GET_CONST(domainQPSList_, vector<DescribeDomainQPSListResponseBody::DomainQPSList>) };
    inline vector<DescribeDomainQPSListResponseBody::DomainQPSList> getDomainQPSList() { DARABONBA_PTR_GET(domainQPSList_, vector<DescribeDomainQPSListResponseBody::DomainQPSList>) };
    inline DescribeDomainQPSListResponseBody& setDomainQPSList(const vector<DescribeDomainQPSListResponseBody::DomainQPSList> & domainQPSList) { DARABONBA_PTR_SET_VALUE(domainQPSList_, domainQPSList) };
    inline DescribeDomainQPSListResponseBody& setDomainQPSList(vector<DescribeDomainQPSListResponseBody::DomainQPSList> && domainQPSList) { DARABONBA_PTR_SET_RVALUE(domainQPSList_, domainQPSList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainQPSListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the statistics on the QPS of the website.
    shared_ptr<vector<DescribeDomainQPSListResponseBody::DomainQPSList>> domainQPSList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
