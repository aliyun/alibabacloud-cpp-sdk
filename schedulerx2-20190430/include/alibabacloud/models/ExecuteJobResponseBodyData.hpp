// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ExecuteJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobInstanceId, jobInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInstanceId, jobInstanceId_);
    };
    ExecuteJobResponseBodyData() = default ;
    ExecuteJobResponseBodyData(const ExecuteJobResponseBodyData &) = default ;
    ExecuteJobResponseBodyData(ExecuteJobResponseBodyData &&) = default ;
    ExecuteJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteJobResponseBodyData() = default ;
    ExecuteJobResponseBodyData& operator=(const ExecuteJobResponseBodyData &) = default ;
    ExecuteJobResponseBodyData& operator=(ExecuteJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobInstanceId_ == nullptr; };
    // jobInstanceId Field Functions 
    bool hasJobInstanceId() const { return this->jobInstanceId_ != nullptr;};
    void deleteJobInstanceId() { this->jobInstanceId_ = nullptr;};
    inline int64_t jobInstanceId() const { DARABONBA_PTR_GET_DEFAULT(jobInstanceId_, 0L) };
    inline ExecuteJobResponseBodyData& setJobInstanceId(int64_t jobInstanceId) { DARABONBA_PTR_SET_VALUE(jobInstanceId_, jobInstanceId) };


  protected:
    // The job instance ID.
    std::shared_ptr<int64_t> jobInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
