// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODY_HPP_
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
  class GetGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGroupResponseBody() = default ;
    GetGroupResponseBody(const GetGroupResponseBody &) = default ;
    GetGroupResponseBody(GetGroupResponseBody &&) = default ;
    GetGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupResponseBody() = default ;
    GetGroupResponseBody& operator=(const GetGroupResponseBody &) = default ;
    GetGroupResponseBody& operator=(GetGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Group : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Group& obj) { 
        DARABONBA_PTR_TO_JSON(autoDestroy, autoDestroy_);
        DARABONBA_PTR_TO_JSON(autoTrigger, autoTrigger_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(forcedSetting, forcedSetting_);
        DARABONBA_PTR_TO_JSON(groupId, groupId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(notifyConfig, notifyConfig_);
        DARABONBA_PTR_TO_JSON(notifyOperationTypes, notifyOperationTypes_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
        DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
        DARABONBA_PTR_TO_JSON(reportExportField, reportExportField_);
        DARABONBA_PTR_TO_JSON(reportExportPath, reportExportPath_);
        DARABONBA_PTR_TO_JSON(taskCnt, taskCnt_);
        DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
        DARABONBA_PTR_TO_JSON(triggerResourceType, triggerResourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Group& obj) { 
        DARABONBA_PTR_FROM_JSON(autoDestroy, autoDestroy_);
        DARABONBA_PTR_FROM_JSON(autoTrigger, autoTrigger_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(forcedSetting, forcedSetting_);
        DARABONBA_PTR_FROM_JSON(groupId, groupId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(notifyConfig, notifyConfig_);
        DARABONBA_PTR_FROM_JSON(notifyOperationTypes, notifyOperationTypes_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
        DARABONBA_PTR_FROM_JSON(reportExportField, reportExportField_);
        DARABONBA_PTR_FROM_JSON(reportExportPath, reportExportPath_);
        DARABONBA_PTR_FROM_JSON(taskCnt, taskCnt_);
        DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
        DARABONBA_PTR_FROM_JSON(triggerResourceType, triggerResourceType_);
      };
      Group() = default ;
      Group(const Group &) = default ;
      Group(Group &&) = default ;
      Group(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Group() = default ;
      Group& operator=(const Group &) = default ;
      Group& operator=(Group &&) = default ;
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
        && this->autoTrigger_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->forcedSetting_ == nullptr && this->groupId_ == nullptr
        && this->name_ == nullptr && this->notifyConfig_ == nullptr && this->notifyOperationTypes_ == nullptr && this->projectId_ == nullptr && this->ramRole_ == nullptr
        && this->reportExportField_ == nullptr && this->reportExportPath_ == nullptr && this->taskCnt_ == nullptr && this->terraformProviderVersion_ == nullptr && this->triggerConfig_ == nullptr
        && this->triggerResourceType_ == nullptr; };
      // autoDestroy Field Functions 
      bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
      void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
      inline bool getAutoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
      inline Group& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


      // autoTrigger Field Functions 
      bool hasAutoTrigger() const { return this->autoTrigger_ != nullptr;};
      void deleteAutoTrigger() { this->autoTrigger_ = nullptr;};
      inline bool getAutoTrigger() const { DARABONBA_PTR_GET_DEFAULT(autoTrigger_, false) };
      inline Group& setAutoTrigger(bool autoTrigger) { DARABONBA_PTR_SET_VALUE(autoTrigger_, autoTrigger) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Group& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Group& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // forcedSetting Field Functions 
      bool hasForcedSetting() const { return this->forcedSetting_ != nullptr;};
      void deleteForcedSetting() { this->forcedSetting_ = nullptr;};
      inline bool getForcedSetting() const { DARABONBA_PTR_GET_DEFAULT(forcedSetting_, false) };
      inline Group& setForcedSetting(bool forcedSetting) { DARABONBA_PTR_SET_VALUE(forcedSetting_, forcedSetting) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Group& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Group& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifyConfig Field Functions 
      bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
      void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
      inline const vector<Group::NotifyConfig> & getNotifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, vector<Group::NotifyConfig>) };
      inline vector<Group::NotifyConfig> getNotifyConfig() { DARABONBA_PTR_GET(notifyConfig_, vector<Group::NotifyConfig>) };
      inline Group& setNotifyConfig(const vector<Group::NotifyConfig> & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
      inline Group& setNotifyConfig(vector<Group::NotifyConfig> && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


      // notifyOperationTypes Field Functions 
      bool hasNotifyOperationTypes() const { return this->notifyOperationTypes_ != nullptr;};
      void deleteNotifyOperationTypes() { this->notifyOperationTypes_ = nullptr;};
      inline const vector<string> & getNotifyOperationTypes() const { DARABONBA_PTR_GET_CONST(notifyOperationTypes_, vector<string>) };
      inline vector<string> getNotifyOperationTypes() { DARABONBA_PTR_GET(notifyOperationTypes_, vector<string>) };
      inline Group& setNotifyOperationTypes(const vector<string> & notifyOperationTypes) { DARABONBA_PTR_SET_VALUE(notifyOperationTypes_, notifyOperationTypes) };
      inline Group& setNotifyOperationTypes(vector<string> && notifyOperationTypes) { DARABONBA_PTR_SET_RVALUE(notifyOperationTypes_, notifyOperationTypes) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Group& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline Group& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // reportExportField Field Functions 
      bool hasReportExportField() const { return this->reportExportField_ != nullptr;};
      void deleteReportExportField() { this->reportExportField_ = nullptr;};
      inline const vector<string> & getReportExportField() const { DARABONBA_PTR_GET_CONST(reportExportField_, vector<string>) };
      inline vector<string> getReportExportField() { DARABONBA_PTR_GET(reportExportField_, vector<string>) };
      inline Group& setReportExportField(const vector<string> & reportExportField) { DARABONBA_PTR_SET_VALUE(reportExportField_, reportExportField) };
      inline Group& setReportExportField(vector<string> && reportExportField) { DARABONBA_PTR_SET_RVALUE(reportExportField_, reportExportField) };


      // reportExportPath Field Functions 
      bool hasReportExportPath() const { return this->reportExportPath_ != nullptr;};
      void deleteReportExportPath() { this->reportExportPath_ = nullptr;};
      inline string getReportExportPath() const { DARABONBA_PTR_GET_DEFAULT(reportExportPath_, "") };
      inline Group& setReportExportPath(string reportExportPath) { DARABONBA_PTR_SET_VALUE(reportExportPath_, reportExportPath) };


      // taskCnt Field Functions 
      bool hasTaskCnt() const { return this->taskCnt_ != nullptr;};
      void deleteTaskCnt() { this->taskCnt_ = nullptr;};
      inline int64_t getTaskCnt() const { DARABONBA_PTR_GET_DEFAULT(taskCnt_, 0L) };
      inline Group& setTaskCnt(int64_t taskCnt) { DARABONBA_PTR_SET_VALUE(taskCnt_, taskCnt) };


      // terraformProviderVersion Field Functions 
      bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
      void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
      inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
      inline Group& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


      // triggerConfig Field Functions 
      bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
      void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
      inline const vector<Group::TriggerConfig> & getTriggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, vector<Group::TriggerConfig>) };
      inline vector<Group::TriggerConfig> getTriggerConfig() { DARABONBA_PTR_GET(triggerConfig_, vector<Group::TriggerConfig>) };
      inline Group& setTriggerConfig(const vector<Group::TriggerConfig> & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
      inline Group& setTriggerConfig(vector<Group::TriggerConfig> && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


      // triggerResourceType Field Functions 
      bool hasTriggerResourceType() const { return this->triggerResourceType_ != nullptr;};
      void deleteTriggerResourceType() { this->triggerResourceType_ = nullptr;};
      inline const vector<string> & getTriggerResourceType() const { DARABONBA_PTR_GET_CONST(triggerResourceType_, vector<string>) };
      inline vector<string> getTriggerResourceType() { DARABONBA_PTR_GET(triggerResourceType_, vector<string>) };
      inline Group& setTriggerResourceType(const vector<string> & triggerResourceType) { DARABONBA_PTR_SET_VALUE(triggerResourceType_, triggerResourceType) };
      inline Group& setTriggerResourceType(vector<string> && triggerResourceType) { DARABONBA_PTR_SET_RVALUE(triggerResourceType_, triggerResourceType) };


    protected:
      shared_ptr<bool> autoDestroy_ {};
      shared_ptr<bool> autoTrigger_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> forcedSetting_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Group::NotifyConfig>> notifyConfig_ {};
      shared_ptr<vector<string>> notifyOperationTypes_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> ramRole_ {};
      shared_ptr<vector<string>> reportExportField_ {};
      shared_ptr<string> reportExportPath_ {};
      shared_ptr<int64_t> taskCnt_ {};
      shared_ptr<string> terraformProviderVersion_ {};
      shared_ptr<vector<Group::TriggerConfig>> triggerConfig_ {};
      shared_ptr<vector<string>> triggerResourceType_ {};
    };

    virtual bool empty() const override { return this->group_ == nullptr
        && this->requestId_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const GetGroupResponseBody::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, GetGroupResponseBody::Group) };
    inline GetGroupResponseBody::Group getGroup() { DARABONBA_PTR_GET(group_, GetGroupResponseBody::Group) };
    inline GetGroupResponseBody& setGroup(const GetGroupResponseBody::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline GetGroupResponseBody& setGroup(GetGroupResponseBody::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetGroupResponseBody::Group> group_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
