// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
    };
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList(const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList(QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& operator=(const QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& operator=(QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoStream_ == nullptr; };
    // videoStream Field Functions 
    bool hasVideoStream() const { return this->videoStream_ != nullptr;};
    void deleteVideoStream() { this->videoStream_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> & videoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> videoStream() { DARABONBA_PTR_GET(videoStream_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream>) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& setVideoStream(const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamList& setVideoStream(vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesStreamsVideoStreamListVideoStream>> videoStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
