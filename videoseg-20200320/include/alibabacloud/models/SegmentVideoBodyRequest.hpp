// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTVIDEOBODYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTVIDEOBODYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoseg20200320
{
namespace Models
{
  class SegmentVideoBodyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentVideoBodyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentVideoBodyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    SegmentVideoBodyRequest() = default ;
    SegmentVideoBodyRequest(const SegmentVideoBodyRequest &) = default ;
    SegmentVideoBodyRequest(SegmentVideoBodyRequest &&) = default ;
    SegmentVideoBodyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentVideoBodyRequest() = default ;
    SegmentVideoBodyRequest& operator=(const SegmentVideoBodyRequest &) = default ;
    SegmentVideoBodyRequest& operator=(SegmentVideoBodyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoUrl_ != nullptr; };
    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline SegmentVideoBodyRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoseg20200320
#endif
