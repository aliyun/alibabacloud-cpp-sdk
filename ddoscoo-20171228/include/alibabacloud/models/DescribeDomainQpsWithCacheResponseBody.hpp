// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSWITHCACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSWITHCACHERESPONSEBODY_HPP_
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
  class DescribeDomainQpsWithCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsWithCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Blocks, blocks_);
      DARABONBA_PTR_TO_JSON(CacheHits, cacheHits_);
      DARABONBA_PTR_TO_JSON(CcBlockQps, ccBlockQps_);
      DARABONBA_PTR_TO_JSON(CcJsQps, ccJsQps_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IpBlockQps, ipBlockQps_);
      DARABONBA_PTR_TO_JSON(PreciseBlocks, preciseBlocks_);
      DARABONBA_PTR_TO_JSON(PreciseJsQps, preciseJsQps_);
      DARABONBA_PTR_TO_JSON(RegionBlocks, regionBlocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Totals, totals_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsWithCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Blocks, blocks_);
      DARABONBA_PTR_FROM_JSON(CacheHits, cacheHits_);
      DARABONBA_PTR_FROM_JSON(CcBlockQps, ccBlockQps_);
      DARABONBA_PTR_FROM_JSON(CcJsQps, ccJsQps_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IpBlockQps, ipBlockQps_);
      DARABONBA_PTR_FROM_JSON(PreciseBlocks, preciseBlocks_);
      DARABONBA_PTR_FROM_JSON(PreciseJsQps, preciseJsQps_);
      DARABONBA_PTR_FROM_JSON(RegionBlocks, regionBlocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Totals, totals_);
    };
    DescribeDomainQpsWithCacheResponseBody() = default ;
    DescribeDomainQpsWithCacheResponseBody(const DescribeDomainQpsWithCacheResponseBody &) = default ;
    DescribeDomainQpsWithCacheResponseBody(DescribeDomainQpsWithCacheResponseBody &&) = default ;
    DescribeDomainQpsWithCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsWithCacheResponseBody() = default ;
    DescribeDomainQpsWithCacheResponseBody& operator=(const DescribeDomainQpsWithCacheResponseBody &) = default ;
    DescribeDomainQpsWithCacheResponseBody& operator=(DescribeDomainQpsWithCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blocks_ != nullptr
        && this->cacheHits_ != nullptr && this->ccBlockQps_ != nullptr && this->ccJsQps_ != nullptr && this->interval_ != nullptr && this->ipBlockQps_ != nullptr
        && this->preciseBlocks_ != nullptr && this->preciseJsQps_ != nullptr && this->regionBlocks_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr
        && this->totals_ != nullptr; };
    // blocks Field Functions 
    bool hasBlocks() const { return this->blocks_ != nullptr;};
    void deleteBlocks() { this->blocks_ = nullptr;};
    inline const vector<string> & blocks() const { DARABONBA_PTR_GET_CONST(blocks_, vector<string>) };
    inline vector<string> blocks() { DARABONBA_PTR_GET(blocks_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setBlocks(const vector<string> & blocks) { DARABONBA_PTR_SET_VALUE(blocks_, blocks) };
    inline DescribeDomainQpsWithCacheResponseBody& setBlocks(vector<string> && blocks) { DARABONBA_PTR_SET_RVALUE(blocks_, blocks) };


    // cacheHits Field Functions 
    bool hasCacheHits() const { return this->cacheHits_ != nullptr;};
    void deleteCacheHits() { this->cacheHits_ = nullptr;};
    inline const vector<string> & cacheHits() const { DARABONBA_PTR_GET_CONST(cacheHits_, vector<string>) };
    inline vector<string> cacheHits() { DARABONBA_PTR_GET(cacheHits_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setCacheHits(const vector<string> & cacheHits) { DARABONBA_PTR_SET_VALUE(cacheHits_, cacheHits) };
    inline DescribeDomainQpsWithCacheResponseBody& setCacheHits(vector<string> && cacheHits) { DARABONBA_PTR_SET_RVALUE(cacheHits_, cacheHits) };


    // ccBlockQps Field Functions 
    bool hasCcBlockQps() const { return this->ccBlockQps_ != nullptr;};
    void deleteCcBlockQps() { this->ccBlockQps_ = nullptr;};
    inline const vector<string> & ccBlockQps() const { DARABONBA_PTR_GET_CONST(ccBlockQps_, vector<string>) };
    inline vector<string> ccBlockQps() { DARABONBA_PTR_GET(ccBlockQps_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setCcBlockQps(const vector<string> & ccBlockQps) { DARABONBA_PTR_SET_VALUE(ccBlockQps_, ccBlockQps) };
    inline DescribeDomainQpsWithCacheResponseBody& setCcBlockQps(vector<string> && ccBlockQps) { DARABONBA_PTR_SET_RVALUE(ccBlockQps_, ccBlockQps) };


    // ccJsQps Field Functions 
    bool hasCcJsQps() const { return this->ccJsQps_ != nullptr;};
    void deleteCcJsQps() { this->ccJsQps_ = nullptr;};
    inline const vector<string> & ccJsQps() const { DARABONBA_PTR_GET_CONST(ccJsQps_, vector<string>) };
    inline vector<string> ccJsQps() { DARABONBA_PTR_GET(ccJsQps_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setCcJsQps(const vector<string> & ccJsQps) { DARABONBA_PTR_SET_VALUE(ccJsQps_, ccJsQps) };
    inline DescribeDomainQpsWithCacheResponseBody& setCcJsQps(vector<string> && ccJsQps) { DARABONBA_PTR_SET_RVALUE(ccJsQps_, ccJsQps) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeDomainQpsWithCacheResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ipBlockQps Field Functions 
    bool hasIpBlockQps() const { return this->ipBlockQps_ != nullptr;};
    void deleteIpBlockQps() { this->ipBlockQps_ = nullptr;};
    inline const vector<string> & ipBlockQps() const { DARABONBA_PTR_GET_CONST(ipBlockQps_, vector<string>) };
    inline vector<string> ipBlockQps() { DARABONBA_PTR_GET(ipBlockQps_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setIpBlockQps(const vector<string> & ipBlockQps) { DARABONBA_PTR_SET_VALUE(ipBlockQps_, ipBlockQps) };
    inline DescribeDomainQpsWithCacheResponseBody& setIpBlockQps(vector<string> && ipBlockQps) { DARABONBA_PTR_SET_RVALUE(ipBlockQps_, ipBlockQps) };


    // preciseBlocks Field Functions 
    bool hasPreciseBlocks() const { return this->preciseBlocks_ != nullptr;};
    void deletePreciseBlocks() { this->preciseBlocks_ = nullptr;};
    inline const vector<string> & preciseBlocks() const { DARABONBA_PTR_GET_CONST(preciseBlocks_, vector<string>) };
    inline vector<string> preciseBlocks() { DARABONBA_PTR_GET(preciseBlocks_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setPreciseBlocks(const vector<string> & preciseBlocks) { DARABONBA_PTR_SET_VALUE(preciseBlocks_, preciseBlocks) };
    inline DescribeDomainQpsWithCacheResponseBody& setPreciseBlocks(vector<string> && preciseBlocks) { DARABONBA_PTR_SET_RVALUE(preciseBlocks_, preciseBlocks) };


    // preciseJsQps Field Functions 
    bool hasPreciseJsQps() const { return this->preciseJsQps_ != nullptr;};
    void deletePreciseJsQps() { this->preciseJsQps_ = nullptr;};
    inline const vector<string> & preciseJsQps() const { DARABONBA_PTR_GET_CONST(preciseJsQps_, vector<string>) };
    inline vector<string> preciseJsQps() { DARABONBA_PTR_GET(preciseJsQps_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setPreciseJsQps(const vector<string> & preciseJsQps) { DARABONBA_PTR_SET_VALUE(preciseJsQps_, preciseJsQps) };
    inline DescribeDomainQpsWithCacheResponseBody& setPreciseJsQps(vector<string> && preciseJsQps) { DARABONBA_PTR_SET_RVALUE(preciseJsQps_, preciseJsQps) };


    // regionBlocks Field Functions 
    bool hasRegionBlocks() const { return this->regionBlocks_ != nullptr;};
    void deleteRegionBlocks() { this->regionBlocks_ = nullptr;};
    inline const vector<string> & regionBlocks() const { DARABONBA_PTR_GET_CONST(regionBlocks_, vector<string>) };
    inline vector<string> regionBlocks() { DARABONBA_PTR_GET(regionBlocks_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setRegionBlocks(const vector<string> & regionBlocks) { DARABONBA_PTR_SET_VALUE(regionBlocks_, regionBlocks) };
    inline DescribeDomainQpsWithCacheResponseBody& setRegionBlocks(vector<string> && regionBlocks) { DARABONBA_PTR_SET_RVALUE(regionBlocks_, regionBlocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainQpsWithCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDomainQpsWithCacheResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totals Field Functions 
    bool hasTotals() const { return this->totals_ != nullptr;};
    void deleteTotals() { this->totals_ = nullptr;};
    inline const vector<string> & totals() const { DARABONBA_PTR_GET_CONST(totals_, vector<string>) };
    inline vector<string> totals() { DARABONBA_PTR_GET(totals_, vector<string>) };
    inline DescribeDomainQpsWithCacheResponseBody& setTotals(const vector<string> & totals) { DARABONBA_PTR_SET_VALUE(totals_, totals) };
    inline DescribeDomainQpsWithCacheResponseBody& setTotals(vector<string> && totals) { DARABONBA_PTR_SET_RVALUE(totals_, totals) };


  protected:
    std::shared_ptr<vector<string>> blocks_ = nullptr;
    std::shared_ptr<vector<string>> cacheHits_ = nullptr;
    std::shared_ptr<vector<string>> ccBlockQps_ = nullptr;
    std::shared_ptr<vector<string>> ccJsQps_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<vector<string>> ipBlockQps_ = nullptr;
    std::shared_ptr<vector<string>> preciseBlocks_ = nullptr;
    std::shared_ptr<vector<string>> preciseJsQps_ = nullptr;
    std::shared_ptr<vector<string>> regionBlocks_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<vector<string>> totals_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
