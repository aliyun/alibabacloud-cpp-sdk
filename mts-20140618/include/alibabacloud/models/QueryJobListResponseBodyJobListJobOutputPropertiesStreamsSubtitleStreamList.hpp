// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSSUBTITLESTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSSUBTITLESTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(SubtitleStream, subtitleStream_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(SubtitleStream, subtitleStream_);
    };
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList(const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList(QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& operator=(const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& operator=(QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtitleStream_ == nullptr; };
    // subtitleStream Field Functions 
    bool hasSubtitleStream() const { return this->subtitleStream_ != nullptr;};
    void deleteSubtitleStream() { this->subtitleStream_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> & subtitleStream() const { DARABONBA_PTR_GET_CONST(subtitleStream_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> subtitleStream() { DARABONBA_PTR_GET(subtitleStream_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream>) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& setSubtitleStream(const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> & subtitleStream) { DARABONBA_PTR_SET_VALUE(subtitleStream_, subtitleStream) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& setSubtitleStream(vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> && subtitleStream) { DARABONBA_PTR_SET_RVALUE(subtitleStream_, subtitleStream) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream>> subtitleStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
