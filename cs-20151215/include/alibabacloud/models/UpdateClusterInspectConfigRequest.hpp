// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERINSPECTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERINSPECTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateClusterInspectConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterInspectConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(disabledCheckItems, disabledCheckItems_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(scheduleTime, scheduleTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterInspectConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(disabledCheckItems, disabledCheckItems_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(scheduleTime, scheduleTime_);
    };
    UpdateClusterInspectConfigRequest() = default ;
    UpdateClusterInspectConfigRequest(const UpdateClusterInspectConfigRequest &) = default ;
    UpdateClusterInspectConfigRequest(UpdateClusterInspectConfigRequest &&) = default ;
    UpdateClusterInspectConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterInspectConfigRequest() = default ;
    UpdateClusterInspectConfigRequest& operator=(const UpdateClusterInspectConfigRequest &) = default ;
    UpdateClusterInspectConfigRequest& operator=(UpdateClusterInspectConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disabledCheckItems_ == nullptr
        && this->enabled_ == nullptr && this->scheduleTime_ == nullptr; };
    // disabledCheckItems Field Functions 
    bool hasDisabledCheckItems() const { return this->disabledCheckItems_ != nullptr;};
    void deleteDisabledCheckItems() { this->disabledCheckItems_ = nullptr;};
    inline const vector<string> & getDisabledCheckItems() const { DARABONBA_PTR_GET_CONST(disabledCheckItems_, vector<string>) };
    inline vector<string> getDisabledCheckItems() { DARABONBA_PTR_GET(disabledCheckItems_, vector<string>) };
    inline UpdateClusterInspectConfigRequest& setDisabledCheckItems(const vector<string> & disabledCheckItems) { DARABONBA_PTR_SET_VALUE(disabledCheckItems_, disabledCheckItems) };
    inline UpdateClusterInspectConfigRequest& setDisabledCheckItems(vector<string> && disabledCheckItems) { DARABONBA_PTR_SET_RVALUE(disabledCheckItems_, disabledCheckItems) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateClusterInspectConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline UpdateClusterInspectConfigRequest& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


  protected:
    // The list of disabled inspection check items.
    shared_ptr<vector<string>> disabledCheckItems_ {};
    // Specifies whether to enable cluster inspection.
    shared_ptr<bool> enabled_ {};
    // The inspection period defined using RFC5545 Recurrence Rule. You must specify BYHOUR and BYMINUTE. Only FREQ=DAILY is supported. COUNT or UNTIL is not supported.
    shared_ptr<string> scheduleTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
