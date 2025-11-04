// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOPIDSELECTION_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOPIDSELECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
    };
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection() = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection(const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection &) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection(CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection &&) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection() = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection& operator=(const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection &) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection& operator=(CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pid_ == nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int64_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


  protected:
    // Enter a specific PID from within a source.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
