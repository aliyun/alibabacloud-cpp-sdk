// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDAILYASYNCJOBRESPONSEBODYDAILYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDAILYASYNCJOBRESPONSEBODYDAILYJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeDailyAsyncJobResponseBodyDailyJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDailyAsyncJobResponseBodyDailyJobList& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(JobCount, jobCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDailyAsyncJobResponseBodyDailyJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(JobCount, jobCount_);
    };
    DescribeDailyAsyncJobResponseBodyDailyJobList() = default ;
    DescribeDailyAsyncJobResponseBodyDailyJobList(const DescribeDailyAsyncJobResponseBodyDailyJobList &) = default ;
    DescribeDailyAsyncJobResponseBodyDailyJobList(DescribeDailyAsyncJobResponseBodyDailyJobList &&) = default ;
    DescribeDailyAsyncJobResponseBodyDailyJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDailyAsyncJobResponseBodyDailyJobList() = default ;
    DescribeDailyAsyncJobResponseBodyDailyJobList& operator=(const DescribeDailyAsyncJobResponseBodyDailyJobList &) = default ;
    DescribeDailyAsyncJobResponseBodyDailyJobList& operator=(DescribeDailyAsyncJobResponseBodyDailyJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->jobCount_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeDailyAsyncJobResponseBodyDailyJobList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // jobCount Field Functions 
    bool hasJobCount() const { return this->jobCount_ != nullptr;};
    void deleteJobCount() { this->jobCount_ = nullptr;};
    inline int32_t jobCount() const { DARABONBA_PTR_GET_DEFAULT(jobCount_, 0) };
    inline DescribeDailyAsyncJobResponseBodyDailyJobList& setJobCount(int32_t jobCount) { DARABONBA_PTR_SET_VALUE(jobCount_, jobCount) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<int32_t> jobCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
