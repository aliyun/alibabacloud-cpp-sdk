// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPackageJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetPackageJobRequest() = default ;
    GetPackageJobRequest(const GetPackageJobRequest &) = default ;
    GetPackageJobRequest(GetPackageJobRequest &&) = default ;
    GetPackageJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageJobRequest() = default ;
    GetPackageJobRequest& operator=(const GetPackageJobRequest &) = default ;
    GetPackageJobRequest& operator=(GetPackageJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetPackageJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The job ID. You can obtain the job ID from the response parameters of the [SubmitPackageJob](https://help.aliyun.com/document_detail/461964.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
