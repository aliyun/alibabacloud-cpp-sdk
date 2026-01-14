// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
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
  class CreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoApply, autoApply_);
      DARABONBA_PTR_TO_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(initModuleState, initModuleState_);
      DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protectionStrategy, protectionStrategy_);
      DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
      DARABONBA_PTR_TO_JSON(skipPropertyValidation, skipPropertyValidation_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskBackend, taskBackend_);
      DARABONBA_PTR_TO_JSON(terraformVersion, terraformVersion_);
      DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoApply, autoApply_);
      DARABONBA_PTR_FROM_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(initModuleState, initModuleState_);
      DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protectionStrategy, protectionStrategy_);
      DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(skipPropertyValidation, skipPropertyValidation_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskBackend, taskBackend_);
      DARABONBA_PTR_FROM_JSON(terraformVersion, terraformVersion_);
      DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
    };
    CreateTaskRequest() = default ;
    CreateTaskRequest(const CreateTaskRequest &) = default ;
    CreateTaskRequest(CreateTaskRequest &&) = default ;
    CreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequest() = default ;
    CreateTaskRequest& operator=(const CreateTaskRequest &) = default ;
    CreateTaskRequest& operator=(CreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskBackend : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskBackend& obj) { 
        DARABONBA_PTR_TO_JSON(bucketEndpoint, bucketEndpoint_);
        DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(objectPath, objectPath_);
      };
      friend void from_json(const Darabonba::Json& j, TaskBackend& obj) { 
        DARABONBA_PTR_FROM_JSON(bucketEndpoint, bucketEndpoint_);
        DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(objectPath, objectPath_);
      };
      TaskBackend() = default ;
      TaskBackend(const TaskBackend &) = default ;
      TaskBackend(TaskBackend &&) = default ;
      TaskBackend(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskBackend() = default ;
      TaskBackend& operator=(const TaskBackend &) = default ;
      TaskBackend& operator=(TaskBackend &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketEndpoint_ == nullptr
        && this->bucketName_ == nullptr && this->objectPath_ == nullptr; };
      // bucketEndpoint Field Functions 
      bool hasBucketEndpoint() const { return this->bucketEndpoint_ != nullptr;};
      void deleteBucketEndpoint() { this->bucketEndpoint_ = nullptr;};
      inline string getBucketEndpoint() const { DARABONBA_PTR_GET_DEFAULT(bucketEndpoint_, "") };
      inline TaskBackend& setBucketEndpoint(string bucketEndpoint) { DARABONBA_PTR_SET_VALUE(bucketEndpoint_, bucketEndpoint) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline TaskBackend& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // objectPath Field Functions 
      bool hasObjectPath() const { return this->objectPath_ != nullptr;};
      void deleteObjectPath() { this->objectPath_ = nullptr;};
      inline string getObjectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
      inline TaskBackend& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    protected:
      shared_ptr<string> bucketEndpoint_ {};
      shared_ptr<string> bucketName_ {};
      shared_ptr<string> objectPath_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    class GroupInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupInfo& obj) { 
        DARABONBA_PTR_TO_JSON(groupId, groupId_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, GroupInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(groupId, groupId_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      };
      GroupInfo() = default ;
      GroupInfo(const GroupInfo &) = default ;
      GroupInfo(GroupInfo &&) = default ;
      GroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupInfo() = default ;
      GroupInfo& operator=(const GroupInfo &) = default ;
      GroupInfo& operator=(GroupInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->projectId_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline GroupInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline GroupInfo& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      shared_ptr<string> groupId_ {};
      shared_ptr<string> projectId_ {};
    };

    virtual bool empty() const override { return this->autoApply_ == nullptr
        && this->autoDestroy_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->groupInfo_ == nullptr && this->initModuleState_ == nullptr
        && this->moduleId_ == nullptr && this->moduleVersion_ == nullptr && this->name_ == nullptr && this->protectionStrategy_ == nullptr && this->ramRole_ == nullptr
        && this->skipPropertyValidation_ == nullptr && this->tags_ == nullptr && this->taskBackend_ == nullptr && this->terraformVersion_ == nullptr && this->triggerStrategy_ == nullptr; };
    // autoApply Field Functions 
    bool hasAutoApply() const { return this->autoApply_ != nullptr;};
    void deleteAutoApply() { this->autoApply_ = nullptr;};
    inline bool getAutoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
    inline CreateTaskRequest& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


    // autoDestroy Field Functions 
    bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
    void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
    inline bool getAutoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
    inline CreateTaskRequest& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const CreateTaskRequest::GroupInfo & getGroupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, CreateTaskRequest::GroupInfo) };
    inline CreateTaskRequest::GroupInfo getGroupInfo() { DARABONBA_PTR_GET(groupInfo_, CreateTaskRequest::GroupInfo) };
    inline CreateTaskRequest& setGroupInfo(const CreateTaskRequest::GroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline CreateTaskRequest& setGroupInfo(CreateTaskRequest::GroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // initModuleState Field Functions 
    bool hasInitModuleState() const { return this->initModuleState_ != nullptr;};
    void deleteInitModuleState() { this->initModuleState_ = nullptr;};
    inline bool getInitModuleState() const { DARABONBA_PTR_GET_DEFAULT(initModuleState_, false) };
    inline CreateTaskRequest& setInitModuleState(bool initModuleState) { DARABONBA_PTR_SET_VALUE(initModuleState_, initModuleState) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline CreateTaskRequest& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string getModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline CreateTaskRequest& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protectionStrategy Field Functions 
    bool hasProtectionStrategy() const { return this->protectionStrategy_ != nullptr;};
    void deleteProtectionStrategy() { this->protectionStrategy_ = nullptr;};
    inline const vector<string> & getProtectionStrategy() const { DARABONBA_PTR_GET_CONST(protectionStrategy_, vector<string>) };
    inline vector<string> getProtectionStrategy() { DARABONBA_PTR_GET(protectionStrategy_, vector<string>) };
    inline CreateTaskRequest& setProtectionStrategy(const vector<string> & protectionStrategy) { DARABONBA_PTR_SET_VALUE(protectionStrategy_, protectionStrategy) };
    inline CreateTaskRequest& setProtectionStrategy(vector<string> && protectionStrategy) { DARABONBA_PTR_SET_RVALUE(protectionStrategy_, protectionStrategy) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline CreateTaskRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // skipPropertyValidation Field Functions 
    bool hasSkipPropertyValidation() const { return this->skipPropertyValidation_ != nullptr;};
    void deleteSkipPropertyValidation() { this->skipPropertyValidation_ = nullptr;};
    inline bool getSkipPropertyValidation() const { DARABONBA_PTR_GET_DEFAULT(skipPropertyValidation_, false) };
    inline CreateTaskRequest& setSkipPropertyValidation(bool skipPropertyValidation) { DARABONBA_PTR_SET_VALUE(skipPropertyValidation_, skipPropertyValidation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateTaskRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateTaskRequest::Tags>) };
    inline vector<CreateTaskRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateTaskRequest::Tags>) };
    inline CreateTaskRequest& setTags(const vector<CreateTaskRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTaskRequest& setTags(vector<CreateTaskRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskBackend Field Functions 
    bool hasTaskBackend() const { return this->taskBackend_ != nullptr;};
    void deleteTaskBackend() { this->taskBackend_ = nullptr;};
    inline const CreateTaskRequest::TaskBackend & getTaskBackend() const { DARABONBA_PTR_GET_CONST(taskBackend_, CreateTaskRequest::TaskBackend) };
    inline CreateTaskRequest::TaskBackend getTaskBackend() { DARABONBA_PTR_GET(taskBackend_, CreateTaskRequest::TaskBackend) };
    inline CreateTaskRequest& setTaskBackend(const CreateTaskRequest::TaskBackend & taskBackend) { DARABONBA_PTR_SET_VALUE(taskBackend_, taskBackend) };
    inline CreateTaskRequest& setTaskBackend(CreateTaskRequest::TaskBackend && taskBackend) { DARABONBA_PTR_SET_RVALUE(taskBackend_, taskBackend) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string getTerraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline CreateTaskRequest& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string getTriggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline CreateTaskRequest& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


  protected:
    shared_ptr<bool> autoApply_ {};
    shared_ptr<bool> autoDestroy_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<CreateTaskRequest::GroupInfo> groupInfo_ {};
    shared_ptr<bool> initModuleState_ {};
    // This parameter is required.
    shared_ptr<string> moduleId_ {};
    // This parameter is required.
    shared_ptr<string> moduleVersion_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> protectionStrategy_ {};
    shared_ptr<string> ramRole_ {};
    shared_ptr<bool> skipPropertyValidation_ {};
    shared_ptr<vector<CreateTaskRequest::Tags>> tags_ {};
    shared_ptr<CreateTaskRequest::TaskBackend> taskBackend_ {};
    shared_ptr<string> terraformVersion_ {};
    shared_ptr<string> triggerStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
