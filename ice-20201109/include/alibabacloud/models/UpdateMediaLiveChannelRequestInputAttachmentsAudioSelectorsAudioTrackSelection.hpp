// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOTRACKSELECTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOTRACKSELECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection& obj) { 
      DARABONBA_PTR_TO_JSON(TrackId, trackId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
    };
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection() = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection(const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection &) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection(UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection &&) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection() = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection& operator=(const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection &) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection& operator=(UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trackId_ == nullptr; };
    // trackId Field Functions 
    bool hasTrackId() const { return this->trackId_ != nullptr;};
    void deleteTrackId() { this->trackId_ = nullptr;};
    inline int64_t trackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, 0L) };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection& setTrackId(int64_t trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


  protected:
    // Specify one or more audio tracks from within a source using Track ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> trackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
