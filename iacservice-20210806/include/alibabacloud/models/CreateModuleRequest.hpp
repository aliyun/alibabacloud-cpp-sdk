// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODULEREQUEST_HPP_
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
  class CreateModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(statePath, statePath_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(versionStrategy, versionStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(statePath, statePath_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(versionStrategy, versionStrategy_);
    };
    CreateModuleRequest() = default ;
    CreateModuleRequest(const CreateModuleRequest &) = default ;
    CreateModuleRequest(CreateModuleRequest &&) = default ;
    CreateModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModuleRequest() = default ;
    CreateModuleRequest& operator=(const CreateModuleRequest &) = default ;
    CreateModuleRequest& operator=(CreateModuleRequest &&) = default ;
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
      // The tag key of the template.
      shared_ptr<string> tagKey_ {};
      // The tag value of the template.
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
      // The group ID.
      shared_ptr<string> groupId_ {};
      // The project ID.
      shared_ptr<string> projectId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->groupInfo_ == nullptr && this->name_ == nullptr && this->source_ == nullptr && this->sourcePath_ == nullptr
        && this->statePath_ == nullptr && this->tags_ == nullptr && this->versionStrategy_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateModuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const CreateModuleRequest::GroupInfo & getGroupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, CreateModuleRequest::GroupInfo) };
    inline CreateModuleRequest::GroupInfo getGroupInfo() { DARABONBA_PTR_GET(groupInfo_, CreateModuleRequest::GroupInfo) };
    inline CreateModuleRequest& setGroupInfo(const CreateModuleRequest::GroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline CreateModuleRequest& setGroupInfo(CreateModuleRequest::GroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateModuleRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline CreateModuleRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string getStatePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline CreateModuleRequest& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateModuleRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateModuleRequest::Tags>) };
    inline vector<CreateModuleRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateModuleRequest::Tags>) };
    inline CreateModuleRequest& setTags(const vector<CreateModuleRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateModuleRequest& setTags(vector<CreateModuleRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // versionStrategy Field Functions 
    bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
    void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
    inline string getVersionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
    inline CreateModuleRequest& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


  protected:
    // The idempotency parameter. We recommend that you use a UUID.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The description of the template. The description can be up to 256 characters in length.
    shared_ptr<string> description_ {};
    // The project group information to which the template belongs.
    shared_ptr<CreateModuleRequest::GroupInfo> groupInfo_ {};
    // The name of the template. The name must meet the following requirements:
    // - The name must be 2 to 128 characters in length.
    // - The name can contain letters, digits, Chinese characters, hyphens (-), underscores (_), and periods (.). The name cannot start or end with a hyphen, underscore, or period.
    // - The name must be unique among all templates under the current account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The source from which the template is created. Valid values:
    // - OSS: imports from a ZIP file stored in OSS.
    // - Registry: creates from a module in the template registry.
    // - ExportTask: references a template exported by a resource export task.
    // - Editor: creates a blank template that supports online editing.
    // - Upload: uploads a local template file to generate the template.
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The path of the template source. This parameter takes effect when source is set to Registry, OSS, or ExportTask.
    // - If source is set to Registry, the value is in the format of \\<workspace name>/\\<module name>:\\<module version>. Example: terraform-alicloud-modules/rds:1.0.0.
    // - If source is set to OSS, the value is in the format of oss::<file URL>. The file must be a ZIP file. Example: oss::https://terraform-pipeline.oss-eu-central-1.aliyuncs.com/code.zip.
    // - If source is set to ExportTask, the value is in the format of \\<export task ID>:\\<exported version>. Example: ex-3b6cb9fa4751afff298da723c24ac:v1.
    // - If source is set to Editor or Upload, leave this parameter empty.
    shared_ptr<string> sourcePath_ {};
    // The path of the State file that corresponds to the template. This parameter is valid only when source is set to OSS.
    // The value is in the format of oss::\\<OSS file path>/terraform.tfstate.
    shared_ptr<string> statePath_ {};
    // The list of tags for the template.
    shared_ptr<vector<CreateModuleRequest::Tags>> tags_ {};
    // The version generation strategy. Valid values:
    // 
    // - Manual: manually generates a version. This is the default value.
    // - SourcePathUpdated: generates a new version when sourcePath is modified.
    shared_ptr<string> versionStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
