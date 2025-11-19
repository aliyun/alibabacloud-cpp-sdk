// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELURLUPLOADJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELURLUPLOADJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CancelUrlUploadJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelUrlUploadJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(UploadUrls, uploadUrls_);
    };
    friend void from_json(const Darabonba::Json& j, CancelUrlUploadJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(UploadUrls, uploadUrls_);
    };
    CancelUrlUploadJobsRequest() = default ;
    CancelUrlUploadJobsRequest(const CancelUrlUploadJobsRequest &) = default ;
    CancelUrlUploadJobsRequest(CancelUrlUploadJobsRequest &&) = default ;
    CancelUrlUploadJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelUrlUploadJobsRequest() = default ;
    CancelUrlUploadJobsRequest& operator=(const CancelUrlUploadJobsRequest &) = default ;
    CancelUrlUploadJobsRequest& operator=(CancelUrlUploadJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIds_ == nullptr
        && return this->uploadUrls_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string jobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline CancelUrlUploadJobsRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // uploadUrls Field Functions 
    bool hasUploadUrls() const { return this->uploadUrls_ != nullptr;};
    void deleteUploadUrls() { this->uploadUrls_ = nullptr;};
    inline string uploadUrls() const { DARABONBA_PTR_GET_DEFAULT(uploadUrls_, "") };
    inline CancelUrlUploadJobsRequest& setUploadUrls(string uploadUrls) { DARABONBA_PTR_SET_VALUE(uploadUrls_, uploadUrls) };


  protected:
    // The IDs of the upload jobs. You can obtain the job IDs from PlayInfo in the response to the [GetPlayInfo](https://help.aliyun.com/document_detail/56124.html) operation.
    // 
    // *   You can specify a maximum of 10 IDs.
    // *   Separate multiple IDs with commas (,).
    // 
    // >  You must specify either JobIds or UploadUrls. If you specify both the JobIds and UploadUrls parameters, only the value of the JobIds parameter takes effect.
    std::shared_ptr<string> jobIds_ = nullptr;
    // The upload URLs of source video files. Separate multiple URLs with commas (,). You can specify a maximum of 10 URLs.
    // 
    // > *   You must encode the URLs before you use the URLs.
    // > *   You must specify either JobIds or UploadUrls. If you specify both the JobIds and UploadUrls parameters, only the value of the JobIds parameter takes effect.
    std::shared_ptr<string> uploadUrls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
