// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGETERRAFORMSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MANAGETERRAFORMSTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ManageTerraformStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageTerraformStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ManageTerraformStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ManageTerraformStateResponseBody() = default ;
    ManageTerraformStateResponseBody(const ManageTerraformStateResponseBody &) = default ;
    ManageTerraformStateResponseBody(ManageTerraformStateResponseBody &&) = default ;
    ManageTerraformStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageTerraformStateResponseBody() = default ;
    ManageTerraformStateResponseBody& operator=(const ManageTerraformStateResponseBody &) = default ;
    ManageTerraformStateResponseBody& operator=(ManageTerraformStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->requestId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ManageTerraformStateResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ManageTerraformStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> jobId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
