// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODYDATATIMELINESCLIPS_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODYDATATIMELINESCLIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAutoClipsTaskInfoResponseBodyDataTimelinesClips : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& obj) { 
      DARABONBA_PTR_TO_JSON(ClipId, clipId_);
      DARABONBA_PTR_TO_JSON(ContentInner, contentInner_);
      DARABONBA_PTR_TO_JSON(In, in_);
      DARABONBA_PTR_TO_JSON(InEx, inEx_);
      DARABONBA_PTR_TO_JSON(Out, out_);
      DARABONBA_PTR_TO_JSON(OutEx, outEx_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      DARABONBA_PTR_TO_JSON(VideoName, videoName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
      DARABONBA_PTR_FROM_JSON(ContentInner, contentInner_);
      DARABONBA_PTR_FROM_JSON(In, in_);
      DARABONBA_PTR_FROM_JSON(InEx, inEx_);
      DARABONBA_PTR_FROM_JSON(Out, out_);
      DARABONBA_PTR_FROM_JSON(OutEx, outEx_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      DARABONBA_PTR_FROM_JSON(VideoName, videoName_);
    };
    GetAutoClipsTaskInfoResponseBodyDataTimelinesClips() = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelinesClips(const GetAutoClipsTaskInfoResponseBodyDataTimelinesClips &) = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelinesClips(GetAutoClipsTaskInfoResponseBodyDataTimelinesClips &&) = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelinesClips(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoClipsTaskInfoResponseBodyDataTimelinesClips() = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& operator=(const GetAutoClipsTaskInfoResponseBodyDataTimelinesClips &) = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& operator=(GetAutoClipsTaskInfoResponseBodyDataTimelinesClips &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipId_ == nullptr
        && return this->contentInner_ == nullptr && return this->in_ == nullptr && return this->inEx_ == nullptr && return this->out_ == nullptr && return this->outEx_ == nullptr
        && return this->videoId_ == nullptr && return this->videoName_ == nullptr; };
    // clipId Field Functions 
    bool hasClipId() const { return this->clipId_ != nullptr;};
    void deleteClipId() { this->clipId_ = nullptr;};
    inline string clipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


    // contentInner Field Functions 
    bool hasContentInner() const { return this->contentInner_ != nullptr;};
    void deleteContentInner() { this->contentInner_ = nullptr;};
    inline string contentInner() const { DARABONBA_PTR_GET_DEFAULT(contentInner_, "") };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setContentInner(string contentInner) { DARABONBA_PTR_SET_VALUE(contentInner_, contentInner) };


    // in Field Functions 
    bool hasIn() const { return this->in_ != nullptr;};
    void deleteIn() { this->in_ = nullptr;};
    inline int32_t in() const { DARABONBA_PTR_GET_DEFAULT(in_, 0) };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setIn(int32_t in) { DARABONBA_PTR_SET_VALUE(in_, in) };


    // inEx Field Functions 
    bool hasInEx() const { return this->inEx_ != nullptr;};
    void deleteInEx() { this->inEx_ = nullptr;};
    inline float inEx() const { DARABONBA_PTR_GET_DEFAULT(inEx_, 0.0) };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setInEx(float inEx) { DARABONBA_PTR_SET_VALUE(inEx_, inEx) };


    // out Field Functions 
    bool hasOut() const { return this->out_ != nullptr;};
    void deleteOut() { this->out_ = nullptr;};
    inline int32_t out() const { DARABONBA_PTR_GET_DEFAULT(out_, 0) };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setOut(int32_t out) { DARABONBA_PTR_SET_VALUE(out_, out) };


    // outEx Field Functions 
    bool hasOutEx() const { return this->outEx_ != nullptr;};
    void deleteOutEx() { this->outEx_ = nullptr;};
    inline float outEx() const { DARABONBA_PTR_GET_DEFAULT(outEx_, 0.0) };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setOutEx(float outEx) { DARABONBA_PTR_SET_VALUE(outEx_, outEx) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // videoName Field Functions 
    bool hasVideoName() const { return this->videoName_ != nullptr;};
    void deleteVideoName() { this->videoName_ = nullptr;};
    inline string videoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelinesClips& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


  protected:
    std::shared_ptr<string> clipId_ = nullptr;
    std::shared_ptr<string> contentInner_ = nullptr;
    std::shared_ptr<int32_t> in_ = nullptr;
    std::shared_ptr<float> inEx_ = nullptr;
    std::shared_ptr<int32_t> out_ = nullptr;
    std::shared_ptr<float> outEx_ = nullptr;
    std::shared_ptr<string> videoId_ = nullptr;
    std::shared_ptr<string> videoName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
