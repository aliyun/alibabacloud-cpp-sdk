// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSSUBTITLESTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSSUBTITLESTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(SubtitleStream, subtitleStream_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(SubtitleStream, subtitleStream_);
    };
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList(QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &&) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& operator=(const QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& operator=(QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtitleStream_ == nullptr; };
    // subtitleStream Field Functions 
    bool hasSubtitleStream() const { return this->subtitleStream_ != nullptr;};
    void deleteSubtitleStream() { this->subtitleStream_ = nullptr;};
    inline const vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> & subtitleStream() const { DARABONBA_PTR_GET_CONST(subtitleStream_, vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream>) };
    inline vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> subtitleStream() { DARABONBA_PTR_GET(subtitleStream_, vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream>) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& setSubtitleStream(const vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> & subtitleStream) { DARABONBA_PTR_SET_VALUE(subtitleStream_, subtitleStream) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& setSubtitleStream(vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> && subtitleStream) { DARABONBA_PTR_SET_RVALUE(subtitleStream_, subtitleStream) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream>> subtitleStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
