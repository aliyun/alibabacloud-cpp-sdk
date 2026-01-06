// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELRECYCLEBINJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELRECYCLEBINJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelRecycleBinJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelRecycleBinJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelRecycleBinJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    CancelRecycleBinJobRequest() = default ;
    CancelRecycleBinJobRequest(const CancelRecycleBinJobRequest &) = default ;
    CancelRecycleBinJobRequest(CancelRecycleBinJobRequest &&) = default ;
    CancelRecycleBinJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelRecycleBinJobRequest() = default ;
    CancelRecycleBinJobRequest& operator=(const CancelRecycleBinJobRequest &) = default ;
    CancelRecycleBinJobRequest& operator=(CancelRecycleBinJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CancelRecycleBinJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The job ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
