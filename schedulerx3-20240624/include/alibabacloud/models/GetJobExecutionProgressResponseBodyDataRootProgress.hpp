// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATAROOTPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATAROOTPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionProgressResponseBodyDataRootProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionProgressResponseBodyDataRootProgress& obj) { 
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionProgressResponseBodyDataRootProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetJobExecutionProgressResponseBodyDataRootProgress() = default ;
    GetJobExecutionProgressResponseBodyDataRootProgress(const GetJobExecutionProgressResponseBodyDataRootProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataRootProgress(GetJobExecutionProgressResponseBodyDataRootProgress &&) = default ;
    GetJobExecutionProgressResponseBodyDataRootProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionProgressResponseBodyDataRootProgress() = default ;
    GetJobExecutionProgressResponseBodyDataRootProgress& operator=(const GetJobExecutionProgressResponseBodyDataRootProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataRootProgress& operator=(GetJobExecutionProgressResponseBodyDataRootProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finished_ == nullptr
        && return this->total_ == nullptr; };
    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline int64_t finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0L) };
    inline GetJobExecutionProgressResponseBodyDataRootProgress& setFinished(int64_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetJobExecutionProgressResponseBodyDataRootProgress& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> finished_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
