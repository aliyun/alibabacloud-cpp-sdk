// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBPROPERTIESSTREAMSAUDIOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBPROPERTIESSTREAMSAUDIOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStream, audioStream_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStream, audioStream_);
    };
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList(const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList(SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList &&) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList& operator=(const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList& operator=(SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStream_ == nullptr; };
    // audioStream Field Functions 
    bool hasAudioStream() const { return this->audioStream_ != nullptr;};
    void deleteAudioStream() { this->audioStream_ = nullptr;};
    inline const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream> & audioStream() const { DARABONBA_PTR_GET_CONST(audioStream_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream>) };
    inline vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream> audioStream() { DARABONBA_PTR_GET(audioStream_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream>) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList& setAudioStream(const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream> & audioStream) { DARABONBA_PTR_SET_VALUE(audioStream_, audioStream) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamList& setAudioStream(vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream> && audioStream) { DARABONBA_PTR_SET_RVALUE(audioStream_, audioStream) };


  protected:
    std::shared_ptr<vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsAudioStreamListAudioStream>> audioStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
