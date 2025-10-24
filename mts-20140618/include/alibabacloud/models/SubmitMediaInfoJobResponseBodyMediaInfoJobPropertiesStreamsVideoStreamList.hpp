// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOBPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
    };
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList(const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList(SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList &&) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList& operator=(const SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList& operator=(SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoStream_ == nullptr; };
    // videoStream Field Functions 
    bool hasVideoStream() const { return this->videoStream_ != nullptr;};
    void deleteVideoStream() { this->videoStream_ = nullptr;};
    inline const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream> & videoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream>) };
    inline vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream> videoStream() { DARABONBA_PTR_GET(videoStream_, vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream>) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList& setVideoStream(const vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamList& setVideoStream(vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


  protected:
    std::shared_ptr<vector<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobPropertiesStreamsVideoStreamListVideoStream>> videoStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
