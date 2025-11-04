// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSINPUTATTACHMENTSAUDIOSELECTORSAUDIOTRACKSELECTION_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSINPUTATTACHMENTSAUDIOSELECTORSAUDIOTRACKSELECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection& obj) { 
      DARABONBA_PTR_TO_JSON(TrackId, trackId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
    };
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection() = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection(const ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection(ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection() = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection& operator=(const ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection& operator=(ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trackId_ == nullptr; };
    // trackId Field Functions 
    bool hasTrackId() const { return this->trackId_ != nullptr;};
    void deleteTrackId() { this->trackId_ = nullptr;};
    inline int64_t trackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, 0L) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection& setTrackId(int64_t trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


  protected:
    // The track ID from within a source.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> trackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
