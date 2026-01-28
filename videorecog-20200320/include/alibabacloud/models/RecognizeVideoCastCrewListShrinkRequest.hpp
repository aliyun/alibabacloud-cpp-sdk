// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    RecognizeVideoCastCrewListShrinkRequest() = default ;
    RecognizeVideoCastCrewListShrinkRequest(const RecognizeVideoCastCrewListShrinkRequest &) = default ;
    RecognizeVideoCastCrewListShrinkRequest(RecognizeVideoCastCrewListShrinkRequest &&) = default ;
    RecognizeVideoCastCrewListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListShrinkRequest() = default ;
    RecognizeVideoCastCrewListShrinkRequest& operator=(const RecognizeVideoCastCrewListShrinkRequest &) = default ;
    RecognizeVideoCastCrewListShrinkRequest& operator=(RecognizeVideoCastCrewListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramsShrink_ == nullptr
        && this->videoUrl_ == nullptr; };
    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline RecognizeVideoCastCrewListShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline RecognizeVideoCastCrewListShrinkRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    shared_ptr<string> paramsShrink_ {};
    // This parameter is required.
    shared_ptr<string> videoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
