// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKATTRIBUTEREQUEST_HPP_
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
  class UpdateTaskAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoApply, autoApply_);
      DARABONBA_PTR_TO_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(initModuleState, initModuleState_);
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protectionStrategy, protectionStrategy_);
      DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
      DARABONBA_PTR_TO_JSON(skipPropertyValidation, skipPropertyValidation_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(terraformVersion, terraformVersion_);
      DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoApply, autoApply_);
      DARABONBA_PTR_FROM_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(initModuleState, initModuleState_);
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protectionStrategy, protectionStrategy_);
      DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(skipPropertyValidation, skipPropertyValidation_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(terraformVersion, terraformVersion_);
      DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
    };
    UpdateTaskAttributeRequest() = default ;
    UpdateTaskAttributeRequest(const UpdateTaskAttributeRequest &) = default ;
    UpdateTaskAttributeRequest(UpdateTaskAttributeRequest &&) = default ;
    UpdateTaskAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskAttributeRequest() = default ;
    UpdateTaskAttributeRequest& operator=(const UpdateTaskAttributeRequest &) = default ;
    UpdateTaskAttributeRequest& operator=(UpdateTaskAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->moduleVersion_ == nullptr && this->name_ == nullptr && this->protectionStrategy_ == nullptr && this->ramRole_ == nullptr && this->skipPropertyValidation_ == nullptr
        && this->tags_ == nullptr && this->terraformVersion_ == nullptr && this->triggerStrategy_ == nullptr; };
    // autoApply Field Functions 
    bool hasAutoApply() const { return this->autoApply_ != nullptr;};
    void deleteAutoApply() { this->autoApply_ = nullptr;};
    inline bool getAutoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
    inline UpdateTaskAttributeRequest& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


    // autoDestroy Field Functions 
    bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
    void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
    inline bool getAutoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
    inline UpdateTaskAttributeRequest& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTaskAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTaskAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const UpdateTaskAttributeRequest::GroupInfo & getGroupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, UpdateTaskAttributeRequest::GroupInfo) };
    inline UpdateTaskAttributeRequest::GroupInfo getGroupInfo() { DARABONBA_PTR_GET(groupInfo_, UpdateTaskAttributeRequest::GroupInfo) };
    inline UpdateTaskAttributeRequest& setGroupInfo(const UpdateTaskAttributeRequest::GroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline UpdateTaskAttributeRequest& setGroupInfo(UpdateTaskAttributeRequest::GroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // initModuleState Field Functions 
    bool hasInitModuleState() const { return this->initModuleState_ != nullptr;};
    void deleteInitModuleState() { this->initModuleState_ = nullptr;};
    inline bool getInitModuleState() const { DARABONBA_PTR_GET_DEFAULT(initModuleState_, false) };
    inline UpdateTaskAttributeRequest& setInitModuleState(bool initModuleState) { DARABONBA_PTR_SET_VALUE(initModuleState_, initModuleState) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string getModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline UpdateTaskAttributeRequest& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTaskAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protectionStrategy Field Functions 
    bool hasProtectionStrategy() const { return this->protectionStrategy_ != nullptr;};
    void deleteProtectionStrategy() { this->protectionStrategy_ = nullptr;};
    inline const vector<string> & getProtectionStrategy() const { DARABONBA_PTR_GET_CONST(protectionStrategy_, vector<string>) };
    inline vector<string> getProtectionStrategy() { DARABONBA_PTR_GET(protectionStrategy_, vector<string>) };
    inline UpdateTaskAttributeRequest& setProtectionStrategy(const vector<string> & protectionStrategy) { DARABONBA_PTR_SET_VALUE(protectionStrategy_, protectionStrategy) };
    inline UpdateTaskAttributeRequest& setProtectionStrategy(vector<string> && protectionStrategy) { DARABONBA_PTR_SET_RVALUE(protectionStrategy_, protectionStrategy) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline UpdateTaskAttributeRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // skipPropertyValidation Field Functions 
    bool hasSkipPropertyValidation() const { return this->skipPropertyValidation_ != nullptr;};
    void deleteSkipPropertyValidation() { this->skipPropertyValidation_ = nullptr;};
    inline bool getSkipPropertyValidation() const { DARABONBA_PTR_GET_DEFAULT(skipPropertyValidation_, false) };
    inline UpdateTaskAttributeRequest& setSkipPropertyValidation(bool skipPropertyValidation) { DARABONBA_PTR_SET_VALUE(skipPropertyValidation_, skipPropertyValidation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateTaskAttributeRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateTaskAttributeRequest::Tags>) };
    inline vector<UpdateTaskAttributeRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateTaskAttributeRequest::Tags>) };
    inline UpdateTaskAttributeRequest& setTags(const vector<UpdateTaskAttributeRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateTaskAttributeRequest& setTags(vector<UpdateTaskAttributeRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string getTerraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline UpdateTaskAttributeRequest& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string getTriggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline UpdateTaskAttributeRequest& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


  protected:
    shared_ptr<bool> autoApply_ {};
    shared_ptr<bool> autoDestroy_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<UpdateTaskAttributeRequest::GroupInfo> groupInfo_ {};
    shared_ptr<bool> initModuleState_ {};
    shared_ptr<string> moduleVersion_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> protectionStrategy_ {};
    shared_ptr<string> ramRole_ {};
    shared_ptr<bool> skipPropertyValidation_ {};
    shared_ptr<vector<UpdateTaskAttributeRequest::Tags>> tags_ {};
    shared_ptr<string> terraformVersion_ {};
    shared_ptr<string> triggerStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
