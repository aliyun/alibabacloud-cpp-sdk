// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYINFORESPONSEBODYVIDEOINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYINFORESPONSEBODYVIDEOINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoPlayInfoResponseBodyVideoInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoPlayInfoResponseBodyVideoInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoPlayInfoResponseBodyVideoInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetVideoPlayInfoResponseBodyVideoInfo() = default ;
    GetVideoPlayInfoResponseBodyVideoInfo(const GetVideoPlayInfoResponseBodyVideoInfo &) = default ;
    GetVideoPlayInfoResponseBodyVideoInfo(GetVideoPlayInfoResponseBodyVideoInfo &&) = default ;
    GetVideoPlayInfoResponseBodyVideoInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoPlayInfoResponseBodyVideoInfo() = default ;
    GetVideoPlayInfoResponseBodyVideoInfo& operator=(const GetVideoPlayInfoResponseBodyVideoInfo &) = default ;
    GetVideoPlayInfoResponseBodyVideoInfo& operator=(GetVideoPlayInfoResponseBodyVideoInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coverURL_ != nullptr
        && this->customerId_ != nullptr && this->duration_ != nullptr && this->status_ != nullptr && this->title_ != nullptr && this->videoId_ != nullptr; };
    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetVideoPlayInfoResponseBodyVideoInfo& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline int64_t customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, 0L) };
    inline GetVideoPlayInfoResponseBodyVideoInfo& setCustomerId(int64_t customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetVideoPlayInfoResponseBodyVideoInfo& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoPlayInfoResponseBodyVideoInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetVideoPlayInfoResponseBodyVideoInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetVideoPlayInfoResponseBodyVideoInfo& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    std::shared_ptr<string> coverURL_ = nullptr;
    std::shared_ptr<int64_t> customerId_ = nullptr;
    std::shared_ptr<float> duration_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
