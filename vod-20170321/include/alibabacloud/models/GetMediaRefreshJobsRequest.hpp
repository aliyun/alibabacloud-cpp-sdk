// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaRefreshJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaRefreshJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaRefreshJobId, mediaRefreshJobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaRefreshJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaRefreshJobId, mediaRefreshJobId_);
    };
    GetMediaRefreshJobsRequest() = default ;
    GetMediaRefreshJobsRequest(const GetMediaRefreshJobsRequest &) = default ;
    GetMediaRefreshJobsRequest(GetMediaRefreshJobsRequest &&) = default ;
    GetMediaRefreshJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaRefreshJobsRequest() = default ;
    GetMediaRefreshJobsRequest& operator=(const GetMediaRefreshJobsRequest &) = default ;
    GetMediaRefreshJobsRequest& operator=(GetMediaRefreshJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->mediaRefreshJobId_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaRefreshJobsRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaRefreshJobId Field Functions 
    bool hasMediaRefreshJobId() const { return this->mediaRefreshJobId_ != nullptr;};
    void deleteMediaRefreshJobId() { this->mediaRefreshJobId_ = nullptr;};
    inline string mediaRefreshJobId() const { DARABONBA_PTR_GET_DEFAULT(mediaRefreshJobId_, "") };
    inline GetMediaRefreshJobsRequest& setMediaRefreshJobId(string mediaRefreshJobId) { DARABONBA_PTR_SET_VALUE(mediaRefreshJobId_, mediaRefreshJobId) };


  protected:
    // The ID of the media file. It is the value of the `MediaIds` parameter that you specify when you call the [RefreshMediaPlayUrls](~~RefreshMediaPlayUrls~~) operation. You can specify only one media ID.
    // 
    // If you leave this parameter empty, information about all media files in the refresh or prefetch job specified by `MediaRefreshJobId` is returned. If you set this parameter, only the information about the specified media file is returned.``
    std::shared_ptr<string> mediaId_ = nullptr;
    // The ID of the refresh or prefetch job. It is the value of the MediaRefreshJobId parameter that is returned from the call to the [RefreshMediaPlayUrls](~~RefreshMediaPlayUrls~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaRefreshJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
