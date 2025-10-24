// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList(const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList(SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoStream_ == nullptr; };
    // videoStream Field Functions 
    bool hasVideoStream() const { return this->videoStream_ != nullptr;};
    void deleteVideoStream() { this->videoStream_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream> & videoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream> videoStream() { DARABONBA_PTR_GET(videoStream_, vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream>) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList& setVideoStream(const vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamList& setVideoStream(vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStream>> videoStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
