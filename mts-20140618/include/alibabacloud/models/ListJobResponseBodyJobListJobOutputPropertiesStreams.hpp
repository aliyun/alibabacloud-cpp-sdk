// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputPropertiesStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputPropertiesStreams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputPropertiesStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
    };
    ListJobResponseBodyJobListJobOutputPropertiesStreams() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreams(const ListJobResponseBodyJobListJobOutputPropertiesStreams &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreams(ListJobResponseBodyJobListJobOutputPropertiesStreams &&) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputPropertiesStreams() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreams& operator=(const ListJobResponseBodyJobListJobOutputPropertiesStreams &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreams& operator=(ListJobResponseBodyJobListJobOutputPropertiesStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->subtitleStreamList_ == nullptr && return this->videoStreamList_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList) };
    inline Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreams& setAudioStreamList(const Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreams& setAudioStreamList(Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList & subtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList) };
    inline Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList subtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreams& setSubtitleStreamList(const Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreams& setSubtitleStreamList(Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList) };
    inline Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreams& setVideoStreamList(const Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreams& setVideoStreamList(Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


  protected:
    // The audio streams.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList> audioStreamList_ = nullptr;
    // The subtitle streams.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList> subtitleStreamList_ = nullptr;
    // The video streams.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList> videoStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
