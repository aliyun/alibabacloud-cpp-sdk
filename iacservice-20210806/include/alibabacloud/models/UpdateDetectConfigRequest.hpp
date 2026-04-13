// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDETECTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDETECTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateDetectConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDetectConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alarmConfigs, alarmConfigs_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detectConfigName, detectConfigName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDetectConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alarmConfigs, alarmConfigs_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detectConfigName, detectConfigName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    UpdateDetectConfigRequest() = default ;
    UpdateDetectConfigRequest(const UpdateDetectConfigRequest &) = default ;
    UpdateDetectConfigRequest(UpdateDetectConfigRequest &&) = default ;
    UpdateDetectConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDetectConfigRequest() = default ;
    UpdateDetectConfigRequest& operator=(const UpdateDetectConfigRequest &) = default ;
    UpdateDetectConfigRequest& operator=(UpdateDetectConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlarmConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(address, address_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(address, address_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      AlarmConfigs() = default ;
      AlarmConfigs(const AlarmConfigs &) = default ;
      AlarmConfigs(AlarmConfigs &&) = default ;
      AlarmConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmConfigs() = default ;
      AlarmConfigs& operator=(const AlarmConfigs &) = default ;
      AlarmConfigs& operator=(AlarmConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->type_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline AlarmConfigs& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AlarmConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> address_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->alarmConfigs_ == nullptr
        && this->clientToken_ == nullptr && this->cronExpression_ == nullptr && this->description_ == nullptr && this->detectConfigName_ == nullptr && this->enabled_ == nullptr
        && this->triggerType_ == nullptr; };
    // alarmConfigs Field Functions 
    bool hasAlarmConfigs() const { return this->alarmConfigs_ != nullptr;};
    void deleteAlarmConfigs() { this->alarmConfigs_ = nullptr;};
    inline const vector<UpdateDetectConfigRequest::AlarmConfigs> & getAlarmConfigs() const { DARABONBA_PTR_GET_CONST(alarmConfigs_, vector<UpdateDetectConfigRequest::AlarmConfigs>) };
    inline vector<UpdateDetectConfigRequest::AlarmConfigs> getAlarmConfigs() { DARABONBA_PTR_GET(alarmConfigs_, vector<UpdateDetectConfigRequest::AlarmConfigs>) };
    inline UpdateDetectConfigRequest& setAlarmConfigs(const vector<UpdateDetectConfigRequest::AlarmConfigs> & alarmConfigs) { DARABONBA_PTR_SET_VALUE(alarmConfigs_, alarmConfigs) };
    inline UpdateDetectConfigRequest& setAlarmConfigs(vector<UpdateDetectConfigRequest::AlarmConfigs> && alarmConfigs) { DARABONBA_PTR_SET_RVALUE(alarmConfigs_, alarmConfigs) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateDetectConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline UpdateDetectConfigRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDetectConfigRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detectConfigName Field Functions 
    bool hasDetectConfigName() const { return this->detectConfigName_ != nullptr;};
    void deleteDetectConfigName() { this->detectConfigName_ = nullptr;};
    inline string getDetectConfigName() const { DARABONBA_PTR_GET_DEFAULT(detectConfigName_, "") };
    inline UpdateDetectConfigRequest& setDetectConfigName(string detectConfigName) { DARABONBA_PTR_SET_VALUE(detectConfigName_, detectConfigName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateDetectConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline UpdateDetectConfigRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    shared_ptr<vector<UpdateDetectConfigRequest::AlarmConfigs>> alarmConfigs_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> cronExpression_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> detectConfigName_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
