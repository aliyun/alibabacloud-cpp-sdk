// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartDIJobRequestRealtimeStartSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class StartDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(ForceToRerun, forceToRerun_);
      DARABONBA_PTR_TO_JSON(RealtimeStartSettings, realtimeStartSettings_);
    };
    friend void from_json(const Darabonba::Json& j, StartDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(ForceToRerun, forceToRerun_);
      DARABONBA_PTR_FROM_JSON(RealtimeStartSettings, realtimeStartSettings_);
    };
    StartDIJobRequest() = default ;
    StartDIJobRequest(const StartDIJobRequest &) = default ;
    StartDIJobRequest(StartDIJobRequest &&) = default ;
    StartDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDIJobRequest() = default ;
    StartDIJobRequest& operator=(const StartDIJobRequest &) = default ;
    StartDIJobRequest& operator=(StartDIJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->forceToRerun_ != nullptr && this->realtimeStartSettings_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline StartDIJobRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // forceToRerun Field Functions 
    bool hasForceToRerun() const { return this->forceToRerun_ != nullptr;};
    void deleteForceToRerun() { this->forceToRerun_ = nullptr;};
    inline bool forceToRerun() const { DARABONBA_PTR_GET_DEFAULT(forceToRerun_, false) };
    inline StartDIJobRequest& setForceToRerun(bool forceToRerun) { DARABONBA_PTR_SET_VALUE(forceToRerun_, forceToRerun) };


    // realtimeStartSettings Field Functions 
    bool hasRealtimeStartSettings() const { return this->realtimeStartSettings_ != nullptr;};
    void deleteRealtimeStartSettings() { this->realtimeStartSettings_ = nullptr;};
    inline const StartDIJobRequestRealtimeStartSettings & realtimeStartSettings() const { DARABONBA_PTR_GET_CONST(realtimeStartSettings_, StartDIJobRequestRealtimeStartSettings) };
    inline StartDIJobRequestRealtimeStartSettings realtimeStartSettings() { DARABONBA_PTR_GET(realtimeStartSettings_, StartDIJobRequestRealtimeStartSettings) };
    inline StartDIJobRequest& setRealtimeStartSettings(const StartDIJobRequestRealtimeStartSettings & realtimeStartSettings) { DARABONBA_PTR_SET_VALUE(realtimeStartSettings_, realtimeStartSettings) };
    inline StartDIJobRequest& setRealtimeStartSettings(StartDIJobRequestRealtimeStartSettings && realtimeStartSettings) { DARABONBA_PTR_SET_RVALUE(realtimeStartSettings_, realtimeStartSettings) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // Specifies whether to forcefully rerun all synchronization steps. If you do not configure this parameter, the system does not forcefully rerun the task.
    std::shared_ptr<bool> forceToRerun_ = nullptr;
    // The settings for the start.
    std::shared_ptr<StartDIJobRequestRealtimeStartSettings> realtimeStartSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
