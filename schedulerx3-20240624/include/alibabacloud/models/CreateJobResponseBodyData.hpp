// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    CreateJobResponseBodyData() = default ;
    CreateJobResponseBodyData(const CreateJobResponseBodyData &) = default ;
    CreateJobResponseBodyData(CreateJobResponseBodyData &&) = default ;
    CreateJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobResponseBodyData() = default ;
    CreateJobResponseBodyData& operator=(const CreateJobResponseBodyData &) = default ;
    CreateJobResponseBodyData& operator=(CreateJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline CreateJobResponseBodyData& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<int64_t> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
