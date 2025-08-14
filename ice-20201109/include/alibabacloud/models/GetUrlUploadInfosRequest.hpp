// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETURLUPLOADINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETURLUPLOADINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetUrlUploadInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUrlUploadInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(UploadURLs, uploadURLs_);
    };
    friend void from_json(const Darabonba::Json& j, GetUrlUploadInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(UploadURLs, uploadURLs_);
    };
    GetUrlUploadInfosRequest() = default ;
    GetUrlUploadInfosRequest(const GetUrlUploadInfosRequest &) = default ;
    GetUrlUploadInfosRequest(GetUrlUploadInfosRequest &&) = default ;
    GetUrlUploadInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUrlUploadInfosRequest() = default ;
    GetUrlUploadInfosRequest& operator=(const GetUrlUploadInfosRequest &) = default ;
    GetUrlUploadInfosRequest& operator=(GetUrlUploadInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobIds_ != nullptr
        && this->uploadURLs_ != nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string jobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline GetUrlUploadInfosRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // uploadURLs Field Functions 
    bool hasUploadURLs() const { return this->uploadURLs_ != nullptr;};
    void deleteUploadURLs() { this->uploadURLs_ = nullptr;};
    inline string uploadURLs() const { DARABONBA_PTR_GET_DEFAULT(uploadURLs_, "") };
    inline GetUrlUploadInfosRequest& setUploadURLs(string uploadURLs) { DARABONBA_PTR_SET_VALUE(uploadURLs_, uploadURLs) };


  protected:
    // The IDs of the upload jobs. You can specify one or more job IDs. You can obtain the job IDs from the response parameter JobId of the [UploadMediaByURL](https://help.aliyun.com/document_detail/86311.html) operation.
    // 
    // *   You can specify a maximum of 10 job IDs.
    // *   Separate the job IDs with commas (,).
    // 
    // >  You must specify either JobIds or UploadURLs. If you specify both parameters, only the value of JobIds takes effect.
    std::shared_ptr<string> jobIds_ = nullptr;
    // The upload URLs of the source files. You can specify a maximum of 10 URLs. Separate the URLs with commas (,).
    // 
    // > 
    // 
    // *   The URLs must be encoded.
    // 
    // *   If a media file is uploaded multiple times, we recommend that you specify the URL of the media file only once in this parameter.
    // 
    // *   You must specify either JobIds or UploadURLs. If you specify both parameters, only the value of JobIds takes effect.
    std::shared_ptr<string> uploadURLs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
