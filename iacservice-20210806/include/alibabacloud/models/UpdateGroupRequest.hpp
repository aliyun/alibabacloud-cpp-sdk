// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGroupRequestNotifyConfig.hpp>
#include <alibabacloud/models/UpdateGroupRequestTriggerConfig.hpp>
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
    virtual bool empty() const override { return this->autoDestroy_ == nullptr
        && return this->autoTrigger_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->forcedSetting_ == nullptr && return this->name_ == nullptr
        && return this->notifyConfig_ == nullptr && return this->notifyOperationTypes_ == nullptr && return this->ramRole_ == nullptr && return this->reportExportField_ == nullptr && return this->reportExportPath_ == nullptr
        && return this->terraformProviderVersion_ == nullptr && return this->triggerConfig_ == nullptr && return this->triggerResourceType_ == nullptr; };
    // autoDestroy Field Functions 
    bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
    void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
    inline bool autoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
    inline UpdateGroupRequest& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


    // autoTrigger Field Functions 
    bool hasAutoTrigger() const { return this->autoTrigger_ != nullptr;};
    void deleteAutoTrigger() { this->autoTrigger_ = nullptr;};
    inline bool autoTrigger() const { DARABONBA_PTR_GET_DEFAULT(autoTrigger_, false) };
    inline UpdateGroupRequest& setAutoTrigger(bool autoTrigger) { DARABONBA_PTR_SET_VALUE(autoTrigger_, autoTrigger) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forcedSetting Field Functions 
    bool hasForcedSetting() const { return this->forcedSetting_ != nullptr;};
    void deleteForcedSetting() { this->forcedSetting_ = nullptr;};
    inline bool forcedSetting() const { DARABONBA_PTR_GET_DEFAULT(forcedSetting_, false) };
    inline UpdateGroupRequest& setForcedSetting(bool forcedSetting) { DARABONBA_PTR_SET_VALUE(forcedSetting_, forcedSetting) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const vector<UpdateGroupRequestNotifyConfig> & notifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, vector<UpdateGroupRequestNotifyConfig>) };
    inline vector<UpdateGroupRequestNotifyConfig> notifyConfig() { DARABONBA_PTR_GET(notifyConfig_, vector<UpdateGroupRequestNotifyConfig>) };
    inline UpdateGroupRequest& setNotifyConfig(const vector<UpdateGroupRequestNotifyConfig> & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline UpdateGroupRequest& setNotifyConfig(vector<UpdateGroupRequestNotifyConfig> && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // notifyOperationTypes Field Functions 
    bool hasNotifyOperationTypes() const { return this->notifyOperationTypes_ != nullptr;};
    void deleteNotifyOperationTypes() { this->notifyOperationTypes_ = nullptr;};
    inline const vector<string> & notifyOperationTypes() const { DARABONBA_PTR_GET_CONST(notifyOperationTypes_, vector<string>) };
    inline vector<string> notifyOperationTypes() { DARABONBA_PTR_GET(notifyOperationTypes_, vector<string>) };
    inline UpdateGroupRequest& setNotifyOperationTypes(const vector<string> & notifyOperationTypes) { DARABONBA_PTR_SET_VALUE(notifyOperationTypes_, notifyOperationTypes) };
    inline UpdateGroupRequest& setNotifyOperationTypes(vector<string> && notifyOperationTypes) { DARABONBA_PTR_SET_RVALUE(notifyOperationTypes_, notifyOperationTypes) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline UpdateGroupRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // reportExportField Field Functions 
    bool hasReportExportField() const { return this->reportExportField_ != nullptr;};
    void deleteReportExportField() { this->reportExportField_ = nullptr;};
    inline const vector<string> & reportExportField() const { DARABONBA_PTR_GET_CONST(reportExportField_, vector<string>) };
    inline vector<string> reportExportField() { DARABONBA_PTR_GET(reportExportField_, vector<string>) };
    inline UpdateGroupRequest& setReportExportField(const vector<string> & reportExportField) { DARABONBA_PTR_SET_VALUE(reportExportField_, reportExportField) };
    inline UpdateGroupRequest& setReportExportField(vector<string> && reportExportField) { DARABONBA_PTR_SET_RVALUE(reportExportField_, reportExportField) };


    // reportExportPath Field Functions 
    bool hasReportExportPath() const { return this->reportExportPath_ != nullptr;};
    void deleteReportExportPath() { this->reportExportPath_ = nullptr;};
    inline string reportExportPath() const { DARABONBA_PTR_GET_DEFAULT(reportExportPath_, "") };
    inline UpdateGroupRequest& setReportExportPath(string reportExportPath) { DARABONBA_PTR_SET_VALUE(reportExportPath_, reportExportPath) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline UpdateGroupRequest& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const vector<UpdateGroupRequestTriggerConfig> & triggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, vector<UpdateGroupRequestTriggerConfig>) };
    inline vector<UpdateGroupRequestTriggerConfig> triggerConfig() { DARABONBA_PTR_GET(triggerConfig_, vector<UpdateGroupRequestTriggerConfig>) };
    inline UpdateGroupRequest& setTriggerConfig(const vector<UpdateGroupRequestTriggerConfig> & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline UpdateGroupRequest& setTriggerConfig(vector<UpdateGroupRequestTriggerConfig> && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


    // triggerResourceType Field Functions 
    bool hasTriggerResourceType() const { return this->triggerResourceType_ != nullptr;};
    void deleteTriggerResourceType() { this->triggerResourceType_ = nullptr;};
    inline const vector<string> & triggerResourceType() const { DARABONBA_PTR_GET_CONST(triggerResourceType_, vector<string>) };
    inline vector<string> triggerResourceType() { DARABONBA_PTR_GET(triggerResourceType_, vector<string>) };
    inline UpdateGroupRequest& setTriggerResourceType(const vector<string> & triggerResourceType) { DARABONBA_PTR_SET_VALUE(triggerResourceType_, triggerResourceType) };
    inline UpdateGroupRequest& setTriggerResourceType(vector<string> && triggerResourceType) { DARABONBA_PTR_SET_RVALUE(triggerResourceType_, triggerResourceType) };


  protected:
    std::shared_ptr<bool> autoDestroy_ = nullptr;
    std::shared_ptr<bool> autoTrigger_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> forcedSetting_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<UpdateGroupRequestNotifyConfig>> notifyConfig_ = nullptr;
    std::shared_ptr<vector<string>> notifyOperationTypes_ = nullptr;
    std::shared_ptr<string> ramRole_ = nullptr;
    std::shared_ptr<vector<string>> reportExportField_ = nullptr;
    std::shared_ptr<string> reportExportPath_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<vector<UpdateGroupRequestTriggerConfig>> triggerConfig_ = nullptr;
    std::shared_ptr<vector<string>> triggerResourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
