// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODYSTREAMINFOSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODYSTREAMINFOSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartPlaylistResponseBodyStreamInfoStreamsStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartPlaylistResponseBodyStreamInfoStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPlaylistResponseBodyStreamInfoStreams& obj) { 
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, StartPlaylistResponseBodyStreamInfoStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    StartPlaylistResponseBodyStreamInfoStreams() = default ;
    StartPlaylistResponseBodyStreamInfoStreams(const StartPlaylistResponseBodyStreamInfoStreams &) = default ;
    StartPlaylistResponseBodyStreamInfoStreams(StartPlaylistResponseBodyStreamInfoStreams &&) = default ;
    StartPlaylistResponseBodyStreamInfoStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPlaylistResponseBodyStreamInfoStreams() = default ;
    StartPlaylistResponseBodyStreamInfoStreams& operator=(const StartPlaylistResponseBodyStreamInfoStreams &) = default ;
    StartPlaylistResponseBodyStreamInfoStreams& operator=(StartPlaylistResponseBodyStreamInfoStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stream_ != nullptr; };
    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const vector<Models::StartPlaylistResponseBodyStreamInfoStreamsStream> & stream() const { DARABONBA_PTR_GET_CONST(stream_, vector<Models::StartPlaylistResponseBodyStreamInfoStreamsStream>) };
    inline vector<Models::StartPlaylistResponseBodyStreamInfoStreamsStream> stream() { DARABONBA_PTR_GET(stream_, vector<Models::StartPlaylistResponseBodyStreamInfoStreamsStream>) };
    inline StartPlaylistResponseBodyStreamInfoStreams& setStream(const vector<Models::StartPlaylistResponseBodyStreamInfoStreamsStream> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline StartPlaylistResponseBodyStreamInfoStreams& setStream(vector<Models::StartPlaylistResponseBodyStreamInfoStreamsStream> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


  protected:
    std::shared_ptr<vector<Models::StartPlaylistResponseBodyStreamInfoStreamsStream>> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
