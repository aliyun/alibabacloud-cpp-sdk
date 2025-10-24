// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSAUDIOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSAUDIOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStream, audioStream_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStream, audioStream_);
    };
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList(QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList &&) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList& operator=(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList& operator=(QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStream_ == nullptr; };
    // audioStream Field Functions 
    bool hasAudioStream() const { return this->audioStream_ != nullptr;};
    void deleteAudioStream() { this->audioStream_ = nullptr;};
    inline const vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream> & audioStream() const { DARABONBA_PTR_GET_CONST(audioStream_, vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream>) };
    inline vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream> audioStream() { DARABONBA_PTR_GET(audioStream_, vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream>) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList& setAudioStream(const vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream> & audioStream) { DARABONBA_PTR_SET_VALUE(audioStream_, audioStream) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamList& setAudioStream(vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream> && audioStream) { DARABONBA_PTR_SET_RVALUE(audioStream_, audioStream) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsAudioStreamListAudioStream>> audioStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
