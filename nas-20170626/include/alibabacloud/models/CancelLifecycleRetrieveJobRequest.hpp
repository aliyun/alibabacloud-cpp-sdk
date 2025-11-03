// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELLIFECYCLERETRIEVEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELLIFECYCLERETRIEVEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CancelLifecycleRetrieveJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelLifecycleRetrieveJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelLifecycleRetrieveJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    CancelLifecycleRetrieveJobRequest() = default ;
    CancelLifecycleRetrieveJobRequest(const CancelLifecycleRetrieveJobRequest &) = default ;
    CancelLifecycleRetrieveJobRequest(CancelLifecycleRetrieveJobRequest &&) = default ;
    CancelLifecycleRetrieveJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelLifecycleRetrieveJobRequest() = default ;
    CancelLifecycleRetrieveJobRequest& operator=(const CancelLifecycleRetrieveJobRequest &) = default ;
    CancelLifecycleRetrieveJobRequest& operator=(CancelLifecycleRetrieveJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CancelLifecycleRetrieveJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the data retrieval task.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
