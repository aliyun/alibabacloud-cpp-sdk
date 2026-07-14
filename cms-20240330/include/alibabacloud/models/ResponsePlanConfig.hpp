// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESPONSEPLANCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RESPONSEPLANCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ResponsePlanConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResponsePlanConfig& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_TO_JSON(escalationId, escalationId_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(repeatNotifySetting, repeatNotifySetting_);
    };
    friend void from_json(const Darabonba::Json& j, ResponsePlanConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_FROM_JSON(escalationId, escalationId_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(repeatNotifySetting, repeatNotifySetting_);
    };
    ResponsePlanConfig() = default ;
    ResponsePlanConfig(const ResponsePlanConfig &) = default ;
    ResponsePlanConfig(ResponsePlanConfig &&) = default ;
    ResponsePlanConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResponsePlanConfig() = default ;
    ResponsePlanConfig& operator=(const ResponsePlanConfig &) = default ;
    ResponsePlanConfig& operator=(ResponsePlanConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RepeatNotifySetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RepeatNotifySetting& obj) { 
        DARABONBA_PTR_TO_JSON(endIncidentState, endIncidentState_);
        DARABONBA_PTR_TO_JSON(repeatInterval, repeatInterval_);
      };
      friend void from_json(const Darabonba::Json& j, RepeatNotifySetting& obj) { 
        DARABONBA_PTR_FROM_JSON(endIncidentState, endIncidentState_);
        DARABONBA_PTR_FROM_JSON(repeatInterval, repeatInterval_);
      };
      RepeatNotifySetting() = default ;
      RepeatNotifySetting(const RepeatNotifySetting &) = default ;
      RepeatNotifySetting(RepeatNotifySetting &&) = default ;
      RepeatNotifySetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RepeatNotifySetting() = default ;
      RepeatNotifySetting& operator=(const RepeatNotifySetting &) = default ;
      RepeatNotifySetting& operator=(RepeatNotifySetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endIncidentState_ == nullptr
        && this->repeatInterval_ == nullptr; };
      // endIncidentState Field Functions 
      bool hasEndIncidentState() const { return this->endIncidentState_ != nullptr;};
      void deleteEndIncidentState() { this->endIncidentState_ = nullptr;};
      inline string getEndIncidentState() const { DARABONBA_PTR_GET_DEFAULT(endIncidentState_, "") };
      inline RepeatNotifySetting& setEndIncidentState(string endIncidentState) { DARABONBA_PTR_SET_VALUE(endIncidentState_, endIncidentState) };


      // repeatInterval Field Functions 
      bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
      void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
      inline int32_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
      inline RepeatNotifySetting& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    protected:
      // The target incident status at which repeat notifications stop.
      shared_ptr<string> endIncidentState_ {};
      // The repeat notification interval, in seconds.
      shared_ptr<int32_t> repeatInterval_ {};
    };

    class PushingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
      };
      friend void from_json(const Darabonba::Json& j, PushingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
      };
      PushingSetting() = default ;
      PushingSetting(const PushingSetting &) = default ;
      PushingSetting(PushingSetting &&) = default ;
      PushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushingSetting() = default ;
      PushingSetting& operator=(const PushingSetting &) = default ;
      PushingSetting& operator=(PushingSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && this->restoreActionIds_ == nullptr; };
      // alertActionIds Field Functions 
      bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
      void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
      inline const vector<string> & getAlertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
      inline vector<string> getAlertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
      inline PushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
      inline PushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


      // restoreActionIds Field Functions 
      bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
      void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
      inline const vector<string> & getRestoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
      inline vector<string> getRestoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
      inline PushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
      inline PushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


    protected:
      // The list of action integration IDs triggered by alerts.
      shared_ptr<vector<string>> alertActionIds_ {};
      // The list of action integration IDs triggered by recovery.
      shared_ptr<vector<string>> restoreActionIds_ {};
    };

    virtual bool empty() const override { return this->autoRecoverSeconds_ == nullptr
        && this->escalationId_ == nullptr && this->pushingSetting_ == nullptr && this->repeatNotifySetting_ == nullptr; };
    // autoRecoverSeconds Field Functions 
    bool hasAutoRecoverSeconds() const { return this->autoRecoverSeconds_ != nullptr;};
    void deleteAutoRecoverSeconds() { this->autoRecoverSeconds_ = nullptr;};
    inline int64_t getAutoRecoverSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverSeconds_, 0L) };
    inline ResponsePlanConfig& setAutoRecoverSeconds(int64_t autoRecoverSeconds) { DARABONBA_PTR_SET_VALUE(autoRecoverSeconds_, autoRecoverSeconds) };


    // escalationId Field Functions 
    bool hasEscalationId() const { return this->escalationId_ != nullptr;};
    void deleteEscalationId() { this->escalationId_ = nullptr;};
    inline const vector<string> & getEscalationId() const { DARABONBA_PTR_GET_CONST(escalationId_, vector<string>) };
    inline vector<string> getEscalationId() { DARABONBA_PTR_GET(escalationId_, vector<string>) };
    inline ResponsePlanConfig& setEscalationId(const vector<string> & escalationId) { DARABONBA_PTR_SET_VALUE(escalationId_, escalationId) };
    inline ResponsePlanConfig& setEscalationId(vector<string> && escalationId) { DARABONBA_PTR_SET_RVALUE(escalationId_, escalationId) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const ResponsePlanConfig::PushingSetting & getPushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, ResponsePlanConfig::PushingSetting) };
    inline ResponsePlanConfig::PushingSetting getPushingSetting() { DARABONBA_PTR_GET(pushingSetting_, ResponsePlanConfig::PushingSetting) };
    inline ResponsePlanConfig& setPushingSetting(const ResponsePlanConfig::PushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline ResponsePlanConfig& setPushingSetting(ResponsePlanConfig::PushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // repeatNotifySetting Field Functions 
    bool hasRepeatNotifySetting() const { return this->repeatNotifySetting_ != nullptr;};
    void deleteRepeatNotifySetting() { this->repeatNotifySetting_ = nullptr;};
    inline const ResponsePlanConfig::RepeatNotifySetting & getRepeatNotifySetting() const { DARABONBA_PTR_GET_CONST(repeatNotifySetting_, ResponsePlanConfig::RepeatNotifySetting) };
    inline ResponsePlanConfig::RepeatNotifySetting getRepeatNotifySetting() { DARABONBA_PTR_GET(repeatNotifySetting_, ResponsePlanConfig::RepeatNotifySetting) };
    inline ResponsePlanConfig& setRepeatNotifySetting(const ResponsePlanConfig::RepeatNotifySetting & repeatNotifySetting) { DARABONBA_PTR_SET_VALUE(repeatNotifySetting_, repeatNotifySetting) };
    inline ResponsePlanConfig& setRepeatNotifySetting(ResponsePlanConfig::RepeatNotifySetting && repeatNotifySetting) { DARABONBA_PTR_SET_RVALUE(repeatNotifySetting_, repeatNotifySetting) };


  protected:
    // The number of seconds for automatic recovery. If no new trigger occurs within this duration, the event is automatically recovered.
    shared_ptr<int64_t> autoRecoverSeconds_ {};
    // The list of escalation plan IDs.
    shared_ptr<vector<string>> escalationId_ {};
    // The action integration push settings.
    shared_ptr<ResponsePlanConfig::PushingSetting> pushingSetting_ {};
    // The repeat notification configuration.
    shared_ptr<ResponsePlanConfig::RepeatNotifySetting> repeatNotifySetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
