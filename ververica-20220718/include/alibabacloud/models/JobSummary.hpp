// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_JOBSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobSummary& obj) { 
      DARABONBA_PTR_TO_JSON(cancelled, cancelled_);
      DARABONBA_PTR_TO_JSON(cancelling, cancelling_);
      DARABONBA_PTR_TO_JSON(failed, failed_);
      DARABONBA_PTR_TO_JSON(finished, finished_);
      DARABONBA_PTR_TO_JSON(running, running_);
      DARABONBA_PTR_TO_JSON(starting, starting_);
    };
    friend void from_json(const Darabonba::Json& j, JobSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(cancelled, cancelled_);
      DARABONBA_PTR_FROM_JSON(cancelling, cancelling_);
      DARABONBA_PTR_FROM_JSON(failed, failed_);
      DARABONBA_PTR_FROM_JSON(finished, finished_);
      DARABONBA_PTR_FROM_JSON(running, running_);
      DARABONBA_PTR_FROM_JSON(starting, starting_);
    };
    JobSummary() = default ;
    JobSummary(const JobSummary &) = default ;
    JobSummary(JobSummary &&) = default ;
    JobSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobSummary() = default ;
    JobSummary& operator=(const JobSummary &) = default ;
    JobSummary& operator=(JobSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelled_ == nullptr
        && return this->cancelling_ == nullptr && return this->failed_ == nullptr && return this->finished_ == nullptr && return this->running_ == nullptr && return this->starting_ == nullptr; };
    // cancelled Field Functions 
    bool hasCancelled() const { return this->cancelled_ != nullptr;};
    void deleteCancelled() { this->cancelled_ = nullptr;};
    inline int32_t cancelled() const { DARABONBA_PTR_GET_DEFAULT(cancelled_, 0) };
    inline JobSummary& setCancelled(int32_t cancelled) { DARABONBA_PTR_SET_VALUE(cancelled_, cancelled) };


    // cancelling Field Functions 
    bool hasCancelling() const { return this->cancelling_ != nullptr;};
    void deleteCancelling() { this->cancelling_ = nullptr;};
    inline int32_t cancelling() const { DARABONBA_PTR_GET_DEFAULT(cancelling_, 0) };
    inline JobSummary& setCancelling(int32_t cancelling) { DARABONBA_PTR_SET_VALUE(cancelling_, cancelling) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int32_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
    inline JobSummary& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline int32_t finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0) };
    inline JobSummary& setFinished(int32_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline int32_t running() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
    inline JobSummary& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // starting Field Functions 
    bool hasStarting() const { return this->starting_ != nullptr;};
    void deleteStarting() { this->starting_ = nullptr;};
    inline int32_t starting() const { DARABONBA_PTR_GET_DEFAULT(starting_, 0) };
    inline JobSummary& setStarting(int32_t starting) { DARABONBA_PTR_SET_VALUE(starting_, starting) };


  protected:
    std::shared_ptr<int32_t> cancelled_ = nullptr;
    std::shared_ptr<int32_t> cancelling_ = nullptr;
    std::shared_ptr<int32_t> failed_ = nullptr;
    std::shared_ptr<int32_t> finished_ = nullptr;
    std::shared_ptr<int32_t> running_ = nullptr;
    std::shared_ptr<int32_t> starting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
