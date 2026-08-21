// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDigitalWatermarkExtractResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalWatermarkExtractResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtractType, extractType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalWatermarkExtractResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtractType, extractType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    GetDigitalWatermarkExtractResultRequest() = default ;
    GetDigitalWatermarkExtractResultRequest(const GetDigitalWatermarkExtractResultRequest &) = default ;
    GetDigitalWatermarkExtractResultRequest(GetDigitalWatermarkExtractResultRequest &&) = default ;
    GetDigitalWatermarkExtractResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalWatermarkExtractResultRequest() = default ;
    GetDigitalWatermarkExtractResultRequest& operator=(const GetDigitalWatermarkExtractResultRequest &) = default ;
    GetDigitalWatermarkExtractResultRequest& operator=(GetDigitalWatermarkExtractResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extractType_ == nullptr
        && this->jobId_ == nullptr && this->mediaId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // extractType Field Functions 
    bool hasExtractType() const { return this->extractType_ != nullptr;};
    void deleteExtractType() { this->extractType_ = nullptr;};
    inline string getExtractType() const { DARABONBA_PTR_GET_DEFAULT(extractType_, "") };
    inline GetDigitalWatermarkExtractResultRequest& setExtractType(string extractType) { DARABONBA_PTR_SET_VALUE(extractType_, extractType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetDigitalWatermarkExtractResultRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetDigitalWatermarkExtractResultRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GetDigitalWatermarkExtractResultRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetDigitalWatermarkExtractResultRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetDigitalWatermarkExtractResultRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline GetDigitalWatermarkExtractResultRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The type of watermark extraction. Valid values:
    // 
    // - **TraceMark**: tracing watermark.
    // - **CopyrightMark**: copyright watermark.
    // 
    // This parameter is required.
    shared_ptr<string> extractType_ {};
    // The ID of the watermark extraction job.
    // - The job ID is returned after you call the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation.
    // - If you specify this parameter, the result of the specified watermark extraction job is returned. If you do not specify this parameter, the results of all historical watermark extraction jobs for the video are returned.
    shared_ptr<string> jobId_ {};
    // The ID of the video to query. Only a single video ID is supported. You can obtain the video ID by using the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the video ID.
    // - Call the [SearchMedia](~~SearchMedia~~) operation. The video ID (VideoId) is returned in the response.
    // 
    // This parameter is required.
    shared_ptr<string> mediaId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<string> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
