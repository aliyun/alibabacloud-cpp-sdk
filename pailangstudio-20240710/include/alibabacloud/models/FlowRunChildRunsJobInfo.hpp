// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUNCHILDRUNSJOBINFO_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUNCHILDRUNSJOBINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRunChildRunsJobInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRunChildRunsJobInfo& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRunChildRunsJobInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    FlowRunChildRunsJobInfo() = default ;
    FlowRunChildRunsJobInfo(const FlowRunChildRunsJobInfo &) = default ;
    FlowRunChildRunsJobInfo(FlowRunChildRunsJobInfo &&) = default ;
    FlowRunChildRunsJobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRunChildRunsJobInfo() = default ;
    FlowRunChildRunsJobInfo& operator=(const FlowRunChildRunsJobInfo &) = default ;
    FlowRunChildRunsJobInfo& operator=(FlowRunChildRunsJobInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline FlowRunChildRunsJobInfo& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // 任务ID
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
