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
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->mediaRefreshJobId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaRefreshJobsRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaRefreshJobId Field Functions 
    bool hasMediaRefreshJobId() const { return this->mediaRefreshJobId_ != nullptr;};
    void deleteMediaRefreshJobId() { this->mediaRefreshJobId_ = nullptr;};
    inline string getMediaRefreshJobId() const { DARABONBA_PTR_GET_DEFAULT(mediaRefreshJobId_, "") };
    inline GetMediaRefreshJobsRequest& setMediaRefreshJobId(string mediaRefreshJobId) { DARABONBA_PTR_SET_VALUE(mediaRefreshJobId_, mediaRefreshJobId) };


  protected:
    // The audio or video ID, which is the `MediaIds` value specified when calling the [SubmitMediaRefreshJob](https://help.aliyun.com/document_detail/431095.html) operation. Only one audio or video ID can be specified.
    // 
    // If this parameter is not specified, task information for all audio or video files under the specified `MediaRefreshJobId` is returned. If this parameter is specified, only the task information for the specified audio or video ID under the `MediaRefreshJobId` is returned.
    shared_ptr<string> mediaId_ {};
    // The ID of the audio or video purge or prefetch task. This is the value of MediaRefreshJobId returned by the [SubmitMediaRefreshJob](https://help.aliyun.com/document_detail/431095.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> mediaRefreshJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
