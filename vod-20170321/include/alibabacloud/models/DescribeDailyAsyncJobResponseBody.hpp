// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDAILYASYNCJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDAILYASYNCJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDailyAsyncJobResponseBodyDailyJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeDailyAsyncJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDailyAsyncJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DailyJobList, dailyJobList_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDailyAsyncJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyJobList, dailyJobList_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDailyAsyncJobResponseBody() = default ;
    DescribeDailyAsyncJobResponseBody(const DescribeDailyAsyncJobResponseBody &) = default ;
    DescribeDailyAsyncJobResponseBody(DescribeDailyAsyncJobResponseBody &&) = default ;
    DescribeDailyAsyncJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDailyAsyncJobResponseBody() = default ;
    DescribeDailyAsyncJobResponseBody& operator=(const DescribeDailyAsyncJobResponseBody &) = default ;
    DescribeDailyAsyncJobResponseBody& operator=(DescribeDailyAsyncJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dailyJobList_ != nullptr
        && this->jobType_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // dailyJobList Field Functions 
    bool hasDailyJobList() const { return this->dailyJobList_ != nullptr;};
    void deleteDailyJobList() { this->dailyJobList_ = nullptr;};
    inline const vector<DescribeDailyAsyncJobResponseBodyDailyJobList> & dailyJobList() const { DARABONBA_PTR_GET_CONST(dailyJobList_, vector<DescribeDailyAsyncJobResponseBodyDailyJobList>) };
    inline vector<DescribeDailyAsyncJobResponseBodyDailyJobList> dailyJobList() { DARABONBA_PTR_GET(dailyJobList_, vector<DescribeDailyAsyncJobResponseBodyDailyJobList>) };
    inline DescribeDailyAsyncJobResponseBody& setDailyJobList(const vector<DescribeDailyAsyncJobResponseBodyDailyJobList> & dailyJobList) { DARABONBA_PTR_SET_VALUE(dailyJobList_, dailyJobList) };
    inline DescribeDailyAsyncJobResponseBody& setDailyJobList(vector<DescribeDailyAsyncJobResponseBodyDailyJobList> && dailyJobList) { DARABONBA_PTR_SET_RVALUE(dailyJobList_, dailyJobList) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDailyAsyncJobResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDailyAsyncJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDailyAsyncJobResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeDailyAsyncJobResponseBodyDailyJobList>> dailyJobList_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
