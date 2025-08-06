// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
    };
    GetMediaAuditResultDetailRequest() = default ;
    GetMediaAuditResultDetailRequest(const GetMediaAuditResultDetailRequest &) = default ;
    GetMediaAuditResultDetailRequest(GetMediaAuditResultDetailRequest &&) = default ;
    GetMediaAuditResultDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultDetailRequest() = default ;
    GetMediaAuditResultDetailRequest& operator=(const GetMediaAuditResultDetailRequest &) = default ;
    GetMediaAuditResultDetailRequest& operator=(GetMediaAuditResultDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->pageNo_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaAuditResultDetailRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetMediaAuditResultDetailRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


  protected:
    // The ID of the video.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The page number. The default value is **1**. A maximum of **20** records can be returned on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
