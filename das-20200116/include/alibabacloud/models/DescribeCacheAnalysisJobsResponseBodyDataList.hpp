// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(CacheAnalysisJob, cacheAnalysisJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheAnalysisJob, cacheAnalysisJob_);
    };
    DescribeCacheAnalysisJobsResponseBodyDataList() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataList(const DescribeCacheAnalysisJobsResponseBodyDataList &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataList(DescribeCacheAnalysisJobsResponseBodyDataList &&) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobsResponseBodyDataList() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataList& operator=(const DescribeCacheAnalysisJobsResponseBodyDataList &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataList& operator=(DescribeCacheAnalysisJobsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheAnalysisJob_ != nullptr; };
    // cacheAnalysisJob Field Functions 
    bool hasCacheAnalysisJob() const { return this->cacheAnalysisJob_ != nullptr;};
    void deleteCacheAnalysisJob() { this->cacheAnalysisJob_ = nullptr;};
    inline const vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob> & cacheAnalysisJob() const { DARABONBA_PTR_GET_CONST(cacheAnalysisJob_, vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob>) };
    inline vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob> cacheAnalysisJob() { DARABONBA_PTR_GET(cacheAnalysisJob_, vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob>) };
    inline DescribeCacheAnalysisJobsResponseBodyDataList& setCacheAnalysisJob(const vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob> & cacheAnalysisJob) { DARABONBA_PTR_SET_VALUE(cacheAnalysisJob_, cacheAnalysisJob) };
    inline DescribeCacheAnalysisJobsResponseBodyDataList& setCacheAnalysisJob(vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob> && cacheAnalysisJob) { DARABONBA_PTR_SET_RVALUE(cacheAnalysisJob_, cacheAnalysisJob) };


  protected:
    std::shared_ptr<vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob>> cacheAnalysisJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
