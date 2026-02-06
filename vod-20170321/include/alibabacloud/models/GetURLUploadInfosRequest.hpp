// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETURLUPLOADINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETURLUPLOADINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetURLUploadInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetURLUploadInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(UploadURLs, uploadURLs_);
    };
    friend void from_json(const Darabonba::Json& j, GetURLUploadInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(UploadURLs, uploadURLs_);
    };
    GetURLUploadInfosRequest() = default ;
    GetURLUploadInfosRequest(const GetURLUploadInfosRequest &) = default ;
    GetURLUploadInfosRequest(GetURLUploadInfosRequest &&) = default ;
    GetURLUploadInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetURLUploadInfosRequest() = default ;
    GetURLUploadInfosRequest& operator=(const GetURLUploadInfosRequest &) = default ;
    GetURLUploadInfosRequest& operator=(GetURLUploadInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIds_ == nullptr
        && this->uploadURLs_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string getJobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline GetURLUploadInfosRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // uploadURLs Field Functions 
    bool hasUploadURLs() const { return this->uploadURLs_ != nullptr;};
    void deleteUploadURLs() { this->uploadURLs_ = nullptr;};
    inline string getUploadURLs() const { DARABONBA_PTR_GET_DEFAULT(uploadURLs_, "") };
    inline GetURLUploadInfosRequest& setUploadURLs(string uploadURLs) { DARABONBA_PTR_SET_VALUE(uploadURLs_, uploadURLs) };


  protected:
    // The one or more IDs of upload jobs. You can obtain the job IDs in the response parameter JobId of the [UploadMediaByURL](https://help.aliyun.com/document_detail/86311.html) operation.
    // 
    // - You can specify a maximum of 10 IDs.
    // - Separate multiple IDs with commas (,).
    // 
    // > You must set one of the JobIds and the UploadURLs parameters. If you set both the JobIds and UploadURLs parameters, only the value of the JobIds parameter takes effect.
    shared_ptr<string> jobIds_ {};
    // The one or more upload URLs of the source files. Separate multiple URLs with commas (,). You can specify a maximum of 10 URLs.
    // 
    // > * You must encode the URLs before you use the URLs.
    // > * If a media file is uploaded multiple times, pass the URL of the media file to this parameter only once.
    // > * You must set one of the JobIds and the UploadURLs parameters. If you set both the JobIds and UploadURLs parameters, only the value of the JobIds parameter takes effect.
    shared_ptr<string> uploadURLs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
