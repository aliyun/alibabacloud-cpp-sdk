// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorEventsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorEventsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(TimeAfter, timeAfter_);
      DARABONBA_PTR_TO_JSON(TimeBefore, timeBefore_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorEventsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(TimeAfter, timeAfter_);
      DARABONBA_PTR_FROM_JSON(TimeBefore, timeBefore_);
    };
    ListExecutorEventsRequestFilter() = default ;
    ListExecutorEventsRequestFilter(const ListExecutorEventsRequestFilter &) = default ;
    ListExecutorEventsRequestFilter(ListExecutorEventsRequestFilter &&) = default ;
    ListExecutorEventsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorEventsRequestFilter() = default ;
    ListExecutorEventsRequestFilter& operator=(const ListExecutorEventsRequestFilter &) = default ;
    ListExecutorEventsRequestFilter& operator=(ListExecutorEventsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executorIds_ == nullptr
        && return this->jobId_ == nullptr && return this->level_ == nullptr && return this->timeAfter_ == nullptr && return this->timeBefore_ == nullptr; };
    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline ListExecutorEventsRequestFilter& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline ListExecutorEventsRequestFilter& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListExecutorEventsRequestFilter& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListExecutorEventsRequestFilter& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // timeAfter Field Functions 
    bool hasTimeAfter() const { return this->timeAfter_ != nullptr;};
    void deleteTimeAfter() { this->timeAfter_ = nullptr;};
    inline int64_t timeAfter() const { DARABONBA_PTR_GET_DEFAULT(timeAfter_, 0L) };
    inline ListExecutorEventsRequestFilter& setTimeAfter(int64_t timeAfter) { DARABONBA_PTR_SET_VALUE(timeAfter_, timeAfter) };


    // timeBefore Field Functions 
    bool hasTimeBefore() const { return this->timeBefore_ != nullptr;};
    void deleteTimeBefore() { this->timeBefore_ = nullptr;};
    inline int64_t timeBefore() const { DARABONBA_PTR_GET_DEFAULT(timeBefore_, 0L) };
    inline ListExecutorEventsRequestFilter& setTimeBefore(int64_t timeBefore) { DARABONBA_PTR_SET_VALUE(timeBefore_, timeBefore) };


  protected:
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<int64_t> timeAfter_ = nullptr;
    std::shared_ptr<int64_t> timeBefore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
