// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHMESSAGECENTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHMESSAGECENTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunNotifyComponentWithMessageCenterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNotifyComponentWithMessageCenterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(ChannelTypeList, channelTypeList_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, RunNotifyComponentWithMessageCenterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(ChannelTypeList, channelTypeList_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    RunNotifyComponentWithMessageCenterRequest() = default ;
    RunNotifyComponentWithMessageCenterRequest(const RunNotifyComponentWithMessageCenterRequest &) = default ;
    RunNotifyComponentWithMessageCenterRequest(RunNotifyComponentWithMessageCenterRequest &&) = default ;
    RunNotifyComponentWithMessageCenterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNotifyComponentWithMessageCenterRequest() = default ;
    RunNotifyComponentWithMessageCenterRequest& operator=(const RunNotifyComponentWithMessageCenterRequest &) = default ;
    RunNotifyComponentWithMessageCenterRequest& operator=(RunNotifyComponentWithMessageCenterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && return this->aliuid_ == nullptr && return this->assetId_ == nullptr && return this->channelTypeList_ == nullptr && return this->componentName_ == nullptr && return this->eventId_ == nullptr
        && return this->lang_ == nullptr && return this->nodeName_ == nullptr && return this->params_ == nullptr && return this->playbookUuid_ == nullptr && return this->roleFor_ == nullptr
        && return this->roleType_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline string aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // channelTypeList Field Functions 
    bool hasChannelTypeList() const { return this->channelTypeList_ != nullptr;};
    void deleteChannelTypeList() { this->channelTypeList_ = nullptr;};
    inline const vector<string> & channelTypeList() const { DARABONBA_PTR_GET_CONST(channelTypeList_, vector<string>) };
    inline vector<string> channelTypeList() { DARABONBA_PTR_GET(channelTypeList_, vector<string>) };
    inline RunNotifyComponentWithMessageCenterRequest& setChannelTypeList(const vector<string> & channelTypeList) { DARABONBA_PTR_SET_VALUE(channelTypeList_, channelTypeList) };
    inline RunNotifyComponentWithMessageCenterRequest& setChannelTypeList(vector<string> && channelTypeList) { DARABONBA_PTR_SET_RVALUE(channelTypeList_, channelTypeList) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline RunNotifyComponentWithMessageCenterRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline RunNotifyComponentWithMessageCenterRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The action name of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> actionName_ = nullptr;
    // The user ID receiving the message.
    // 
    // This parameter is required.
    std::shared_ptr<string> aliuid_ = nullptr;
    // Resource instance ID. This parameter is currently deprecated and no longer in use.
    std::shared_ptr<string> assetId_ = nullptr;
    // Collection of channel types. If not provided, all channels will be used by default, and it is not required to provide this parameter by default.
    std::shared_ptr<vector<string>> channelTypeList_ = nullptr;
    // The component name of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentName_ = nullptr;
    // Cloud Pigeon\\"s message event ID. Values:
    // - yundun_soar_incident_generate: Incident generation.
    // - yundun_soar_alert_generate: Alert generation.
    // - yundun_soar_incident_update: Incident update.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    // The language type for requesting and receiving messages. Values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The node name of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeName_ = nullptr;
    // Template parameters for the message event.
    // - For incident generation: aliyunUID, incidentName, incidentID, startTime
    // - For alert generation: aliyunUID, alertName, alertID, startTime
    // - For incident update: aliyunUID, incidentName, incidentID, startTime, endTime, status, level
    std::shared_ptr<string> params_ = nullptr;
    // The UUID of the playbook.
    // > You can obtain this parameter by calling the [DescribePlaybooks](~~DescribePlaybooks~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The user ID when an administrator switches to another member\\"s perspective.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // View type. Values:
    // - 0 (default): Current Alibaba Cloud account view.
    // - 1: View for all accounts under the enterprise.
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
