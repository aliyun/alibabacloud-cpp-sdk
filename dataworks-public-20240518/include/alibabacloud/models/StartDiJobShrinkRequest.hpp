// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDIJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTDIJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StartDIJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDIJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(ForceToRerun, forceToRerun_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RealtimeStartSettings, realtimeStartSettingsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartDIJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(ForceToRerun, forceToRerun_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RealtimeStartSettings, realtimeStartSettingsShrink_);
    };
    StartDIJobShrinkRequest() = default ;
    StartDIJobShrinkRequest(const StartDIJobShrinkRequest &) = default ;
    StartDIJobShrinkRequest(StartDIJobShrinkRequest &&) = default ;
    StartDIJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDIJobShrinkRequest() = default ;
    StartDIJobShrinkRequest& operator=(const StartDIJobShrinkRequest &) = default ;
    StartDIJobShrinkRequest& operator=(StartDIJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && return this->forceToRerun_ == nullptr && return this->id_ == nullptr && return this->realtimeStartSettingsShrink_ == nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline StartDIJobShrinkRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // forceToRerun Field Functions 
    bool hasForceToRerun() const { return this->forceToRerun_ != nullptr;};
    void deleteForceToRerun() { this->forceToRerun_ = nullptr;};
    inline bool forceToRerun() const { DARABONBA_PTR_GET_DEFAULT(forceToRerun_, false) };
    inline StartDIJobShrinkRequest& setForceToRerun(bool forceToRerun) { DARABONBA_PTR_SET_VALUE(forceToRerun_, forceToRerun) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline StartDIJobShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // realtimeStartSettingsShrink Field Functions 
    bool hasRealtimeStartSettingsShrink() const { return this->realtimeStartSettingsShrink_ != nullptr;};
    void deleteRealtimeStartSettingsShrink() { this->realtimeStartSettingsShrink_ = nullptr;};
    inline string realtimeStartSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(realtimeStartSettingsShrink_, "") };
    inline StartDIJobShrinkRequest& setRealtimeStartSettingsShrink(string realtimeStartSettingsShrink) { DARABONBA_PTR_SET_VALUE(realtimeStartSettingsShrink_, realtimeStartSettingsShrink) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // Specifies whether to forcefully rerun all synchronization steps. If you do not configure this parameter, the system does not perform the forcible rerun operation.
    // 
    // *   If the system does not perform the forcible rerun operation, only the steps that are not run start to run.
    // *   If the system performs the forcible rerun operation, all steps start to rerun.
    std::shared_ptr<bool> forceToRerun_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The settings for starting real-time synchronization.
    // 
    //     {
    //       "StartTime":1663765058
    //     }
    std::shared_ptr<string> realtimeStartSettingsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
