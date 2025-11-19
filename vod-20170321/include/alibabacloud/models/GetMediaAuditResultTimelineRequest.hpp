// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultTimelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultTimelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultTimelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    GetMediaAuditResultTimelineRequest() = default ;
    GetMediaAuditResultTimelineRequest(const GetMediaAuditResultTimelineRequest &) = default ;
    GetMediaAuditResultTimelineRequest(GetMediaAuditResultTimelineRequest &&) = default ;
    GetMediaAuditResultTimelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultTimelineRequest() = default ;
    GetMediaAuditResultTimelineRequest& operator=(const GetMediaAuditResultTimelineRequest &) = default ;
    GetMediaAuditResultTimelineRequest& operator=(GetMediaAuditResultTimelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaAuditResultTimelineRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // The ID of the video.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
