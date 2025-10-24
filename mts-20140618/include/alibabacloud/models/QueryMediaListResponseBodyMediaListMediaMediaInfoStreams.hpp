// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaMediaInfoStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
    };
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreams() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreams(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreams &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreams(QueryMediaListResponseBodyMediaListMediaMediaInfoStreams &&) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaMediaInfoStreams() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& operator=(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreams &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& operator=(QueryMediaListResponseBodyMediaListMediaMediaInfoStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->subtitleStreamList_ == nullptr && return this->videoStreamList_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList) };
    inline Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& setAudioStreamList(const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& setAudioStreamList(Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList & subtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList) };
    inline Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList subtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& setSubtitleStreamList(const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& setSubtitleStreamList(Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList) };
    inline Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& setVideoStreamList(const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreams& setVideoStreamList(Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


  protected:
    // The list of audio streams.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList> audioStreamList_ = nullptr;
    // The list of subtitle streams.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList> subtitleStreamList_ = nullptr;
    // The list of video streams.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList> videoStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
