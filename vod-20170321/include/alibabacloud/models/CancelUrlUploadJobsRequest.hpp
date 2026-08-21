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
        && this->uploadUrls_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string getJobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline CancelUrlUploadJobsRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // uploadUrls Field Functions 
    bool hasUploadUrls() const { return this->uploadUrls_ != nullptr;};
    void deleteUploadUrls() { this->uploadUrls_ = nullptr;};
    inline string getUploadUrls() const { DARABONBA_PTR_GET_DEFAULT(uploadUrls_, "") };
    inline CancelUrlUploadJobsRequest& setUploadUrls(string uploadUrls) { DARABONBA_PTR_SET_VALUE(uploadUrls_, uploadUrls) };


  protected:
    // The list of task IDs. You can obtain the task ID (JobId) from the PlayInfo struct returned by the [GetPlayInfo](https://help.aliyun.com/document_detail/56124.html) operation.
    // - A maximum of 10 IDs are supported.
    // - Separate multiple IDs with commas (,).
    // 
    // > You must specify either JobIds or UploadUrls. If both are specified, only JobIds is processed.
    shared_ptr<string> jobIds_ {};
    // The list of source video upload URLs. Separate multiple URLs with commas (,). A maximum of 10 URLs are supported.
    // 
    // > - URL-encode the URLs before use.
    // > - You must specify either JobIds or UploadUrls. If both are specified, only JobIds is processed.
    shared_ptr<string> uploadUrls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
