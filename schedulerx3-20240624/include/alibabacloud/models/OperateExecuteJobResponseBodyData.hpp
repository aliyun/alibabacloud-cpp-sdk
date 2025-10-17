// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEEXECUTEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_OPERATEEXECUTEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateExecuteJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateExecuteJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateExecuteJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
    };
    OperateExecuteJobResponseBodyData() = default ;
    OperateExecuteJobResponseBodyData(const OperateExecuteJobResponseBodyData &) = default ;
    OperateExecuteJobResponseBodyData(OperateExecuteJobResponseBodyData &&) = default ;
    OperateExecuteJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateExecuteJobResponseBodyData() = default ;
    OperateExecuteJobResponseBodyData& operator=(const OperateExecuteJobResponseBodyData &) = default ;
    OperateExecuteJobResponseBodyData& operator=(OperateExecuteJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobExecutionId_ == nullptr; };
    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string jobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline OperateExecuteJobResponseBodyData& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


  protected:
    std::shared_ptr<string> jobExecutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
