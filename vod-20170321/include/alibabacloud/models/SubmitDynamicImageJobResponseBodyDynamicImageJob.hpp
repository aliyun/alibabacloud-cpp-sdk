// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOB_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitDynamicImageJobResponseBodyDynamicImageJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobResponseBodyDynamicImageJob& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobResponseBodyDynamicImageJob& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    SubmitDynamicImageJobResponseBodyDynamicImageJob() = default ;
    SubmitDynamicImageJobResponseBodyDynamicImageJob(const SubmitDynamicImageJobResponseBodyDynamicImageJob &) = default ;
    SubmitDynamicImageJobResponseBodyDynamicImageJob(SubmitDynamicImageJobResponseBodyDynamicImageJob &&) = default ;
    SubmitDynamicImageJobResponseBodyDynamicImageJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobResponseBodyDynamicImageJob() = default ;
    SubmitDynamicImageJobResponseBodyDynamicImageJob& operator=(const SubmitDynamicImageJobResponseBodyDynamicImageJob &) = default ;
    SubmitDynamicImageJobResponseBodyDynamicImageJob& operator=(SubmitDynamicImageJobResponseBodyDynamicImageJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitDynamicImageJobResponseBodyDynamicImageJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the animated image job.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
