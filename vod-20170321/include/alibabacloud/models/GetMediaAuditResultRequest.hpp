// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    GetMediaAuditResultRequest() = default ;
    GetMediaAuditResultRequest(const GetMediaAuditResultRequest &) = default ;
    GetMediaAuditResultRequest(GetMediaAuditResultRequest &&) = default ;
    GetMediaAuditResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultRequest() = default ;
    GetMediaAuditResultRequest& operator=(const GetMediaAuditResultRequest &) = default ;
    GetMediaAuditResultRequest& operator=(GetMediaAuditResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaAuditResultRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // The ID of the video or image.
    // 
    // This parameter is required.
    shared_ptr<string> mediaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
