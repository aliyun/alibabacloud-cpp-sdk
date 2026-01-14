// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
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
  class UpdateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_TO_JSON(autoTrigger, autoTrigger_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(forcedSetting, forcedSetting_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(notifyOperationTypes, notifyOperationTypes_);
      DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
      DARABONBA_PTR_TO_JSON(reportExportField, reportExportField_);
      DARABONBA_PTR_TO_JSON(reportExportPath, reportExportPath_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(triggerResourceType, triggerResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_FROM_JSON(autoTrigger, autoTrigger_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(forcedSetting, forcedSetting_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(notifyOperationTypes, notifyOperationTypes_);
      DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(reportExportField, reportExportField_);
      DARABONBA_PTR_FROM_JSON(reportExportPath, reportExportPath_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(triggerResourceType, triggerResourceType_);
    };
    UpdateGroupRequest() = default ;
    UpdateGroupRequest(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest(UpdateGroupRequest &&) = default ;
    UpdateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupRequest() = default ;
    UpdateGroupRequest& operator=(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest& operator=(UpdateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TriggerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TriggerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
        DARABONBA_PTR_TO_JSON(triggerValue, triggerValue_);
      };
      friend void from_json(const Darabonba::Json& j, TriggerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
        DARABONBA_PTR_FROM_JSON(triggerValue, triggerValue_);
      };
      TriggerConfig() = default ;
      TriggerConfig(const TriggerConfig &) = default ;
      TriggerConfig(TriggerConfig &&) = default ;
      TriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TriggerConfig() = default ;
      TriggerConfig& operator=(const TriggerConfig &) = default ;
      TriggerConfig& operator=(TriggerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->triggerStrategy_ == nullptr
        && this->triggerValue_ == nullptr; };
      // triggerStrategy Field Functions 
      bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
      void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
      inline string getTriggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
      inline TriggerConfig& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


      // triggerValue Field Functions 
      bool hasTriggerValue() const { return this->triggerValue_ != nullptr;};
      void deleteTriggerValue() { this->triggerValue_ = nullptr;};
      inline string getTriggerValue() const { DARABONBA_PTR_GET_DEFAULT(triggerValue_, "") };
      inline TriggerConfig& setTriggerValue(string triggerValue) { DARABONBA_PTR_SET_VALUE(triggerValue_, triggerValue) };


    protected:
      shared_ptr<string> triggerStrategy_ {};
      shared_ptr<string> triggerValue_ {};
    };

    class NotifyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotifyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(notifyPath, notifyPath_);
        DARABONBA_PTR_TO_JSON(notifyType, notifyType_);
      };
      friend void from_json(const Darabonba::Json& j, NotifyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(notifyPath, notifyPath_);
        DARABONBA_PTR_FROM_JSON(notifyType, notifyType_);
      };
      NotifyConfig() = default ;
      NotifyConfig(const NotifyConfig &) = default ;
      NotifyConfig(NotifyConfig &&) = default ;
      NotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotifyConfig() = default ;
      NotifyConfig& operator=(const NotifyConfig &) = default ;
      NotifyConfig& operator=(NotifyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->notifyPath_ == nullptr
        && this->notifyType_ == nullptr; };
      // notifyPath Field Functions 
      bool hasNotifyPath() const { return this->notifyPath_ != nullptr;};
      void deleteNotifyPath() { this->notifyPath_ = nullptr;};
      inline string getNotifyPath() const { DARABONBA_PTR_GET_DEFAULT(notifyPath_, "") };
      inline NotifyConfig& setNotifyPath(string notifyPath) { DARABONBA_PTR_SET_VALUE(notifyPath_, notifyPath) };


      // notifyType Field Functions 
      bool hasNotifyType() const { return this->notifyType_ != nullptr;};
      void deleteNotifyType() { this->notifyType_ = nullptr;};
      inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
      inline NotifyConfig& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    protected:
      shared_ptr<string> notifyPath_ {};
      shared_ptr<string> notifyType_ {};
    };

    virtual bool empty() const override { return this->autoDestroy_ == nullptr
        && this->autoTrigger_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->forcedSetting_ == nullptr && this->name_ == nullptr
        && this->notifyConfig_ == nullptr && this->notifyOperationTypes_ == nullptr && this->ramRole_ == nullptr && this->reportExportField_ == nullptr && this->reportExportPath_ == nullptr
        && this->terraformProviderVersion_ == nullptr && this->triggerConfig_ == nullptr && this->triggerResourceType_ == nullptr; };
    // autoDestroy Field Functions 
    bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
    void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
    inline bool getAutoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
    inline UpdateGroupRequest& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


    // autoTrigger Field Functions 
    bool hasAutoTrigger() const { return this->autoTrigger_ != nullptr;};
    void deleteAutoTrigger() { this->autoTrigger_ = nullptr;};
    inline bool getAutoTrigger() const { DARABONBA_PTR_GET_DEFAULT(autoTrigger_, false) };
    inline UpdateGroupRequest& setAutoTrigger(bool autoTrigger) { DARABONBA_PTR_SET_VALUE(autoTrigger_, autoTrigger) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forcedSetting Field Functions 
    bool hasForcedSetting() const { return this->forcedSetting_ != nullptr;};
    void deleteForcedSetting() { this->forcedSetting_ = nullptr;};
    inline bool getForcedSetting() const { DARABONBA_PTR_GET_DEFAULT(forcedSetting_, false) };
    inline UpdateGroupRequest& setForcedSetting(bool forcedSetting) { DARABONBA_PTR_SET_VALUE(forcedSetting_, forcedSetting) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const vector<UpdateGroupRequest::NotifyConfig> & getNotifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, vector<UpdateGroupRequest::NotifyConfig>) };
    inline vector<UpdateGroupRequest::NotifyConfig> getNotifyConfig() { DARABONBA_PTR_GET(notifyConfig_, vector<UpdateGroupRequest::NotifyConfig>) };
    inline UpdateGroupRequest& setNotifyConfig(const vector<UpdateGroupRequest::NotifyConfig> & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline UpdateGroupRequest& setNotifyConfig(vector<UpdateGroupRequest::NotifyConfig> && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // notifyOperationTypes Field Functions 
    bool hasNotifyOperationTypes() const { return this->notifyOperationTypes_ != nullptr;};
    void deleteNotifyOperationTypes() { this->notifyOperationTypes_ = nullptr;};
    inline const vector<string> & getNotifyOperationTypes() const { DARABONBA_PTR_GET_CONST(notifyOperationTypes_, vector<string>) };
    inline vector<string> getNotifyOperationTypes() { DARABONBA_PTR_GET(notifyOperationTypes_, vector<string>) };
    inline UpdateGroupRequest& setNotifyOperationTypes(const vector<string> & notifyOperationTypes) { DARABONBA_PTR_SET_VALUE(notifyOperationTypes_, notifyOperationTypes) };
    inline UpdateGroupRequest& setNotifyOperationTypes(vector<string> && notifyOperationTypes) { DARABONBA_PTR_SET_RVALUE(notifyOperationTypes_, notifyOperationTypes) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline UpdateGroupRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // reportExportField Field Functions 
    bool hasReportExportField() const { return this->reportExportField_ != nullptr;};
    void deleteReportExportField() { this->reportExportField_ = nullptr;};
    inline const vector<string> & getReportExportField() const { DARABONBA_PTR_GET_CONST(reportExportField_, vector<string>) };
    inline vector<string> getReportExportField() { DARABONBA_PTR_GET(reportExportField_, vector<string>) };
    inline UpdateGroupRequest& setReportExportField(const vector<string> & reportExportField) { DARABONBA_PTR_SET_VALUE(reportExportField_, reportExportField) };
    inline UpdateGroupRequest& setReportExportField(vector<string> && reportExportField) { DARABONBA_PTR_SET_RVALUE(reportExportField_, reportExportField) };


    // reportExportPath Field Functions 
    bool hasReportExportPath() const { return this->reportExportPath_ != nullptr;};
    void deleteReportExportPath() { this->reportExportPath_ = nullptr;};
    inline string getReportExportPath() const { DARABONBA_PTR_GET_DEFAULT(reportExportPath_, "") };
    inline UpdateGroupRequest& setReportExportPath(string reportExportPath) { DARABONBA_PTR_SET_VALUE(reportExportPath_, reportExportPath) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline UpdateGroupRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const vector<UpdateGroupRequest::TriggerConfig> & getTriggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, vector<UpdateGroupRequest::TriggerConfig>) };
    inline vector<UpdateGroupRequest::TriggerConfig> getTriggerConfig() { DARABONBA_PTR_GET(triggerConfig_, vector<UpdateGroupRequest::TriggerConfig>) };
    inline UpdateGroupRequest& setTriggerConfig(const vector<UpdateGroupRequest::TriggerConfig> & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline UpdateGroupRequest& setTriggerConfig(vector<UpdateGroupRequest::TriggerConfig> && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


    // triggerResourceType Field Functions 
    bool hasTriggerResourceType() const { return this->triggerResourceType_ != nullptr;};
    void deleteTriggerResourceType() { this->triggerResourceType_ = nullptr;};
    inline const vector<string> & getTriggerResourceType() const { DARABONBA_PTR_GET_CONST(triggerResourceType_, vector<string>) };
    inline vector<string> getTriggerResourceType() { DARABONBA_PTR_GET(triggerResourceType_, vector<string>) };
    inline UpdateGroupRequest& setTriggerResourceType(const vector<string> & triggerResourceType) { DARABONBA_PTR_SET_VALUE(triggerResourceType_, triggerResourceType) };
    inline UpdateGroupRequest& setTriggerResourceType(vector<string> && triggerResourceType) { DARABONBA_PTR_SET_RVALUE(triggerResourceType_, triggerResourceType) };


  protected:
    shared_ptr<bool> autoDestroy_ {};
    shared_ptr<bool> autoTrigger_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> forcedSetting_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<UpdateGroupRequest::NotifyConfig>> notifyConfig_ {};
    shared_ptr<vector<string>> notifyOperationTypes_ {};
    shared_ptr<string> ramRole_ {};
    shared_ptr<vector<string>> reportExportField_ {};
    shared_ptr<string> reportExportPath_ {};
    shared_ptr<string> terraformProviderVersion_ {};
    shared_ptr<vector<UpdateGroupRequest::TriggerConfig>> triggerConfig_ {};
    shared_ptr<vector<string>> triggerResourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
