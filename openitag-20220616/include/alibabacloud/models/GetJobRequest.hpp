// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
    };
    GetJobRequest() = default ;
    GetJobRequest(const GetJobRequest &) = default ;
    GetJobRequest(GetJobRequest &&) = default ;
    GetJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobRequest() = default ;
    GetJobRequest& operator=(const GetJobRequest &) = default ;
    GetJobRequest& operator=(GetJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobType_ == nullptr; };
    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


  protected:
    // Task Type. Currently, only DOWNLOWD_MARKRESULT_FLOW is available.
    shared_ptr<string> jobType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
