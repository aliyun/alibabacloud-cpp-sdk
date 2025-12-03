// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PASSRELEASESTAGEPIPELINEVALIDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PASSRELEASESTAGEPIPELINEVALIDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class PassReleaseStagePipelineValidateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PassReleaseStagePipelineValidateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, PassReleaseStagePipelineValidateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    PassReleaseStagePipelineValidateRequest() = default ;
    PassReleaseStagePipelineValidateRequest(const PassReleaseStagePipelineValidateRequest &) = default ;
    PassReleaseStagePipelineValidateRequest(PassReleaseStagePipelineValidateRequest &&) = default ;
    PassReleaseStagePipelineValidateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PassReleaseStagePipelineValidateRequest() = default ;
    PassReleaseStagePipelineValidateRequest& operator=(const PassReleaseStagePipelineValidateRequest &) = default ;
    PassReleaseStagePipelineValidateRequest& operator=(PassReleaseStagePipelineValidateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->organizationId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline PassReleaseStagePipelineValidateRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline PassReleaseStagePipelineValidateRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
