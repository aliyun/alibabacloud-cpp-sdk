// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class CreateJobPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobPlanId, jobPlanId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobPlanId, jobPlanId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateJobPlanResponseBody() = default ;
    CreateJobPlanResponseBody(const CreateJobPlanResponseBody &) = default ;
    CreateJobPlanResponseBody(CreateJobPlanResponseBody &&) = default ;
    CreateJobPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobPlanResponseBody() = default ;
    CreateJobPlanResponseBody& operator=(const CreateJobPlanResponseBody &) = default ;
    CreateJobPlanResponseBody& operator=(CreateJobPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobPlanId_ == nullptr
        && this->requestId_ == nullptr; };
    // jobPlanId Field Functions 
    bool hasJobPlanId() const { return this->jobPlanId_ != nullptr;};
    void deleteJobPlanId() { this->jobPlanId_ = nullptr;};
    inline string getJobPlanId() const { DARABONBA_PTR_GET_DEFAULT(jobPlanId_, "") };
    inline CreateJobPlanResponseBody& setJobPlanId(string jobPlanId) { DARABONBA_PTR_SET_VALUE(jobPlanId_, jobPlanId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateJobPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job plan ID.
    shared_ptr<string> jobPlanId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
