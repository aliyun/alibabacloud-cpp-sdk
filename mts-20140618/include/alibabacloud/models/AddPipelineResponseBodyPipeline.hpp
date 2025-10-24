// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODYPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODYPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddPipelineResponseBodyPipelineNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddPipelineResponseBodyPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(QuotaAllocate, quotaAllocate_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(SpeedLevel, speedLevel_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, AddPipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaAllocate, quotaAllocate_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(SpeedLevel, speedLevel_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    AddPipelineResponseBodyPipeline() = default ;
    AddPipelineResponseBodyPipeline(const AddPipelineResponseBodyPipeline &) = default ;
    AddPipelineResponseBodyPipeline(AddPipelineResponseBodyPipeline &&) = default ;
    AddPipelineResponseBodyPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPipelineResponseBodyPipeline() = default ;
    AddPipelineResponseBodyPipeline& operator=(const AddPipelineResponseBodyPipeline &) = default ;
    AddPipelineResponseBodyPipeline& operator=(AddPipelineResponseBodyPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->notifyConfig_ == nullptr && return this->quotaAllocate_ == nullptr && return this->role_ == nullptr && return this->speed_ == nullptr
        && return this->speedLevel_ == nullptr && return this->state_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline AddPipelineResponseBodyPipeline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddPipelineResponseBodyPipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const Models::AddPipelineResponseBodyPipelineNotifyConfig & notifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, Models::AddPipelineResponseBodyPipelineNotifyConfig) };
    inline Models::AddPipelineResponseBodyPipelineNotifyConfig notifyConfig() { DARABONBA_PTR_GET(notifyConfig_, Models::AddPipelineResponseBodyPipelineNotifyConfig) };
    inline AddPipelineResponseBodyPipeline& setNotifyConfig(const Models::AddPipelineResponseBodyPipelineNotifyConfig & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline AddPipelineResponseBodyPipeline& setNotifyConfig(Models::AddPipelineResponseBodyPipelineNotifyConfig && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // quotaAllocate Field Functions 
    bool hasQuotaAllocate() const { return this->quotaAllocate_ != nullptr;};
    void deleteQuotaAllocate() { this->quotaAllocate_ = nullptr;};
    inline int64_t quotaAllocate() const { DARABONBA_PTR_GET_DEFAULT(quotaAllocate_, 0L) };
    inline AddPipelineResponseBodyPipeline& setQuotaAllocate(int64_t quotaAllocate) { DARABONBA_PTR_SET_VALUE(quotaAllocate_, quotaAllocate) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline AddPipelineResponseBodyPipeline& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline AddPipelineResponseBodyPipeline& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // speedLevel Field Functions 
    bool hasSpeedLevel() const { return this->speedLevel_ != nullptr;};
    void deleteSpeedLevel() { this->speedLevel_ = nullptr;};
    inline int64_t speedLevel() const { DARABONBA_PTR_GET_DEFAULT(speedLevel_, 0L) };
    inline AddPipelineResponseBodyPipeline& setSpeedLevel(int64_t speedLevel) { DARABONBA_PTR_SET_VALUE(speedLevel_, speedLevel) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline AddPipelineResponseBodyPipeline& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the MPS queue.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the MPS queue.
    std::shared_ptr<string> name_ = nullptr;
    // The MNS configuration.
    std::shared_ptr<Models::AddPipelineResponseBodyPipelineNotifyConfig> notifyConfig_ = nullptr;
    // The quota that is allocated to the MPS queue.
    std::shared_ptr<int64_t> quotaAllocate_ = nullptr;
    // The role.
    std::shared_ptr<string> role_ = nullptr;
    // The type of the MPS queue.
    std::shared_ptr<string> speed_ = nullptr;
    // The level of the MPS queue.
    std::shared_ptr<int64_t> speedLevel_ = nullptr;
    // The state of the MPS queue.
    // 
    // *   Active: The MPS queue is active. The jobs in the MPS queue are scheduled and transcoded by MPS.
    // *   Paused: The MPS queue is paused. Jobs in the MPS queue are no longer scheduled for transcoding by MPS. All of the jobs in the MPS queue remain in the Submitted state. Jobs that are being transcoded are not affected.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
