// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINERESPONSEBODYPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINERESPONSEBODYPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdatePipelineResponseBodyPipelineNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdatePipelineResponseBodyPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(QuotaAllocate, quotaAllocate_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaAllocate, quotaAllocate_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    UpdatePipelineResponseBodyPipeline() = default ;
    UpdatePipelineResponseBodyPipeline(const UpdatePipelineResponseBodyPipeline &) = default ;
    UpdatePipelineResponseBodyPipeline(UpdatePipelineResponseBodyPipeline &&) = default ;
    UpdatePipelineResponseBodyPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineResponseBodyPipeline() = default ;
    UpdatePipelineResponseBodyPipeline& operator=(const UpdatePipelineResponseBodyPipeline &) = default ;
    UpdatePipelineResponseBodyPipeline& operator=(UpdatePipelineResponseBodyPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->notifyConfig_ == nullptr && return this->quotaAllocate_ == nullptr && return this->role_ == nullptr && return this->speed_ == nullptr
        && return this->state_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdatePipelineResponseBodyPipeline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePipelineResponseBodyPipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const Models::UpdatePipelineResponseBodyPipelineNotifyConfig & notifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, Models::UpdatePipelineResponseBodyPipelineNotifyConfig) };
    inline Models::UpdatePipelineResponseBodyPipelineNotifyConfig notifyConfig() { DARABONBA_PTR_GET(notifyConfig_, Models::UpdatePipelineResponseBodyPipelineNotifyConfig) };
    inline UpdatePipelineResponseBodyPipeline& setNotifyConfig(const Models::UpdatePipelineResponseBodyPipelineNotifyConfig & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline UpdatePipelineResponseBodyPipeline& setNotifyConfig(Models::UpdatePipelineResponseBodyPipelineNotifyConfig && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // quotaAllocate Field Functions 
    bool hasQuotaAllocate() const { return this->quotaAllocate_ != nullptr;};
    void deleteQuotaAllocate() { this->quotaAllocate_ = nullptr;};
    inline int64_t quotaAllocate() const { DARABONBA_PTR_GET_DEFAULT(quotaAllocate_, 0L) };
    inline UpdatePipelineResponseBodyPipeline& setQuotaAllocate(int64_t quotaAllocate) { DARABONBA_PTR_SET_VALUE(quotaAllocate_, quotaAllocate) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline UpdatePipelineResponseBodyPipeline& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline UpdatePipelineResponseBodyPipeline& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdatePipelineResponseBodyPipeline& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the MPS queue.
    std::shared_ptr<string> id_ = nullptr;
    // The new name of the MPS queue.
    std::shared_ptr<string> name_ = nullptr;
    // The MNS configuration.
    std::shared_ptr<Models::UpdatePipelineResponseBodyPipelineNotifyConfig> notifyConfig_ = nullptr;
    // The quota that is allocated to the MPS queue.
    std::shared_ptr<int64_t> quotaAllocate_ = nullptr;
    // The role that is assigned to the current RAM user.
    std::shared_ptr<string> role_ = nullptr;
    // The type of the MPS queue. Default value: **Standard**. Valid values:
    // 
    // *   **Boost**: MPS queue with transcoding speed boosted
    // *   **Standard**: standard MPS queue
    // *   **NarrowBandHDV2**: MPS queue that supports Narrowband HD 2.0
    // *   **AIVideoCover**: MPS queue for intelligent snapshot capture
    // *   **AIVideoFPShot**: MPS queue for media fingerprinting
    // *   **AIVideoCensor**: MPS queue for automated review
    // *   **AIVideoMCU**: MPS queue for smart tagging
    // *   **AIVideoSummary**: MPS queue for video synopsis
    // *   **AIVideoPorn**: MPS queue for pornography detection in videos
    // *   **AIAudioKWS**: MPS queue for keyword recognition in audio
    // *   **AIAudioASR**: MPS queue for speech-to-text conversion
    std::shared_ptr<string> speed_ = nullptr;
    // The state of the MPS queue. Valid values:
    // 
    // *   **Active**: The MPS queue is active.
    // *   **Paused**: The MPS queue is paused.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
