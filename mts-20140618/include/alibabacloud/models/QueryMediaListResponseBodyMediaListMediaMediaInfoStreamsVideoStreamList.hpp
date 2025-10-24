// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSVIDEOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSVIDEOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
    };
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList(QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList &&) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList& operator=(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList& operator=(QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoStream_ == nullptr; };
    // videoStream Field Functions 
    bool hasVideoStream() const { return this->videoStream_ != nullptr;};
    void deleteVideoStream() { this->videoStream_ = nullptr;};
    inline const vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream> & videoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream>) };
    inline vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream> videoStream() { DARABONBA_PTR_GET(videoStream_, vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream>) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList& setVideoStream(const vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamList& setVideoStream(vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsVideoStreamListVideoStream>> videoStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
