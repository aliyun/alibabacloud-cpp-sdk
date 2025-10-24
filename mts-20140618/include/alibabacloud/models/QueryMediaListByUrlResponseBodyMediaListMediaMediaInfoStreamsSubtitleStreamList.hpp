// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSSUBTITLESTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFOSTREAMSSUBTITLESTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(SubtitleStream, subtitleStream_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(SubtitleStream, subtitleStream_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList(QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& operator=(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& operator=(QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtitleStream_ == nullptr; };
    // subtitleStream Field Functions 
    bool hasSubtitleStream() const { return this->subtitleStream_ != nullptr;};
    void deleteSubtitleStream() { this->subtitleStream_ = nullptr;};
    inline const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> & subtitleStream() const { DARABONBA_PTR_GET_CONST(subtitleStream_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream>) };
    inline vector<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> subtitleStream() { DARABONBA_PTR_GET(subtitleStream_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream>) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& setSubtitleStream(const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> & subtitleStream) { DARABONBA_PTR_SET_VALUE(subtitleStream_, subtitleStream) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamList& setSubtitleStream(vector<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream> && subtitleStream) { DARABONBA_PTR_SET_RVALUE(subtitleStream_, subtitleStream) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreamsSubtitleStreamListSubtitleStream>> subtitleStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
