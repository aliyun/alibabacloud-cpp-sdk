// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVPPALGOJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIVPPALGOJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class GetAivppAlgoJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAivppAlgoJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAivppAlgoJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetAivppAlgoJobRequest() = default ;
    GetAivppAlgoJobRequest(const GetAivppAlgoJobRequest &) = default ;
    GetAivppAlgoJobRequest(GetAivppAlgoJobRequest &&) = default ;
    GetAivppAlgoJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAivppAlgoJobRequest() = default ;
    GetAivppAlgoJobRequest& operator=(const GetAivppAlgoJobRequest &) = default ;
    GetAivppAlgoJobRequest& operator=(GetAivppAlgoJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAivppAlgoJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
