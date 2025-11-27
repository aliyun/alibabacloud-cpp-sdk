// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODYEXECUTORSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODYEXECUTORSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobExecutorsResponseBodyExecutorStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutorsResponseBodyExecutorStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Exception, exception_);
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Initing, initing_);
      DARABONBA_PTR_TO_JSON(Pending, pending_);
      DARABONBA_PTR_TO_JSON(Restarting, restarting_);
      DARABONBA_PTR_TO_JSON(Running, running_);
      DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
      DARABONBA_PTR_TO_JSON(Suspended, suspended_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutorsResponseBodyExecutorStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Exception, exception_);
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Initing, initing_);
      DARABONBA_PTR_FROM_JSON(Pending, pending_);
      DARABONBA_PTR_FROM_JSON(Restarting, restarting_);
      DARABONBA_PTR_FROM_JSON(Running, running_);
      DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
      DARABONBA_PTR_FROM_JSON(Suspended, suspended_);
    };
    ListJobExecutorsResponseBodyExecutorStatus() = default ;
    ListJobExecutorsResponseBodyExecutorStatus(const ListJobExecutorsResponseBodyExecutorStatus &) = default ;
    ListJobExecutorsResponseBodyExecutorStatus(ListJobExecutorsResponseBodyExecutorStatus &&) = default ;
    ListJobExecutorsResponseBodyExecutorStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutorsResponseBodyExecutorStatus() = default ;
    ListJobExecutorsResponseBodyExecutorStatus& operator=(const ListJobExecutorsResponseBodyExecutorStatus &) = default ;
    ListJobExecutorsResponseBodyExecutorStatus& operator=(ListJobExecutorsResponseBodyExecutorStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleted_ == nullptr
        && return this->exception_ == nullptr && return this->failed_ == nullptr && return this->initing_ == nullptr && return this->pending_ == nullptr && return this->restarting_ == nullptr
        && return this->running_ == nullptr && return this->succeeded_ == nullptr && return this->suspended_ == nullptr; };
    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int32_t deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // exception Field Functions 
    bool hasException() const { return this->exception_ != nullptr;};
    void deleteException() { this->exception_ = nullptr;};
    inline int32_t exception() const { DARABONBA_PTR_GET_DEFAULT(exception_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setException(int32_t exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int32_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // initing Field Functions 
    bool hasIniting() const { return this->initing_ != nullptr;};
    void deleteIniting() { this->initing_ = nullptr;};
    inline int32_t initing() const { DARABONBA_PTR_GET_DEFAULT(initing_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setIniting(int32_t initing) { DARABONBA_PTR_SET_VALUE(initing_, initing) };


    // pending Field Functions 
    bool hasPending() const { return this->pending_ != nullptr;};
    void deletePending() { this->pending_ = nullptr;};
    inline int32_t pending() const { DARABONBA_PTR_GET_DEFAULT(pending_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setPending(int32_t pending) { DARABONBA_PTR_SET_VALUE(pending_, pending) };


    // restarting Field Functions 
    bool hasRestarting() const { return this->restarting_ != nullptr;};
    void deleteRestarting() { this->restarting_ = nullptr;};
    inline int32_t restarting() const { DARABONBA_PTR_GET_DEFAULT(restarting_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setRestarting(int32_t restarting) { DARABONBA_PTR_SET_VALUE(restarting_, restarting) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline int32_t running() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // succeeded Field Functions 
    bool hasSucceeded() const { return this->succeeded_ != nullptr;};
    void deleteSucceeded() { this->succeeded_ = nullptr;};
    inline int32_t succeeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setSucceeded(int32_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


    // suspended Field Functions 
    bool hasSuspended() const { return this->suspended_ != nullptr;};
    void deleteSuspended() { this->suspended_ = nullptr;};
    inline int32_t suspended() const { DARABONBA_PTR_GET_DEFAULT(suspended_, 0) };
    inline ListJobExecutorsResponseBodyExecutorStatus& setSuspended(int32_t suspended) { DARABONBA_PTR_SET_VALUE(suspended_, suspended) };


  protected:
    // The number of executers in the Deleted state.
    std::shared_ptr<int32_t> deleted_ = nullptr;
    // The number of executers in the abnormal state.
    std::shared_ptr<int32_t> exception_ = nullptr;
    // The number of executers in the Failed state.
    std::shared_ptr<int32_t> failed_ = nullptr;
    // The number of executers in the initialized state.
    std::shared_ptr<int32_t> initing_ = nullptr;
    // The number of executers in the queued state.
    std::shared_ptr<int32_t> pending_ = nullptr;
    std::shared_ptr<int32_t> restarting_ = nullptr;
    // The number of executers in the running state.
    std::shared_ptr<int32_t> running_ = nullptr;
    // The number of executoresin the Successful state.
    std::shared_ptr<int32_t> succeeded_ = nullptr;
    std::shared_ptr<int32_t> suspended_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
