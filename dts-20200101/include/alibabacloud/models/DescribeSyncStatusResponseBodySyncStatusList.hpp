// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCSTATUSRESPONSEBODYSYNCSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCSTATUSRESPONSEBODYSYNCSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSyncStatusResponseBodySyncStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncStatusResponseBodySyncStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncStatusResponseBodySyncStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSyncStatusResponseBodySyncStatusList() = default ;
    DescribeSyncStatusResponseBodySyncStatusList(const DescribeSyncStatusResponseBodySyncStatusList &) = default ;
    DescribeSyncStatusResponseBodySyncStatusList(DescribeSyncStatusResponseBodySyncStatusList &&) = default ;
    DescribeSyncStatusResponseBodySyncStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncStatusResponseBodySyncStatusList() = default ;
    DescribeSyncStatusResponseBodySyncStatusList& operator=(const DescribeSyncStatusResponseBodySyncStatusList &) = default ;
    DescribeSyncStatusResponseBodySyncStatusList& operator=(DescribeSyncStatusResponseBodySyncStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpoint_ == nullptr
        && return this->code_ == nullptr && return this->delay_ == nullptr && return this->jobId_ == nullptr && return this->rate_ == nullptr && return this->status_ == nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline int64_t checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, 0L) };
    inline DescribeSyncStatusResponseBodySyncStatusList& setCheckpoint(int64_t checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSyncStatusResponseBodySyncStatusList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeSyncStatusResponseBodySyncStatusList& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeSyncStatusResponseBodySyncStatusList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline string rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
    inline DescribeSyncStatusResponseBodySyncStatusList& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSyncStatusResponseBodySyncStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> checkpoint_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int64_t> delay_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> rate_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
