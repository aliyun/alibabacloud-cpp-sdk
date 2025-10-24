// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELISTPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELISTPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPipelineListResponseBodyPipelineListPipelineExtendConfig.hpp>
#include <alibabacloud/models/QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryPipelineListResponseBodyPipelineListPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineListResponseBodyPipelineListPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(QuotaAllocate, quotaAllocate_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(SpeedLevel, speedLevel_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineListResponseBodyPipelineListPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaAllocate, quotaAllocate_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(SpeedLevel, speedLevel_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    QueryPipelineListResponseBodyPipelineListPipeline() = default ;
    QueryPipelineListResponseBodyPipelineListPipeline(const QueryPipelineListResponseBodyPipelineListPipeline &) = default ;
    QueryPipelineListResponseBodyPipelineListPipeline(QueryPipelineListResponseBodyPipelineListPipeline &&) = default ;
    QueryPipelineListResponseBodyPipelineListPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineListResponseBodyPipelineListPipeline() = default ;
    QueryPipelineListResponseBodyPipelineListPipeline& operator=(const QueryPipelineListResponseBodyPipelineListPipeline &) = default ;
    QueryPipelineListResponseBodyPipelineListPipeline& operator=(QueryPipelineListResponseBodyPipelineListPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendConfig_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->notifyConfig_ == nullptr && return this->quotaAllocate_ == nullptr && return this->role_ == nullptr
        && return this->speed_ == nullptr && return this->speedLevel_ == nullptr && return this->state_ == nullptr; };
    // extendConfig Field Functions 
    bool hasExtendConfig() const { return this->extendConfig_ != nullptr;};
    void deleteExtendConfig() { this->extendConfig_ = nullptr;};
    inline const Models::QueryPipelineListResponseBodyPipelineListPipelineExtendConfig & extendConfig() const { DARABONBA_PTR_GET_CONST(extendConfig_, Models::QueryPipelineListResponseBodyPipelineListPipelineExtendConfig) };
    inline Models::QueryPipelineListResponseBodyPipelineListPipelineExtendConfig extendConfig() { DARABONBA_PTR_GET(extendConfig_, Models::QueryPipelineListResponseBodyPipelineListPipelineExtendConfig) };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setExtendConfig(const Models::QueryPipelineListResponseBodyPipelineListPipelineExtendConfig & extendConfig) { DARABONBA_PTR_SET_VALUE(extendConfig_, extendConfig) };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setExtendConfig(Models::QueryPipelineListResponseBodyPipelineListPipelineExtendConfig && extendConfig) { DARABONBA_PTR_SET_RVALUE(extendConfig_, extendConfig) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const Models::QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig & notifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, Models::QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig) };
    inline Models::QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig notifyConfig() { DARABONBA_PTR_GET(notifyConfig_, Models::QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig) };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setNotifyConfig(const Models::QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setNotifyConfig(Models::QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // quotaAllocate Field Functions 
    bool hasQuotaAllocate() const { return this->quotaAllocate_ != nullptr;};
    void deleteQuotaAllocate() { this->quotaAllocate_ = nullptr;};
    inline int64_t quotaAllocate() const { DARABONBA_PTR_GET_DEFAULT(quotaAllocate_, 0L) };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setQuotaAllocate(int64_t quotaAllocate) { DARABONBA_PTR_SET_VALUE(quotaAllocate_, quotaAllocate) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // speedLevel Field Functions 
    bool hasSpeedLevel() const { return this->speedLevel_ != nullptr;};
    void deleteSpeedLevel() { this->speedLevel_ = nullptr;};
    inline int64_t speedLevel() const { DARABONBA_PTR_GET_DEFAULT(speedLevel_, 0L) };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setSpeedLevel(int64_t speedLevel) { DARABONBA_PTR_SET_VALUE(speedLevel_, speedLevel) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipeline& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<Models::QueryPipelineListResponseBodyPipelineListPipelineExtendConfig> extendConfig_ = nullptr;
    // The ID of the MPS queue.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the MPS queue.
    std::shared_ptr<string> name_ = nullptr;
    // The Message Service (MNS) configuration.
    std::shared_ptr<Models::QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig> notifyConfig_ = nullptr;
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
    // The level of the MPS queue.
    std::shared_ptr<int64_t> speedLevel_ = nullptr;
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
