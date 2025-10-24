// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList.hpp>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList.hpp>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
      DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
      DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams(QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& operator=(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& operator=(QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && return this->subtitleStreamList_ == nullptr && return this->videoStreamList_ == nullptr; };
    // audioStreamList Field Functions 
    bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
    void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
    inline const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList & audioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList) };
    inline Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList audioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& setAudioStreamList(const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& setAudioStreamList(Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


    // subtitleStreamList Field Functions 
    bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
    void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
    inline const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList & subtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList) };
    inline Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList subtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& setSubtitleStreamList(const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& setSubtitleStreamList(Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


    // videoStreamList Field Functions 
    bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
    void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
    inline const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList & videoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList) };
    inline Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList videoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& setVideoStreamList(const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams& setVideoStreamList(Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


  protected:
    // The list of audio streams.
    std::shared_ptr<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList> audioStreamList_ = nullptr;
    // The list of subtitle streams.
    std::shared_ptr<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList> subtitleStreamList_ = nullptr;
    // The list of video streams.
    std::shared_ptr<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList> videoStreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
