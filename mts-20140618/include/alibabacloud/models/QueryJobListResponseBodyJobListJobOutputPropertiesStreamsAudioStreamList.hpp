// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSAUDIOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSAUDIOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStream, audioStream_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStream, audioStream_);
    };
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList(const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList(QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& operator=(const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& operator=(QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStream_ == nullptr; };
    // audioStream Field Functions 
    bool hasAudioStream() const { return this->audioStream_ != nullptr;};
    void deleteAudioStream() { this->audioStream_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> & audioStream() const { DARABONBA_PTR_GET_CONST(audioStream_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> audioStream() { DARABONBA_PTR_GET(audioStream_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream>) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& setAudioStream(const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> & audioStream) { DARABONBA_PTR_SET_VALUE(audioStream_, audioStream) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& setAudioStream(vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> && audioStream) { DARABONBA_PTR_SET_RVALUE(audioStream_, audioStream) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream>> audioStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
