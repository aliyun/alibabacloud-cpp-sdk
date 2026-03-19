// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainQpsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainQpsListResponseBody() = default ;
    DescribeDomainQpsListResponseBody(const DescribeDomainQpsListResponseBody &) = default ;
    DescribeDomainQpsListResponseBody(DescribeDomainQpsListResponseBody &&) = default ;
    DescribeDomainQpsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsListResponseBody() = default ;
    DescribeDomainQpsListResponseBody& operator=(const DescribeDomainQpsListResponseBody &) = default ;
    DescribeDomainQpsListResponseBody& operator=(DescribeDomainQpsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(AttackQps, attackQps_);
        DARABONBA_PTR_TO_JSON(CacheHits, cacheHits_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(MaxAttackQps, maxAttackQps_);
        DARABONBA_PTR_TO_JSON(MaxNormalQps, maxNormalQps_);
        DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalQps, totalQps_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackQps, attackQps_);
        DARABONBA_PTR_FROM_JSON(CacheHits, cacheHits_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(MaxAttackQps, maxAttackQps_);
        DARABONBA_PTR_FROM_JSON(MaxNormalQps, maxNormalQps_);
        DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalQps, totalQps_);
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
      virtual bool empty() const override { return this->attackQps_ == nullptr
        && this->cacheHits_ == nullptr && this->index_ == nullptr && this->maxAttackQps_ == nullptr && this->maxNormalQps_ == nullptr && this->maxQps_ == nullptr
        && this->totalCount_ == nullptr && this->totalQps_ == nullptr; };
      // attackQps Field Functions 
      bool hasAttackQps() const { return this->attackQps_ != nullptr;};
      void deleteAttackQps() { this->attackQps_ = nullptr;};
      inline int64_t getAttackQps() const { DARABONBA_PTR_GET_DEFAULT(attackQps_, 0L) };
      inline DataList& setAttackQps(int64_t attackQps) { DARABONBA_PTR_SET_VALUE(attackQps_, attackQps) };


      // cacheHits Field Functions 
      bool hasCacheHits() const { return this->cacheHits_ != nullptr;};
      void deleteCacheHits() { this->cacheHits_ = nullptr;};
      inline int64_t getCacheHits() const { DARABONBA_PTR_GET_DEFAULT(cacheHits_, 0L) };
      inline DataList& setCacheHits(int64_t cacheHits) { DARABONBA_PTR_SET_VALUE(cacheHits_, cacheHits) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline DataList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // maxAttackQps Field Functions 
      bool hasMaxAttackQps() const { return this->maxAttackQps_ != nullptr;};
      void deleteMaxAttackQps() { this->maxAttackQps_ = nullptr;};
      inline int64_t getMaxAttackQps() const { DARABONBA_PTR_GET_DEFAULT(maxAttackQps_, 0L) };
      inline DataList& setMaxAttackQps(int64_t maxAttackQps) { DARABONBA_PTR_SET_VALUE(maxAttackQps_, maxAttackQps) };


      // maxNormalQps Field Functions 
      bool hasMaxNormalQps() const { return this->maxNormalQps_ != nullptr;};
      void deleteMaxNormalQps() { this->maxNormalQps_ = nullptr;};
      inline int64_t getMaxNormalQps() const { DARABONBA_PTR_GET_DEFAULT(maxNormalQps_, 0L) };
      inline DataList& setMaxNormalQps(int64_t maxNormalQps) { DARABONBA_PTR_SET_VALUE(maxNormalQps_, maxNormalQps) };


      // maxQps Field Functions 
      bool hasMaxQps() const { return this->maxQps_ != nullptr;};
      void deleteMaxQps() { this->maxQps_ = nullptr;};
      inline int64_t getMaxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
      inline DataList& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline DataList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalQps Field Functions 
      bool hasTotalQps() const { return this->totalQps_ != nullptr;};
      void deleteTotalQps() { this->totalQps_ = nullptr;};
      inline int64_t getTotalQps() const { DARABONBA_PTR_GET_DEFAULT(totalQps_, 0L) };
      inline DataList& setTotalQps(int64_t totalQps) { DARABONBA_PTR_SET_VALUE(totalQps_, totalQps) };


    protected:
      shared_ptr<int64_t> attackQps_ {};
      shared_ptr<int64_t> cacheHits_ {};
      shared_ptr<int64_t> index_ {};
      shared_ptr<int64_t> maxAttackQps_ {};
      shared_ptr<int64_t> maxNormalQps_ {};
      shared_ptr<int64_t> maxQps_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> totalQps_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeDomainQpsListResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeDomainQpsListResponseBody::DataList>) };
    inline vector<DescribeDomainQpsListResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeDomainQpsListResponseBody::DataList>) };
    inline DescribeDomainQpsListResponseBody& setDataList(const vector<DescribeDomainQpsListResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeDomainQpsListResponseBody& setDataList(vector<DescribeDomainQpsListResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainQpsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDomainQpsListResponseBody::DataList>> dataList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
