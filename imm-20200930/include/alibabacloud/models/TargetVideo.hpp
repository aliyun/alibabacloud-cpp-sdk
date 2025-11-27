// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEO_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetVideoFilterVideo.hpp>
#include <vector>
#include <alibabacloud/models/TargetVideoTranscodeVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideo& obj) { 
      DARABONBA_PTR_TO_JSON(DisableVideo, disableVideo_);
      DARABONBA_PTR_TO_JSON(FilterVideo, filterVideo_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TranscodeVideo, transcodeVideo_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableVideo, disableVideo_);
      DARABONBA_PTR_FROM_JSON(FilterVideo, filterVideo_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TranscodeVideo, transcodeVideo_);
    };
    TargetVideo() = default ;
    TargetVideo(const TargetVideo &) = default ;
    TargetVideo(TargetVideo &&) = default ;
    TargetVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideo() = default ;
    TargetVideo& operator=(const TargetVideo &) = default ;
    TargetVideo& operator=(TargetVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disableVideo_ == nullptr
        && return this->filterVideo_ == nullptr && return this->stream_ == nullptr && return this->transcodeVideo_ == nullptr; };
    // disableVideo Field Functions 
    bool hasDisableVideo() const { return this->disableVideo_ != nullptr;};
    void deleteDisableVideo() { this->disableVideo_ = nullptr;};
    inline bool disableVideo() const { DARABONBA_PTR_GET_DEFAULT(disableVideo_, false) };
    inline TargetVideo& setDisableVideo(bool disableVideo) { DARABONBA_PTR_SET_VALUE(disableVideo_, disableVideo) };


    // filterVideo Field Functions 
    bool hasFilterVideo() const { return this->filterVideo_ != nullptr;};
    void deleteFilterVideo() { this->filterVideo_ = nullptr;};
    inline const TargetVideoFilterVideo & filterVideo() const { DARABONBA_PTR_GET_CONST(filterVideo_, TargetVideoFilterVideo) };
    inline TargetVideoFilterVideo filterVideo() { DARABONBA_PTR_GET(filterVideo_, TargetVideoFilterVideo) };
    inline TargetVideo& setFilterVideo(const TargetVideoFilterVideo & filterVideo) { DARABONBA_PTR_SET_VALUE(filterVideo_, filterVideo) };
    inline TargetVideo& setFilterVideo(TargetVideoFilterVideo && filterVideo) { DARABONBA_PTR_SET_RVALUE(filterVideo_, filterVideo) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const vector<int32_t> & stream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int32_t>) };
    inline vector<int32_t> stream() { DARABONBA_PTR_GET(stream_, vector<int32_t>) };
    inline TargetVideo& setStream(const vector<int32_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline TargetVideo& setStream(vector<int32_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


    // transcodeVideo Field Functions 
    bool hasTranscodeVideo() const { return this->transcodeVideo_ != nullptr;};
    void deleteTranscodeVideo() { this->transcodeVideo_ = nullptr;};
    inline const TargetVideoTranscodeVideo & transcodeVideo() const { DARABONBA_PTR_GET_CONST(transcodeVideo_, TargetVideoTranscodeVideo) };
    inline TargetVideoTranscodeVideo transcodeVideo() { DARABONBA_PTR_GET(transcodeVideo_, TargetVideoTranscodeVideo) };
    inline TargetVideo& setTranscodeVideo(const TargetVideoTranscodeVideo & transcodeVideo) { DARABONBA_PTR_SET_VALUE(transcodeVideo_, transcodeVideo) };
    inline TargetVideo& setTranscodeVideo(TargetVideoTranscodeVideo && transcodeVideo) { DARABONBA_PTR_SET_RVALUE(transcodeVideo_, transcodeVideo) };


  protected:
    std::shared_ptr<bool> disableVideo_ = nullptr;
    std::shared_ptr<TargetVideoFilterVideo> filterVideo_ = nullptr;
    std::shared_ptr<vector<int32_t>> stream_ = nullptr;
    std::shared_ptr<TargetVideoTranscodeVideo> transcodeVideo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
