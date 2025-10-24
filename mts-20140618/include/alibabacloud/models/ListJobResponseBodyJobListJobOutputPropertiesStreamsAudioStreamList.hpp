// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSAUDIOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSAUDIOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStream, audioStream_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStream, audioStream_);
    };
    ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList(const ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList(ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &&) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& operator=(const ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& operator=(ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStream_ == nullptr; };
    // audioStream Field Functions 
    bool hasAudioStream() const { return this->audioStream_ != nullptr;};
    void deleteAudioStream() { this->audioStream_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> & audioStream() const { DARABONBA_PTR_GET_CONST(audioStream_, vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> audioStream() { DARABONBA_PTR_GET(audioStream_, vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream>) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& setAudioStream(const vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> & audioStream) { DARABONBA_PTR_SET_VALUE(audioStream_, audioStream) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamList& setAudioStream(vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream> && audioStream) { DARABONBA_PTR_SET_RVALUE(audioStream_, audioStream) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsAudioStreamListAudioStream>> audioStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
