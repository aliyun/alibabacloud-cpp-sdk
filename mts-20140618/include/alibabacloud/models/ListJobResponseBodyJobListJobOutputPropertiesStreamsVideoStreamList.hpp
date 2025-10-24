// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
    };
    ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList(const ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList(ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &&) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& operator=(const ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& operator=(ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoStream_ == nullptr; };
    // videoStream Field Functions 
    bool hasVideoStream() const { return this->videoStream_ != nullptr;};
    void deleteVideoStream() { this->videoStream_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> & videoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> videoStream() { DARABONBA_PTR_GET(videoStream_, vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream>) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& setVideoStream(const vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& setVideoStream(vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream>> videoStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
