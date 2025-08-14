// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELINPUTATTACHMENTSAUDIOSELECTORSAUDIOPIDSELECTION_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELINPUTATTACHMENTSAUDIOSELECTORSAUDIOPIDSELECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
    };
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection() = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection(const GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection &) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection(GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection &&) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection() = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection& operator=(const GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection &) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection& operator=(GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pid_ != nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int64_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


  protected:
    // A PID from within a source.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
