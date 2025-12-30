// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESMARTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESMARTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteSmartJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSmartJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSmartJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    DeleteSmartJobRequest() = default ;
    DeleteSmartJobRequest(const DeleteSmartJobRequest &) = default ;
    DeleteSmartJobRequest(DeleteSmartJobRequest &&) = default ;
    DeleteSmartJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSmartJobRequest() = default ;
    DeleteSmartJobRequest& operator=(const DeleteSmartJobRequest &) = default ;
    DeleteSmartJobRequest& operator=(DeleteSmartJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DeleteSmartJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The IDs of the jobs to delete. Separate multiple IDs with commas (,).
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
